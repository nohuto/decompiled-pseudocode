/*
 * XREFs of FxRegisterBugCheckCallback @ 0x1C0088D28
 * Callers:
 *     FxInitialize @ 0x1C0043DE4 (FxInitialize.c)
 * Callees:
 *     ?Register@_FX_DRIVER_TRACKER_CACHE_AWARE@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00888D0 (-Register@_FX_DRIVER_TRACKER_CACHE_AWARE@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     FxpGetImageBase @ 0x1C0088FA8 (FxpGetImageBase.c)
 */

void __fastcall FxRegisterBugCheckCallback(_FX_DRIVER_GLOBALS *FxDriverGlobals, _DRIVER_OBJECT *DriverObject)
{
  unsigned __int8 FxTrackDriverForMiniDumpLog; // si
  _KBUGCHECK_REASON_CALLBACK_RECORD *p_BugCheckCallbackRecord; // rdi
  _FX_DRIVER_GLOBALS *v5; // rdx

  FxTrackDriverForMiniDumpLog = FxDriverGlobals->FxTrackDriverForMiniDumpLog;
  p_BugCheckCallbackRecord = &FxDriverGlobals->BugCheckCallbackRecord;
  FxDriverGlobals->FxTrackDriverForMiniDumpLog = 0;
  FxDriverGlobals->BugCheckCallbackRecord.Entry = 0LL;
  *(_OWORD *)&FxDriverGlobals->BugCheckCallbackRecord.CallbackRoutine = 0LL;
  *(_OWORD *)&FxDriverGlobals->BugCheckCallbackRecord.Checksum = 0LL;
  FxDriverGlobals->ImageAddress = 0LL;
  FxDriverGlobals->ImageSize = 0;
  if ( FxpGetImageBase(DriverObject, &FxDriverGlobals->ImageAddress, &FxDriverGlobals->ImageSize) >= 0 && !unk_1C009FF19 )
  {
    if ( FxTrackDriverForMiniDumpLog )
    {
      if ( (int)_FX_DRIVER_TRACKER_CACHE_AWARE::Register(&stru_1C009FEF8, v5) >= 0 )
        FxDriverGlobals->FxTrackDriverForMiniDumpLog = 1;
    }
    p_BugCheckCallbackRecord->State = 0;
    KeRegisterBugCheckReasonCallback(
      p_BugCheckCallbackRecord,
      FxpBugCheckCallback,
      KbCallbackSecondaryDumpData,
      (PUCHAR)FxDriverGlobals->Public.DriverName);
  }
}
