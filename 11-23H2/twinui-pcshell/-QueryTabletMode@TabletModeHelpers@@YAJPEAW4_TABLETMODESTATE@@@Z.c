/*
 * XREFs of ?QueryTabletMode@TabletModeHelpers@@YAJPEAW4_TABLETMODESTATE@@@Z @ 0x1800F43D8
 * Callers:
 *     _lambda_df8498ad81b9203ecaf5b19db9f78b07_::operator() @ 0x1800149CC (_lambda_df8498ad81b9203ecaf5b19db9f78b07_--operator().c)
 *     ?IsTabletMode@TabletModeHelpers@@YA_NXZ @ 0x1800F43A8 (-IsTabletMode@TabletModeHelpers@@YA_NXZ.c)
 *     ?Stop@DragSwitchItem@MultitaskingViewTelemetry@@QEAAXI@Z @ 0x1805909C4 (-Stop@DragSwitchItem@MultitaskingViewTelemetry@@QEAAXI@Z.c)
 *     ?AppSnapped_@CSnapComponentTelemetry@@QEBAXW4SnapRegion@@AEBUCRect@Geometry@@1PEBGPEAUHWND__@@@Z @ 0x18065FB64 (-AppSnapped_@CSnapComponentTelemetry@@QEBAXW4SnapRegion@@AEBUCRect@Geometry@@1PEBGPEAUHWND__@@@Z.c)
 *     ?InvalidAppInEnumeration_@CSnapComponentTelemetry@@QEBAXPEBGPEAUIApplicationViewPosition@@@Z @ 0x18066733C (-InvalidAppInEnumeration_@CSnapComponentTelemetry@@QEBAXPEBGPEAUIApplicationViewPosition@@@Z.c)
 *     ?AreQuadrantsEnabled@SnapLayoutHelpers@@YA_NXZ @ 0x180670608 (-AreQuadrantsEnabled@SnapLayoutHelpers@@YA_NXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall TabletModeHelpers::QueryTabletMode(TabletModeHelpers *this, enum _TABLETMODESTATE *a2)
{
  NTSTATUS v2; // eax
  signed int v3; // eax
  unsigned int v4; // ebx
  int v6; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  char v8; // [rsp+40h] [rbp+8h] BYREF

  *(_DWORD *)this = 0;
  v2 = RtlQueryWnfStateData(&v8, WNF_TMCN_ISTABLETMODE, TabletModeHelpers::QueryTabletModeCallback, this, 0LL);
  v3 = RtlNtStatusToDosError(v2);
  v4 = v3;
  if ( v3 > 0 )
    v4 = (unsigned __int16)v3 | 0x80070000;
  if ( (v4 & 0x80000000) != 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x47,
      (unsigned int)"onecoreuap\\internal\\shell\\inc\\private\\TabletModeHelpers.h",
      (const char *)v4,
      v6);
  return v4;
}
