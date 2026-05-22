/*
 * XREFs of ?put_RotationAngleInDegrees@Api@?$CompositionSurfaceBrushT@VCompositionSurfaceBrush@Composition@UI@Windows@@VCompositionBrush@234@@Composition@UI@Windows@@UEAAJM@Z @ 0x18012C490
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?SetRotationAngleInDegrees@CompositionSurfaceBrush@Composition@UI@Windows@@QEAAJM@Z @ 0x180159BBC (-SetRotationAngleInDegrees@CompositionSurfaceBrush@Composition@UI@Windows@@QEAAJM@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionSurfaceBrushT<Windows::UI::Composition::CompositionSurfaceBrush,Windows::UI::Composition::CompositionBrush>::Api::put_RotationAngleInDegrees(
        __int64 a1,
        float a2)
{
  Windows::UI::Composition::CompositionSurfaceBrush *v2; // rdi
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  unsigned int v4; // edi
  __int64 v5; // r9
  __int64 v6; // rdx
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = (Windows::UI::Composition::CompositionSurfaceBrush *)(a1 - 160);
  v3 = *(struct _RTL_CRITICAL_SECTION **)(a1 - 160 + 24);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v3);
  if ( (*((_BYTE *)v2 + 32) & 2) != 0 )
  {
    v7 = Windows::UI::Composition::CompositionSurfaceBrush::SetRotationAngleInDegrees(v2, a2);
    v4 = v7;
    if ( v7 >= 0 )
    {
      v4 = 0;
      goto LABEL_7;
    }
    v5 = (unsigned int)v7;
    v6 = 11952LL;
  }
  else
  {
    v4 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
    v5 = 2147483667LL;
    v6 = 11949LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (int)"onecoreuap\\private\\Windows\\inc\\private\\compgen\\DCompABIAutoGen_Windows.UI.Composition.g.h",
    (const char *)v5);
LABEL_7:
  Microsoft::WRL2::ContextSession::EndApiEntry(v3);
  return v4;
}
