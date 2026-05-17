/*
 * XREFs of RtlQueryRegistryValues @ 0x1800F9C30
 * Callers:
 *     <none>
 * Callees:
 *     RtlpQueryRegistryValues @ 0x180009D1C (RtlpQueryRegistryValues.c)
 */

__int64 __fastcall RtlQueryRegistryValues(__int64 a1, const WCHAR *a2, __int64 a3, __int64 a4, __int64 a5)
{
  return RtlpQueryRegistryValues(a1, a2, a3, a4, a5, 0);
}
