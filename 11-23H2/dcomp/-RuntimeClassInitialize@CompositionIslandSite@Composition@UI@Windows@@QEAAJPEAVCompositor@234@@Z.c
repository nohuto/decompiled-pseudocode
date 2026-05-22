/*
 * XREFs of ?RuntimeClassInitialize@CompositionIslandSite@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z @ 0x1800869BC
 * Callers:
 *     ?RuntimeClassInitialize@VisualIslandSite@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z @ 0x180086928 (-RuntimeClassInitialize@VisualIslandSite@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RuntimeClassInitialize@CompositionObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z @ 0x180055F60 (-RuntimeClassInitialize@CompositionObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18007EC48 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionIslandSite::RuntimeClassInitialize(
        Windows::UI::Composition::CompositionIslandSite *this,
        struct Windows::UI::Composition::Compositor *a2)
{
  int EndpointHost; // ebx
  __int64 v5; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  EndpointHost = Windows::UI::Composition::CompositionObject::RuntimeClassInitialize(this, a2);
  if ( EndpointHost < 0 )
  {
    v5 = 49LL;
  }
  else
  {
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)this + 29);
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)this + 28);
    EndpointHost = CoreUICallCreateEndpointHost(
                     *(_QWORD *)(*((_QWORD *)this + 3) + 120LL),
                     (char *)this + 224,
                     (char *)this + 232);
    if ( EndpointHost < 0 )
    {
      v5 = 52LL;
    }
    else
    {
      EndpointHost = (*(__int64 (__fastcall **)(_QWORD, __int64 (__fastcall *)(struct IUnknown *, const void *, int), Windows::UI::Composition::CompositionIslandSite *, char *))(**(_QWORD **)(*((_QWORD *)this + 3) + 120LL) + 112LL))(
                       *(_QWORD *)(*((_QWORD *)this + 3) + 120LL),
                       Windows::UI::Composition::CompositionIslandSite::EndpointProc,
                       this,
                       (char *)this + 240);
      if ( EndpointHost >= 0 )
        return 0LL;
      v5 = 55LL;
    }
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v5,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtcompositionislandsite.cpp",
    (const char *)(unsigned int)EndpointHost);
  return (unsigned int)EndpointHost;
}
