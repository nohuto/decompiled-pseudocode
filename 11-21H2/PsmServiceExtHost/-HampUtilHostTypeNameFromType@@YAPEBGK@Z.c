/*
 * XREFs of ?HampUtilHostTypeNameFromType@@YAPEBGK@Z @ 0x18000A1A0
 * Callers:
 *     ?HampUtilQueryHostHistoricCommitUse@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K@Z @ 0x18000A028 (-HampUtilQueryHostHistoricCommitUse@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K@Z.c)
 *     ?HampUtilSaveHostHistoricCommitUse@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z @ 0x18000A0F8 (-HampUtilSaveHostHistoricCommitUse@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z.c)
 * Callees:
 *     <none>
 */

const unsigned __int16 *__fastcall HampUtilHostTypeNameFromType(int a1)
{
  if ( a1 == 4 )
    return L"Pure";
  if ( a1 == 2 )
    return L"Mixed";
  if ( a1 != 8 )
    NT_ASSERT("!"HampUtilHostTypeNameFromType bad host type"");
  return L"System";
}
