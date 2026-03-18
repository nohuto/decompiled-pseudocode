/*
 * XREFs of FxInitializeBugCheckDriverInfo @ 0x1C002EAB0
 * Callers:
 *     FxLibraryGlobalsCommission @ 0x1C002E278 (FxLibraryGlobalsCommission.c)
 * Callees:
 *     RtlStringCopyWorkerA @ 0x1C0028BB4 (RtlStringCopyWorkerA.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 */

void FxInitializeBugCheckDriverInfo()
{
  void (__fastcall *SystemRoutineAddress)(_KBUGCHECK_REASON_CALLBACK_RECORD *, _QWORD, __int64, const char *); // rbx
  _FX_DUMP_DRIVER_INFO_ENTRY *Pool2; // rax
  unsigned __int64 v2; // rdx
  unsigned __int64 *v3; // r8
  _UNICODE_STRING funcName; // [rsp+30h] [rbp-18h] BYREF

  FxLibraryGlobals.BugCheckDriverInfoCount = 0;
  FxLibraryGlobals.BugCheckDriverInfoIndex = 0;
  FxLibraryGlobals.BugCheckDriverInfo = 0LL;
  funcName = 0LL;
  FxLibraryGlobals.BugCheckCallbackRecord.Entry = 0LL;
  *(_OWORD *)&FxLibraryGlobals.BugCheckCallbackRecord.CallbackRoutine = 0LL;
  *(_OWORD *)&FxLibraryGlobals.BugCheckCallbackRecord.Checksum = 0LL;
  if ( !FxLibraryGlobals.StaticallyLinked )
  {
    RtlInitUnicodeString(&funcName, L"KeRegisterBugCheckReasonCallback");
    SystemRoutineAddress = (void (__fastcall *)(_KBUGCHECK_REASON_CALLBACK_RECORD *, _QWORD, __int64, const char *))MmGetSystemRoutineAddress(&funcName);
    if ( SystemRoutineAddress )
    {
      Pool2 = (_FX_DUMP_DRIVER_INFO_ENTRY *)ExAllocatePool2(64LL, 560LL, 1917089862LL);
      FxLibraryGlobals.BugCheckDriverInfo = Pool2;
      if ( Pool2 )
      {
        FxLibraryGlobals.BugCheckDriverInfoCount = 10;
        Pool2->FxDriverGlobals = 0LL;
        FxLibraryGlobals.BugCheckDriverInfo->Version.Major = 1;
        FxLibraryGlobals.BugCheckDriverInfo->Version.Minor = 33;
        FxLibraryGlobals.BugCheckDriverInfo->Version.Build = 0;
        if ( (int)RtlStringCopyWorkerA(FxLibraryGlobals.BugCheckDriverInfo->DriverName, v2, v3, "Wdf01000") < 0 )
          FxLibraryGlobals.BugCheckDriverInfo->DriverName[0] = 0;
        ++FxLibraryGlobals.BugCheckDriverInfoIndex;
        FxLibraryGlobals.BugCheckCallbackRecord.State = 0;
        SystemRoutineAddress(&FxLibraryGlobals.BugCheckCallbackRecord, FxpLibraryBugCheckCallback, 2LL, "Wdf01000");
      }
    }
  }
}
