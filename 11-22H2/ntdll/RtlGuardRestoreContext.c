/*
 * XREFs of RtlGuardRestoreContext @ 0x18006DA50
 * Callers:
 *     RtlUnwindEx @ 0x180020160 (RtlUnwindEx.c)
 *     KiUserExceptionDispatcher @ 0x1800A2E70 (KiUserExceptionDispatcher.c)
 * Callees:
 *     LdrControlFlowGuardEnforcedWithExportSuppression @ 0x180021CB0 (LdrControlFlowGuardEnforcedWithExportSuppression.c)
 *     LdrControlFlowGuardEnforced @ 0x18002C570 (LdrControlFlowGuardEnforced.c)
 *     RtlGuardIsValidStackPointer @ 0x18006DB48 (RtlGuardIsValidStackPointer.c)
 *     RtlGuardCheckLongJumpTarget @ 0x18006DBC0 (RtlGuardCheckLongJumpTarget.c)
 *     RtlGuardCheckExceptionHandler @ 0x18006DCC0 (RtlGuardCheckExceptionHandler.c)
 *     LdrpValidateUserCallTarget @ 0x18008EAF0 (LdrpValidateUserCallTarget.c)
 *     LdrpValidateUserCallTargetES @ 0x18008EB40 (LdrpValidateUserCallTargetES.c)
 */

void __cdecl RtlGuardRestoreContext(PCONTEXT ContextRecord, struct _EXCEPTION_RECORD *ExceptionRecord)
{
  int v4; // eax
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rsi

  if ( !ExceptionRecord )
    goto LABEL_7;
  if ( ExceptionRecord->ExceptionCode == -2147483607 )
  {
    if ( ExceptionRecord->NumberParameters && LdrControlFlowGuardEnforced() )
    {
      LOBYTE(v4) = LdrControlFlowGuardEnforcedWithExportSuppression();
      v5 = ExceptionRecord->ExceptionInformation[0];
      if ( v4 )
        LdrpValidateUserCallTargetES(v5);
      else
        LdrpValidateUserCallTarget(v5);
    }
LABEL_7:
    if ( LdrControlFlowGuardEnforced() && !(unsigned int)RtlGuardIsValidStackPointer(ContextRecord->Rsp) )
      goto LABEL_9;
    goto LABEL_15;
  }
  if ( ExceptionRecord->ExceptionCode != -2147483610 )
  {
    if ( ExceptionRecord->ExceptionCode == -1073741785 )
    {
      if ( (((unsigned __int64)qword_1801993A8 >> 60) & 3) != 1 )
        RtlGuardCheckExceptionHandler(ContextRecord->Rip, 0LL, 0LL);
      goto LABEL_15;
    }
    goto LABEL_7;
  }
  v6 = ExceptionRecord->ExceptionInformation[0];
  if ( LdrControlFlowGuardEnforced() && !(unsigned int)RtlGuardIsValidStackPointer(*(_QWORD *)(v6 + 16)) )
LABEL_9:
    __fastfail(0xDu);
  if ( (((unsigned __int64)qword_1801993A8 >> 60) & 3) != 1 )
    RtlGuardCheckLongJumpTarget(*(_QWORD *)(v6 + 80), 0LL, 0LL);
LABEL_15:
  RtlRestoreContext(ContextRecord, ExceptionRecord);
}
