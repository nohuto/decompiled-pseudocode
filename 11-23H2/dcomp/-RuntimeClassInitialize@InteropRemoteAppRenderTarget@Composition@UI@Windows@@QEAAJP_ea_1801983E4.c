/*
 * XREFs of ?RuntimeClassInitialize@InteropRemoteAppRenderTarget@Composition@UI@Windows@@QEAAJPEAVCompositor@234@_NPEAX1@Z @ 0x1801983E4
 * Callers:
 *     ??$MakeAndInitialize2@VInteropRemoteAppRenderTarget@Composition@UI@Windows@@V1234@PEAVInteropDwmCompositor@234@AEA_NAEAPEAXAEA_N@Details@WRL2@Microsoft@@YAJPEAPEAVInteropRemoteAppRenderTarget@Composition@UI@Windows@@$$QEAPEAVInteropDwmCompositor@456@AEA_NAEAPEAX2@Z @ 0x18015B238 (--$MakeAndInitialize2@VInteropRemoteAppRenderTarget@Composition@UI@Windows@@V1234@PEAVInteropDwm.c)
 *     ??$MakeAndInitialize2@VInteropRemoteAppRenderTarget@Composition@UI@Windows@@V1234@AEAPEAVInteropCompositor@234@_N@Details@WRL2@Microsoft@@YAJPEAPEAVInteropRemoteAppRenderTarget@Composition@UI@Windows@@AEAPEAVInteropCompositor@456@$$QEA_N@Z @ 0x18015F7E8 (--$MakeAndInitialize2@VInteropRemoteAppRenderTarget@Composition@UI@Windows@@V1234@A_ea_18015F7E8.c)
 *     ?RuntimeClassInitialize@InteropRemoteAppRenderTarget@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEAUHWND__@@AEBUtagRECT@@_N@Z @ 0x180198318 (-RuntimeClassInitialize@InteropRemoteAppRenderTarget@Composition@UI@Windows@@QEAAJPEAVCompositor.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RuntimeClassInitialize@ProxyObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I_N@Z @ 0x180058D30 (-RuntimeClassInitialize@ProxyObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I_N@Z.c)
 *     ?CreateProxySlot@CDevice@DirectComposition@@QEAAPEAXXZ @ 0x18005AF84 (-CreateProxySlot@CDevice@DirectComposition@@QEAAPEAXXZ.c)
 *     ?RuntimeClassInitialize@ProxyObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@IPEAX_N@Z @ 0x18005C110 (-RuntimeClassInitialize@ProxyObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@IPEAX_N@Z.c)
 *     ?Reset@?$InteropProxyRef@UIDCompositionRemoteAppRenderTargetPartner@@@@QEAAXXZ @ 0x1800A35AC (-Reset@-$InteropProxyRef@UIDCompositionRemoteAppRenderTargetPartner@@@@QEAAXXZ.c)
 *     ?_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180158AB4 (-_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::InteropRemoteAppRenderTarget::RuntimeClassInitialize(
        Windows::UI::Composition::InteropRemoteAppRenderTarget *this,
        DirectComposition::CDevice **a2,
        unsigned __int8 a3,
        void *a4,
        bool a5)
{
  int v7; // edi
  __int64 v8; // rdx
  __int64 result; // rax
  _DWORD *ProxySlot; // rax
  const char *v11; // r9
  _DWORD *v12; // rdi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( a4 )
  {
    v7 = Windows::UI::Composition::ProxyObject::RuntimeClassInitialize(this, a2, 143, a4, a5);
    if ( v7 < 0 )
    {
      v8 = 44LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v8,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtinteropremoteapprendertarget.cpp",
        (const char *)(unsigned int)v7);
      return (unsigned int)v7;
    }
  }
  else
  {
    v7 = Windows::UI::Composition::ProxyObject::RuntimeClassInitialize(
           this,
           (struct Windows::UI::Composition::Compositor *)a2,
           143,
           a3);
    if ( v7 < 0 )
    {
      v8 = 50LL;
      goto LABEL_4;
    }
  }
  ProxySlot = DirectComposition::CDevice::CreateProxySlot(a2[57]);
  v12 = ProxySlot;
  if ( !ProxySlot )
    wil::details::in1diag3::_FailFast_NullAlloc(
      retaddr,
      54LL,
      (__int64)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtinteropremoteapprendertarget.cpp",
      v11);
  ProxySlot[3] = *((_DWORD *)this + 32);
  ProxySlot[2] = 1;
  *(_QWORD *)ProxySlot = &DirectComposition::CRemoteAppRenderTargetProxy::`vftable';
  InteropProxyRef<IDCompositionRemoteAppRenderTargetPartner>::Reset((volatile __int64 *)this + 19);
  result = 0LL;
  *((_QWORD *)this + 19) = v12;
  return result;
}
