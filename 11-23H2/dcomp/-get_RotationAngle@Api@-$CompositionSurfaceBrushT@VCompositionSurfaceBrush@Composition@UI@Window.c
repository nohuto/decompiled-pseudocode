/*
 * XREFs of ?get_RotationAngle@Api@?$CompositionSurfaceBrushT@VCompositionSurfaceBrush@Composition@UI@Windows@@VCompositionBrush@234@@Composition@UI@Windows@@UEAAJPEAM@Z @ 0x18012B500
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?GetRotationAngle@CompositionSurfaceBrush@Composition@UI@Windows@@QEBAMXZ @ 0x1801596CC (-GetRotationAngle@CompositionSurfaceBrush@Composition@UI@Windows@@QEBAMXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionSurfaceBrushT<Windows::UI::Composition::CompositionSurfaceBrush,Windows::UI::Composition::CompositionBrush>::Api::get_RotationAngle(
        __int64 a1,
        float *a2)
{
  Windows::UI::Composition::CompositionSurfaceBrush *v2; // rsi
  unsigned int v3; // edi
  struct _RTL_CRITICAL_SECTION *v5; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (Windows::UI::Composition::CompositionSurfaceBrush *)(a1 - 160);
  v3 = 0;
  *a2 = 0.0;
  v5 = *(struct _RTL_CRITICAL_SECTION **)(a1 - 160 + 24);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v5);
  if ( (*((_BYTE *)v2 + 32) & 2) != 0 )
  {
    *a2 = Windows::UI::Composition::CompositionSurfaceBrush::GetRotationAngle(v2);
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
      (void *)0x2E69,
      (int)"onecoreuap\\private\\Windows\\inc\\private\\compgen\\DCompABIAutoGen_Windows.UI.Composition.g.h",
      (const char *)0x80000013LL);
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v5);
  return v3;
}
