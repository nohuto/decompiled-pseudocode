/*
 * XREFs of ApiSetQueryApiSetPresence_0 @ 0x18004A210
 * Callers:
 *     IsUMgrQueryUserContextFromSidPresent @ 0x180049AE8 (IsUMgrQueryUserContextFromSidPresent.c)
 *     IsQueryUserTokenPresent @ 0x180049BDC (IsQueryUserTokenPresent.c)
 *     IsPsmQueryBackgroundActivationTypePresent @ 0x180049CBC (IsPsmQueryBackgroundActivationTypePresent.c)
 *     IsPackageRundownNotificationForStoreLicense2Present @ 0x180049D9C (IsPackageRundownNotificationForStoreLicense2Present.c)
 *     IsNotifyGameModeExtensionRecipientsPresentPresent @ 0x180049EB4 (IsNotifyGameModeExtensionRecipientsPresentPresent.c)
 *     IsGetPackageTypeForPsmKeyPresent @ 0x180049F08 (IsGetPackageTypeForPsmKeyPresent.c)
 *     IsRmRpsInitializePresent @ 0x18004A61C (IsRmRpsInitializePresent.c)
 *     IsChangeWindowMessageFilterExPresent @ 0x18004AA34 (IsChangeWindowMessageFilterExPresent.c)
 *     IsRegisterWindowMessageWPresent @ 0x18004AB14 (IsRegisterWindowMessageWPresent.c)
 *     IsGetThreadDesktopPresent @ 0x18004ABF4 (IsGetThreadDesktopPresent.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ApiSetQueryApiSetPresence_0(__int64 a1, __int64 a2)
{
  return ApiSetQueryApiSetPresence(a1, a2);
}
