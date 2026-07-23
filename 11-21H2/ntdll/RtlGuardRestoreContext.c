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
  int v5; // eax
  int v6; // eax
  BOOL v7; // eax
  unsigned __int64 v8; // rcx
  int v9; // eax

  if ( ExceptionRecord )
  {
    switch ( ExceptionRecord->ExceptionCode )
    {
      case 0x80000026:
        v4 = ExceptionRecord->ExceptionInformation[0];
        LOBYTE(v5) = LdrControlFlowGuardEnforced();
        if ( v5 && !RtlGuardIsValidStackPointer(*(_QWORD *)(v4 + 16)) )
          goto LABEL_19;
        if ( ((LdrSystemDllInitBlock.MitigationOptionsMap.Map[1] >> 60) & 3) != 1 )
          RtlGuardCheckLongJumpTarget(*(PVOID *)(v4 + 80), 0, 0LL);
        goto LABEL_6;
      case 0x80000029:
        if ( ExceptionRecord->NumberParameters )
        {
          LOBYTE(v6) = LdrControlFlowGuardEnforced();
          if ( v6 )
          {
            v7 = LdrControlFlowGuardEnforcedWithExportSuppression();
            v8 = ExceptionRecord->ExceptionInformation[0];
            if ( v7 )
              LdrpValidateUserCallTargetES(v8);
            else
              LdrpValidateUserCallTarget(v8);
          }
        }
        break;
      case 0xC0000027:
        if ( ((LdrSystemDllInitBlock.MitigationOptionsMap.Map[1] >> 60) & 3) != 1 )
          RtlGuardCheckExceptionHandler((PVOID)ContextRecord->Rip, 0, 0LL);
        goto LABEL_6;
    }
  }
  LOBYTE(v9) = LdrControlFlowGuardEnforced();
  if ( v9 && !RtlGuardIsValidStackPointer(ContextRecord->Rsp) )
LABEL_19:
    __fastfail(0xDu);
LABEL_6:
  RtlRestoreContext(ContextRecord, ExceptionRecord);
}
