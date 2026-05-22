/*
 * XREFs of ?Message_InertiaBegin_Callback@InteractionTracker@Interactions@Composition@UI@Windows@@QEAAJPEBUVector3@Numerics@Foundation@5@M0M0_NM11H1@Z @ 0x180139EB8
 * Callers:
 *     ?Message_IdleBegin_Callback@InteractionTracker@Interactions@Composition@UI@Windows@@QEAAJH_N@Z @ 0x180139C5C (-Message_IdleBegin_Callback@InteractionTracker@Interactions@Composition@UI@Windows@@QEAAJH_N@Z.c)
 *     ?Thunk_Message_InertiaBegin_Callback_86@?$IInteractionTrackerEvent_Receive@VInteractionTracker@Interactions@Composition@UI@Windows@@@@SAJPEAXPEAPEAX@Z @ 0x18013B4C0 (-Thunk_Message_InertiaBegin_Callback_86@-$IInteractionTrackerEvent_Receive@VInteractionTracker@I.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800F6E34 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Microsoft::WRL2::ContextSession::LeaveSession_Callback__lambda_4896cb9dda1955bea389b731aebde0f1___ @ 0x180134754 (Microsoft--WRL2--ContextSession--LeaveSession_Callback__lambda_4896cb9dda1955bea389b731aebde0f1_.c)
 *     ??$MakeAndInitialize@VInteractionTrackerInertiaStateEnteredArgs@Interactions@Composition@UI@Windows@@V12345@AEBUVector3@Numerics@Foundation@5@AEAMAEBU6785@AEAMPEBU6785@PEAMAEA_NAEAHAEA_N@Details@WRL@Microsoft@@YAJPEAPEAVInteractionTrackerInertiaStateEnteredArgs@Interactions@Composition@UI@Windows@@AEBUVector3@Numerics@Foundation@7@AEAM12$$QEAPEBU89Foundation@7@$$QEAPEAMAEA_NAEAH5@Z @ 0x180134F9C (--$MakeAndInitialize@VInteractionTrackerInertiaStateEnteredArgs@Interactions@Composition@UI@Wind.c)
 *     ?InternalRelease@?$ComPtr@VInteractionTrackerInertiaStateEnteredArgs@Interactions@Composition@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180139B70 (-InternalRelease@-$ComPtr@VInteractionTrackerInertiaStateEnteredArgs@Interactions@Composition@UI.c)
 */

__int64 Windows::UI::Composition::Interactions::InteractionTracker::Message_InertiaBegin_Callback(
        Windows::UI::Composition::Interactions::InteractionTracker *this,
        const struct Windows::Foundation::Numerics::Vector3 *a2,
        float a3,
        const struct Windows::Foundation::Numerics::Vector3 *a4,
        float a5,
        const struct Windows::Foundation::Numerics::Vector3 *a6,
        bool a7,
        float a8,
        bool a9,
        bool a10,
        int a11,
        ...)
{
  bool v14; // cf
  float *v15; // rax
  int v16; // eax
  int v18; // [rsp+20h] [rbp-60h]
  float *v19; // [rsp+50h] [rbp-30h] BYREF
  const struct Windows::Foundation::Numerics::Vector3 *v20; // [rsp+58h] [rbp-28h] BYREF
  _QWORD v21[4]; // [rsp+60h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]
  __int64 v23; // [rsp+A0h] [rbp+20h] BYREF
  float v24; // [rsp+B0h] [rbp+30h] BYREF
  va_list va; // [rsp+F8h] [rbp+78h] BYREF

  va_start(va, a11);
  v24 = a3;
  if ( *((_QWORD *)this + 42) )
  {
    v23 = 0LL;
    v14 = a9;
    a9 = -a9;
    v15 = (float *)((unsigned __int64)&a8 & -(__int64)v14);
    v14 = a7;
    a7 = -a7;
    v19 = v15;
    v20 = (const struct Windows::Foundation::Numerics::Vector3 *)((unsigned __int64)a6 & -(__int64)v14);
    Microsoft::WRL::ComPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaStateEnteredArgs>::InternalRelease(&v23);
    v16 = Microsoft::WRL::Details::MakeAndInitialize<Windows::UI::Composition::Interactions::InteractionTrackerInertiaStateEnteredArgs,Windows::UI::Composition::Interactions::InteractionTrackerInertiaStateEnteredArgs,Windows::Foundation::Numerics::Vector3 const &,float &,Windows::Foundation::Numerics::Vector3 const &,float &,Windows::Foundation::Numerics::Vector3 const *,float *,bool &,int &,bool &>(
            &v23,
            a2,
            &v24,
            a4,
            &a5,
            &v20,
            &v19,
            &a10,
            &a11,
            (bool *)va);
    if ( v16 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        2250LL,
        (__int64)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtinteractiontracker.cpp",
        (const char *)(unsigned int)v16,
        v18);
    v21[0] = *((_QWORD *)this + 42);
    v21[2] = v23;
    v21[1] = ((unsigned __int64)this + 136) & -(__int64)(this != 0LL);
    Microsoft::WRL2::ContextSession::LeaveSession_Callback__lambda_4896cb9dda1955bea389b731aebde0f1___(
      *((Microsoft::WRL2::ContextSession **)this + 3),
      v21);
    *((_DWORD *)this + 102) = 2;
    Microsoft::WRL::ComPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaStateEnteredArgs>::InternalRelease(&v23);
  }
  return 0LL;
}
