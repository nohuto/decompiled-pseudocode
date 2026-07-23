/*
 * XREFs of sub_1409BBA8C @ 0x1409BBA8C
 * Callers:
 *     sub_1405EC264 @ 0x1405EC264 (sub_1405EC264.c)
 *     sub_1405EC2AC @ 0x1405EC2AC (sub_1405EC2AC.c)
 *     RtlExtendCorrelationVector @ 0x1409BB700 (RtlExtendCorrelationVector.c)
 *     RtlIncrementCorrelationVector @ 0x1409BB750 (RtlIncrementCorrelationVector.c)
 *     RtlValidateCorrelationVector @ 0x1409BB8C0 (RtlValidateCorrelationVector.c)
 *     sub_1409BBAB0 @ 0x1409BBAB0 (sub_1409BBAB0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1409BBA8C(_BYTE *a1)
{
  __int64 result; // rax

  if ( *a1 == 1 )
    return 65LL;
  result = 0xFFFFFFFFLL;
  if ( *a1 == 2 )
    return 129LL;
  return result;
}
