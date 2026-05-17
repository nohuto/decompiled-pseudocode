/*
 * XREFs of RtlpGetCurrentProcessorNumberUninitialized @ 0x180084860
 * Callers:
 *     RtlGetCurrentProcessorNumber @ 0x1800A3C60 (RtlGetCurrentProcessorNumber.c)
 * Callees:
 *     RtlpGetCurrentProcessorNumberExUninitialized @ 0x180084890 (RtlpGetCurrentProcessorNumberExUninitialized.c)
 */

__int64 RtlpGetCurrentProcessorNumberUninitialized()
{
  char v1; // [rsp+30h] [rbp+8h] BYREF
  unsigned __int8 v2; // [rsp+32h] [rbp+Ah]

  RtlpGetCurrentProcessorNumberExUninitialized(&v1);
  return v2;
}
