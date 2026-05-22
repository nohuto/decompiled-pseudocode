/*
 * XREFs of ?get_AnchorPoint@Api@?$CompositionGradientBrushT@VCompositionGradientBrush@Composition@UI@Windows@@VCompositionBrush@234@@Composition@UI@Windows@@UEAAJPEAUVector2@Numerics@Foundation@5@@Z @ 0x18012A480
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionGradientBrushT<Windows::UI::Composition::CompositionGradientBrush,Windows::UI::Composition::CompositionBrush>::Api::get_AnchorPoint(
        __int64 a1,
        _QWORD *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  unsigned int v5; // edi
  __int64 v6; // rax
  _QWORD *v7; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a2 = 0LL;
  v4 = *(struct _RTL_CRITICAL_SECTION **)(a1 - 128);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v4);
  if ( (*(_BYTE *)(a1 - 120) & 2) != 0 )
  {
    v6 = *(_QWORD *)(a1 + 80);
    v5 = 0;
    if ( v6 )
      v7 = (_QWORD *)(v6 + 160);
    else
      v7 = &Windows::UI::Composition::ComponentTransform2D::sc_defaultAnchorPoint;
    *a2 = *v7;
  }
  else
  {
    v5 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x130D,
      (int)"onecoreuap\\private\\Windows\\inc\\private\\compgen\\DCompABIAutoGen_Windows.UI.Composition.g.h",
      (const char *)0x80000013LL);
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v4);
  return v5;
}
