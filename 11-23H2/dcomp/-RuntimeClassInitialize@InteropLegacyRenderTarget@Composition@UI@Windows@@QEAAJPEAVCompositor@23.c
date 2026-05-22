/*
 * XREFs of ?RuntimeClassInitialize@InteropLegacyRenderTarget@Composition@UI@Windows@@QEAAJPEAVCompositor@234@U_LUID@@IW4DXGI_FORMAT@@W4DXGI_COLOR_SPACE_TYPE@@I_N@Z @ 0x1800926B8
 * Callers:
 *     ??$MakeAndInitialize2@VInteropLegacyRenderTarget@Composition@UI@Windows@@V1234@AEAPEAVInteropCompositor@234@AEAU_LUID@@AEAIAEAW4DXGI_FORMAT@@AEAW4DXGI_COLOR_SPACE_TYPE@@AEAIAEA_N@Details@WRL2@Microsoft@@YAJPEAPEAVInteropLegacyRenderTarget@Composition@UI@Windows@@AEAPEAVInteropCompositor@456@AEAU_LUID@@AEAIAEAW4DXGI_FORMAT@@AEAW4DXGI_COLOR_SPACE_TYPE@@3AEA_N@Z @ 0x180092574 (--$MakeAndInitialize2@VInteropLegacyRenderTarget@Composition@UI@Windows@@V1234@AEAPEAVInteropCom.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RuntimeClassInitialize@ProxyObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I_N@Z @ 0x180058D30 (-RuntimeClassInitialize@ProxyObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I_N@Z.c)
 *     ?CreateProxySlot@CDevice@DirectComposition@@QEAAPEAXXZ @ 0x18005AF84 (-CreateProxySlot@CDevice@DirectComposition@@QEAAPEAXXZ.c)
 *     ?Initialize@CLegacyRenderTargetProxy@DirectComposition@@QEAAJU_LUID@@IW4DXGI_FORMAT@@W4DXGI_COLOR_SPACE_TYPE@@I@Z @ 0x180092824 (-Initialize@CLegacyRenderTargetProxy@DirectComposition@@QEAAJU_LUID@@IW4DXGI_FORMAT@@W4DXGI_COLO.c)
 *     ?Attach@?$InteropProxyRef@UIDCompositionRenderTargetPartner@@@@QEAAXPEAUIDCompositionRenderTargetPartner@@@Z @ 0x1800A6F08 (-Attach@-$InteropProxyRef@UIDCompositionRenderTargetPartner@@@@QEAAXPEAUIDCompositionRenderTarge.c)
 *     ?_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180158AB4 (-_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::InteropLegacyRenderTarget::RuntimeClassInitialize(
        Windows::UI::Composition::InteropLegacyRenderTarget *this,
        DirectComposition::CDevice **a2,
        struct _LUID a3,
        unsigned int a4,
        enum DXGI_FORMAT a5,
        enum DXGI_COLOR_SPACE_TYPE a6,
        unsigned int a7,
        bool a8)
{
  int v12; // eax
  unsigned int v13; // edi
  DirectComposition::CLegacyRenderTargetProxy *ProxySlot; // rdi
  const char *v16; // r9
  int v17; // eax
  char *v18; // rcx
  int v19; // ebx
  __int64 v20; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v12 = Windows::UI::Composition::ProxyObject::RuntimeClassInitialize(
          this,
          (struct Windows::UI::Composition::Compositor *)a2,
          (unsigned int)a8 + 96,
          0);
  v13 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x24,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtinteroplegacyrendertarget.cpp",
      (const char *)(unsigned int)v12);
    return v13;
  }
  ProxySlot = (DirectComposition::CLegacyRenderTargetProxy *)DirectComposition::CDevice::CreateProxySlot(a2[57]);
  if ( !ProxySlot )
    wil::details::in1diag3::_FailFast_NullAlloc(
      retaddr,
      (void *)0x27,
      (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtinteroplegacyrendertarget.cpp",
      v16);
  v17 = *((_DWORD *)this + 32);
  v18 = (char *)this + 152;
  *((_DWORD *)ProxySlot + 2) = 1;
  *((_DWORD *)ProxySlot + 3) = v17;
  if ( a8 )
  {
    *(_QWORD *)ProxySlot = &DirectComposition::CLegacyStereoRenderTargetProxy::`vftable';
    InteropProxyRef<IDCompositionRenderTargetPartner>::Attach(v18);
    v19 = DirectComposition::CLegacyRenderTargetProxy::Initialize(ProxySlot, a3, a4, a5, a6, a7);
    if ( v19 < 0 )
    {
      v20 = 61LL;
      goto LABEL_7;
    }
  }
  else
  {
    *(_QWORD *)ProxySlot = &DirectComposition::CLegacyRenderTargetProxy::`vftable';
    InteropProxyRef<IDCompositionRenderTargetPartner>::Attach(v18);
    v19 = DirectComposition::CLegacyRenderTargetProxy::Initialize(ProxySlot, a3, a4, a5, a6, a7);
    if ( v19 < 0 )
    {
      v20 = 50LL;
LABEL_7:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v20,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtinteroplegacyrendertarget.cpp",
        (const char *)(unsigned int)v19);
      return (unsigned int)v19;
    }
  }
  return 0LL;
}
