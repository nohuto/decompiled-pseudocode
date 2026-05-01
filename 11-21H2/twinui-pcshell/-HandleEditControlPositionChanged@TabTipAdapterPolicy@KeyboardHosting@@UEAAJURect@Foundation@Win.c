/*
 * XREFs of ?HandleEditControlPositionChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJURect@Foundation@Windows@@PEAW4ShellRequestType@Text@Shell@Internal@5@@Z @ 0x18022FDD0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_OptimizePositionAndSizeUpdate@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180025FB0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_OptimizePositionAndSizeUpdate@@@details@w.c)
 *     ?PhysicalRectToRelative@ScalingHelper@KeyboardHosting@@SA?AURect@Foundation@Windows@@AEBU345@W4DEVICE_SCALE_FACTOR@@@Z @ 0x180053554 (-PhysicalRectToRelative@ScalingHelper@KeyboardHosting@@SA-AURect@Foundation@Windows@@AEBU345@W4D.c)
 *     ?GetCurrentMonitorWithRect@TabTipAdapterPolicy@KeyboardHosting@@CAPEAUHMONITOR__@@URect@Foundation@Windows@@@Z @ 0x1800BE260 (-GetCurrentMonitorWithRect@TabTipAdapterPolicy@KeyboardHosting@@CAPEAUHMONITOR__@@URect@Foundati.c)
 *     ?UpdateMonitorInfo@MonitorInformation@KeyboardHosting@@QEAAXXZ @ 0x1800BE420 (-UpdateMonitorInfo@MonitorInformation@KeyboardHosting@@QEAAXXZ.c)
 *     ?IsRectNull@KeyboardHosting@@YA_NURect@Foundation@Windows@@@Z @ 0x1800BEA64 (-IsRectNull@KeyboardHosting@@YA_NURect@Foundation@Windows@@@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ??$HandleEditControlPositionChanged@AEAMAEAMAEAMAEAMIAEAW4ShellRequestType@Text@Shell@Internal@Windows@@@TouchKeyboardExperienceTelemetryLogger@@SAXAEAM000$$QEAIAEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x18022F844 (--$HandleEditControlPositionChanged@AEAMAEAMAEAMAEAMIAEAW4ShellRequestType@Text@Shell@Internal@W.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::HandleEditControlPositionChanged(
        const __m128i *a1,
        float *a2,
        int *a3)
{
  __m128i v3; // xmm0
  HMONITOR CurrentMonitorWithRect; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  __m128 v10; // xmm1
  __m128i v12; // [rsp+30h] [rbp-29h]
  float v13; // [rsp+30h] [rbp-29h]
  float v14; // [rsp+34h] [rbp-25h]
  float v15; // [rsp+38h] [rbp-21h]
  float v16; // [rsp+3Ch] [rbp-1Dh]
  __m128i v17; // [rsp+40h] [rbp-19h] BYREF
  int v18; // [rsp+50h] [rbp-9h] BYREF
  HMONITOR v19; // [rsp+58h] [rbp-1h] BYREF
  __int128 v20; // [rsp+60h] [rbp+7h]
  __int128 v21; // [rsp+70h] [rbp+17h]
  int v22; // [rsp+80h] [rbp+27h]

  v3 = *(__m128i *)a2;
  *a3 = 0;
  v17 = v3;
  CurrentMonitorWithRect = KeyboardHosting::TabTipAdapterPolicy::GetCurrentMonitorWithRect(&v17);
  v22 = 100;
  v19 = CurrentMonitorWithRect;
  v20 = 0LL;
  v21 = 0LL;
  KeyboardHosting::MonitorInformation::UpdateMonitorInfo((KeyboardHosting::MonitorInformation *)&v19);
  v10 = (__m128)_mm_loadu_si128((const __m128i *)KeyboardHosting::ScalingHelper::PhysicalRectToRelative(
                                                   (float *)v17.m128i_i32,
                                                   a2,
                                                   v22));
  v12 = _mm_loadu_si128(a1 + 11);
  if ( v10.m128_f32[0] != *(float *)v12.m128i_i32
    || _mm_shuffle_ps(v10, v10, 85).m128_f32[0] != *(float *)&v12.m128i_i32[1]
    || _mm_shuffle_ps(v10, v10, 170).m128_f32[0] != *(float *)&v12.m128i_i32[2]
    || _mm_shuffle_ps(v10, v10, 255).m128_f32[0] != *(float *)&v12.m128i_i32[3] )
  {
    a1[28].m128i_i8[12] = 0;
    a1[11] = (const __m128i)v10;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_OptimizePositionAndSizeUpdate>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_OptimizePositionAndSizeUpdate>::GetImpl'::`2'::impl,
      1u,
      v8,
      v9);
    v13 = (float)(int)v21;
    v14 = (float)SDWORD1(v21);
    v15 = (float)(DWORD2(v21) - v21);
    v16 = (float)(HIDWORD(v21) - DWORD1(v21));
    v17 = *(__m128i *)a2;
    if ( !KeyboardHosting::IsRectNull((float *)v17.m128i_i32) )
    {
      v17 = _mm_loadu_si128((const __m128i *)a2);
      if ( *(float *)v17.m128i_i32 != v13
        || *(float *)&v17.m128i_i32[1] != v14
        || *(float *)&v17.m128i_i32[2] != v15
        || *(float *)&v17.m128i_i32[3] != v16 )
      {
        *a3 = 3;
      }
    }
  }
  v18 = v22;
  TouchKeyboardExperienceTelemetryLogger::HandleEditControlPositionChanged<float &,float &,float &,float &,unsigned int,enum Windows::Internal::Shell::Text::ShellRequestType &>(
    a1[11].m128i_i32,
    &a1[11].m128i_i32[1],
    &a1[11].m128i_i32[2],
    &a1[11].m128i_i32[3],
    &v18,
    a3);
  return 0LL;
}
