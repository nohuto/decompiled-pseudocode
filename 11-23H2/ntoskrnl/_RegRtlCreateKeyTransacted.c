/*
 * XREFs of _RegRtlCreateKeyTransacted @ 0x14079812C
 * Callers:
 *     _RegRtlCreateTreeTransacted @ 0x140797C20 (_RegRtlCreateTreeTransacted.c)
 *     _PnpCtxRegCreateKey @ 0x1407980B0 (_PnpCtxRegCreateKey.c)
 *     _SysCtxOpenControlSet @ 0x140855528 (_SysCtxOpenControlSet.c)
 *     _RegRtlCopyTreeInternal @ 0x140A6A948 (_RegRtlCopyTreeInternal.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14022B7D0 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x14041B2D0 (ZwClose.c)
 *     ZwCreateKey @ 0x14041B490 (ZwCreateKey.c)
 *     _RegRtlIsPredefinedKey @ 0x1406CEEBC (_RegRtlIsPredefinedKey.c)
 *     _RegRtlOpenPredefinedKey @ 0x14085C53C (_RegRtlOpenPredefinedKey.c)
 *     NtCreateKeyTransacted_Stub @ 0x140A6B01C (NtCreateKeyTransacted_Stub.c)
 */

__int64 __fastcall RegRtlCreateKeyTransacted(
        __int64 a1,
        const WCHAR *a2,
        ULONG a3,
        ACCESS_MASK a4,
        void *a5,
        char a6,
        HANDLE *KeyHandle,
        ULONG *Disposition,
        __int64 a9)
{
  void *v9; // rdi
  void *v13; // rsi
  __int64 v14; // rcx
  int inited; // ebx
  int v16; // r9d
  int v17; // ecx
  void *v19; // [rsp+48h] [rbp-31h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-29h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-19h] BYREF

  v9 = 0LL;
  memset(&ObjectAttributes, 0, 44);
  v19 = 0LL;
  DestinationString = 0LL;
  v13 = (void *)a1;
  if ( RegRtlIsPredefinedKey(a1) )
  {
    inited = RegRtlOpenPredefinedKey(v14, &v19);
    if ( inited < 0 )
      goto LABEL_9;
    v9 = v19;
  }
  inited = RtlInitUnicodeStringEx(&DestinationString, a2);
  if ( inited < 0 )
    goto LABEL_10;
  ObjectAttributes.Length = 48;
  v17 = (32 * (a3 & 8 | 6)) | 2;
  if ( !a6 )
    v17 = 32 * (a3 & 8 | 6);
  if ( v9 )
    v13 = v9;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  ObjectAttributes.Attributes = v17 | 0x200;
  ObjectAttributes.SecurityDescriptor = a5;
  ObjectAttributes.RootDirectory = v13;
  if ( a9 )
  {
    inited = NtCreateKeyTransacted_Stub((_DWORD)KeyHandle, a4, (unsigned int)&ObjectAttributes, v16);
    if ( inited == -1073741702 )
      inited = -1072103420;
  }
  else
  {
    inited = ZwCreateKey(KeyHandle, a4, &ObjectAttributes, 0, 0LL, a3, Disposition);
  }
LABEL_9:
  v9 = v19;
LABEL_10:
  if ( v9 )
    ZwClose(v9);
  return (unsigned int)inited;
}
