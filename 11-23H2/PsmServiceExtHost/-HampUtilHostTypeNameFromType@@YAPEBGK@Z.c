/*
 * XREFs of ?HampUtilHostTypeNameFromType@@YAPEBGK@Z @ 0x180034E68
 * Callers:
 *     ?HampUtilSaveHostHistoricCommitUse@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z @ 0x180034DB0 (-HampUtilSaveHostHistoricCommitUse@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z.c)
 *     ?HampUtilQueryHostHistoricCommitUse@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K@Z @ 0x180034EA0 (-HampUtilQueryHostHistoricCommitUse@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K@Z.c)
 * Callees:
 *     <none>
 */

const unsigned __int16 *__fastcall HampUtilHostTypeNameFromType(int a1)
{
  switch ( a1 )
  {
    case 4:
      return L"Pure";
    case 8:
      return L"System";
    case 2:
      return L"Mixed";
  }
  __int2c();
  return 0LL;
}
