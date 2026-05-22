/*
 * XREFs of ?RuntimeClassInitialize@InteropDesktopTree@Composition@UI@Windows@@QEAAJPEAVCompositor@234@U_LUID@@@Z @ 0x180093C58
 * Callers:
 *     ??$MakeAndInitialize2@VInteropDesktopTree@Composition@UI@Windows@@V1234@AEAPEAVInteropCompositor@234@AEAU_LUID@@@Details@WRL2@Microsoft@@YAJPEAPEAVInteropDesktopTree@Composition@UI@Windows@@AEAPEAVInteropCompositor@456@AEAU_LUID@@@Z @ 0x180093AD4 (--$MakeAndInitialize2@VInteropDesktopTree@Composition@UI@Windows@@V1234@AEAPEAVInteropCompositor.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetBufferProperty@CResourceProxy@DirectComposition@@QEAAJIPEBX_K@Z @ 0x180032AEC (-SetBufferProperty@CResourceProxy@DirectComposition@@QEAAJIPEBX_K@Z.c)
 *     ?RuntimeClassInitialize@ProxyObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I_N@Z @ 0x180058D30 (-RuntimeClassInitialize@ProxyObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I_N@Z.c)
 *     ?CreateProxySlot@CDevice@DirectComposition@@QEAAPEAXXZ @ 0x18005AF84 (-CreateProxySlot@CDevice@DirectComposition@@QEAAPEAXXZ.c)
 *     ?Attach@?$InteropProxyRef@UIDCompositionDesktopTreePartner@@@@QEAAXPEAUIDCompositionDesktopTreePartner@@@Z @ 0x1800A6EDC (-Attach@-$InteropProxyRef@UIDCompositionDesktopTreePartner@@@@QEAAXPEAUIDCompositionDesktopTreeP.c)
 *     ?_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180158AB4 (-_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::InteropDesktopTree::RuntimeClassInitialize(
        Windows::UI::Composition::InteropDesktopTree *this,
        DirectComposition::CDevice **a2,
        struct _LUID a3)
{
  int v6; // eax
  unsigned int v7; // edi
  _DWORD *ProxySlot; // rax
  const char *v10; // r9
  DirectComposition::CResourceProxy *v11; // rdi
  int v12; // eax
  unsigned int v13; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct _LUID v15; // [rsp+48h] [rbp+20h] BYREF

  v6 = Windows::UI::Composition::ProxyObject::RuntimeClassInitialize(
         this,
         (struct Windows::UI::Composition::Compositor *)a2,
         53,
         0);
  v7 = v6;
  if ( v6 >= 0 )
  {
    ProxySlot = DirectComposition::CDevice::CreateProxySlot(a2[57]);
    if ( !ProxySlot )
      wil::details::in1diag3::_FailFast_NullAlloc(
        retaddr,
        (void *)0x2A,
        (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtinteropdesktoptree.cpp",
        v10);
    v11 = (DirectComposition::CResourceProxy *)(ProxySlot + 2);
    ProxySlot[3] = *((_DWORD *)this + 32);
    ProxySlot[2] = 1;
    *(_QWORD *)ProxySlot = &DirectComposition::CDesktopTreeProxy::`vftable';
    InteropProxyRef<IDCompositionDesktopTreePartner>::Attach((char *)this + 152);
    v15 = a3;
    v12 = DirectComposition::CResourceProxy::SetBufferProperty(v11, 0, &v15, 8uLL);
    v13 = v12;
    if ( v12 >= 0 )
    {
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2F,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtinteropdesktoptree.cpp",
        (const char *)(unsigned int)v12);
      return v13;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x27,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtinteropdesktoptree.cpp",
      (const char *)(unsigned int)v6);
    return v7;
  }
}
