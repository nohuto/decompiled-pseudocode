/*
 * XREFs of ?SetSourceParameter@Api@?$CompositionEffectBrushT@VCompositionEffectBrush@Composition@UI@Windows@@VCompositionBrush@234@@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@PEAUICompositionBrush@345@@Z @ 0x1800457C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?SetSourceParameter@CompositionEffectBrush@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@PEAUICompositionBrush@234@@Z @ 0x1800459F0 (-SetSourceParameter@CompositionEffectBrush@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@PEAUIComp.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionEffectBrushT<Windows::UI::Composition::CompositionEffectBrush,Windows::UI::Composition::CompositionBrush>::Api::SetSourceParameter(
        __int64 a1,
        HSTRING a2,
        struct Windows::UI::Composition::ICompositionBrush *a3)
{
  Windows::UI::Composition::CompositionEffectBrush *v3; // rdi
  struct _RTL_CRITICAL_SECTION *v5; // rbx
  int v7; // eax
  unsigned int v8; // edi
  __int64 v10; // r9
  __int64 v11; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = (Windows::UI::Composition::CompositionEffectBrush *)(a1 - 152);
  v5 = *(struct _RTL_CRITICAL_SECTION **)(a1 - 152 + 24);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v5);
  if ( (*((_BYTE *)v3 + 32) & 2) == 0 )
  {
    v8 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
    v10 = 2147483667LL;
    v11 = 4095LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (int)"onecoreuap\\private\\Windows\\inc\\private\\compgen\\DCompABIAutoGen_Windows.UI.Composition.g.h",
      (const char *)v10);
    goto LABEL_4;
  }
  v7 = Windows::UI::Composition::CompositionEffectBrush::SetSourceParameter(v3, a2, a3);
  v8 = v7;
  if ( v7 < 0 )
  {
    v10 = (unsigned int)v7;
    v11 = 4099LL;
    goto LABEL_7;
  }
  v8 = 0;
LABEL_4:
  Microsoft::WRL2::ContextSession::EndApiEntry(v5);
  return v8;
}
