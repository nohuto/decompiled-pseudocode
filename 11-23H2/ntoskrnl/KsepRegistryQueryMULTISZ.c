/*
 * XREFs of KsepRegistryQueryMULTISZ @ 0x140977DEC
 * Callers:
 *     KsepMatchInitBiosInfo @ 0x140B6162C (KsepMatchInitBiosInfo.c)
 * Callees:
 *     KsepRegistryQuerySZ @ 0x1408449DC (KsepRegistryQuerySZ.c)
 */

__int64 __fastcall KsepRegistryQueryMULTISZ(void *a1, const WCHAR *a2, void *a3, unsigned __int64 a4, _QWORD *a5)
{
  return KsepRegistryQuerySZ(a1, a2, 7, a3, a4, a5);
}
