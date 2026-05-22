/*
 * XREFs of ?NotifyEdgyDetected_Callback@EdgyExperienceSource@Internal@Interactions@Composition@UI@Windows@@UEAAXPEBUEdgyDetectedParams@@@Z @ 0x1801313D0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@W4HolographicCompositorStatus@2345@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000FA18 (-InternalRelease@-$ComPtr@U-$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@U.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800F6E34 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Microsoft::WRL2::ContextSession::LeaveSession_Callback__lambda_c8754ad6eec6c6d763ef76a998a36e22___ @ 0x1801309FC (Microsoft--WRL2--ContextSession--LeaveSession_Callback__lambda_c8754ad6eec6c6d763ef76a998a36e22_.c)
 *     ??$MakeAndInitialize@VEdgyDetectedEventArgs@Internal@Interactions@Composition@UI@Windows@@V123456@PEAUHSTRING__@@AEAPEBUEdgyDetectedParams@@@Details@WRL@Microsoft@@YAJPEAPEAVEdgyDetectedEventArgs@Internal@Interactions@Composition@UI@Windows@@$$QEAPEAUHSTRING__@@AEAPEBUEdgyDetectedParams@@@Z @ 0x180130B88 (--$MakeAndInitialize@VEdgyDetectedEventArgs@Internal@Interactions@Composition@UI@Windows@@V12345.c)
 */

void __fastcall Windows::UI::Composition::Interactions::Internal::EdgyExperienceSource::NotifyEdgyDetected_Callback(
        Windows::UI::Composition::Interactions::Internal::EdgyExperienceSource *this,
        const struct EdgyDetectedParams *a2)
{
  __int64 v2; // rax
  int v4; // eax
  Microsoft::WRL2::ContextSession *v5; // rcx
  __int64 v6[4]; // [rsp+20h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+8h]
  __int64 v8; // [rsp+50h] [rbp+10h] BYREF
  const struct EdgyDetectedParams *v9; // [rsp+58h] [rbp+18h] BYREF
  __int64 v10; // [rsp+60h] [rbp+20h] BYREF

  v9 = a2;
  v2 = *((_QWORD *)this + 3);
  v8 = 0LL;
  v10 = v2;
  Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease(&v8);
  v4 = Microsoft::WRL::Details::MakeAndInitialize<Windows::UI::Composition::Interactions::Internal::EdgyDetectedEventArgs,Windows::UI::Composition::Interactions::Internal::EdgyDetectedEventArgs,HSTRING__ *,EdgyDetectedParams const * &>(
         &v8,
         &v10,
         &v9);
  if ( v4 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      378LL,
      (__int64)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtedgyexperiencesource.cpp",
      (const char *)(unsigned int)v4,
      v6[0]);
  v6[0] = (__int64)this + 32;
  v6[1] = ((unsigned __int64)this + 8) & -(__int64)(this != (Windows::UI::Composition::Interactions::Internal::EdgyExperienceSource *)288);
  v5 = (Microsoft::WRL2::ContextSession *)*((_QWORD *)this - 33);
  v6[2] = v8;
  Microsoft::WRL2::ContextSession::LeaveSession_Callback__lambda_c8754ad6eec6c6d763ef76a998a36e22___(v5, v6);
  Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease(&v8);
}
