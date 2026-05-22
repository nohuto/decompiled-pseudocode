/*
 * XREFs of ?SetInsetScalesWithValues@Api@?$CompositionNineGridBrushT@VCompositionNineGridBrush@Composition@UI@Windows@@VCompositionBrush@234@@Composition@UI@Windows@@UEAAJMMMM@Z @ 0x180129960
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?SetInsetScalesWithValues@CompositionNineGridBrush@Composition@UI@Windows@@QEAAJMMMM@Z @ 0x1801690FC (-SetInsetScalesWithValues@CompositionNineGridBrush@Composition@UI@Windows@@QEAAJMMMM@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionNineGridBrushT<Windows::UI::Composition::CompositionNineGridBrush,Windows::UI::Composition::CompositionBrush>::Api::SetInsetScalesWithValues(
        __int64 a1,
        float a2,
        float a3,
        float a4,
        int a5)
{
  Windows::UI::Composition::CompositionNineGridBrush *v5; // rdi
  struct _RTL_CRITICAL_SECTION *v6; // rbx
  unsigned int v7; // edi
  __int64 v8; // r9
  __int64 v9; // rdx
  int v10; // eax
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v5 = (Windows::UI::Composition::CompositionNineGridBrush *)(a1 - 152);
  v6 = *(struct _RTL_CRITICAL_SECTION **)(a1 - 152 + 24);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v6);
  if ( (*((_BYTE *)v5 + 32) & 2) != 0 )
  {
    v10 = Windows::UI::Composition::CompositionNineGridBrush::SetInsetScalesWithValues(v5, a2, a3, a4, *(float *)&a5);
    v7 = v10;
    if ( v10 >= 0 )
    {
      v7 = 0;
      goto LABEL_7;
    }
    v8 = (unsigned int)v10;
    v9 = 8016LL;
  }
  else
  {
    v7 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
    v8 = 2147483667LL;
    v9 = 8010LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (int)"onecoreuap\\private\\Windows\\inc\\private\\compgen\\DCompABIAutoGen_Windows.UI.Composition.g.h",
    (const char *)v8);
LABEL_7:
  Microsoft::WRL2::ContextSession::EndApiEntry(v6);
  return v7;
}
