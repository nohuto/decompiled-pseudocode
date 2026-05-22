/*
 * XREFs of ?RuntimeClassInitialize@InteropVisual@Composition@UI@Windows@@QEAAJPEAVCompositor@234@_NPEAX@Z @ 0x180060C30
 * Callers:
 *     ??$MakeAndInitialize2@VInteropVisual@Composition@UI@Windows@@V1234@PEAVInteropCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVInteropVisual@Composition@UI@Windows@@$$QEAPEAVInteropCompositor@456@@Z @ 0x18000D058 (--$MakeAndInitialize2@VInteropVisual@Composition@UI@Windows@@V1234@PEAVInteropCompositor@234@@De.c)
 *     ??$MakeAndInitialize2@VInteropVisual@Composition@UI@Windows@@V1234@PEAVInteropCompositor@234@_NAEAPEAX@Details@WRL2@Microsoft@@YAJPEAPEAVInteropVisual@Composition@UI@Windows@@$$QEAPEAVInteropCompositor@456@$$QEA_NAEAPEAX@Z @ 0x1800608A4 (--$MakeAndInitialize2@VInteropVisual@Composition@UI@Windows@@V1234@PEAVInteropCompositor@234@_NA.c)
 *     ??$MakeAndInitialize2@VInteropVisual@Composition@UI@Windows@@V1234@PEAVInteropCompositor@234@_N@Details@WRL2@Microsoft@@YAJPEAPEAVInteropVisual@Composition@UI@Windows@@$$QEAPEAVInteropCompositor@456@$$QEA_N@Z @ 0x180089BC4 (--$MakeAndInitialize2@VInteropVisual@Composition@UI@Windows@@V1234@PEAVInteropCompositor@234@_N@.c)
 *     ??$MakeAndInitialize2@VInteropVisual@Composition@UI@Windows@@V1234@PEAVInteropDwmCompositor@234@AEA_NAEAPEAX@Details@WRL2@Microsoft@@YAJPEAPEAVInteropVisual@Composition@UI@Windows@@$$QEAPEAVInteropDwmCompositor@456@AEA_NAEAPEAX@Z @ 0x18015B318 (--$MakeAndInitialize2@VInteropVisual@Composition@UI@Windows@@V1234@PEAVInteropDwmCompositor@234@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RuntimeClassInitialize@Visual@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I_NPEAX@Z @ 0x180058CBC (-RuntimeClassInitialize@Visual@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I_NPEAX@Z.c)
 *     ?CreateProxySlot@CDevice@DirectComposition@@QEAAPEAXXZ @ 0x18005AF84 (-CreateProxySlot@CDevice@DirectComposition@@QEAAPEAXXZ.c)
 *     ?Attach@?$InteropProxyRef@UIDCompositionVisualRestricted@@@@QEAAXPEAUIDCompositionVisualRestricted@@@Z @ 0x1800A3580 (-Attach@-$InteropProxyRef@UIDCompositionVisualRestricted@@@@QEAAXPEAUIDCompositionVisualRestrict.c)
 *     ?_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180158AB4 (-_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::InteropVisual::RuntimeClassInitialize(
        Windows::UI::Composition::InteropVisual *this,
        DirectComposition::CDevice **a2,
        bool a3,
        void *a4)
{
  int v8; // eax
  unsigned int v9; // edi
  bool v11; // al
  _DWORD *ProxySlot; // rax
  const char *v13; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v8 = Windows::UI::Composition::Visual::RuntimeClassInitialize(
         this,
         (struct Windows::UI::Composition::Compositor *)a2,
         0xC4u,
         a3,
         a4);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v11 = a4 || a3;
    *((_BYTE *)this + 320) = v11;
    ProxySlot = DirectComposition::CDevice::CreateProxySlot(a2[57]);
    if ( !ProxySlot )
      wil::details::in1diag3::_FailFast_NullAlloc(
        retaddr,
        (void *)0x35,
        (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtinteropvisual.cpp",
        v13);
    ProxySlot[3] = *((_DWORD *)this + 32);
    *(_QWORD *)ProxySlot = &DirectComposition::CVisualProxy::`vftable';
    ProxySlot[2] = 1;
    InteropProxyRef<IDCompositionVisualRestricted>::Attach((char *)this + 312);
    *((_DWORD *)this + 8) |= 0x40u;
    *((_DWORD *)this + 65) |= 0x11000u;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x31,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtinteropvisual.cpp",
      (const char *)(unsigned int)v8);
    return v9;
  }
}
