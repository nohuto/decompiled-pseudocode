/*
 * XREFs of RtlValidateProcessHeaps @ 0x1800FF970
 * Callers:
 *     <none>
 * Callees:
 *     RtlpEnumProcessHeaps @ 0x180077A4C (RtlpEnumProcessHeaps.c)
 */

BOOLEAN RtlValidateProcessHeaps(void)
{
  return (int)RtlpEnumProcessHeaps((__int64 (__fastcall *)(void *, __int64))RtlValidateProcessHeapsCallback, 0LL, 0) >= 0;
}
