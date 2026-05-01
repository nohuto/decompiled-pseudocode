/*
 * XREFs of ApiSetQueryApiSetPresence_0 @ 0x1801CE030
 * Callers:
 *     IsOleInitializePresent @ 0x1801CB044 (IsOleInitializePresent.c)
 *     IsPolicyManager_GetPolicyIntPresent @ 0x1801CB2E8 (IsPolicyManager_GetPolicyIntPresent.c)
 *     IsPolicyManager_GetPolicyPresent @ 0x1801CB33C (IsPolicyManager_GetPolicyPresent.c)
 *     IsUMgrQueryUserTokenPresent @ 0x1801CC418 (IsUMgrQueryUserTokenPresent.c)
 *     IsPicRetrieveFileInfoPresent @ 0x1801CC480 (IsPicRetrieveFileInfoPresent.c)
 *     IsQueryWin32SubsystemHostPresent @ 0x1801CC574 (IsQueryWin32SubsystemHostPresent.c)
 *     IsGetThreadDesktopPresent @ 0x1801CEAA0 (IsGetThreadDesktopPresent.c)
 *     IsWPDeveloperAppAllowedPresent @ 0x1801CED4C (IsWPDeveloperAppAllowedPresent.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ApiSetQueryApiSetPresence_0(__int64 a1, __int64 a2)
{
  return ApiSetQueryApiSetPresence(a1, a2);
}
