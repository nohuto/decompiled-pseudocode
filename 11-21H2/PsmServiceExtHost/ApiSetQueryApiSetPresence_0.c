/*
 * XREFs of ApiSetQueryApiSetPresence_0 @ 0x18004F040
 * Callers:
 *     IsUMgrQueryUserContextFromSidPresent @ 0x18004E918 (IsUMgrQueryUserContextFromSidPresent.c)
 *     IsQueryUserTokenPresent @ 0x18004EA0C (IsQueryUserTokenPresent.c)
 *     IsPsmQueryBackgroundActivationTypePresent @ 0x18004EAEC (IsPsmQueryBackgroundActivationTypePresent.c)
 *     IsPackageRundownNotificationForStoreLicense2Present @ 0x18004EBCC (IsPackageRundownNotificationForStoreLicense2Present.c)
 *     IsNotifyGameModeExtensionRecipientsPresentPresent @ 0x18004ECE4 (IsNotifyGameModeExtensionRecipientsPresentPresent.c)
 *     IsGetPackageTypeForPsmKeyPresent @ 0x18004ED38 (IsGetPackageTypeForPsmKeyPresent.c)
 *     IsRmRpsInitializePresent @ 0x18004F44C (IsRmRpsInitializePresent.c)
 *     IsChangeWindowMessageFilterExPresent @ 0x18004F898 (IsChangeWindowMessageFilterExPresent.c)
 *     IsRegisterWindowMessageWPresent @ 0x18004F978 (IsRegisterWindowMessageWPresent.c)
 *     IsGetThreadDesktopPresent @ 0x18004FA58 (IsGetThreadDesktopPresent.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ApiSetQueryApiSetPresence_0(__int64 a1, __int64 a2)
{
  return ApiSetQueryApiSetPresence(a1, a2);
}
