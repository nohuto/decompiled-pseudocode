/*
 * XREFs of ?GetMaxDynamicObjectCountPC@SpatialAudio@@YAGAEBU_GUID@@@Z @ 0x18001B004
 * Callers:
 *     ?ReloadProperties@SpatialAudioDevicePropertyReader@@UEAAJXZ @ 0x18001AD30 (-ReloadProperties@SpatialAudioDevicePropertyReader@@UEAAJXZ.c)
 *     ?ConfigureDolbyAtmosHeadphonesEncoder@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z @ 0x1801456F4 (-ConfigureDolbyAtmosHeadphonesEncoder@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z.c)
 *     ?ConfigureDolbyAtmosMATEncoder@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z @ 0x1801458CC (-ConfigureDolbyAtmosMATEncoder@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z.c)
 *     ?ConfigureDolbyAtmosTwoSpeaker@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z @ 0x180145AA4 (-ConfigureDolbyAtmosTwoSpeaker@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z.c)
 *     ?ConfigureDtsxHdmi@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z @ 0x180145C7C (-ConfigureDtsxHdmi@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z.c)
 *     ?ConfigureDtsxHeadphones@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z @ 0x180145DE4 (-ConfigureDtsxHeadphones@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z.c)
 *     ?ConfigureDtsxTwoSpeaker@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z @ 0x180145F4C (-ConfigureDtsxTwoSpeaker@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z.c)
 *     ?ConfigureMultiChannel@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z @ 0x1801460B4 (-ConfigureMultiChannel@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z.c)
 *     ?ConfigureSpatialAudioHrtfEncoder@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z @ 0x1801461D8 (-ConfigureSpatialAudioHrtfEncoder@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z.c)
 * Callees:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_IncreaseSpatialAudioDynamicObjectCountV1@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x18001BD38 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_IncreaseSpatialAudioDynamicObject.c)
 *     memcmp_0 @ 0x18006A80D (memcmp_0.c)
 */

