/*
 * XREFs of ?Message_IdleBegin_Callback@InteractionTracker@Interactions@Composition@UI@Windows@@QEAAJH_N@Z @ 0x180139C5C
 * Callers:
 *     ?Thunk_Message_IdleBegin_Callback_0@?$IInteractionTrackerEvent_Receive@VInteractionTracker@Interactions@Composition@UI@Windows@@@@SAJPEAXPEAPEAX@Z @ 0x18013B480 (-Thunk_Message_IdleBegin_Callback_0@-$IInteractionTrackerEvent_Receive@VInteractionTracker@Inter.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800F6E34 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z @ 0x180109090 (-Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z.c)
 *     Microsoft::WRL2::ContextSession::LeaveSession_Callback__lambda_96cc004b5fdcd549e7003fc98fc6a78e___ @ 0x18013480C (Microsoft--WRL2--ContextSession--LeaveSession_Callback__lambda_96cc004b5fdcd549e7003fc98fc6a78e_.c)
 *     ??$MakeAndInitialize@VInteractionTrackerIdleStateEnteredArgs@Interactions@Composition@UI@Windows@@V12345@AEAHAEA_N@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VInteractionTrackerIdleStateEnteredArgs@Interactions@Composition@UI@Windows@@@WRL@Microsoft@@@012@AEAHAEA_N@Z @ 0x180134F5C (--$MakeAndInitialize@VInteractionTrackerIdleStateEnteredArgs@Interactions@Compositi_ea_180134F5C.c)
 *     ?InternalRelease@?$ComPtr@VInteractionTrackerCustomAnimationStateEnteredArgs@Interactions@Composition@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180139B48 (-InternalRelease@-$ComPtr@VInteractionTrackerCustomAnimationStateEnteredArgs@Interactions@Compos.c)
 *     ?Message_InertiaBegin_Callback@InteractionTracker@Interactions@Composition@UI@Windows@@QEAAJPEBUVector3@Numerics@Foundation@5@M0M0_NM11H1@Z @ 0x180139EB8 (-Message_InertiaBegin_Callback@InteractionTracker@Interactions@Composition@UI@Windows@@QEAAJPEBU.c)
 *     ?UpdateScrollValues@InteractionTracker@Interactions@Composition@UI@Windows@@AEAAXMMM_N0@Z @ 0x18013C480 (-UpdateScrollValues@InteractionTracker@Interactions@Composition@UI@Windows@@AEAAXMMM_N0@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::Interactions::InteractionTracker::Message_IdleBegin_Callback(
        Windows::UI::Composition::Interactions::InteractionTracker *this,
        int a2,
        bool a3)
{
  float v3; // xmm3_4
  const struct Windows::Foundation::Numerics::Vector3 *v4; // rdi
  float v5; // xmm1_4
  float v7; // xmm2_4
  char v8; // si
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  float v13; // xmm0_4
  int v14; // eax
  unsigned int v15; // edi
  int v17; // eax
  Microsoft::WRL2::ContextSession *v18; // rcx
  int v19; // [rsp+20h] [rbp-59h]
  bool v20[8]; // [rsp+60h] [rbp-19h] BYREF
  int v21; // [rsp+68h] [rbp-11h] BYREF
  _QWORD v22[4]; // [rsp+70h] [rbp-9h] BYREF
  __int64 v23; // [rsp+90h] [rbp+17h] BYREF
  int v24; // [rsp+98h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  v3 = *((float *)this + 73);
  v4 = (Windows::UI::Composition::Interactions::InteractionTracker *)((char *)this + 256);
  v5 = *((float *)this + 64);
  v7 = *((float *)this + 65);
  v8 = a2;
  v21 = a2;
  v20[0] = a3;
  Windows::UI::Composition::Interactions::InteractionTracker::UpdateScrollValues(this, v5, v7, v3, 1, 0);
  if ( *((_QWORD *)this + 42) )
  {
    v10 = *((_DWORD *)this + 102);
    if ( v10 )
    {
      v11 = v10 - 1;
      if ( v11 )
      {
        v12 = v11 - 1;
        if ( v12 && (unsigned int)(v12 - 1) >= 2 )
          Microsoft::WRL2::FailFast::Unexpected(0LL);
      }
      else
      {
        v13 = *((float *)this + 73);
        v23 = 0LL;
        v24 = 0;
        v14 = Windows::UI::Composition::Interactions::InteractionTracker::Message_InertiaBegin_Callback(
                this,
                (const struct Windows::Foundation::Numerics::Vector3 *)&v23,
                0.0,
                v4,
                v13,
                v4,
                0,
                v13,
                0,
                0,
                v8,
                a3);
        v15 = v14;
        if ( v14 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x91D,
            (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtinteractiontracker.cpp",
            (const char *)(unsigned int)v14);
          return v15;
        }
      }
      v23 = 0LL;
      v17 = Microsoft::WRL::Details::MakeAndInitialize<Windows::UI::Composition::Interactions::InteractionTrackerIdleStateEnteredArgs,Windows::UI::Composition::Interactions::InteractionTrackerIdleStateEnteredArgs,int &,bool &>(
              &v23,
              &v21,
              v20);
      if ( v17 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          2355LL,
          (__int64)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtinteractiontracker.cpp",
          (const char *)(unsigned int)v17,
          v19);
      v22[0] = *((_QWORD *)this + 42);
      v22[1] = (char *)this + 136;
      v18 = (Microsoft::WRL2::ContextSession *)*((_QWORD *)this + 3);
      v22[2] = v23;
      Microsoft::WRL2::ContextSession::LeaveSession_Callback__lambda_96cc004b5fdcd549e7003fc98fc6a78e___(v18, v22);
      *((_DWORD *)this + 102) = 0;
      Microsoft::WRL::ComPtr<Windows::UI::Composition::Interactions::InteractionTrackerCustomAnimationStateEnteredArgs>::InternalRelease(&v23);
    }
  }
  return 0LL;
}
