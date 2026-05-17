/*
 * XREFs of RtlGuardRestoreContext @ 0x180035390
 * Callers:
 *     RtlUnwindEx @ 0x180038900 (RtlUnwindEx.c)
 *     KiUserExceptionDispatcher @ 0x1800A8030 (KiUserExceptionDispatcher.c)
 * Callees:
 *     RtlGuardCheckExceptionHandler @ 0x180032BD0 (RtlGuardCheckExceptionHandler.c)
 *     RtlGuardIsValidStackPointer @ 0x180033048 (RtlGuardIsValidStackPointer.c)
 *     LdrControlFlowGuardEnforcedWithExportSuppression @ 0x1800342A8 (LdrControlFlowGuardEnforcedWithExportSuppression.c)
 *     LdrControlFlowGuardEnforced @ 0x1800342E0 (LdrControlFlowGuardEnforced.c)
 *     RtlGuardCheckLongJumpTarget @ 0x180034D40 (RtlGuardCheckLongJumpTarget.c)
 *     LdrpValidateUserCallTarget @ 0x180093BA0 (LdrpValidateUserCallTarget.c)
 *     LdrpValidateUserCallTargetES @ 0x180093BF0 (LdrpValidateUserCallTargetES.c)
 */

void __cdecl RtlGuardRestoreContext(PCONTEXT ContextRecord, struct _EXCEPTION_RECORD *ExceptionRecord)
{
  unsigned __int64 v4; // rsi
  BOOL v5; // eax
  unsigned __int64 v6; // rcx

  if ( ExceptionRecord )
  {
    switch ( ExceptionRecord->ExceptionCode )
    {
      case 0x80000026:
        v4 = ExceptionRecord->ExceptionInformation[0];
        if ( (unsigned int)LdrControlFlowGuardEnforced() && !RtlGuardIsValidStackPointer(*(_QWORD *)(v4 + 16)) )
          goto LABEL_19;
        if ( (((unsigned __int64)qword_18018F398 >> 60) & 3) != 1 )
          RtlGuardCheckLongJumpTarget(*(_QWORD *)(v4 + 80), 0, 0LL);
        goto LABEL_6;
      case 0x80000029:
        if ( ExceptionRecord->NumberParameters && (unsigned int)LdrControlFlowGuardEnforced() )
        {
          v5 = LdrControlFlowGuardEnforcedWithExportSuppression();
          v6 = ExceptionRecord->ExceptionInformation[0];
          if ( v5 )
            LdrpValidateUserCallTargetES(v6);
          else
            LdrpValidateUserCallTarget(v6);
        }
        break;
      case 0xC0000027:
        if ( (((unsigned __int64)qword_18018F398 >> 60) & 3) != 1 )
          RtlGuardCheckExceptionHandler(ContextRecord->Rip, 0, 0LL);
        goto LABEL_6;
    }
  }
  if ( (unsigned int)LdrControlFlowGuardEnforced() && !RtlGuardIsValidStackPointer(ContextRecord->Rsp) )
LABEL_19:
    __fastfail(0xDu);
LABEL_6:
  RtlRestoreContext(ContextRecord, ExceptionRecord);
}
