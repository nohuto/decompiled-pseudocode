/*
 * XREFs of RtlExtendCorrelationVector @ 0x1409BB700
 * Callers:
 *     <none>
 * Callees:
 *     sub_1405EC264 @ 0x1405EC264 (sub_1405EC264.c)
 *     sub_1409BBA8C @ 0x1409BBA8C (sub_1409BBA8C.c)
 */

DWORD __cdecl RtlExtendCorrelationVector(PCORRELATION_VECTOR CorrelationVector)
{
  __int64 v1; // rdx
  int v3; // eax
  __int64 v4; // rdx
  int v5; // eax
  __int64 v6; // r8
  DWORD v7; // r11d

  v3 = sub_1405EC264((__int64)CorrelationVector, v1);
  if ( v3 < 0 )
    return -2147483643;
  v5 = sub_1409BBA8C(CorrelationVector, v4, v3);
  if ( (int)v6 >= v5 - 3 )
    return -2147483643;
  *(_WORD *)&CorrelationVector->Vector[v6] = 12334;
  CorrelationVector->Vector[v6 + 2] = v7;
  return v7;
}
