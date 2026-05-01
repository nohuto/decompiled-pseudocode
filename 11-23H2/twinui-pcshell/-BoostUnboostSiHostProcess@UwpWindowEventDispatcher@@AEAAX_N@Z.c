/*
 * XREFs of ?BoostUnboostSiHostProcess@UwpWindowEventDispatcher@@AEAAX_N@Z @ 0x18016DB30
 * Callers:
 *     ?BoostShellPriority@UwpWindowEventDispatcher@@UEAAXW4BoostOptions@@@Z @ 0x18016DA80 (-BoostShellPriority@UwpWindowEventDispatcher@@UEAAXW4BoostOptions@@@Z.c)
 *     ?UnboostShellPriority@UwpWindowEventDispatcher@@UEAAXXZ @ 0x18016DB80 (-UnboostShellPriority@UwpWindowEventDispatcher@@UEAAXXZ.c)
 * Callees:
 *     ?_Log_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1803DC8C0 (-_Log_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall UwpWindowEventDispatcher::BoostUnboostSiHostProcess(
        UwpWindowEventDispatcher *this,
        char a2,
        __int64 a3,
        __int64 a4,
        int a5)
{
  void *v5; // rcx
  NTSTATUS v6; // eax
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char ProcessInformation; // [rsp+30h] [rbp+8h] BYREF

  v5 = (void *)*((_QWORD *)this + 62);
  if ( (((unsigned __int64)v5 + 1) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
  {
    ProcessInformation = a2;
    v6 = NtSetInformationProcess(v5, ProcessForegroundInformation, &ProcessInformation, 1u);
    if ( v6 < 0 )
      wil::details::in1diag3::_Log_NtStatus(
        retaddr,
        (void *)0xC63,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)(unsigned int)v6,
        v7);
  }
  else
  {
    wil::details::in1diag3::Log_Hr(
      retaddr,
      (void *)0xC5A,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
      (const char *)0x8000FFFFLL,
      a5);
  }
}
