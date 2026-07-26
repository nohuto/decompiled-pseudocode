/*
 * XREFs of ndisIfReleaseSiteId @ 0x1C00BA9C0
 * Callers:
 *     ndisNsiChangeNetworkInfo @ 0x1C00BA9F4 (ndisNsiChangeNetworkInfo.c)
 *     ?ndisNsiSetAllNetworkInfo@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z @ 0x1C00BB2C0 (-ndisNsiSetAllNetworkInfo@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiSetNetworkInfo@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z @ 0x1C00BB820 (-ndisNsiSetNetworkInfo@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisIfReleaseSiteId(unsigned int a1)
{
  int v1; // ecx
  __int64 result; // rax

  if ( byte_1C00F7710 )
  {
    if ( a1 > 0x7FFFFFF )
    {
      v1 = (dword_1C00F4968 ^ (a1 - 1)) & 0xFFFFFFF;
      result = v1 ^ (unsigned int)dword_1C00F4968;
      dword_1C00F4968 ^= v1;
    }
  }
  return result;
}
