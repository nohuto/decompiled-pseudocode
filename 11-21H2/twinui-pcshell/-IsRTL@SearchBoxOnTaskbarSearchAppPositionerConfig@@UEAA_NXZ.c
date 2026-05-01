/*
 * XREFs of ?IsRTL@SearchBoxOnTaskbarSearchAppPositionerConfig@@UEAA_NXZ @ 0x1801A6160
 * Callers:
 *     <none>
 * Callees:
 *     ?Mirror_IsThreadRTL@@YAHXZ @ 0x180070D14 (-Mirror_IsThreadRTL@@YAHXZ.c)
 */

bool __fastcall SearchBoxOnTaskbarSearchAppPositionerConfig::IsRTL(SearchBoxOnTaskbarSearchAppPositionerConfig *this)
{
  return (unsigned int)Mirror_IsThreadRTL() != 0;
}
