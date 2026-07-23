/*
 * XREFs of RtlOpenModernAppOptionsKey @ 0x1800ED708
 * Callers:
 *     LdrpInitializeExecutionOptions @ 0x1800DD3AC (LdrpInitializeExecutionOptions.c)
 * Callees:
 *     NtClose @ 0x1800A1090 (NtClose.c)
 *     NtOpenKey @ 0x1800A10F0 (NtOpenKey.c)
 */

NTSTATUS __fastcall RtlOpenModernAppOptionsKey(_UNICODE_STRING *a1, void *a2, _QWORD *a3)
{
  NTSTATUS result; // eax
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+20h] [rbp-38h] BYREF
  HANDLE KeyHandle; // [rsp+78h] [rbp+20h] BYREF

  if ( RtlpModernAppKey )
  {
    *a3 = RtlpModernAppKey;
  }
  else
  {
    ObjectAttributes.RootDirectory = a2;
    ObjectAttributes.ObjectName = a1;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    result = NtOpenKey(&KeyHandle, 9u, &ObjectAttributes);
    if ( result < 0 )
      return result;
    if ( _InterlockedCompareExchange64(&RtlpModernAppKey, (signed __int64)KeyHandle, 0LL) )
      NtClose(KeyHandle);
    *a3 = RtlpModernAppKey;
  }
  return 0;
}
