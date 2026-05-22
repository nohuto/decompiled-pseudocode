/*
 * XREFs of ?RegisterUIAEndpoint_Callback@CompositionIsland@Composition@UI@Windows@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180088900
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@W4HolographicCompositorStatus@2345@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000FA18 (-InternalRelease@-$ComPtr@U-$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@U.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18007EC48 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitialize@VUiaEndpointNotifierCallback@Composition@UI@Windows@@UIUiaEndpointNotifierCallback@@PEAVCompositionIsland@234@AEAU_GUID@@@Details@WRL@Microsoft@@YAJPEAPEAUIUiaEndpointNotifierCallback@@$$QEAPEAVCompositionIsland@Composition@UI@Windows@@AEAU_GUID@@@Z @ 0x180088A00 (--$MakeAndInitialize@VUiaEndpointNotifierCallback@Composition@UI@Windows@@UIUiaEndpointNotifierC.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800F6E34 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180113634 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall Windows::UI::Composition::CompositionIsland::RegisterUIAEndpoint_Callback(
        PTP_CALLBACK_INSTANCE Instance,
        __int64 *Context,
        PTP_WORK Work)
{
  LPVOID *v3; // rdi
  __int64 v5; // rax
  int v6; // eax
  _QWORD *v7; // rcx
  __int64 v8; // rax
  int v9; // eax
  _QWORD *v10; // rcx
  __int64 v11; // rax
  int v12; // eax
  int ppv; // [rsp+20h] [rbp-28h]
  __int128 v14; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v16; // [rsp+58h] [rbp+10h] BYREF
  __int64 v17; // [rsp+68h] [rbp+20h] BYREF

  v3 = (LPVOID *)(Context + 4);
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(Context + 4);
  if ( CoCreateInstance(&rclsid, 0LL, 1u, &GUID_ee6756df_3e4c_4f83_b686_b43a91e1d63a, v3) >= 0 )
  {
    v5 = Context[3];
    v16 = 0LL;
    v17 = v5;
    Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease(&v16);
    v6 = Microsoft::WRL::Details::MakeAndInitialize<Windows::UI::Composition::UiaEndpointNotifierCallback,IUiaEndpointNotifierCallback,Windows::UI::Composition::CompositionIsland *,_GUID &>(
           &v16,
           &v17,
           Context);
    if ( v6 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x69B,
        (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtcompositionisland.cpp",
        (const char *)(unsigned int)v6,
        ppv);
    v7 = *v3;
    v8 = *(_QWORD *)*v3;
    v14 = *(_OWORD *)Context;
    v9 = (*(__int64 (__fastcall **)(_QWORD *, __int128 *, __int64))(v8 + 24))(v7, &v14, v16);
    if ( v9 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x69F,
        (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtcompositionisland.cpp",
        (const char *)(unsigned int)v9,
        ppv);
    v10 = *v3;
    v11 = *(_QWORD *)*v3;
    v14 = *(_OWORD *)Context;
    v12 = (*(__int64 (__fastcall **)(_QWORD *, __int128 *, __int64))(v11 + 64))(v10, &v14, Context[2]);
    if ( v12 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x6A3,
        (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtcompositionisland.cpp",
        (const char *)(unsigned int)v12,
        ppv);
    Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease(&v16);
  }
}
