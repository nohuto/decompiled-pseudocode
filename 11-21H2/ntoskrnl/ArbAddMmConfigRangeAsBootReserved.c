/*
 * XREFs of ArbAddMmConfigRangeAsBootReserved @ 0x1408391E8
 * Callers:
 *     sub_140838FBC @ 0x140838FBC (sub_140838FBC.c)
 * Callees:
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenKey @ 0x14041B9A0 (ZwOpenKey.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     RtlAddRange @ 0x14083A010 (RtlAddRange.c)
 *     sub_14083B060 @ 0x14083B060 (sub_14083B060.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

NTSTATUS __fastcall ArbAddMmConfigRangeAsBootReserved(__int64 a1, int a2)
{
  unsigned int *v2; // rsi
  int v3; // edi
  NTSTATUS result; // eax
  NTSTATUS v7; // ebx
  int v8; // eax
  int v9; // eax
  __int64 v10; // r14
  void *Pool2; // rax
  unsigned int *i; // r14
  int v13; // eax
  int v14; // ecx
  HANDLE Handle; // [rsp+40h] [rbp-29h] BYREF
  __int128 v16; // [rsp+48h] [rbp-21h] BYREF
  __int128 v17; // [rsp+58h] [rbp-11h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-1h] BYREF
  HANDLE KeyHandle; // [rsp+E8h] [rbp+7Fh] BYREF

  v2 = (unsigned int *)qword_140C54C50;
  KeyHandle = 0LL;
  Handle = 0LL;
  v3 = 0;
  memset(&ObjectAttributes, 0, 44);
  v16 = 0LL;
  v17 = 0LL;
  if ( qword_140C54C50 )
  {
LABEL_9:
    for ( i = v2 + 2; i < &v2[8 * v2[1] + 2]; i += 8 )
    {
      v13 = *((unsigned __int8 *)i + 1);
      v14 = *(_DWORD *)(a1 + 32);
      if ( v13 == v14 || (_BYTE)v13 == 7 && v14 == 3 )
      {
        v3 = RtlAddRange(a2, *((_QWORD *)i + 2), *((_QWORD *)i + 3), 1, 1, 0LL, 0LL);
        if ( v3 < 0 )
          break;
      }
    }
    goto $cleanup$30;
  }
  ObjectAttributes.RootDirectory = 0LL;
  *((_QWORD *)&v16 + 1) = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Arbiters";
  LODWORD(v16) = 7733366;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v16;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( result < 0 )
    return result;
  LODWORD(v17) = 2228258;
  *((_QWORD *)&v17 + 1) = L"ReservedResources";
  ObjectAttributes.RootDirectory = KeyHandle;
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v17;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v7 = ZwOpenKey(&Handle, 0x2001Fu, &ObjectAttributes);
  if ( v7 < 0 )
  {
    ZwClose(KeyHandle);
    return v7;
  }
  v8 = sub_14083B060(Handle);
  v3 = v8;
  if ( v8 < 0 )
  {
    if ( v8 != -1073741670 )
      v3 = 0;
    goto $cleanup$30;
  }
  if ( MEMORY[4] == 10 )
  {
    v2 = (unsigned int *)(MEMORY[8] + 32LL);
    v9 = *(_DWORD *)(MEMORY[8] + 0x24LL);
    if ( v9 )
    {
      v10 = (unsigned int)(32 * v9 + 8);
      Pool2 = (void *)ExAllocatePool2(64LL, v10, 1315074625LL);
      qword_140C54C50 = (__int64)Pool2;
      if ( Pool2 )
        memmove(Pool2, v2, (unsigned int)v10);
    }
    goto LABEL_9;
  }
  v3 = -1073741811;
$cleanup$30:
  ZwClose(Handle);
  ZwClose(KeyHandle);
  return v3;
}
