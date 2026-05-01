/*
 * XREFs of ?HampDepGroupCompareHostForRbTree@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x18003D5A4
 * Callers:
 *     ?HampDepGroupAddHost@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003B150 (-HampDepGroupAddHost@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HampDepGroupCompareHostForRbTree(unsigned __int64 *a1, struct _RTL_BALANCED_NODE *a2)
{
  unsigned __int64 v2; // rcx
  bool v3; // zf
  union _RTL_BALANCED_NODE::$9BF36C84E3411792BEB9166F3629864E *v4; // rax
  __int64 v5; // rdx

  v2 = *a1;
  v3 = a2 == (struct _RTL_BALANCED_NODE *)720;
  v4 = &a2[-32].16;
  v5 = 32LL;
  if ( !v3 )
    v5 = (__int64)v4;
  return HampUtilCompareHostIds(v2, *(_QWORD *)v5);
}
