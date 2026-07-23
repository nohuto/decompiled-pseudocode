/*
 * XREFs of RtlpValidateKeyTrust @ 0x180009598
 * Callers:
 *     RtlpCallQueryRegistryRoutine @ 0x180009260 (RtlpCallQueryRegistryRoutine.c)
 * Callees:
 *     ZwQueryKey @ 0x18009F0B0 (ZwQueryKey.c)
 */

__int64 __fastcall RtlpValidateKeyTrust(void *a1, __int16 a2)
{
  __int64 result; // rax
  NTSTATUS v3; // ecx
  char KeyInformation; // [rsp+48h] [rbp+10h] BYREF
  ULONG ResultLength; // [rsp+50h] [rbp+18h] BYREF

  if ( (a2 & 0x100) != 0 )
    return 0LL;
  v3 = ZwQueryKey(a1, KeyTrustInformation, &KeyInformation, 4u, &ResultLength);
  result = 0LL;
  if ( v3 < 0 )
  {
    result = (unsigned int)v3;
    if ( v3 != -1073741431 )
      goto LABEL_8;
  }
  else if ( (KeyInformation & 1) == 0 )
  {
LABEL_8:
    __fastfail(9u);
  }
  return result;
}
