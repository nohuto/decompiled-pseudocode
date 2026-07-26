/*
 * XREFs of ?IsOidRequestDirectOid@@YAEK@Z @ 0x1C00AF4F8
 * Callers:
 *     ?ndisMDirectOidRequest@@YAHPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x1C00AFB20 (-ndisMDirectOidRequest@@YAHPEAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 *     NdisFDirectOidRequest @ 0x1C00B01A0 (NdisFDirectOidRequest.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall IsOidRequestDirectOid(int a1)
{
  unsigned __int8 result; // al
  _DWORD *v2; // rdx
  unsigned int v3; // r8d

  result = 0;
  v2 = &ndisDirectOidRequestPathOids;
  v3 = 0;
  while ( a1 != *v2 )
  {
    ++v3;
    ++v2;
    if ( v3 >= 0x18 )
      return result;
  }
  return 1;
}
