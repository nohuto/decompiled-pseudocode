/*
 * XREFs of RtlRaiseException @ 0x180032D00
 * Callers:
 *     TpCheckTerminateWorker @ 0x180004900 (TpCheckTerminateWorker.c)
 *     vDbgPrintExWithPrefixInternal @ 0x180006A08 (vDbgPrintExWithPrefixInternal.c)
 *     TppCallbackEpilog @ 0x180017620 (TppCallbackEpilog.c)
 *     TppCallbackCheckThreadAfterCallback @ 0x180017958 (TppCallbackCheckThreadAfterCallback.c)
 *     RtlpReAllocateHeapInternal @ 0x1800245B8 (RtlpReAllocateHeapInternal.c)
 *     LdrpLoadDependentModuleInternal @ 0x18003D8F0 (LdrpLoadDependentModuleInternal.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x18003F140 (RtlDeactivateActivationContextUnsafeFast.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x18003FEF0 (RtlActivateActivationContextUnsafeFast.c)
 *     RtlGetActiveActivationContext @ 0x180050D30 (RtlGetActiveActivationContext.c)
 *     RtlpAllocateActivationContextStackFrame @ 0x18006890C (RtlpAllocateActivationContextStackFrame.c)
 *     RtlpTpImpersonate @ 0x1800714A0 (RtlpTpImpersonate.c)
 *     RtlDeactivateActivationContext @ 0x180079040 (RtlDeactivateActivationContext.c)
 *     RtlpFreeActivationContextStackFrame @ 0x18007913C (RtlpFreeActivationContextStackFrame.c)
 *     PssNtValidateDescriptor @ 0x18008C290 (PssNtValidateDescriptor.c)
 *     RaiseException @ 0x18009C320 (RaiseException.c)
 *     KiRaiseUserExceptionDispatcher @ 0x1800A80A0 (KiRaiseUserExceptionDispatcher.c)
 *     RtlRaiseNoncontinuableException @ 0x1800A8AA0 (RtlRaiseNoncontinuableException.c)
 *     RtlRaiseExceptionForReturnAddressHijack @ 0x1800A8EE0 (RtlRaiseExceptionForReturnAddressHijack.c)
 *     RtlpPossibleDeadlock @ 0x1800F3D74 (RtlpPossibleDeadlock.c)
 *     RtlpAllocateHeapRaiseException @ 0x1801028EC (RtlpAllocateHeapRaiseException.c)
 *     RtlReportFatalFailure @ 0x18010C0D0 (RtlReportFatalFailure.c)
 *     TppRaiseHandleStatus @ 0x1801242E0 (TppRaiseHandleStatus.c)
 *     TppRaiseInvalidParameter @ 0x180124388 (TppRaiseInvalidParameter.c)
 * Callees:
 *     RtlDispatchException @ 0x180035990 (RtlDispatchException.c)
 *     RtlInitializeExtendedContext2 @ 0x180036510 (RtlInitializeExtendedContext2.c)
 *     RtlGetExtendedContextLength2 @ 0x1800366B0 (RtlGetExtendedContextLength2.c)
 *     RtlVirtualUnwind @ 0x180039050 (RtlVirtualUnwind.c)
 *     RtlLookupFunctionEntry @ 0x180039DA0 (RtlLookupFunctionEntry.c)
 *     RtlRaiseStatus @ 0x18008FDF0 (RtlRaiseStatus.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     ZwRaiseException @ 0x1800A6E40 (ZwRaiseException.c)
 *     RtlpCaptureContext2 @ 0x1800A8390 (RtlpCaptureContext2.c)
 *     RtlRestoreContext @ 0x1800A8520 (RtlRestoreContext.c)
 *     RtlpGuardSynchronizeRestorePc @ 0x1800A8A90 (RtlpGuardSynchronizeRestorePc.c)
 *     _alloca_probe @ 0x1800A8F40 (_alloca_probe.c)
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
  ULONG64 v12; // rbx
  struct _IMAGE_RUNTIME_FUNCTION_ENTRY *v13; // rax
  EXCEPTION_RECORD *v14; // rcx
  BOOLEAN v15; // r8
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
        v4 = MEMORY[0x7FFE03D8] | MEMORY[0x7FFE0708] | 0x8000000000000000uLL;
        if ( ((MEMORY[0x7FFE03D8] | MEMORY[0x7FFE0708]) & 0x800LL) != 0
          && ((LdrSystemDllInitBlock.MitigationOptionsMap.Map[1] >> 60) & 3) != 1 )
        {
          v4 = (MEMORY[0x7FFE03D8] | MEMORY[0x7FFE0708]) & 0x7FFFFFFFFFFFF7FFLL | 0x8000000000000000uLL;
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
LABEL_21:
    RtlRaiseStatus(v9);
  RtlVirtualUnwind(0, ImageBase, v10, v11, (PCONTEXT)&ImageBase, &HandlerData, &EstablisherFrame, 0LL);
  if ( ExceptionRecord->ExceptionCode == -2147483597 )
  {
    v12 = v21;
    v13 = RtlLookupFunctionEntry(v21, &ImageBase, &HistoryTable);
    if ( v13 )
      RtlVirtualUnwind(0, ImageBase, v12, v13, (PCONTEXT)&ImageBase, &HandlerData, &EstablisherFrame, 0LL);
  }
  ExceptionRecord->ExceptionAddress = (void *)v21;
  RtlpGuardSynchronizeRestorePc(v21);
  v14 = ExceptionRecord;
  if ( NtCurrentPeb()->BeingDebugged )
  {
    v15 = 1;
    goto LABEL_20;
  }
  if ( !RtlDispatchException(ExceptionRecord, (PCONTEXT)&ImageBase) )
  {
    v15 = 0;
    v14 = ExceptionRecord;
LABEL_20:
    v9 = ZwRaiseException(v14, (PCONTEXT)&ImageBase, v15);
    goto LABEL_21;
  }
  RtlRestoreContext((PCONTEXT)&ImageBase, ExceptionRecord);
}
