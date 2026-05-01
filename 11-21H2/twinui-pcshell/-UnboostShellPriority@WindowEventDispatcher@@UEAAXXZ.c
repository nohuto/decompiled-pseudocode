/*
 * XREFs of ?UnboostShellPriority@WindowEventDispatcher@@UEAAXXZ @ 0x180130B60
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$ShellPriorityChanged@AEA_K@ViewManagerInteropTraceLogging@@SAXAEA_K@Z @ 0x180130D24 (--$ShellPriorityChanged@AEA_K@ViewManagerInteropTraceLogging@@SAXAEA_K@Z.c)
 *     ?BoostUnboostSiHostProcess@WindowEventDispatcher@@AEAAX_N@Z @ 0x180130E54 (-BoostUnboostSiHostProcess@WindowEventDispatcher@@AEAAX_N@Z.c)
 */

void __fastcall WindowEventDispatcher::UnboostShellPriority(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v1; // rbx
  RTL_SRWLOCK *v3; // rbx
  char *Ptr; // rax
  HWND ForegroundWindow; // rax
  HANDLE CurrentProcess; // rax
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char ProcessInformation; // [rsp+30h] [rbp+8h] BYREF
  DWORD dwProcessId; // [rsp+38h] [rbp+10h] BYREF
  RTL_SRWLOCK *v11; // [rsp+40h] [rbp+18h] BYREF

  v1 = this + 57;
  AcquireSRWLockExclusive(this + 57);
  v11 = v1;
  v3 = this + 59;
  Ptr = (char *)this[59].Ptr;
  if ( Ptr )
  {
    v3->Ptr = Ptr - 1;
    ViewManagerInteropTraceLogging::ShellPriorityChanged<unsigned __int64 &>(&this[59]);
    if ( !v3->Ptr )
    {
      ForegroundWindow = GetForegroundWindow();
      if ( !GetWindowThreadProcessId(ForegroundWindow, &dwProcessId) || dwProcessId != GetCurrentProcessId() )
      {
        ProcessInformation = 0;
        CurrentProcess = GetCurrentProcess();
        v7 = NtSetInformationProcess(CurrentProcess, ProcessForegroundInformation, &ProcessInformation, 1u) | 0x10000000;
        if ( v7 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x701,
            (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
            (const char *)(unsigned int)v7);
      }
      WindowEventDispatcher::BoostUnboostSiHostProcess((WindowEventDispatcher *)&this[-2], 0);
    }
  }
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v11);
}
