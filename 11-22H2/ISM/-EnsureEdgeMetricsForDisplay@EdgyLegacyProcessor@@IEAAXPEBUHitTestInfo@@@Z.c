/*
 * XREFs of ?EnsureEdgeMetricsForDisplay@EdgyLegacyProcessor@@IEAAXPEBUHitTestInfo@@@Z @ 0x1801D5C50
 * Callers:
 *     ?OnHitTest@EdgyLegacyProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x1801D5DD0 (-OnHitTest@EdgyLegacyProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorI.c)
 * Callees:
 *     __security_check_cookie @ 0x1800574C0 (__security_check_cookie.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18005907C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?HimetricToPixels@EdgyLegacyProcessor@@QEAAXPEAUD2D_VECTOR_2F@@@Z @ 0x1801D5D50 (-HimetricToPixels@EdgyLegacyProcessor@@QEAAXPEAUD2D_VECTOR_2F@@@Z.c)
 *     ?GetHitTestSpanHimetric@EdgeGestureMetrics@@SA?AUD2D_VECTOR_2F@@XZ @ 0x1801D8334 (-GetHitTestSpanHimetric@EdgeGestureMetrics@@SA-AUD2D_VECTOR_2F@@XZ.c)
 */

void __fastcall EdgyLegacyProcessor::EnsureEdgeMetricsForDisplay(D2D_VECTOR_2F *this, const struct HitTestInfo *a2)
{
  __int64 v3; // rcx
  const char *v4; // r9
  int v5; // eax
  D2D_VECTOR_2F v6; // [rsp+20h] [rbp-40h] BYREF
  struct D2D_VECTOR_2F HitTestSpanHimetric; // [rsp+28h] [rbp-38h]
  __int128 v8; // [rsp+30h] [rbp-30h] BYREF
  __int128 v9; // [rsp+40h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]

  v3 = *((unsigned int *)a2 + 1);
  v9 = 0LL;
  v8 = 0LL;
  if ( !(unsigned int)GetPointerDeviceRects(v3, &v9, &v8) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x1E,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgylegacy\\processor\\edgylegacyprocessor.cpp",
      v4);
  v5 = HIDWORD(v8) - DWORD1(v8);
  this[7].x = (float)(DWORD2(v8) - v8) / (float)(DWORD2(v9) - v9);
  this[7].y = (float)v5 / (float)(HIDWORD(v9) - DWORD1(v9));
  LODWORD(v6.x) = *(_QWORD *)&EdgeGestureMetrics::GetHitTestSpanHimetric();
  HitTestSpanHimetric = EdgeGestureMetrics::GetHitTestSpanHimetric();
  v6.y = HitTestSpanHimetric.y;
  EdgyLegacyProcessor::HimetricToPixels((EdgyLegacyProcessor *)this, &v6);
  this[8] = v6;
}
