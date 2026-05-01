/*
 * XREFs of ?_Log_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1803DC8C0
 * Callers:
 *     ?UpdateNexusEnabledWnf@GamingOverlayExperienceManager@@AEAAX_N@Z @ 0x1800A4148 (-UpdateNexusEnabledWnf@GamingOverlayExperienceManager@@AEAAX_N@Z.c)
 *     ?BoostUnboostSiHostProcess@UwpWindowEventDispatcher@@AEAAX_N@Z @ 0x18016DB30 (-BoostUnboostSiHostProcess@UwpWindowEventDispatcher@@AEAAX_N@Z.c)
 *     ?OnGameModeEnableChangeTask@BroadcastDVRComponent@@AEAAXPEAUHWND__@@_N@Z @ 0x1803DA03C (-OnGameModeEnableChangeTask@BroadcastDVRComponent@@AEAAXPEAUHWND__@@_N@Z.c)
 *     ?BoostUnboostSiHostProcess@WindowEventDispatcher@@AEAAX_N@Z @ 0x1804C29A4 (-BoostUnboostSiHostProcess@WindowEventDispatcher@@AEAAX_N@Z.c)
 * Callees:
 *     ??$ReportFailure_NtStatus@$01@details@wil@@YAJPEAXIPEBD110J@Z @ 0x1803D2338 (--$ReportFailure_NtStatus@$01@details@wil@@YAJPEAXIPEBD110J@Z.c)
 */

void __fastcall wil::details::in1diag3::_Log_NtStatus(wil::details::in1diag3 *this, void *a2, int a3, const char *a4)
{
  int v4; // [rsp+20h] [rbp-28h]
  wil::details *v5; // [rsp+30h] [rbp-18h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  LODWORD(v5) = (_DWORD)a4;
  wil::details::ReportFailure_NtStatus<2>((int)this, (int)a2, a3, (__int64)a4, v4, retaddr, v5);
}
