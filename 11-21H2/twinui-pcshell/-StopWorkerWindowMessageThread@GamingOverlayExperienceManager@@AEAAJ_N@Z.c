/*
 * XREFs of ?StopWorkerWindowMessageThread@GamingOverlayExperienceManager@@AEAAJ_N@Z @ 0x18033A860
 * Callers:
 *     ?remove_TargetWindowMoved@GamingOverlayExperienceManager@@UEAAJUEventRegistrationToken@@@Z @ 0x180187710 (-remove_TargetWindowMoved@GamingOverlayExperienceManager@@UEAAJUEventRegistrationToken@@@Z.c)
 *     ??1GamingOverlayExperienceManager@@EEAA@XZ @ 0x18032C344 (--1GamingOverlayExperienceManager@@EEAA@XZ.c)
 *     ?StartWorkerWindowMessageThread@GamingOverlayExperienceManager@@AEAAJXZ @ 0x18033A090 (-StartWorkerWindowMessageThread@GamingOverlayExperienceManager@@AEAAJXZ.c)
 *     ?WinEventProc@GamingOverlayExperienceManager@@AEAAXPEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@Z @ 0x18033B0E4 (-WinEventProc@GamingOverlayExperienceManager@@AEAAXPEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@Z.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800C8D08 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18019033C (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Log_GetLastErrorIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBD_N1ZZ @ 0x180334950 (-Log_GetLastErrorIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBD_N1ZZ.c)
 */

__int64 __fastcall GamingOverlayExperienceManager::StopWorkerWindowMessageThread(
        GamingOverlayExperienceManager *this,
        char a2)
{
  void *v4; // rcx
  const char *v5; // r9
  void *v6; // rcx
  char *v8; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = (void *)*((_QWORD *)this + 74);
  if ( v4 )
  {
    if ( !SetEvent(v4) )
      wil::details::in1diag3::_Log_GetLastError(
        retaddr,
        (void *)0x589,
        (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
        v5);
    *((_QWORD *)this + 74) = 0LL;
  }
  v6 = (void *)*((_QWORD *)this + 60);
  if ( v6 && a2 )
  {
    LODWORD(v8) = WaitForSingleObject(v6, 0x1388u);
    wil::details::in1diag3::Log_GetLastErrorIfMsg(
      retaddr,
      (void *)0x58F,
      (__int64)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
      (const char *)((_DWORD)v8 != 0),
      (unsigned __int64)"StopWorkerWindowMessageThread Wait Result: 0x%08X",
      v8);
  }
  *((_QWORD *)this + 56) = 0LL;
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    (void **)this + 60,
    0LL);
  return 0LL;
}
