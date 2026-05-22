/*
 * XREFs of ?put_Offset@Api@?$CompositionSurfaceBrushT@VCompositionSurfaceBrush@Composition@UI@Windows@@VCompositionBrush@234@@Composition@UI@Windows@@UEAAJUVector2@Numerics@Foundation@5@@Z @ 0x18006E5B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?SetOffset@CompositionSurfaceBrush@Composition@UI@Windows@@QEAAJAEBUVector2@Numerics@Foundation@4@@Z @ 0x18006E614 (-SetOffset@CompositionSurfaceBrush@Composition@UI@Windows@@QEAAJAEBUVector2@Numerics@Foundation@.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionSurfaceBrushT<Windows::UI::Composition::CompositionSurfaceBrush,Windows::UI::Composition::CompositionBrush>::Api::put_Offset(
        __int64 a1,
        __int64 a2)
{
  Windows::UI::Composition::CompositionSurfaceBrush *v2; // rdi
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  int v4; // eax
  unsigned int v5; // edi
  __int64 v7; // r9
  __int64 v8; // rdx
  int v9[2]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = (Windows::UI::Composition::CompositionSurfaceBrush *)(a1 - 160);
  *(_QWORD *)v9 = a2;
  v3 = *(struct _RTL_CRITICAL_SECTION **)(a1 - 160 + 24);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v3);
  if ( (*((_BYTE *)v2 + 32) & 2) == 0 )
  {
    v5 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
    v7 = 2147483667LL;
    v8 = 11857LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"onecoreuap\\private\\Windows\\inc\\private\\compgen\\DCompABIAutoGen_Windows.UI.Composition.g.h",
      (const char *)v7);
    goto LABEL_4;
  }
  v4 = Windows::UI::Composition::CompositionSurfaceBrush::SetOffset(
         v2,
         (const struct Windows::Foundation::Numerics::Vector2 *)v9);
  v5 = v4;
  if ( v4 < 0 )
  {
    v7 = (unsigned int)v4;
    v8 = 11860LL;
    goto LABEL_7;
  }
  v5 = 0;
LABEL_4:
  Microsoft::WRL2::ContextSession::EndApiEntry(v3);
  return v5;
}
