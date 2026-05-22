/*
 * XREFs of ?put_MappingMode@Api@?$CompositionGradientBrushT@VCompositionGradientBrush@Composition@UI@Windows@@VCompositionBrush@234@@Composition@UI@Windows@@UEAAJW4CompositionMappingMode@345@@Z @ 0x18006F9A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?ResourceSetIntegerProperty@CDevice@DirectComposition@@QEAAXII_J@Z @ 0x1800707B0 (-ResourceSetIntegerProperty@CDevice@DirectComposition@@QEAAXII_J@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionGradientBrushT<Windows::UI::Composition::CompositionGradientBrush,Windows::UI::Composition::CompositionBrush>::Api::put_MappingMode(
        __int64 a1,
        int a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  __int64 v4; // rsi
  unsigned int v5; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *(struct _RTL_CRITICAL_SECTION **)(a1 - 136);
  v4 = a2;
  Microsoft::WRL2::ContextSession::BeginApiEntry(v2);
  if ( (*(_BYTE *)(a1 - 128) & 2) != 0 )
  {
    if ( (_DWORD)v4 != *(_DWORD *)(a1 + 56) )
    {
      DirectComposition::CDevice::ResourceSetIntegerProperty(
        *(DirectComposition::CDevice **)(*(_QWORD *)(a1 - 136) + 456LL),
        *(_DWORD *)(a1 - 32),
        4u,
        v4);
      *(_DWORD *)(a1 + 56) = v4;
    }
    v5 = 0;
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
      (void *)0x14DB,
      (int)"onecoreuap\\private\\Windows\\inc\\private\\compgen\\DCompABIAutoGen_Windows.UI.Composition.g.h",
      (const char *)0x80000013LL);
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v2);
  return v5;
}
