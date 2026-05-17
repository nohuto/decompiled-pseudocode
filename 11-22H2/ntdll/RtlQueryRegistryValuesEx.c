/*
 * XREFs of RtlQueryRegistryValuesEx @ 0x180087AB0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpQueryRegistryValues @ 0x180008E4C (RtlpQueryRegistryValues.c)
 */

__int64 __fastcall RtlQueryRegistryValuesEx(__int64 a1, const WCHAR *a2, __int64 a3, __int64 a4, __int64 a5)
{
  return RtlpQueryRegistryValues(a1, a2, a3, a4, a5, 1);
}
