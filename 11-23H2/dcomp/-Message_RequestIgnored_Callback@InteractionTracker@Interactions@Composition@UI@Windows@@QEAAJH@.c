/*
 * XREFs of ?Message_RequestIgnored_Callback@InteractionTracker@Interactions@Composition@UI@Windows@@QEAAJH@Z @ 0x180139FE0
 * Callers:
 *     ?Thunk_Message_RequestIgnored_Callback_105@?$IInteractionTrackerEvent_Receive@VInteractionTracker@Interactions@Composition@UI@Windows@@@@SAJPEAXPEAPEAX@Z @ 0x18013B560 (-Thunk_Message_RequestIgnored_Callback_105@-$IInteractionTrackerEvent_Receive@VInteractionTracke.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VInteractionTrackerRequestIgnoredArgs@Interactions@Composition@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x1800B6CA0 (-InternalRelease@-$ComPtr@VInteractionTrackerRequestIgnoredArgs@Interactions@Composition@UI@Wind.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800F6E34 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Microsoft::WRL2::ContextSession::LeaveSession_Callback__lambda_ee1950c21ec3b3928c3991bef908c9b2___ @ 0x18013497C (Microsoft--WRL2--ContextSession--LeaveSession_Callback__lambda_ee1950c21ec3b3928c3991bef908c9b2_.c)
 *     ??$MakeAndInitialize@VInteractionTrackerRequestIgnoredArgs@Interactions@Composition@UI@Windows@@V12345@AEAH@Details@WRL@Microsoft@@YAJPEAPEAVInteractionTrackerRequestIgnoredArgs@Interactions@Composition@UI@Windows@@AEAH@Z @ 0x1801351D8 (--$MakeAndInitialize@VInteractionTrackerRequestIgnoredArgs@Interactions@Composition@UI@Windows@@.c)
 */

__int64 __fastcall Windows::UI::Composition::Interactions::InteractionTracker::Message_RequestIgnored_Callback(
        Windows::UI::Composition::Interactions::InteractionTracker *this,
        int a2)
{
  int v3; // eax
  _QWORD v5[5]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v7; // [rsp+50h] [rbp+8h] BYREF
  int v8; // [rsp+58h] [rbp+10h] BYREF

  v8 = a2;
  if ( *((_QWORD *)this + 42) )
  {
    v7 = 0LL;
    Microsoft::WRL::ComPtr<Windows::UI::Composition::Interactions::InteractionTrackerRequestIgnoredArgs>::InternalRelease(&v7);
    v3 = Microsoft::WRL::Details::MakeAndInitialize<Windows::UI::Composition::Interactions::InteractionTrackerRequestIgnoredArgs,Windows::UI::Composition::Interactions::InteractionTrackerRequestIgnoredArgs,int &>(
           &v7,
           &v8);
    if ( v3 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        2197LL,
        (__int64)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtinteractiontracker.cpp",
        (const char *)(unsigned int)v3,
        v5[0]);
    v5[0] = *((_QWORD *)this + 42);
    v5[2] = v7;
    v5[1] = ((unsigned __int64)this + 136) & -(__int64)(this != 0LL);
    Microsoft::WRL2::ContextSession::LeaveSession_Callback__lambda_ee1950c21ec3b3928c3991bef908c9b2___(
      *((Microsoft::WRL2::ContextSession **)this + 3),
      v5);
    Microsoft::WRL::ComPtr<Windows::UI::Composition::Interactions::InteractionTrackerRequestIgnoredArgs>::InternalRelease(&v7);
  }
  return 0LL;
}
