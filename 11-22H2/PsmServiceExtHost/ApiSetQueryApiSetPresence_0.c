/*
 * XREFs of ApiSetQueryApiSetPresence_0 @ 0x18004A2A0
 * Callers:
 *     IsUMgrQueryUserContextFromSidPresent @ 0x180049B78 (IsUMgrQueryUserContextFromSidPresent.c)
 *     IsQueryUserTokenPresent @ 0x180049C6C (IsQueryUserTokenPresent.c)
 *     IsPsmQueryBackgroundActivationTypePresent @ 0x180049D4C (IsPsmQueryBackgroundActivationTypePresent.c)
 *     IsPackageRundownNotificationForStoreLicense2Present @ 0x180049E2C (IsPackageRundownNotificationForStoreLicense2Present.c)
 *     IsNotifyGameModeExtensionRecipientsPresentPresent @ 0x180049F44 (IsNotifyGameModeExtensionRecipientsPresentPresent.c)
 *     IsGetPackageTypeForPsmKeyPresent @ 0x180049F98 (IsGetPackageTypeForPsmKeyPresent.c)
 *     IsRmRpsInitializePresent @ 0x18004A6AC (IsRmRpsInitializePresent.c)
 *     IsChangeWindowMessageFilterExPresent @ 0x18004AAC4 (IsChangeWindowMessageFilterExPresent.c)
 *     IsRegisterWindowMessageWPresent @ 0x18004ABA4 (IsRegisterWindowMessageWPresent.c)
 *     IsGetThreadDesktopPresent @ 0x18004AC84 (IsGetThreadDesktopPresent.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ApiSetQueryApiSetPresence_0(__int64 a1, __int64 a2)
{
  return ApiSetQueryApiSetPresence(a1, a2);
}
