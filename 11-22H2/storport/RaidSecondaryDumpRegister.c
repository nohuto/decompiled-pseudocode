/*
 * XREFs of RaidSecondaryDumpRegister @ 0x1C0073750
 * Callers:
 *     RaUnitDeviceUsageNotificationIrp @ 0x1C00133C4 (RaUnitDeviceUsageNotificationIrp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidSecondaryDumpRegister(__int64 a1)
{
  __int64 result; // rax

  if ( SecondaryDumpCallbackRegistered )
    return 3221225473LL;
  BYTE4(WPP_MAIN_CB.Dpc.DeferredContext) = 0;
  if ( KeRegisterBugCheckReasonCallback(
         (PKBUGCHECK_REASON_CALLBACK_RECORD)&WPP_MAIN_CB.DeviceQueue.32,
         RaidStandardSecondaryDumpCallback,
         KbCallbackSecondaryDumpData,
         (PUCHAR)"PortDriverStandard") != 1 )
    return 3221225473LL;
  SecondaryDumpCallbackRegistered = 1;
  result = 0LL;
  BootDriveExtension = a1;
  return result;
}
