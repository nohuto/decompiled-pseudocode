/*
 * XREFs of ??0CFrameApplicationPresentation@@QEAA@XZ @ 0x18002A1D0
 * Callers:
 *     ??$MakeAndInitialize@VCFrameApplicationPresentation@@V1@AEAPEBGAEAKAEA_NAEAPEAUIIAMServiceProvider@@AEAPEAUIImmersiveApplicationInternal@@@Details@WRL@Microsoft@@YAJPEAPEAVCFrameApplicationPresentation@@AEAPEBGAEAKAEA_NAEAPEAUIIAMServiceProvider@@AEAPEAUIImmersiveApplicationInternal@@@Z @ 0x180029CD8 (--$MakeAndInitialize@VCFrameApplicationPresentation@@V1@AEAPEBGAEAKAEA_NAEAPEAUIIAMServiceProvid.c)
 * Callees:
 *     ??0?$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18002A6AC (--0-$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_P_ea_18002A6AC.c)
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x1800C9020 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
CFrameApplicationPresentation *__fastcall CFrameApplicationPresentation::CFrameApplicationPresentation(
        CFrameApplicationPresentation *this)
{
  _QWORD *v2; // rbx

  v2 = (_QWORD *)((char *)this + 8);
  Microsoft::WRL::FtmBase::FtmBase((CFrameApplicationPresentation *)((char *)this + 8));
  *((_DWORD *)this + 11) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IApplicationPresentationLayer,Microsoft::WRL::FtmBase>::`vftable'{for `IApplicationPresentationLayer'};
  *v2 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IApplicationPresentationLayer,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &CFrameApplicationPresentation::`vftable'{for `IApplicationPresentationLayer'};
  *v2 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IApplicationPresentationLayer,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *((_DWORD *)this + 12) = SHTaskPoolGetUniqueContext();
  *((_WORD *)this + 26) = 0;
  *((_BYTE *)this + 54) = 0;
  *((_DWORD *)this + 14) = 0;
  *((_DWORD *)this + 15) = -1;
  *((_QWORD *)this + 8) = (char *)this + 80;
  *((_QWORD *)this + 9) = (char *)this + 88;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_BYTE *)this + 96) = 1;
  *((_QWORD *)this + 13) = (char *)this + 80;
  *((_QWORD *)this + 14) = *((_QWORD *)this + 9);
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *(_OWORD *)((char *)this + 152) = 0LL;
  *(_QWORD *)((char *)this + 212) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  wil::ActivityBase<CAppManagerLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>((CFrameApplicationPresentation *)((char *)this + 232));
  *((_QWORD *)this + 29) = &CFramePresentationTelemetry::SplashScreenSuppressed::`vftable';
  *((_BYTE *)this + 552) = 1;
  *((_QWORD *)this + 70) = 1LL;
  *((_QWORD *)this + 71) = 0LL;
  *((_QWORD *)this + 72) = 0LL;
  *((_QWORD *)this + 73) = 0LL;
  *((_WORD *)this + 296) = 0;
  *((_DWORD *)this + 149) = 0;
  *((_BYTE *)this + 600) = 1;
  *((_QWORD *)this + 76) = 0LL;
  *((_QWORD *)this + 77) = 0LL;
  *((_QWORD *)this + 78) = 0LL;
  *((_QWORD *)this + 80) = 0LL;
  SetRectEmpty((LPRECT)((char *)this + 136));
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 3LL;
  *((_DWORD *)this + 52) = 0;
  return this;
}
