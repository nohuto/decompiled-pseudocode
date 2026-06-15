/*
 * XREFs of ?ConfigureDolbyAtmosTwoSpeaker@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z @ 0x180145AF4
 * Callers:
 *     ?RuntimeClassInitialize@SpatialAudioEncoderProperties@@QEAAJAEBU_GUID@@H@Z @ 0x180146C88 (-RuntimeClassInitialize@SpatialAudioEncoderProperties@@QEAAJAEBU_GUID@@H@Z.c)
 * Callees:
 *     ?GetMaxDynamicObjectCountPC@SpatialAudio@@YAGAEBU_GUID@@@Z @ 0x18001B004 (-GetMaxDynamicObjectCountPC@SpatialAudio@@YAGAEBU_GUID@@@Z.c)
 *     IsGetDefaultSpatialRenderingModePresent @ 0x18006A07C (IsGetDefaultSpatialRenderingModePresent.c)
 */

__int64 __fastcall SpatialAudioEncoderProperties::ConfigureDolbyAtmosTwoSpeaker(
        SpatialAudioEncoderProperties *this,
        struct _GUID *a2)
{
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int16 v7; // ax
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int16 v14; // [rsp+30h] [rbp+8h] BYREF
  int v15; // [rsp+38h] [rbp+10h] BYREF

  *((_DWORD *)this + 29) = 262142;
  *((_WORD *)this + 62) = SpatialAudio::GetMaxDynamicObjectCountPC((SpatialAudio *)a2, a2);
  v4 = (__int128)*a2;
  *((_DWORD *)this + 30) = 1;
  *(_OWORD *)((char *)this + 100) = v4;
  *(_OWORD *)((char *)this + 126) = xmmword_1801A1250;
  *(_OWORD *)((char *)this + 142) = xmmword_1801A1260;
  *(_OWORD *)((char *)this + 158) = xmmword_1801A1270;
  *(_OWORD *)((char *)this + 174) = xmmword_1801A1280;
  *(_OWORD *)((char *)this + 190) = xmmword_1801A1290;
  *(_OWORD *)((char *)this + 206) = xmmword_1801A12A0;
  *(_OWORD *)((char *)this + 222) = xmmword_1801A12B0;
  *(_DWORD *)((char *)this + 238) = 0;
  if ( IsGetDefaultSpatialRenderingModePresent() )
  {
    v15 = 0;
    v14 = 0;
    if ( (int)TryGetPlatformSpecificProcessingLimitsForSpatialFormat(
                &DOLBY_ATMOS_TWOSPEAKER_SPATIAL_ENCODER,
                &v15,
                &v14) >= 0 )
    {
      *((_DWORD *)this + 29) = v15;
      *((_WORD *)this + 62) = v14;
    }
  }
  v5 = *((_OWORD *)this + 7);
  *(_OWORD *)((char *)this + 242) = *((_OWORD *)this + 6);
  v6 = *((_OWORD *)this + 8);
  v7 = *((_WORD *)this + 120);
  *(_OWORD *)((char *)this + 258) = v5;
  v8 = *((_OWORD *)this + 9);
  *(_OWORD *)((char *)this + 274) = v6;
  v9 = *((_OWORD *)this + 10);
  *(_OWORD *)((char *)this + 290) = v8;
  v10 = *((_OWORD *)this + 11);
  *(_OWORD *)((char *)this + 306) = v9;
  v11 = *((_OWORD *)this + 12);
  *(_OWORD *)((char *)this + 322) = v10;
  v12 = *((_OWORD *)this + 14);
  *(_OWORD *)((char *)this + 338) = v11;
  *(_OWORD *)((char *)this + 354) = *((_OWORD *)this + 13);
  *(_OWORD *)((char *)this + 370) = v12;
  *((_WORD *)this + 193) = v7;
  *((_OWORD *)this + 17) = xmmword_1801A10D0;
  *((_OWORD *)this + 18) = xmmword_1801A10E0;
  *((_OWORD *)this + 19) = xmmword_1801A10F0;
  *((_OWORD *)this + 20) = xmmword_1801A1100;
  *((_OWORD *)this + 21) = xmmword_1801A1110;
  *((_OWORD *)this + 22) = xmmword_1801A1120;
  *((_OWORD *)this + 23) = xmmword_1801A1130;
  *((_DWORD *)this + 96) = 1;
  return 0LL;
}