__int64 __fastcall SpatialAudio::GetMaxDynamicObjectCountPC(SpatialAudio *this, const struct _GUID *a2)
{
  bool v3; // zf
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax

  v3 = (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_IncreaseSpatialAudioDynamicObjectCountV1>::__private_IsEnabled(
                          &`wil::Feature<__WilFeatureTraits_Feature_IncreaseSpatialAudioDynamicObjectCountV1>::GetImpl'::`2'::impl,
                          a2) == 0;
  v4 = *(_QWORD *)this;
  if ( !v3 )
  {
    v13 = v4 - MICROSOFT_HRTF_SPATIAL_ENCODER;
    if ( !v13 )
      v13 = *((_QWORD *)this + 1) - *((_QWORD *)&MICROSOFT_HRTF_SPATIAL_ENCODER + 1);
    if ( v13 )
    {
      v14 = *(_QWORD *)this - DOLBY_ATMOS_MAT_SPATIAL_ENCODER;
      if ( *(_QWORD *)this == (_QWORD)DOLBY_ATMOS_MAT_SPATIAL_ENCODER )
        v14 = *((_QWORD *)this + 1) - *((_QWORD *)&DOLBY_ATMOS_MAT_SPATIAL_ENCODER + 1);
      if ( !v14 )
        return 20LL;
      v15 = *(_QWORD *)this - DOLBY_ATMOS_HEADPHONES_SPATIAL_ENCODER;
      if ( *(_QWORD *)this == (_QWORD)DOLBY_ATMOS_HEADPHONES_SPATIAL_ENCODER )
        v15 = *((_QWORD *)this + 1) - *((_QWORD *)&DOLBY_ATMOS_HEADPHONES_SPATIAL_ENCODER + 1);
      if ( v15 )
      {
        v16 = *(_QWORD *)this - DOLBY_ATMOS_TWOSPEAKER_SPATIAL_ENCODER;
        if ( *(_QWORD *)this == (_QWORD)DOLBY_ATMOS_TWOSPEAKER_SPATIAL_ENCODER )
          v16 = *((_QWORD *)this + 1) - *((_QWORD *)&DOLBY_ATMOS_TWOSPEAKER_SPATIAL_ENCODER + 1);
        if ( v16 )
        {
          v17 = *(_QWORD *)this - DTSX_HEADPHONES_SPATIAL_ENCODER;
          if ( *(_QWORD *)this == (_QWORD)DTSX_HEADPHONES_SPATIAL_ENCODER )
            v17 = *((_QWORD *)this + 1) - *((_QWORD *)&DTSX_HEADPHONES_SPATIAL_ENCODER + 1);
          if ( v17 )
          {
            v18 = *(_QWORD *)this - DTSX_TWOSPEAKER_SPATIAL_ENCODER;
            if ( *(_QWORD *)this == (_QWORD)DTSX_TWOSPEAKER_SPATIAL_ENCODER )
              v18 = *((_QWORD *)this + 1) - *((_QWORD *)&DTSX_TWOSPEAKER_SPATIAL_ENCODER + 1);
            if ( v18 )
              goto LABEL_20;
          }
        }
      }
    }
    return 128LL;
  }
  v5 = v4 - MICROSOFT_HRTF_SPATIAL_ENCODER;
  if ( !v5 )
    v5 = *((_QWORD *)this + 1) - *((_QWORD *)&MICROSOFT_HRTF_SPATIAL_ENCODER + 1);
  if ( !v5 )
    return 111LL;
  v6 = *(_QWORD *)this - DOLBY_ATMOS_MAT_SPATIAL_ENCODER;
  if ( *(_QWORD *)this == (_QWORD)DOLBY_ATMOS_MAT_SPATIAL_ENCODER )
    v6 = *((_QWORD *)this + 1) - *((_QWORD *)&DOLBY_ATMOS_MAT_SPATIAL_ENCODER + 1);
  if ( !v6 )
    return 20LL;
  v7 = *(_QWORD *)this - DOLBY_ATMOS_HEADPHONES_SPATIAL_ENCODER;
  if ( *(_QWORD *)this == (_QWORD)DOLBY_ATMOS_HEADPHONES_SPATIAL_ENCODER )
    v7 = *((_QWORD *)this + 1) - *((_QWORD *)&DOLBY_ATMOS_HEADPHONES_SPATIAL_ENCODER + 1);
  if ( v7 )
  {
    v8 = *(_QWORD *)this - DOLBY_ATMOS_TWOSPEAKER_SPATIAL_ENCODER;
    if ( *(_QWORD *)this == (_QWORD)DOLBY_ATMOS_TWOSPEAKER_SPATIAL_ENCODER )
      v8 = *((_QWORD *)this + 1) - *((_QWORD *)&DOLBY_ATMOS_TWOSPEAKER_SPATIAL_ENCODER + 1);
    if ( v8 )
    {
      v9 = *(_QWORD *)this - DTSX_HEADPHONES_SPATIAL_ENCODER;
      if ( *(_QWORD *)this == (_QWORD)DTSX_HEADPHONES_SPATIAL_ENCODER )
        v9 = *((_QWORD *)this + 1) - *((_QWORD *)&DTSX_HEADPHONES_SPATIAL_ENCODER + 1);
      if ( !v9 )
        return 32LL;
      v10 = *(_QWORD *)this - DTSX_TWOSPEAKER_SPATIAL_ENCODER;
      if ( *(_QWORD *)this == (_QWORD)DTSX_TWOSPEAKER_SPATIAL_ENCODER )
        v10 = *((_QWORD *)this + 1) - *((_QWORD *)&DTSX_TWOSPEAKER_SPATIAL_ENCODER + 1);
      if ( !v10 )
        return 32LL;
LABEL_20:
      v11 = *(_QWORD *)this - DTSX_HDMI_SPATIAL_ENCODER;
      if ( *(_QWORD *)this == (_QWORD)DTSX_HDMI_SPATIAL_ENCODER )
        v11 = *((_QWORD *)this + 1) - *((_QWORD *)&DTSX_HDMI_SPATIAL_ENCODER + 1);
      if ( v11 )
      {
        memcmp_0(this, &MULTICHANNEL_SPATIAL_ENCODER, 0x10uLL);
        return 0LL;
      }
      return 32LL;
    }
  }
  return 16LL;
}
