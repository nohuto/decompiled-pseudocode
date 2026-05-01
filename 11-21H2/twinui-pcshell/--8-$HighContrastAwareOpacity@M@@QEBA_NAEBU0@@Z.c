/*
 * XREFs of ??8?$HighContrastAwareOpacity@M@@QEBA_NAEBU0@@Z @ 0x1804C1964
 * Callers:
 *     ?CreateContentDimmingLayerThumbnail@CMultitaskingViewFrameElement@@AEAAJUCSize@Geometry@@PEAUIDCompThumbnail@@1PEAPEAU4@2@Z @ 0x1804C1EB0 (-CreateContentDimmingLayerThumbnail@CMultitaskingViewFrameElement@@AEAAJUCSize@Geometry@@PEAUIDC.c)
 * Callees:
 *     ??B?$HighContrastAwareOpacity@M@@QEBAMXZ @ 0x1804C19A4 (--B-$HighContrastAwareOpacity@M@@QEBAMXZ.c)
 */

bool __fastcall HighContrastAwareOpacity<float>::operator==(__int64 a1, __int64 a2)
{
  double v3; // xmm0_8

  v3 = ((double (*)(void))HighContrastAwareOpacity<float>::operator float)();
  return *(float *)&v3 == HighContrastAwareOpacity<float>::operator float(a2);
}
