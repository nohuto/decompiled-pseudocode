/*
 * XREFs of ?Message_InContactBegin_Callback@InteractionTracker@Interactions@Composition@UI@Windows@@QEAAJH_N@Z @ 0x180139DF4
 * Callers:
 *     ?Thunk_Message_InContactBegin_Callback_0@?$IInteractionTrackerEvent_Receive@VInteractionTracker@Interactions@Composition@UI@Windows@@@@SAJPEAXPEAPEAX@Z @ 0x18013B4A0 (-Thunk_Message_InContactBegin_Callback_0@-$IInteractionTrackerEvent_Receive@VInteractionTracker@.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800F6E34 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Microsoft::WRL2::ContextSession::LeaveSession_Callback__lambda_387b55a7ec4edad5ab708ff3a47c7fe2___ @ 0x18013469C (Microsoft--WRL2--ContextSession--LeaveSession_Callback__lambda_387b55a7ec4edad5ab708ff3a47c7fe2_.c)
 *     ??$MakeAndInitialize@VInteractionTrackerInteractingStateEnteredArgs@Interactions@Composition@UI@Windows@@V12345@AEAHAEA_N@Details@WRL@Microsoft@@YAJPEAPEAVInteractionTrackerInteractingStateEnteredArgs@Interactions@Composition@UI@Windows@@AEAHAEA_N@Z @ 0x180135104 (--$MakeAndInitialize@VInteractionTrackerInteractingStateEnteredArgs@Interactions@Composition@UI@.c)
 *     ?InternalRelease@?$ComPtr@VInteractionTrackerCustomAnimationStateEnteredArgs@Interactions@Composition@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180139B48 (-InternalRelease@-$ComPtr@VInteractionTrackerCustomAnimationStateEnteredArgs@Interactions@Compos.c)
 */

__int64 __fastcall Windows::UI::Composition::Interactions::InteractionTracker::Message_InContactBegin_Callback(
        Windows::UI::Composition::Interactions::InteractionTracker *this,
        int a2,
        char a3)
{
  int v4; // eax
  _QWORD v6[4]; // [rsp+20h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+8h]
  __int64 v8; // [rsp+50h] [rbp+10h] BYREF
  int v9; // [rsp+58h] [rbp+18h] BYREF
  char v10; // [rsp+60h] [rbp+20h] BYREF

  v10 = a3;
  v9 = a2;
  if ( *((_QWORD *)this + 42) )
  {
    v8 = 0LL;
    Microsoft::WRL::ComPtr<Windows::UI::Composition::Interactions::InteractionTrackerCustomAnimationStateEnteredArgs>::InternalRelease(&v8);
    v4 = Microsoft::WRL::Details::MakeAndInitialize<Windows::UI::Composition::Interactions::InteractionTrackerInteractingStateEnteredArgs,Windows::UI::Composition::Interactions::InteractionTrackerInteractingStateEnteredArgs,int &,bool &>(
           &v8,
           &v9,
           &v10);
    if ( v4 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        2395LL,
        (__int64)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtinteractiontracker.cpp",
        (const char *)(unsigned int)v4,
        v6[0]);
    v6[0] = *((_QWORD *)this + 42);
    v6[2] = v8;
    v6[1] = ((unsigned __int64)this + 136) & -(__int64)(this != 0LL);
    Microsoft::WRL2::ContextSession::LeaveSession_Callback__lambda_387b55a7ec4edad5ab708ff3a47c7fe2___(
      *((Microsoft::WRL2::ContextSession **)this + 3),
      v6);
    *((_DWORD *)this + 102) = 1;
    Microsoft::WRL::ComPtr<Windows::UI::Composition::Interactions::InteractionTrackerCustomAnimationStateEnteredArgs>::InternalRelease(&v8);
  }
  return 0LL;
}
