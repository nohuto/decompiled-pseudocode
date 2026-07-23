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
  int v5; // eax
  unsigned __int64 v6; // rcx
  int v7; // eax
  unsigned __int64 v8; // rsi
  int v9; // eax

  if ( !ExceptionRecord )
    goto LABEL_7;
  if ( ExceptionRecord->ExceptionCode == -2147483607 )
  {
    if ( ExceptionRecord->NumberParameters )
    {
      LOBYTE(v4) = LdrControlFlowGuardEnforced();
      if ( v4 )
      {
        LOBYTE(v5) = LdrControlFlowGuardEnforcedWithExportSuppression();
        v6 = ExceptionRecord->ExceptionInformation[0];
        if ( v5 )
          LdrpValidateUserCallTargetES(v6);
        else
          LdrpValidateUserCallTarget(v6);
      }
    }
LABEL_7:
    LOBYTE(v7) = LdrControlFlowGuardEnforced();
    if ( v7 && !(unsigned int)RtlGuardIsValidStackPointer(ContextRecord->Rsp) )
      goto LABEL_9;
    goto LABEL_15;
  }
  if ( ExceptionRecord->ExceptionCode != -2147483610 )
  {
    if ( ExceptionRecord->ExceptionCode == -1073741785 )
    {
      if ( ((LdrSystemDllInitBlock.MitigationOptionsMap.Map[1] >> 60) & 3) != 1 )
        RtlGuardCheckExceptionHandler((PVOID)ContextRecord->Rip);
      goto LABEL_15;
    }
    goto LABEL_7;
  }
  v8 = ExceptionRecord->ExceptionInformation[0];
  LOBYTE(v9) = LdrControlFlowGuardEnforced();
  if ( v9 && !(unsigned int)RtlGuardIsValidStackPointer(*(_QWORD *)(v8 + 16)) )
LABEL_9:
    __fastfail(0xDu);
  if ( ((LdrSystemDllInitBlock.MitigationOptionsMap.Map[1] >> 60) & 3) != 1 )
    RtlGuardCheckLongJumpTarget(*(PVOID *)(v8 + 80), 0, 0LL);
LABEL_15:
  RtlRestoreContext(ContextRecord, ExceptionRecord);
}
