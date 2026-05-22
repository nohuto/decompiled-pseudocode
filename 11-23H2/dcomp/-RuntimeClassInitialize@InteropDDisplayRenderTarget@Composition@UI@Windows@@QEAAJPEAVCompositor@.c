/*
 * XREFs of ?RuntimeClassInitialize@InteropDDisplayRenderTarget@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEAXIU_LUID@@IW4DXGI_FORMAT@@W4DXGI_COLOR_SPACE_TYPE@@AEBUD2D_SIZE_U@@I@Z @ 0x18019ACBC
 * Callers:
 *     ??$MakeAndInitialize2@VInteropDDisplayRenderTarget@Composition@UI@Windows@@V1234@AEAPEAVInteropCompositor@234@AEAPEAXAEAIAEAU_LUID@@AEAIAEAW4DXGI_FORMAT@@AEAW4DXGI_COLOR_SPACE_TYPE@@AEBUD2D_SIZE_U@@AEAI@Details@WRL2@Microsoft@@YAJPEAPEAVInteropDDisplayRenderTarget@Composition@UI@Windows@@AEAPEAVInteropCompositor@456@AEAPEAXAEAIAEAU_LUID@@3AEAW4DXGI_FORMAT@@AEAW4DXGI_COLOR_SPACE_TYPE@@AEBUD2D_SIZE_U@@3@Z @ 0x18015F500 (--$MakeAndInitialize2@VInteropDDisplayRenderTarget@Composition@UI@Windows@@V1234@AEAPEAVInteropC.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RuntimeClassInitialize@ProxyObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I_N@Z @ 0x180058D30 (-RuntimeClassInitialize@ProxyObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I_N@Z.c)
 *     ?CreateProxySlot@CDevice@DirectComposition@@QEAAPEAXXZ @ 0x18005AF84 (-CreateProxySlot@CDevice@DirectComposition@@QEAAPEAXXZ.c)
 *     ?Attach@?$InteropProxyRef@UIDCompositionRenderTargetPartner@@@@QEAAXPEAUIDCompositionRenderTargetPartner@@@Z @ 0x1800A6F08 (-Attach@-$InteropProxyRef@UIDCompositionRenderTargetPartner@@@@QEAAXPEAUIDCompositionRenderTarge.c)
 *     ?Initialize@CDDisplayRenderTargetProxy@DirectComposition@@QEAAJPEAXIU_LUID@@IW4DXGI_FORMAT@@W4DXGI_COLOR_SPACE_TYPE@@AEBUD2D_SIZE_U@@I@Z @ 0x1800F2080 (-Initialize@CDDisplayRenderTargetProxy@DirectComposition@@QEAAJPEAXIU_LUID@@IW4DXGI_FORMAT@@W4DX.c)
 *     ?_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180158AB4 (-_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::InteropDDisplayRenderTarget::RuntimeClassInitialize(
        Windows::UI::Composition::InteropDDisplayRenderTarget *this,
        DirectComposition::CDevice **a2,
        void *a3,
        unsigned int a4,
        struct _LUID a5,
        unsigned int a6,
        enum DXGI_FORMAT a7,
        enum DXGI_COLOR_SPACE_TYPE a8,
        const struct D2D_SIZE_U *a9,
        unsigned int a10)
{
  int v14; // ebx
  __int64 v15; // rdx
  DirectComposition::CDDisplayRenderTargetProxy *ProxySlot; // rax
  const char *v18; // r9
  DirectComposition::CDDisplayRenderTargetProxy *v19; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v14 = Windows::UI::Composition::ProxyObject::RuntimeClassInitialize(
          this,
          (struct Windows::UI::Composition::Compositor *)a2,
          52,
          0);
  if ( v14 < 0 )
  {
    v15 = 38LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtinteropddisplayrendertarget.cpp",
      (const char *)(unsigned int)v14);
    return (unsigned int)v14;
  }
  ProxySlot = (DirectComposition::CDDisplayRenderTargetProxy *)DirectComposition::CDevice::CreateProxySlot(a2[57]);
  v19 = ProxySlot;
  if ( !ProxySlot )
    wil::details::in1diag3::_FailFast_NullAlloc(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtinteropddisplayrendertarget.cpp",
      v18);
  *((_DWORD *)ProxySlot + 3) = *((_DWORD *)this + 32);
  *((_DWORD *)ProxySlot + 2) = 1;
  *(_QWORD *)ProxySlot = &DirectComposition::CDDisplayRenderTargetProxy::`vftable';
  InteropProxyRef<IDCompositionRenderTargetPartner>::Attach((volatile __int64 *)this + 19, (volatile __int64)ProxySlot);
  v14 = DirectComposition::CDDisplayRenderTargetProxy::Initialize(v19, a3, a4, a5, a6, a7, a8, a9, a10);
  if ( v14 < 0 )
  {
    v15 = 53LL;
    goto LABEL_3;
  }
  return 0LL;
}
