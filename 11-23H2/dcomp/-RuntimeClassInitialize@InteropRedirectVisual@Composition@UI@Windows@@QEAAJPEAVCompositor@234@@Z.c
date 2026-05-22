/*
 * XREFs of ?RuntimeClassInitialize@InteropRedirectVisual@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z @ 0x180198848
 * Callers:
 *     ??$MakeAndInitialize2@VInteropRedirectVisual@Composition@UI@Windows@@V1234@PEAVInteropDwmCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVInteropRedirectVisual@Composition@UI@Windows@@$$QEAPEAVInteropDwmCompositor@456@@Z @ 0x18015B174 (--$MakeAndInitialize2@VInteropRedirectVisual@Composition@UI@Windows@@V1234@PEAVInteropDwmComposi.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RuntimeClassInitialize@Visual@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I_NPEAX@Z @ 0x180058CBC (-RuntimeClassInitialize@Visual@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I_NPEAX@Z.c)
 *     ?CreateProxySlot@CDevice@DirectComposition@@QEAAPEAXXZ @ 0x18005AF84 (-CreateProxySlot@CDevice@DirectComposition@@QEAAPEAXXZ.c)
 *     ?Attach@?$InteropProxyRef@UIDCompositionVisualRestricted@@@@QEAAXPEAUIDCompositionVisualRestricted@@@Z @ 0x1800A3580 (-Attach@-$InteropProxyRef@UIDCompositionVisualRestricted@@@@QEAAXPEAUIDCompositionVisualRestrict.c)
 *     ?_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180158AB4 (-_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::InteropRedirectVisual::RuntimeClassInitialize(
        Windows::UI::Composition::InteropRedirectVisual *this,
        DirectComposition::CDevice **a2)
{
  int v4; // eax
  unsigned int v5; // edi
  _DWORD *ProxySlot; // rax
  const char *v8; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = Windows::UI::Composition::Visual::RuntimeClassInitialize(
         this,
         (struct Windows::UI::Composition::Compositor *)a2,
         0x8Du,
         0,
         0LL);
  v5 = v4;
  if ( v4 >= 0 )
  {
    ProxySlot = DirectComposition::CDevice::CreateProxySlot(a2[57]);
    if ( !ProxySlot )
      wil::details::in1diag3::_FailFast_NullAlloc(
        retaddr,
        40LL,
        (__int64)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtinteropredirectvisual.cpp",
        v8);
    ProxySlot[3] = *((_DWORD *)this + 32);
    *(_QWORD *)ProxySlot = &DirectComposition::CVisualProxy::`vftable';
    ProxySlot[2] = 1;
    InteropProxyRef<IDCompositionVisualRestricted>::Attach((_QWORD *)this + 39, (__int64)ProxySlot);
    *((_DWORD *)this + 8) |= 0x40u;
    *((_DWORD *)this + 65) |= 0x11000u;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x25,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtinteropredirectvisual.cpp",
      (const char *)(unsigned int)v4);
    return v5;
  }
}
