/*
 * XREFs of ??$?0VActivityThreadWatcher@wil@@$0A@@?$optional@VActivityThreadWatcher@wil@@@std@@QEAA@$$QEAVActivityThreadWatcher@wil@@@Z @ 0x1806AEB78
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::InstallForCurrentUserAsync$_ResumeCoro$1 @ 0x180254250 (winrt--Windows--Internal--Shell--implementation--MeetAndChatManager--InstallForCurr_ea_180254250.c)
 * Callees:
 *     ??0ActivityThreadWatcher@wil@@QEAA@$$QEAV01@@Z @ 0x1802E9B80 (--0ActivityThreadWatcher@wil@@QEAA@$$QEAV01@@Z.c)
 */

__int64 __fastcall std::optional<wil::ActivityThreadWatcher>::optional<wil::ActivityThreadWatcher>(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  wil::ActivityThreadWatcher::ActivityThreadWatcher(a1, a2);
  result = a1;
  *(_BYTE *)(a1 + 72) = 1;
  return result;
}
