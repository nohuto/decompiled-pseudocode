/*
 * XREFs of RtlpValidateKeyTrust @ 0x180009378
 * Callers:
 *     RtlpCallQueryRegistryRoutine @ 0x180009040 (RtlpCallQueryRegistryRoutine.c)
 * Callees:
 *     ZwQueryKey @ 0x1800A1170 (ZwQueryKey.c)
 */

__int64 __fastcall RtlpValidateKeyTrust(__int64 a1, __int16 a2)
{
  __int64 result; // rax
  int v3; // ecx
  char v4; // [rsp+48h] [rbp+10h] BYREF

  if ( (a2 & 0x100) != 0 )
    return 0LL;
  v3 = ZwQueryKey(a1, 8LL, &v4);
  result = 0LL;
  if ( v3 < 0 )
  {
    result = (unsigned int)v3;
    if ( v3 != -1073741431 )
      goto LABEL_8;
  }
  else if ( (v4 & 1) == 0 )
  {
LABEL_8:
    __fastfail(9u);
  }
  return result;
}
