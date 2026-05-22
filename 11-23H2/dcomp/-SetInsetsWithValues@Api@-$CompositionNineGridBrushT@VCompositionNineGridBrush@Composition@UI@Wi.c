/*
 * XREFs of ?SetInsetsWithValues@Api@?$CompositionNineGridBrushT@VCompositionNineGridBrush@Composition@UI@Windows@@VCompositionBrush@234@@Composition@UI@Windows@@UEAAJMMMM@Z @ 0x180087D40
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?SetInsetsWithValues@CompositionNineGridBrush@Composition@UI@Windows@@QEAAJMMMM@Z @ 0x180087DDC (-SetInsetsWithValues@CompositionNineGridBrush@Composition@UI@Windows@@QEAAJMMMM@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionNineGridBrushT<Windows::UI::Composition::CompositionNineGridBrush,Windows::UI::Composition::CompositionBrush>::Api::SetInsetsWithValues(
        __int64 a1,
        float a2,
        float a3,
        float a4,
        int a5)
{
  Windows::UI::Composition::CompositionNineGridBrush *v5; // rdi
  struct _RTL_CRITICAL_SECTION *v6; // rbx
  int v7; // eax
  unsigned int v8; // edi
  __int64 v10; // r9
  __int64 v11; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v5 = (Windows::UI::Composition::CompositionNineGridBrush *)(a1 - 152);
  v6 = *(struct _RTL_CRITICAL_SECTION **)(a1 - 152 + 24);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v6);
  if ( (*((_BYTE *)v5 + 32) & 2) == 0 )
  {
    v8 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
    v10 = 2147483667LL;
    v11 = 7960LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (int)"onecoreuap\\private\\Windows\\inc\\private\\compgen\\DCompABIAutoGen_Windows.UI.Composition.g.h",
      (const char *)v10);
    goto LABEL_4;
  }
  v7 = Windows::UI::Composition::CompositionNineGridBrush::SetInsetsWithValues(v5, a2, a3, a4, *(float *)&a5);
  v8 = v7;
  if ( v7 < 0 )
  {
    v10 = (unsigned int)v7;
    v11 = 7966LL;
    goto LABEL_7;
  }
  v8 = 0;
LABEL_4:
  Microsoft::WRL2::ContextSession::EndApiEntry(v6);
  return v8;
}
