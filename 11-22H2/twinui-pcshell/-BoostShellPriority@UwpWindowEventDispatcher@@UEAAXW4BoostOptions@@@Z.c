/*
 * XREFs of ?BoostShellPriority@UwpWindowEventDispatcher@@UEAAXW4BoostOptions@@@Z @ 0x18016DA80
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?BoostUnboostSiHostProcess@UwpWindowEventDispatcher@@AEAAX_N@Z @ 0x18016DB30 (-BoostUnboostSiHostProcess@UwpWindowEventDispatcher@@AEAAX_N@Z.c)
 *     ??$ShellPriorityChanged@AEA_K@ViewManagerInteropTraceLogging@@SAXAEA_K@Z @ 0x18016DC74 (--$ShellPriorityChanged@AEA_K@ViewManagerInteropTraceLogging@@SAXAEA_K@Z.c)
 */

void __fastcall UwpWindowEventDispatcher::BoostShellPriority(RTL_SRWLOCK *a1, int a2)
{
  RTL_SRWLOCK *v2; // rdi
  RTL_SRWLOCK *v5; // rcx
  HANDLE CurrentProcess; // rax
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char ProcessInformation; // [rsp+38h] [rbp+10h] BYREF

  v2 = a1 + 59;
  AcquireSRWLockExclusive(a1 + 59);
  v5 = a1 + 61;
  if ( !a2 )
    ++v5->Ptr;
  ViewManagerInteropTraceLogging::ShellPriorityChanged<unsigned __int64 &>(v5);
  ProcessInformation = 1;
  CurrentProcess = GetCurrentProcess();
  v7 = NtSetInformationProcess(CurrentProcess, ProcessForegroundInformation, &ProcessInformation, 1u) | 0x10000000;
  if ( v7 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x7F0,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
      (const char *)(unsigned int)v7);
  UwpWindowEventDispatcher::BoostUnboostSiHostProcess((UwpWindowEventDispatcher *)&a1[-2], 1);
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
}
