/*
 * XREFs of ?put_TransformMatrix@Api@?$CompositionGradientBrushT@VCompositionGradientBrush@Composition@UI@Windows@@VCompositionBrush@234@@Composition@UI@Windows@@UEAAJUMatrix3x2@Numerics@Foundation@5@@Z @ 0x180071F00
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?SetTransformMatrix@CompositionGradientBrush@Composition@UI@Windows@@QEAAJAEBUMatrix3x2@Numerics@Foundation@4@@Z @ 0x180071F68 (-SetTransformMatrix@CompositionGradientBrush@Composition@UI@Windows@@QEAAJAEBUMatrix3x2@Numerics.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionGradientBrushT<Windows::UI::Composition::CompositionGradientBrush,Windows::UI::Composition::CompositionBrush>::Api::put_TransformMatrix(
        __int64 a1,
        const struct Windows::Foundation::Numerics::Matrix3x2 *a2)
{
  Windows::UI::Composition::CompositionGradientBrush *v2; // rdi
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  int v5; // eax
  unsigned int v6; // edi
  __int64 v8; // r9
  __int64 v9; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (Windows::UI::Composition::CompositionGradientBrush *)(a1 - 152);
  v4 = *(struct _RTL_CRITICAL_SECTION **)(a1 - 152 + 24);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v4);
  if ( (*((_BYTE *)v2 + 32) & 2) == 0 )
  {
    v6 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
    v8 = 2147483667LL;
    v9 = 5292LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"onecoreuap\\private\\Windows\\inc\\private\\compgen\\DCompABIAutoGen_Windows.UI.Composition.g.h",
      (const char *)v8);
    goto LABEL_4;
  }
  v5 = Windows::UI::Composition::CompositionGradientBrush::SetTransformMatrix(v2, a2);
  v6 = v5;
  if ( v5 < 0 )
  {
    v8 = (unsigned int)v5;
    v9 = 5295LL;
    goto LABEL_7;
  }
  v6 = 0;
LABEL_4:
  Microsoft::WRL2::ContextSession::EndApiEntry(v4);
  return v6;
}
