/*
 * XREFs of RtlValidateProcessHeaps @ 0x1800FE560
 * Callers:
 *     <none>
 * Callees:
 *     RtlpEnumProcessHeaps @ 0x1800773DC (RtlpEnumProcessHeaps.c)
 */

BOOLEAN RtlValidateProcessHeaps(void)
{
  return (int)RtlpEnumProcessHeaps((__int64 (__fastcall *)(void *, __int64))RtlValidateProcessHeapsCallback, 0LL, 0) >= 0;
}
