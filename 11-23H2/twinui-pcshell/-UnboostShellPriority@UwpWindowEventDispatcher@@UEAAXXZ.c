/*
 * XREFs of ?UnboostShellPriority@UwpWindowEventDispatcher@@UEAAXXZ @ 0x18016DB80
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?BoostUnboostSiHostProcess@UwpWindowEventDispatcher@@AEAAX_N@Z @ 0x18016DB30 (-BoostUnboostSiHostProcess@UwpWindowEventDispatcher@@AEAAX_N@Z.c)
 *     ??$ShellPriorityChanged@AEA_K@ViewManagerInteropTraceLogging@@SAXAEA_K@Z @ 0x18016DC74 (--$ShellPriorityChanged@AEA_K@ViewManagerInteropTraceLogging@@SAXAEA_K@Z.c)
 */

void __fastcall UwpWindowEventDispatcher::UnboostShellPriority(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v1; // rdi
  RTL_SRWLOCK *v3; // rbx
  char *Ptr; // rax
  HWND ForegroundWindow; // rax
  __int64 v6; // r8
  __int64 v7; // r9
  HANDLE CurrentProcess; // rax
  int v9; // eax
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char ProcessInformation; // [rsp+30h] [rbp+8h] BYREF
  DWORD dwProcessId; // [rsp+38h] [rbp+10h] BYREF

  v1 = this + 59;
  AcquireSRWLockExclusive(this + 59);
  v3 = this + 61;
  Ptr = (char *)this[61].Ptr;
  if ( Ptr )
  {
    v3->Ptr = Ptr - 1;
    ViewManagerInteropTraceLogging::ShellPriorityChanged<unsigned __int64 &>(&this[61]);
    if ( !v3->Ptr )
    {
      ForegroundWindow = GetForegroundWindow();
      if ( !GetWindowThreadProcessId(ForegroundWindow, &dwProcessId) || dwProcessId != GetCurrentProcessId() )
      {
        ProcessInformation = 0;
        CurrentProcess = GetCurrentProcess();
        v9 = NtSetInformationProcess(CurrentProcess, ProcessForegroundInformation, &ProcessInformation, 1u) | 0x10000000;
        if ( v9 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x810,
            (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
            (const char *)(unsigned int)v9);
      }
      UwpWindowEventDispatcher::BoostUnboostSiHostProcess((UwpWindowEventDispatcher *)&this[-2], 0, v6, v7, v10);
    }
  }
  if ( v1 )
    ReleaseSRWLockExclusive(v1);
}
