/*
 * XREFs of ?BoostUnboostSiHostProcess@WindowEventDispatcher@@AEAAX_N@Z @ 0x1804C29A4
 * Callers:
 *     ?BoostShellPriority@WindowEventDispatcher@@UEAAXW4BoostOptions@@@Z @ 0x1804C28E0 (-BoostShellPriority@WindowEventDispatcher@@UEAAXW4BoostOptions@@@Z.c)
 *     ?UnboostShellPriority@WindowEventDispatcher@@UEAAXXZ @ 0x1804CB6F0 (-UnboostShellPriority@WindowEventDispatcher@@UEAAXXZ.c)
 * Callees:
 *     ?_Log_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1803DC8C0 (-_Log_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall WindowEventDispatcher::BoostUnboostSiHostProcess(WindowEventDispatcher *this, char a2)
{
  void *v2; // rcx
  NTSTATUS v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char ProcessInformation; // [rsp+30h] [rbp+8h] BYREF

  v2 = (void *)*((_QWORD *)this + 60);
  if ( (((unsigned __int64)v2 + 1) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
  {
    ProcessInformation = a2;
    v3 = NtSetInformationProcess(v2, ProcessForegroundInformation, &ProcessInformation, 1u);
    if ( v3 < 0 )
      wil::details::in1diag3::_Log_NtStatus(
        retaddr,
        (void *)0xB18,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)v3);
  }
  else
  {
    wil::details::in1diag3::Log_Hr(
      retaddr,
      (void *)0xB0F,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)0x8000FFFFLL);
  }
}
