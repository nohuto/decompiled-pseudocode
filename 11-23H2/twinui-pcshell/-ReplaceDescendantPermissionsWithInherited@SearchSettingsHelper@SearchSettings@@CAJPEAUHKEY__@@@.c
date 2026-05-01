/*
 * XREFs of ?ReplaceDescendantPermissionsWithInherited@SearchSettingsHelper@SearchSettings@@CAJPEAUHKEY__@@@Z @ 0x1801EE6A8
 * Callers:
 *     ?AddAceToKeyRecursively@SearchSettingsHelper@SearchSettings@@CAJPEBG0PEAU_EXPLICIT_ACCESS_W@@@Z @ 0x1801E9FAC (-AddAceToKeyRecursively@SearchSettingsHelper@SearchSettings@@CAJPEBG0PEAU_EXPLICIT_ACCESS_W@@@Z.c)
 * Callees:
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801322B8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?SetUnprotectedDaclRecursive@SearchSettingsHelper@SearchSettings@@CAXPEAUHKEY__@@PEAU_ACL@@@Z @ 0x1801EF260 (-SetUnprotectedDaclRecursive@SearchSettingsHelper@SearchSettings@@CAXPEAUHKEY__@@PEAU_ACL@@@Z.c)
 */

__int64 __fastcall SearchSettings::SearchSettingsHelper::ReplaceDescendantPermissionsWithInherited(HKEY a1)
{
  const char *v2; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct _ACL pAcl; // [rsp+38h] [rbp+10h] BYREF

  if ( !InitializeAcl(&pAcl, 8u, 2u) )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x376,
             (int)"shellcommon\\internal\\shell\\inc\\Search\\SearchSettingsHelper.h",
             v2);
  SearchSettings::SearchSettingsHelper::SetUnprotectedDaclRecursive(a1, &pAcl);
  return 0LL;
}
