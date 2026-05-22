/*
 * XREFs of ?RuntimeClassInitialize@InteropCursorVisual@Composition@UI@Windows@@QEAAJPEAVCompositor@234@_K@Z @ 0x180198E8C
 * Callers:
 *     ??$MakeAndInitialize2@VInteropCursorVisual@Composition@UI@Windows@@V1234@PEAVInteropCompositor@234@AEA_K@Details@WRL2@Microsoft@@YAJPEAPEAVInteropCursorVisual@Composition@UI@Windows@@$$QEAPEAVInteropCompositor@456@AEA_K@Z @ 0x18015BFA4 (--$MakeAndInitialize2@VInteropCursorVisual@Composition@UI@Windows@@V1234@PEAVInteropCompositor@2.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetBufferProperty@CResourceProxy@DirectComposition@@QEAAJIPEBX_K@Z @ 0x180032AEC (-SetBufferProperty@CResourceProxy@DirectComposition@@QEAAJIPEBX_K@Z.c)
 *     ?RuntimeClassInitialize@Visual@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I_NPEAX@Z @ 0x180058CBC (-RuntimeClassInitialize@Visual@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I_NPEAX@Z.c)
 *     ?CreateProxySlot@CDevice@DirectComposition@@QEAAPEAXXZ @ 0x18005AF84 (-CreateProxySlot@CDevice@DirectComposition@@QEAAPEAXXZ.c)
 *     ?Attach@?$InteropProxyRef@UIDCompositionCursorVisualPartner@@@@QEAAXPEAUIDCompositionCursorVisualPartner@@@Z @ 0x1800A6EB0 (-Attach@-$InteropProxyRef@UIDCompositionCursorVisualPartner@@@@QEAAXPEAUIDCompositionCursorVisua.c)
 *     ?_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180158AB4 (-_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::InteropCursorVisual::RuntimeClassInitialize(
        Windows::UI::Composition::InteropCursorVisual *this,
        DirectComposition::CDevice **a2,
        __int64 a3)
{
  int v6; // ebx
  __int64 v7; // rdx
  _DWORD *ProxySlot; // rax
  const char *v10; // r9
  DirectComposition::CResourceProxy *v11; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v13; // [rsp+58h] [rbp+20h] BYREF

  v6 = Windows::UI::Composition::Visual::RuntimeClassInitialize(
         this,
         (struct Windows::UI::Composition::Compositor *)a2,
         0x32u,
         0,
         0LL);
  if ( v6 < 0 )
  {
    v7 = 47LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtinteropcursorvisual.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  ProxySlot = DirectComposition::CDevice::CreateProxySlot(a2[57]);
  if ( !ProxySlot )
    wil::details::in1diag3::_FailFast_NullAlloc(
      retaddr,
      50LL,
      (__int64)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtinteropcursorvisual.cpp",
      v10);
  v11 = (DirectComposition::CResourceProxy *)(ProxySlot + 2);
  ProxySlot[3] = *((_DWORD *)this + 32);
  ProxySlot[2] = 1;
  *(_QWORD *)ProxySlot = &DirectComposition::CCursorVisualProxy::`vftable';
  InteropProxyRef<IDCompositionCursorVisualPartner>::Attach((volatile __int64 *)this + 39, (volatile __int64)ProxySlot);
  v13 = a3;
  v6 = DirectComposition::CResourceProxy::SetBufferProperty(v11, 0, &v13, 8uLL);
  if ( v6 < 0 )
  {
    v7 = 55LL;
    goto LABEL_3;
  }
  return 0LL;
}
