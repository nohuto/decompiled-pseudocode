/*
 * XREFs of RtlGuardRestoreContext @ 0x140340514
 * Callers:
 *     RtlUnwindEx @ 0x1402A4FD0 (RtlUnwindEx.c)
 * Callees:
 *     RtlpControlFlowGuardEnforced @ 0x140340588 (RtlpControlFlowGuardEnforced.c)
 *     RtlPcToFileHeader @ 0x1403C4220 (RtlPcToFileHeader.c)
 *     bsearch_s @ 0x1403DA0F0 (bsearch_s.c)
 *     RtlRestoreContext @ 0x140429660 (RtlRestoreContext.c)
 *     RtlFailFast2 @ 0x14042A580 (RtlFailFast2.c)
 *     RtlGuardCheckLongJumpTarget @ 0x1405B2458 (RtlGuardCheckLongJumpTarget.c)
 *     LdrImageDirectoryEntryToLoadConfig @ 0x1407D4898 (LdrImageDirectoryEntryToLoadConfig.c)
 */

void __fastcall RtlGuardRestoreContext(PCONTEXT ContextRecord, _EXCEPTION_RECORD *ExceptionRecord, BOOL *a3)
{
  void *Rip; // rsi
  PVOID v6; // rdi
  __int64 Config; // rax
  __int64 v8; // rdx
  rsize_t v9; // r8
  unsigned int v10; // eax
  int Key; // [rsp+58h] [rbp+10h] BYREF
  PVOID BaseOfImage; // [rsp+60h] [rbp+18h] BYREF

  if ( ExceptionRecord )
  {
    if ( ExceptionRecord->ExceptionCode == -2147483610 )
    {
      if ( !(_BYTE)KiKernelCetEnabled )
        RtlGuardCheckLongJumpTarget(
          *(PVOID *)(ExceptionRecord->ExceptionInformation[0] + 80),
          (BOOL)ExceptionRecord,
          a3);
    }
    else if ( ExceptionRecord->ExceptionCode == -1073741785 && !(_BYTE)KiKernelCetEnabled )
    {
      Rip = (void *)ContextRecord->Rip;
      BaseOfImage = 0LL;
      if ( (unsigned int)RtlpControlFlowGuardEnforced() )
      {
        RtlPcToFileHeader(Rip, &BaseOfImage);
        v6 = BaseOfImage;
        if ( BaseOfImage )
        {
          Config = LdrImageDirectoryEntryToLoadConfig(BaseOfImage);
          v8 = Config;
          if ( Config )
          {
            if ( *(_DWORD *)Config >= 0x118u
              && (*(_DWORD *)(Config + 144) & 0x400000) != 0
              && *(_QWORD *)(Config + 264) > (unsigned __int64)v6 )
            {
              Key = (_DWORD)Rip - (_DWORD)v6;
              v9 = *(_QWORD *)(Config + 272);
              v10 = (*(_DWORD *)(Config + 144) >> 28) + 4;
              if ( !v9 || !bsearch_s(&Key, *(const void **)(v8 + 264), v9, v10, RtlpTargetCompare, 0LL) )
                RtlFailFast2(38LL, Rip);
            }
          }
        }
      }
    }
  }
  RtlRestoreContext(ContextRecord, ExceptionRecord);
}
