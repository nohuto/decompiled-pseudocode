/*
 * XREFs of ?Message_ScrollValuesChanged_Callback@InteractionTracker@Interactions@Composition@UI@Windows@@QEAAJPEBUVector3@Numerics@Foundation@5@MH@Z @ 0x1800B6CC6
 * Callers:
 *     ?Thunk_Message_ScrollValuesChanged_Callback_79@?$IInteractionTrackerEvent_Receive@VInteractionTracker@Interactions@Composition@UI@Windows@@@@SAJPEAXPEAPEAX@Z @ 0x1800B6E60 (-Thunk_Message_ScrollValuesChanged_Callback_79@-$IInteractionTrackerEvent_Receive@VInteractionTr.c)
 * Callees:
 *     Microsoft::WRL2::ContextSession::LeaveSession_Callback__lambda_98d6ddd492b07c54c34c6a3c3744782e___ @ 0x1800B6954 (Microsoft--WRL2--ContextSession--LeaveSession_Callback__lambda_98d6ddd492b07c54c34c6a3c3744782e_.c)
 *     ??$MakeAndInitialize@VInteractionTrackerValuesChangedArgs@Interactions@Composition@UI@Windows@@V12345@AEBUVector3@Numerics@Foundation@5@AEAMAEAH@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VInteractionTrackerValuesChangedArgs@Interactions@Composition@UI@Windows@@@WRL@Microsoft@@@012@AEBUVector3@Numerics@Foundation@Windows@@AEAMAEAH@Z @ 0x1800B6B02 (--$MakeAndInitialize@VInteractionTrackerValuesChangedArgs@Interactions@Composition@_ea_1800B6B02.c)
 *     ?InternalRelease@?$ComPtr@VInteractionTrackerRequestIgnoredArgs@Interactions@Composition@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x1800B6CA0 (-InternalRelease@-$ComPtr@VInteractionTrackerRequestIgnoredArgs@Interactions@Composition@UI@Wind.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800F6E34 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::Interactions::InteractionTracker::Message_ScrollValuesChanged_Callback(
        Windows::UI::Composition::Interactions::InteractionTracker *this,
        const struct Windows::Foundation::Numerics::Vector3 *a2,
        float a3,
        int a4)
{
  bool v4; // zf
  int v6; // xmm1_4
  int v7; // eax
  Microsoft::WRL2::ContextSession *v8; // rcx
  _QWORD v10[4]; // [rsp+20h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+8h]
  __int64 v12; // [rsp+50h] [rbp+10h] BYREF
  float v13; // [rsp+60h] [rbp+20h] BYREF
  int v14; // [rsp+68h] [rbp+28h] BYREF

  v14 = a4;
  v13 = a3;
  v4 = *((_QWORD *)this + 42) == 0LL;
  v6 = *((_DWORD *)a2 + 1);
  *((_DWORD *)this + 64) = *(_DWORD *)a2;
  *((_DWORD *)this + 65) = v6;
  *((float *)this + 73) = a3;
  if ( !v4 )
  {
    v12 = 0LL;
    v7 = Microsoft::WRL::Details::MakeAndInitialize<Windows::UI::Composition::Interactions::InteractionTrackerValuesChangedArgs,Windows::UI::Composition::Interactions::InteractionTrackerValuesChangedArgs,Windows::Foundation::Numerics::Vector3 const &,float &,int &>(
           &v12,
           (__int64)a2,
           (int *)&v13,
           &v14);
    if ( v7 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x872,
        (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtinteractiontracker.cpp",
        (const char *)(unsigned int)v7,
        v10[0]);
    v10[0] = *((_QWORD *)this + 42);
    v10[2] = v12;
    v8 = (Microsoft::WRL2::ContextSession *)*((_QWORD *)this + 3);
    v10[1] = ((unsigned __int64)this + 136) & -(__int64)(this != 0LL);
    Microsoft::WRL2::ContextSession::LeaveSession_Callback__lambda_98d6ddd492b07c54c34c6a3c3744782e___(v8, v10);
    Microsoft::WRL::ComPtr<Windows::UI::Composition::Interactions::InteractionTrackerRequestIgnoredArgs>::InternalRelease(&v12);
  }
  return 0LL;
}
