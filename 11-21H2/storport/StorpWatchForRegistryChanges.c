/*
 * XREFs of StorpWatchForRegistryChanges @ 0x1C0040250
 * Callers:
 *     DllInitialize @ 0x1C0056DE0 (DllInitialize.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C000F8A0 (RaidAllocatePool.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024050 (_guard_dispatch_icall_nop.c)
 */

void __fastcall StorpWatchForRegistryChanges(char *P)
{
  char v1; // si
  char *v2; // rbx
  const UNICODE_STRING *v4; // rsi
  __int64 Pool; // rax
  unsigned int Length; // ecx
  __int64 v7; // rax
  __int64 v8; // rax
  void *v9; // rcx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+58h] [rbp+17h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp+27h] BYREF
  void *KeyHandle; // [rsp+A8h] [rbp+67h] BYREF

  KeyHandle = 0LL;
  v1 = 0;
  v2 = 0LL;
  IoStatusBlock = 0LL;
  memset(&ObjectAttributes, 0, 44);
  if ( P[32] && !P[33] )
    goto LABEL_8;
  ObjectAttributes.RootDirectory = 0LL;
  v4 = (const UNICODE_STRING *)(P + 40);
  ObjectAttributes.ObjectName = (PUNICODE_STRING)(P + 40);
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x10u, &ObjectAttributes) < 0 )
    goto LABEL_16;
  Pool = RaidAllocatePool(64LL, 72LL, 1465016658LL, 0LL);
  v2 = (char *)Pool;
  if ( !Pool )
    goto LABEL_16;
  Length = v4->Length;
  *(_WORD *)(Pool + 42) = Length;
  v7 = RaidAllocatePool(256LL, Length, 1396990290LL, 0LL);
  *((_QWORD *)v2 + 6) = v7;
  if ( !v7 )
    goto LABEL_13;
  RtlCopyUnicodeString((PUNICODE_STRING)(v2 + 40), v4);
  v1 = 1;
  v2[32] = 1;
  v2[33] = P[33];
  v2[34] = 1;
  *((_QWORD *)v2 + 7) = KeyHandle;
  v8 = *((_QWORD *)P + 8);
  *(_QWORD *)v2 = 0LL;
  *((_QWORD *)v2 + 8) = v8;
  *((_QWORD *)v2 + 2) = StorpWatchForRegistryChanges;
  *((_QWORD *)v2 + 3) = v2;
  if ( ZwNotifyChangeKey(KeyHandle, 0LL, (PIO_APC_ROUTINE)v2, (PVOID)1, &IoStatusBlock, 5u, 1u, 0LL, 0, 1u) < 0 )
  {
LABEL_13:
    v9 = (void *)*((_QWORD *)v2 + 6);
    if ( v9 )
      ExFreePoolWithTag(v9, 0x53446152u);
    ExFreePoolWithTag(v2, 0x57526152u);
    goto LABEL_16;
  }
  if ( P[32] )
  {
LABEL_8:
    (*((void (__fastcall **)(char *))P + 8))(P);
    ZwClose(*((HANDLE *)P + 7));
    if ( P[34] )
      ExFreePoolWithTag(*((PVOID *)P + 6), 0x53446152u);
    ExFreePoolWithTag(P, 0x57526152u);
  }
  if ( v1 )
    return;
  if ( v2 )
    goto LABEL_13;
LABEL_16:
  if ( KeyHandle )
    ZwClose(KeyHandle);
}
