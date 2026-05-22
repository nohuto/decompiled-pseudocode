/*
 * XREFs of ?put_BitmapInterpolationMode@Api@?$CompositionSurfaceBrushT@VCompositionSurfaceBrush@Composition@UI@Windows@@VCompositionBrush@234@@Composition@UI@Windows@@UEAAJW4CompositionBitmapInterpolationMode@345@@Z @ 0x18006D900
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?ResourceSetIntegerProperty@CDevice@DirectComposition@@QEAAXII_J@Z @ 0x1800707B0 (-ResourceSetIntegerProperty@CDevice@DirectComposition@@QEAAXII_J@Z.c)
 *     ?OriginateInvalidArgument@Composition@UI@Windows@@YAXW4ApiError@123@PEBG@Z @ 0x180149ADC (-OriginateInvalidArgument@Composition@UI@Windows@@YAXW4ApiError@123@PEBG@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionSurfaceBrushT<Windows::UI::Composition::CompositionSurfaceBrush,Windows::UI::Composition::CompositionBrush>::Api::put_BitmapInterpolationMode(
        __int64 a1,
        int a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  unsigned int v5; // esi
  __int64 v7; // rdx
  int v8; // edi
  int v9; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *(struct _RTL_CRITICAL_SECTION **)(a1 - 128);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v2);
  if ( (*(_BYTE *)(a1 - 120) & 2) == 0 )
  {
    v5 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
    v7 = 11526LL;
    goto LABEL_17;
  }
  v5 = 0;
  if ( a2 != *(_DWORD *)(a1 + 128) )
  {
    if ( a2 > 5 )
    {
      v8 = a2 - 6;
      if ( !v8 )
        goto LABEL_8;
      v9 = v8 - 1;
      if ( !v9 )
        goto LABEL_8;
      if ( (unsigned int)(v9 - 1) < 2 )
      {
        a2 = 0;
        goto LABEL_6;
      }
    }
    else
    {
      if ( a2 == 5 )
        goto LABEL_8;
      if ( (unsigned int)a2 <= 1 )
      {
LABEL_6:
        DirectComposition::CDevice::ResourceSetIntegerProperty(
          *(DirectComposition::CDevice **)(*(_QWORD *)(a1 - 128) + 456LL),
          *(_DWORD *)(a1 - 24),
          5u,
          a2);
        *(_DWORD *)(a1 + 128) = a2;
        goto LABEL_7;
      }
      if ( a2 == 2 || (unsigned int)(a2 - 3) <= 1 )
      {
LABEL_8:
        a2 = 1;
        goto LABEL_6;
      }
    }
    Windows::UI::Composition::OriginateInvalidArgument(19LL, L"BitmapInterpolationMode");
    v5 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x79,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionsurfacebrush.cpp",
      (const char *)0x80070057LL);
    v7 = 11529LL;
LABEL_17:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"onecoreuap\\private\\Windows\\inc\\private\\compgen\\DCompABIAutoGen_Windows.UI.Composition.g.h",
      (const char *)v5);
  }
LABEL_7:
  Microsoft::WRL2::ContextSession::EndApiEntry(v2);
  return v5;
}
