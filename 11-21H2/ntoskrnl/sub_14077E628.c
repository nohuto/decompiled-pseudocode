/*
 * XREFs of sub_14077E628 @ 0x14077E628
 * Callers:
 *     ?get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z_0 @ 0x14077E168 (-get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z_0.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenKey @ 0x14041B9A0 (ZwOpenKey.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     sub_14077EA04 @ 0x14077EA04 (sub_14077EA04.c)
 *     sub_14077EBE0 @ 0x14077EBE0 (sub_14077EBE0.c)
 *     sub_14077ECD0 @ 0x14077ECD0 (sub_14077ECD0.c)
 *     sub_14077FB68 @ 0x14077FB68 (sub_14077FB68.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_14077E628(
        signed __int64 *Object,
        void *a2,
        __int64 a3,
        UNICODE_STRING *a4,
        UNICODE_STRING *a5,
        _QWORD *a6,
        __int64 a7,
        int *a8,
        _DWORD *a9)
{
  signed __int64 *v9; // r14
  signed __int64 *v10; // rbx
  int v11; // eax
  int v12; // r12d
  UNICODE_STRING v13; // xmm0
  struct _KTHREAD *CurrentThread; // rax
  __int64 v15; // r13
  __int64 v16; // rdi
  unsigned __int64 v17; // rcx
  wchar_t *Buffer; // r14
  __int16 v19; // r15
  NTSTATUS v20; // edi
  UNICODE_STRING v21; // xmm6
  int v22; // ecx
  int v23; // r12d
  int v24; // ecx
  int v25; // eax
  void *v26; // rdi
  int v27; // r14d
  int v28; // edx
  PVOID v29; // rax
  __int64 v30; // rsi
  wchar_t *v31; // r15
  unsigned __int16 Length; // di
  unsigned __int64 i; // rcx
  __int64 v34; // r14
  __int16 v35; // di
  unsigned __int64 v37; // [rsp+38h] [rbp-B1h] BYREF
  int v38; // [rsp+40h] [rbp-A9h]
  UNICODE_STRING v39; // [rsp+48h] [rbp-A1h] BYREF
  HANDLE KeyHandle[3]; // [rsp+58h] [rbp-91h] BYREF
  __int64 v41; // [rsp+70h] [rbp-79h] BYREF
  PVOID v42; // [rsp+78h] [rbp-71h] BYREF
  UNICODE_STRING DestinationString; // [rsp+88h] [rbp-61h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+98h] [rbp-51h] BYREF
  int v47; // [rsp+148h] [rbp+5Fh]

  v41 = 0LL;
  v9 = Object;
  memset(&ObjectAttributes, 0, 44);
  v10 = Object;
  v11 = *(unsigned __int16 *)(a3 + 32);
  v12 = 0;
  memset(KeyHandle, 0, sizeof(KeyHandle));
  v13 = *a4;
  v47 = v11;
  DestinationString = 0LL;
  LOBYTE(v38) = 0;
  v39 = v13;
  while ( 1 )
  {
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 242);
    ExAcquirePushLockSharedEx((ULONG_PTR)(v10 + 2), 0LL);
    v15 = sub_14077EA04((_DWORD)v10, (unsigned int)&v39, 1, 0, (__int64)&v41);
    if ( !v15 )
      break;
    v16 = v41;
    v17 = 0LL;
    v37 = 0LL;
    if ( v41 )
    {
      do
      {
        sub_14077EBE0(&v39, &v37, &KeyHandle[1]);
        --v16;
      }
      while ( v16 );
      v17 = v37;
    }
    Buffer = v39.Buffer;
    v19 = v39.Length - 2 * v17;
    KeyHandle[2] = &v39.Buffer[v17];
    LOWORD(KeyHandle[1]) = v19;
    WORD1(KeyHandle[1]) = v19;
    v20 = sub_14077FB68((PCUNICODE_STRING)(v15 + 24), (PCUNICODE_STRING)&KeyHandle[1], &DestinationString);
    if ( v20 < 0 )
      goto LABEL_29;
    sub_14077ECD0(&DestinationString);
    if ( Buffer != a4->Buffer )
      ExFreePoolWithTag(Buffer, 0);
    v21 = DestinationString;
    v39 = DestinationString;
    RtlInitUnicodeString(&DestinationString, 0LL);
    v22 = *(_DWORD *)(v15 + 56);
    v23 = v22 & 4 | v12;
    if ( v10 == Object )
      v23 |= v22 & 2;
    v24 = *(unsigned __int16 *)(v15 + 64);
    v25 = v23 | 0x20000000;
    v26 = *(void **)(v15 + 16);
    if ( v19 )
      v25 = v23;
    v27 = (unsigned __int8)v38;
    v12 = v25;
    if ( v47 < v24 )
      v27 = 1;
    v28 = *(unsigned __int16 *)(v15 + 66) - v24 + v47;
    v38 = v27;
    v47 = v28;
    if ( !v26 )
    {
      if ( a6 )
      {
        if ( !(_BYTE)v27 )
        {
          ObfReferenceObject(a2);
          v29 = a2;
          goto LABEL_19;
        }
        ObjectAttributes.Length = 48;
        ObjectAttributes.ObjectName = (PUNICODE_STRING)(v15 + 24);
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.Attributes = 576;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        v20 = ZwOpenKey(KeyHandle, 0x80000000, &ObjectAttributes);
        if ( v20 < 0
          || (v42 = 0LL,
              v20 = ObReferenceObjectByHandle(KeyHandle[0], 0, (POBJECT_TYPE)CmKeyObjectType, 0, &v42, 0LL),
              v29 = v42,
              v20 < 0) )
        {
LABEL_29:
          v9 = Object;
          goto LABEL_30;
        }
LABEL_19:
        v28 = v47;
        *a6 = v29;
      }
      v30 = a7;
      if ( a7 )
      {
        v31 = v39.Buffer;
        Length = v39.Length;
        if ( (_BYTE)v27 )
        {
          for ( i = (unsigned __int64)*(unsigned __int16 *)(v15 + 24) >> 1; ; ++i )
          {
            v37 = i;
            if ( 2 * i >= v39.Length || v39.Buffer[i] != 92 )
              break;
          }
        }
        else
        {
          v37 = 0LL;
          i = 0LL;
          v34 = 0LL;
          if ( v28 > 0 )
          {
            do
            {
              sub_14077EBE0(&v39, &v37, &KeyHandle[1]);
              ++v34;
            }
            while ( (int)v34 < v47 );
            i = v37;
            v30 = a7;
            v31 = v39.Buffer;
          }
        }
        v35 = Length - 2 * i;
        *(_QWORD *)(v30 + 8) = &v31[i];
        *(_WORD *)v30 = v35;
        *(_WORD *)(v30 + 2) = v35;
      }
      if ( a8 )
        *a8 = v12;
      *a9 = *(_DWORD *)(v15 + 60);
      *a5 = v21;
      RtlInitUnicodeString(&v39, 0LL);
      v20 = 0;
      goto LABEL_29;
    }
    ObfReferenceObjectWithTag(v26, 0x67655256u);
    if ( _InterlockedCompareExchange64(v10 + 2, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v10 + 2);
    sub_1402AFC00((ULONG_PTR)(v10 + 2));
    sub_1402F9540((__int64)KeGetCurrentThread());
    v9 = Object;
    if ( v10 != Object )
      ObfDereferenceObjectWithTag(v10, 0x67655256u);
    v10 = (signed __int64 *)v26;
  }
  v20 = -1073741772;
LABEL_30:
  if ( _InterlockedCompareExchange64(v10 + 2, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v10 + 2);
  sub_1402AFC00((ULONG_PTR)(v10 + 2));
  sub_1402F9540((__int64)KeGetCurrentThread());
  if ( v10 && v10 != v9 )
    ObfDereferenceObjectWithTag(v10, 0x67655256u);
  if ( v39.Buffer && v39.Buffer != a4->Buffer )
    ExFreePoolWithTag(v39.Buffer, 0);
  if ( KeyHandle[0] )
    ZwClose(KeyHandle[0]);
  return (unsigned int)v20;
}
