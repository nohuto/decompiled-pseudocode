/*
 * XREFs of RtlFcpCompareFeatureIdToFeature @ 0x18012A3A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlFcpCompareFeatureIdToFeature(_DWORD *a1, _DWORD *a2)
{
  if ( *a1 > *a2 )
    return 1LL;
  else
    return (unsigned int)-(*a1 < *a2);
}
