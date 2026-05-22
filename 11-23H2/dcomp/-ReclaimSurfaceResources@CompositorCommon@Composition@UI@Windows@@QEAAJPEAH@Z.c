/*
 * XREFs of ?ReclaimSurfaceResources@CompositorCommon@Composition@UI@Windows@@QEAAJPEAH@Z @ 0x18012913C
 * Callers:
 *     ?ReclaimSurfaceResources@Partner@CompositorCommon@Composition@UI@Windows@@UEAAJPEAH@Z @ 0x1801291F0 (-ReclaimSurfaceResources@Partner@CompositorCommon@Composition@UI@Windows@@UEAAJPEAH@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@U?$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@W4HolographicCompositorStatus@2345@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000FA18 (-InternalRelease@-$ComPtr@U-$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@U.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800F6E34 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$As@UIDCompositionDesktopDevicePartner@@@?$ComPtr@VCDevice@DirectComposition@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIDCompositionDesktopDevicePartner@@@WRL@Microsoft@@@Details@12@@Z @ 0x18011F510 (--$As@UIDCompositionDesktopDevicePartner@@@-$ComPtr@VCDevice@DirectComposition@@@WRL@Microsoft@@.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositorCommon::ReclaimSurfaceResources(
        Windows::UI::Composition::CompositorCommon *this,
        int *a2)
{
  int v3; // eax
  int v4; // eax
  unsigned int v5; // ebx
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = 0LL;
  v3 = Microsoft::WRL::ComPtr<DirectComposition::CDevice>::As<IDCompositionDesktopDevicePartner>(
         (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 57,
         &v9);
  if ( v3 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      2804LL,
      (__int64)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositor.cpp",
      (const char *)(unsigned int)v3,
      v7);
  v4 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v9 + 272LL))(v9, a2);
  v5 = v4;
  if ( v4 >= 0 )
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease(&v9);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xAF6,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositor.cpp",
      (const char *)(unsigned int)v4);
    Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease(&v9);
    return v5;
  }
}
