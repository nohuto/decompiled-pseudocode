/*
 * XREFs of ?QueryTabletMode@TabletModeHelpers@@YAJPEAW4_TABLETMODESTATE@@@Z @ 0x180069428
 * Callers:
 *     ?IsTabletMode@TabletModeHelpers@@YA_NXZ @ 0x1800693F8 (-IsTabletMode@TabletModeHelpers@@YA_NXZ.c)
 *     ?Stop@DragSwitchItem@MultitaskingViewTelemetry@@QEAAXI@Z @ 0x1804D8C4C (-Stop@DragSwitchItem@MultitaskingViewTelemetry@@QEAAXI@Z.c)
 *     ?AppSnapped_@CSnapComponentTelemetry@@QEBAXW4SnapRegion@@AEBUCRect@Geometry@@1PEBGPEAUHWND__@@@Z @ 0x180592414 (-AppSnapped_@CSnapComponentTelemetry@@QEBAXW4SnapRegion@@AEBUCRect@Geometry@@1PEBGPEAUHWND__@@@Z.c)
 *     ?InvalidAppInEnumeration_@CSnapComponentTelemetry@@QEBAXPEBGPEAUIApplicationViewPosition@@@Z @ 0x180598E90 (-InvalidAppInEnumeration_@CSnapComponentTelemetry@@QEBAXPEBGPEAUIApplicationViewPosition@@@Z.c)
 *     ?AreQuadrantsEnabled@SnapLayoutHelpers@@YA_NXZ @ 0x1805A1A04 (-AreQuadrantsEnabled@SnapLayoutHelpers@@YA_NXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall TabletModeHelpers::QueryTabletMode(TabletModeHelpers *this, enum _TABLETMODESTATE *a2)
{
  NTSTATUS v2; // eax
  signed int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  char v7; // [rsp+40h] [rbp+8h] BYREF

  *(_DWORD *)this = 0;
  v2 = RtlQueryWnfStateData(&v7, WNF_TMCN_ISTABLETMODE, TabletModeHelpers::QueryTabletModeCallback, this);
  v3 = RtlNtStatusToDosError(v2);
  v4 = v3;
  if ( v3 > 0 )
    v4 = (unsigned __int16)v3 | 0x80070000;
  if ( (v4 & 0x80000000) != 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x46,
      (unsigned int)"onecoreuap\\internal\\shell\\inc\\private\\TabletModeHelpers.h",
      (const char *)v4,
      0);
  return v4;
}
