/*
 * XREFs of ndisIfReleaseSiteId @ 0x1C00B59FC
 * Callers:
 *     ndisNsiChangeNetworkInfo @ 0x1C00B5A30 (ndisNsiChangeNetworkInfo.c)
 *     ?ndisNsiSetAllNetworkInfo@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z @ 0x1C00B6310 (-ndisNsiSetAllNetworkInfo@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiSetNetworkInfo@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z @ 0x1C00B67F0 (-ndisNsiSetNetworkInfo@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisIfReleaseSiteId(unsigned int a1)
{
  int v1; // ecx
  __int64 result; // rax

  if ( byte_1C00EE650 )
  {
    if ( a1 > 0x7FFFFFF )
    {
      v1 = (dword_1C00EB958 ^ (a1 - 1)) & 0xFFFFFFF;
      result = v1 ^ (unsigned int)dword_1C00EB958;
      dword_1C00EB958 ^= v1;
    }
  }
  return result;
}
