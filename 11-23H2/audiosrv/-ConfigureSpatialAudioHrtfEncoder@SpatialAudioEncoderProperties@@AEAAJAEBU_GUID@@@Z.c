/*
 * XREFs of ?ConfigureSpatialAudioHrtfEncoder@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z @ 0x1801461D8
 * Callers:
 *     ?RuntimeClassInitialize@SpatialAudioEncoderProperties@@QEAAJAEBU_GUID@@H@Z @ 0x180146C38 (-RuntimeClassInitialize@SpatialAudioEncoderProperties@@QEAAJAEBU_GUID@@H@Z.c)
 * Callees:
 *     ?GetMaxDynamicObjectCountPC@SpatialAudio@@YAGAEBU_GUID@@@Z @ 0x18001B004 (-GetMaxDynamicObjectCountPC@SpatialAudio@@YAGAEBU_GUID@@@Z.c)
 *     IsGetDefaultSpatialRenderingModePresent @ 0x18006A08C (IsGetDefaultSpatialRenderingModePresent.c)
 */

__int64 __fastcall SpatialAudioEncoderProperties::ConfigureSpatialAudioHrtfEncoder(
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
  *(_OWORD *)((char *)this + 126) = xmmword_1801A1150;
  *(_OWORD *)((char *)this + 142) = xmmword_1801A1160;
  *(_OWORD *)((char *)this + 158) = xmmword_1801A1170;
  *(_OWORD *)((char *)this + 174) = xmmword_1801A1180;
  *(_OWORD *)((char *)this + 190) = xmmword_1801A1190;
  *(_OWORD *)((char *)this + 206) = xmmword_1801A11A0;
  *(_OWORD *)((char *)this + 222) = xmmword_1801A11B0;
  *(_DWORD *)((char *)this + 238) = 0;
  if ( IsGetDefaultSpatialRenderingModePresent() )
  {
    v15 = 0;
    v14 = 0;
    if ( (int)TryGetHrtfProcessingLimits(&v15, &v14) >= 0 )
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
  return 0LL;
}
