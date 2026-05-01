/*
 * XREFs of ApiSetQueryApiSetPresence_0 @ 0x18018EEA0
 * Callers:
 *     IsOleInitializePresent @ 0x18018C1B8 (IsOleInitializePresent.c)
 *     IsPicRetrieveFileInfoPresent @ 0x18018D368 (IsPicRetrieveFileInfoPresent.c)
 *     IsQueryWin32SubsystemHostPresent @ 0x18018D45C (IsQueryWin32SubsystemHostPresent.c)
 *     IsGetThreadDesktopPresent @ 0x18018F2EC (IsGetThreadDesktopPresent.c)
 *     IsWPDeveloperAppAllowedPresent @ 0x18018F4D4 (IsWPDeveloperAppAllowedPresent.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ApiSetQueryApiSetPresence_0(__int64 a1, __int64 a2)
{
  return ApiSetQueryApiSetPresence(a1, a2);
}
