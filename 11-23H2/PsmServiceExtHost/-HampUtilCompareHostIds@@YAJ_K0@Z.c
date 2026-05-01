/*
 * XREFs of ?HampUtilCompareHostIds@@YAJ_K0@Z @ 0x18003D594
 * Callers:
 *     ?HampDepGroupCompareHostForRbTree@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x18003D524 (-HampDepGroupCompareHostForRbTree@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 *     ?HampDepGroupCompareDependencyLinkForRbTree@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x18003D54C (-HampDepGroupCompareDependencyLinkForRbTree@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 *     ?HampDepGroupCompareDependencyLinkForHost@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x18003D580 (-HampDepGroupCompareDependencyLinkForHost@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 *     ?HampSlsBlockerEntryCompare@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x180055618 (-HampSlsBlockerEntryCompare@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HampUtilCompareHostIds(unsigned __int64 a1, unsigned __int64 a2)
{
  if ( a1 < a2 )
    return 0xFFFFFFFFLL;
  else
    return a2 < a1;
}
