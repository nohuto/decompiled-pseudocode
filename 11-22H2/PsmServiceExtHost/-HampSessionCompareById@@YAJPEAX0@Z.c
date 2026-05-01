/*
 * XREFs of ?HampSessionCompareById@@YAJPEAX0@Z @ 0x180010E90
 * Callers:
 *     ?HampPkgFindInManager@@YAPEAU_HAM_PACKAGE@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@@Z @ 0x180028520 (-HampPkgFindInManager@@YAPEAU_HAM_PACKAGE@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@@Z.c)
 *     ?HampUserFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAT_RM_SID@@KPEAPEAU_HAM_USER@@@Z @ 0x180031ED0 (-HampUserFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAT_RM_SID@@KPEAPEAU_HAM_USER@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HampSessionCompareById(void *a1, _DWORD *a2)
{
  if ( a2[22] == (_DWORD)a1 )
    return 0LL;
  else
    return a2[22] < (unsigned int)a1 ? 1 : -1;
}
