/*
 * XREFs of ?HampAppCompareByIdentity@@YAJPEAX0@Z @ 0x180013B90
 * Callers:
 *     ?HampAppFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_APPLICATION_INFO@@KPEAPEAU_HAM_APPLICATION@@@Z @ 0x1800316F0 (-HampAppFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_APPLICATION_INFO@@KPEAPEAU_HAM_APP.c)
 * Callees:
 *     <none>
 */

int __fastcall HampAppCompareByIdentity(const wchar_t *a1, const wchar_t *a2)
{
  return _wcsicmp(a1, a2 + 48);
}
