/*
 * XREFs of ?CalculateTaskbarSearchBoxRect@SearchBoxOnTaskbarSearchAppPositioner@@AEAA?AURect@Foundation@Windows@winrt@@AEBUMonitorInfo@@AEBUtagRECT@@_N@Z @ 0x1801A51C4
 * Callers:
 *     ?GetTaskbarSearchBoxRect@SearchBoxOnTaskbarSearchAppPositioner@@UEAA?AURect@Foundation@Windows@winrt@@AEBUtagRECT@@@Z @ 0x1801A5EE0 (-GetTaskbarSearchBoxRect@SearchBoxOnTaskbarSearchAppPositioner@@UEAA-AURect@Foundation@Windows@w.c)
 * Callees:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_SearchBoxOnTaskbarWave2@@@details@wil@@QEAA_NXZ @ 0x1801A2398 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_SearchBoxOnTaskbarWave2@@@details.c)
 *     _anonymous_namespace_::GetInnerSearchBoxOffset @ 0x1801A59F0 (_anonymous_namespace_--GetInnerSearchBoxOffset.c)
 */

__int64 __fastcall SearchBoxOnTaskbarSearchAppPositioner::CalculateTaskbarSearchBoxRect(
        __int64 a1,
        __int64 a2,
        int *a3,
        _DWORD *a4,
        char a5)
{
  int v8; // ebx
  int v9; // ebx
  unsigned __int8 IsEnabled; // al
  int v11; // r8d
  float v12; // xmm1_4

  *(_OWORD *)a2 = 0LL;
  if ( a3[20] == 2 )
  {
    if ( a5 )
      v8 = a4[2] - a3[17];
    else
      v8 = a3[15] - *a4;
    v9 = v8 - anonymous_namespace_::GetInnerSearchBoxOffset(a3);
    IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_SearchBoxOnTaskbarWave2>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_SearchBoxOnTaskbarWave2>::GetImpl'::`2'::impl);
    v11 = a3[14];
    if ( IsEnabled )
      v12 = (float)((float)v9 * 96.0) / (float)v11;
    else
      v12 = (float)MulDiv(v9, 96, v11);
    *(float *)a2 = v12;
    *(float *)(a2 + 4) = (float)MulDiv(a3[16] - a4[1], 96, a3[14]);
    *(float *)(a2 + 8) = (float)(a3[17] - a3[15]);
    *(float *)(a2 + 12) = (float)(a3[18] - a3[16]);
  }
  return a2;
}
