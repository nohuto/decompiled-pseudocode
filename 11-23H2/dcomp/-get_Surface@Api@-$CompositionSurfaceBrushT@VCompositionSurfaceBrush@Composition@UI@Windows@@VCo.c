/*
 * XREFs of ?get_Surface@Api@?$CompositionSurfaceBrushT@VCompositionSurfaceBrush@Composition@UI@Windows@@VCompositionBrush@234@@Composition@UI@Windows@@UEAAJPEAPEAUICompositionSurface@345@@Z @ 0x18012BA80
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@U?$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@W4HolographicCompositorStatus@2345@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000FA18 (-InternalRelease@-$ComPtr@U-$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@U.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180088E0C (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?GetSurface@CompositionSurfaceBrush@Composition@UI@Windows@@QEAAPEAUICompositionSurface@234@XZ @ 0x18015971C (-GetSurface@CompositionSurfaceBrush@Composition@UI@Windows@@QEAAPEAUICompositionSurface@234@XZ.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionSurfaceBrushT<Windows::UI::Composition::CompositionSurfaceBrush,Windows::UI::Composition::CompositionBrush>::Api::get_Surface(
        __int64 a1,
        struct Windows::UI::Composition::ICompositionSurface **a2)
{
  Windows::UI::Composition::CompositionSurfaceBrush *v2; // rdi
  unsigned int v3; // esi
  struct _RTL_CRITICAL_SECTION *v5; // rbx
  struct Windows::UI::Composition::ICompositionSurface *v6; // rdi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct Windows::UI::Composition::ICompositionSurface *Surface; // [rsp+30h] [rbp+8h] BYREF

  v2 = (Windows::UI::Composition::CompositionSurfaceBrush *)(a1 - 152);
  v3 = 0;
  *a2 = 0LL;
  v5 = *(struct _RTL_CRITICAL_SECTION **)(a1 - 152 + 24);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v5);
  if ( (*((_BYTE *)v2 + 32) & 2) != 0 )
  {
    Surface = Windows::UI::Composition::CompositionSurfaceBrush::GetSurface(v2);
    v6 = Surface;
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&Surface);
    Surface = 0LL;
    *a2 = v6;
    Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)&Surface);
  }
  else
  {
    v3 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2D7A,
      (int)"onecoreuap\\private\\Windows\\inc\\private\\compgen\\DCompABIAutoGen_Windows.UI.Composition.g.h",
      (const char *)0x80000013LL);
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v5);
  return v3;
}
