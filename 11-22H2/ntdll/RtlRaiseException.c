/*
 * XREFs of RtlRaiseException @ 0x1800549A0
 * Callers:
 *     LdrpLoadDependentModuleInternal @ 0x180025330 (LdrpLoadDependentModuleInternal.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x180026C30 (RtlDeactivateActivationContextUnsafeFast.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x180028CB0 (RtlActivateActivationContextUnsafeFast.c)
 *     TppCallbackEpilog @ 0x18003636C (TppCallbackEpilog.c)
 *     TppCallbackCheckThreadAfterCallback @ 0x18003668C (TppCallbackCheckThreadAfterCallback.c)
 *     RtlpReAllocateHeapInternal @ 0x1800423B0 (RtlpReAllocateHeapInternal.c)
 *     vDbgPrintExWithPrefixInternal @ 0x180053AB8 (vDbgPrintExWithPrefixInternal.c)
 *     TpCheckTerminateWorker @ 0x18005E050 (TpCheckTerminateWorker.c)
 *     RtlDeactivateActivationContext @ 0x1800739F0 (RtlDeactivateActivationContext.c)
 *     RtlpFreeActivationContextStackFrame @ 0x180073AEC (RtlpFreeActivationContextStackFrame.c)
 *     RtlpAllocateActivationContextStackFrame @ 0x180075088 (RtlpAllocateActivationContextStackFrame.c)
 *     RtlGetActiveActivationContext @ 0x180076DC0 (RtlGetActiveActivationContext.c)
 *     RtlpTpImpersonate @ 0x180088FD0 (RtlpTpImpersonate.c)
 *     RaiseException @ 0x180097410 (RaiseException.c)
 *     KiRaiseUserExceptionDispatcher @ 0x1800A2EE0 (KiRaiseUserExceptionDispatcher.c)
 *     RtlRaiseNoncontinuableException @ 0x1800A38E0 (RtlRaiseNoncontinuableException.c)
 *     RtlRaiseExceptionForReturnAddressHijack @ 0x1800A3D20 (RtlRaiseExceptionForReturnAddressHijack.c)
 *     RtlpPossibleDeadlock @ 0x1800F3AA4 (RtlpPossibleDeadlock.c)
 *     RtlpAllocateHeapRaiseException @ 0x180102608 (RtlpAllocateHeapRaiseException.c)
 *     RtlReportFatalFailure @ 0x18010C240 (RtlReportFatalFailure.c)
 *     TppRaiseHandleStatus @ 0x180125D20 (TppRaiseHandleStatus.c)
 *     TppRaiseInvalidParameter @ 0x180125DC8 (TppRaiseInvalidParameter.c)
 *     PssNtValidateDescriptor @ 0x180127F50 (PssNtValidateDescriptor.c)
 * Callees:
 *     RtlDispatchException @ 0x18001E860 (RtlDispatchException.c)
 *     RtlLookupFunctionEntry @ 0x180020960 (RtlLookupFunctionEntry.c)
 *     RtlVirtualUnwind @ 0x180020E20 (RtlVirtualUnwind.c)
 *     RtlGetExtendedContextLength2 @ 0x180054D00 (RtlGetExtendedContextLength2.c)
 *     RtlInitializeExtendedContext2 @ 0x180054DF0 (RtlInitializeExtendedContext2.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     ZwRaiseException @ 0x1800A1C20 (ZwRaiseException.c)
 *     RtlpCaptureContext2 @ 0x1800A31D0 (RtlpCaptureContext2.c)
 *     RtlRestoreContext @ 0x1800A3360 (RtlRestoreContext.c)
 *     RtlpGuardSynchronizeRestorePc @ 0x1800A38D0 (RtlpGuardSynchronizeRestorePc.c)
 *     _alloca_probe @ 0x1800A3D80 (_alloca_probe.c)
 *     RtlRaiseStatus @ 0x18010F220 (RtlRaiseStatus.c)
 */

