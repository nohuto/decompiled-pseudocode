/*
 * XREFs of ??$?0VActivityThreadWatcher@wil@@$0A@@?$optional@VActivityThreadWatcher@wil@@@std@@QEAA@$$QEAVActivityThreadWatcher@wil@@@Z @ 0x1805BEBB8
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::InstallForCurrentUserAsync$_ResumeCoro$1 @ 0x1801D1BE0 (winrt--Windows--Internal--Shell--implementation--MeetAndChatManager--InstallForCurr_ea_1801D1BE0.c)
 * Callees:
 *     ??0ActivityThreadWatcher@wil@@QEAA@$$QEAV01@@Z @ 0x1805C0440 (--0ActivityThreadWatcher@wil@@QEAA@$$QEAV01@@Z.c)
 */

__int64 __fastcall std::optional<wil::ActivityThreadWatcher>::optional<wil::ActivityThreadWatcher>(__int64 a1)
{
  __int64 result; // rax

  wil::ActivityThreadWatcher::ActivityThreadWatcher();
  result = a1;
  *(_BYTE *)(a1 + 72) = 1;
  return result;
}
