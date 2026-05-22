/*
 * XREFs of ?OfferSurfaceResources@CompositorCommon@Composition@UI@Windows@@QEAAJXZ @ 0x1801285B4
 * Callers:
 *     ?OfferSurfaceResources@Partner@CompositorCommon@Composition@UI@Windows@@UEAAJXZ @ 0x180128660 (-OfferSurfaceResources@Partner@CompositorCommon@Composition@UI@Windows@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@U?$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@W4HolographicCompositorStatus@2345@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000FA18 (-InternalRelease@-$ComPtr@U-$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@U.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800F6E34 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$As@UIDCompositionDesktopDevicePartner@@@?$ComPtr@VCDevice@DirectComposition@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIDCompositionDesktopDevicePartner@@@WRL@Microsoft@@@Details@12@@Z @ 0x18011F510 (--$As@UIDCompositionDesktopDevicePartner@@@-$ComPtr@VCDevice@DirectComposition@@@WRL@Microsoft@@.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositorCommon::OfferSurfaceResources(
        Windows::UI::Composition::CompositorCommon *this)
{
  int v1; // eax
  int v2; // eax
  unsigned int v3; // ebx
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = 0LL;
  v1 = Microsoft::WRL::ComPtr<DirectComposition::CDevice>::As<IDCompositionDesktopDevicePartner>(
         (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 57,
         &v7);
  if ( v1 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      2784LL,
      (__int64)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositor.cpp",
      (const char *)(unsigned int)v1,
      v5);
  v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 264LL))(v7);
  v3 = v2;
  if ( v2 >= 0 )
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease(&v7);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xAE2,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositor.cpp",
      (const char *)(unsigned int)v2);
    Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease(&v7);
    return v3;
  }
}