void __stdcall RtlRaiseException(PEXCEPTION_RECORD ExceptionRecord)
{
  ULONG64 v1; // rbx
  ULONG v3; // r14d
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rcx
  void *v7; // rsp
  void *v8; // rsp
  NTSTATUS v9; // ebx
  ULONG64 v10; // r14
  struct _IMAGE_RUNTIME_FUNCTION_ENTRY *v11; // rax
  EXCEPTION_RECORD *v12; // rcx
  BOOLEAN v13; // r8
  ULONG64 v14; // rbx
  struct _IMAGE_RUNTIME_FUNCTION_ENTRY *v15; // rax
  unsigned __int64 ImageBase; // [rsp+40h] [rbp+0h] BYREF
  PCONTEXT_EX ContextLength; // [rsp+48h] [rbp+8h] BYREF
  unsigned __int64 EstablisherFrame; // [rsp+50h] [rbp+10h] BYREF
  PVOID HandlerData; // [rsp+58h] [rbp+18h] BYREF
  struct _UNWIND_HISTORY_TABLE HistoryTable; // [rsp+60h] [rbp+20h] BYREF
  ULONG64 v21; // [rsp+138h] [rbp+F8h]

  ExceptionRecord->ExceptionFlags |= 0x80u;
  v1 = 0LL;
  v3 = 1048587;
  if ( !NtCurrentPeb()->BeingDebugged || ((LdrSystemDllInitBlock.MitigationOptionsMap.Map[1] >> 60) & 3) == 1 )
  {
    if ( MEMORY[0x7FFE03D8] )
    {
      v3 = 1048651;
      if ( (MEMORY[0x7FFE03EC] & 2) != 0 )
      {
        v4 = MEMORY[0x7FFE0708] | MEMORY[0x7FFE03D8] | 0x8000000000000000uLL;
        if ( ((MEMORY[0x7FFE0708] | MEMORY[0x7FFE03D8]) & 0x800LL) != 0
          && ((LdrSystemDllInitBlock.MitigationOptionsMap.Map[1] >> 60) & 3) != 1 )
        {
          v4 = (MEMORY[0x7FFE0708] | MEMORY[0x7FFE03D8]) & 0x7FFFFFFFFFFFF7FFLL | 0x8000000000000000uLL;
        }
        v1 = v4 & 0xFFFFFFFFFFF9FFFFuLL;
      }
    }
  }
  RtlGetExtendedContextLength2(v3, (PULONG)&ContextLength, v1);
  v5 = (unsigned int)ContextLength + 15LL;
  if ( v5 <= (unsigned int)ContextLength )
    v5 = 0xFFFFFFFFFFFFFF0LL;
  v6 = v5 & 0xFFFFFFFFFFFFFFF0uLL;
  v7 = alloca(v6);
  v8 = alloca(v6);
  v9 = RtlInitializeExtendedContext2((PCONTEXT)&ImageBase, v3, &ContextLength, v1);
  RtlpCaptureContext2(&ImageBase);
  v10 = v21;
  HistoryTable.Count = 0;
  HistoryTable.LowAddress = -1LL;
  HistoryTable.HighAddress = 0LL;
  *(_DWORD *)&HistoryTable.LocalHint = 0x1000000;
  v11 = RtlLookupFunctionEntry(v21, &ImageBase, &HistoryTable);
  if ( !v11 )
LABEL_22:
    RtlRaiseStatus(v9);
  RtlVirtualUnwind(0, ImageBase, v10, v11, (PCONTEXT)&ImageBase, &HandlerData, &EstablisherFrame, 0LL);
  if ( ExceptionRecord->ExceptionCode == -2147483597 )
  {
    v14 = v21;
    v15 = RtlLookupFunctionEntry(v21, &ImageBase, &HistoryTable);
    if ( v15 )
      RtlVirtualUnwind(0, ImageBase, v14, v15, (PCONTEXT)&ImageBase, &HandlerData, &EstablisherFrame, 0LL);
  }
  ExceptionRecord->ExceptionAddress = (void *)v21;
  RtlpGuardSynchronizeRestorePc(v21);
  v12 = ExceptionRecord;
  if ( NtCurrentPeb()->BeingDebugged )
  {
    v13 = 1;
LABEL_21:
    v9 = ZwRaiseException(v12, (PCONTEXT)&ImageBase, v13);
    goto LABEL_22;
  }
  if ( !RtlDispatchException(ExceptionRecord, (PCONTEXT)&ImageBase) )
  {
    v13 = 0;
    v12 = ExceptionRecord;
    goto LABEL_21;
  }
  RtlRestoreContext((PCONTEXT)&ImageBase, ExceptionRecord);
}
