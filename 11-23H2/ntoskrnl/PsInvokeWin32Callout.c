/*
 * XREFs of PsInvokeWin32Callout @ 0x1406AF880
 * Callers:
 *     PsThawMultiProcess @ 0x1402044E4 (PsThawMultiProcess.c)
 *     PspJobDelete @ 0x140207000 (PspJobDelete.c)
 *     SeCaptureAtomTableCallout @ 0x1403566B0 (SeCaptureAtomTableCallout.c)
 *     KiSystemCall64 @ 0x140433F00 (KiSystemCall64.c)
 *     PspSetProcessTimerDelayForWin32 @ 0x1405A4F64 (PspSetProcessTimerDelayForWin32.c)
 *     PsApplyDeepFreezeOptimizations @ 0x14067ED7C (PsApplyDeepFreezeOptimizations.c)
 *     PsRemoveDeepFreezeOptimizations @ 0x14067EDC0 (PsRemoveDeepFreezeOptimizations.c)
 *     PfpQueryGpuUtilization @ 0x14068261C (PfpQueryGpuUtilization.c)
 *     PspAssignProcessToJob @ 0x14069FFF0 (PspAssignProcessToJob.c)
 *     NtSetInformationJobObject @ 0x1406A4040 (NtSetInformationJobObject.c)
 *     NtSetSystemInformation @ 0x14075F020 (NtSetSystemInformation.c)
 *     PspExitThread @ 0x14076DC1C (PspExitThread.c)
 *     KeUserModeCallback @ 0x14076EA70 (KeUserModeCallback.c)
 *     PsConvertToGuiThread @ 0x1407C6560 (PsConvertToGuiThread.c)
 *     ExpWin32OpenProcedure @ 0x1407CB210 (ExpWin32OpenProcedure.c)
 *     ExpWin32OkayToCloseProcedure @ 0x1407CCCE0 (ExpWin32OkayToCloseProcedure.c)
 *     ExpWin32CloseProcedure @ 0x1407CD9D0 (ExpWin32CloseProcedure.c)
 *     NtAddAtomEx @ 0x1407D1A90 (NtAddAtomEx.c)
 *     PopInvokeWin32Callout @ 0x1407D3B8C (PopInvokeWin32Callout.c)
 *     ExpWin32ParseProcedure @ 0x1407D5EE0 (ExpWin32ParseProcedure.c)
 *     ExpWin32DeleteProcedure @ 0x1407D9E20 (ExpWin32DeleteProcedure.c)
 *     NtQueryInformationAtom @ 0x1407DBA40 (NtQueryInformationAtom.c)
 *     NtDeleteAtom @ 0x1407E9690 (NtDeleteAtom.c)
 *     PsFreezeProcess @ 0x1407EBF50 (PsFreezeProcess.c)
 *     PspShutdownCsrProcess @ 0x1409AD4A8 (PspShutdownCsrProcess.c)
 *     PspQueryProcessInterferenceCountCallback @ 0x1409B2910 (PspQueryProcessInterferenceCountCallback.c)
 *     PspEnsureGuiThreadAndBatchFlush @ 0x1409B4DA8 (PspEnsureGuiThreadAndBatchFlush.c)
 * Callees:
 *     MmSessionGetWin32Callouts @ 0x140214EA0 (MmSessionGetWin32Callouts.c)
 *     MmGetSessionId @ 0x1402A3ED0 (MmGetSessionId.c)
 *     ExCallCallBack @ 0x1406AF914 (ExCallCallBack.c)
 *     ExCallSessionCallBack @ 0x1407C5F60 (ExCallSessionCallBack.c)
 */

__int64 __fastcall PsInvokeWin32Callout(int a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v4; // r11
  __int64 v5; // r10
  __int64 v7; // rbx
  _RTL_RUN_ONCE *Win32Callouts; // rax
  __int64 result; // rax
  int v10; // r8d
  _KPROCESS *Process; // rcx
  int SessionId; // eax
  _DWORD *v13; // r9
  __int64 v14; // rcx
  unsigned int v15; // [rsp+40h] [rbp+18h] BYREF

  v15 = 0;
  v4 = a4;
  v5 = a1;
  if ( !a3 )
    goto LABEL_2;
  v10 = a3 - 1;
  if ( v10 )
  {
    if ( v10 != 1 )
      return 3221225485LL;
    v14 = 0LL;
  }
  else
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( (Process[1].DirectoryTableBase & 0x1000000000000LL) != 0 )
    {
      SessionId = MmGetSessionId((__int64)Process);
      if ( *v13 == SessionId )
      {
LABEL_2:
        v7 = v5;
        Win32Callouts = MmSessionGetWin32Callouts();
        return ExCallCallBack(Win32Callouts, v7, a2);
      }
    }
    v14 = v4;
  }
  result = ExCallSessionCallBack(v14, v5, a2, &v15);
  if ( (int)result >= 0 )
    return v15;
  return result;
}
