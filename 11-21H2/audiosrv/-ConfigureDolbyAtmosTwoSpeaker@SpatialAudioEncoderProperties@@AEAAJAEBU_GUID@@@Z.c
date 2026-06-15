/*
 * XREFs of ?ConfigureDolbyAtmosTwoSpeaker@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z @ 0x180138F0C
 * Callers:
 *     ?RuntimeClassInitialize@SpatialAudioEncoderProperties@@QEAAJAEBU_GUID@@H@Z @ 0x18013A15C (-RuntimeClassInitialize@SpatialAudioEncoderProperties@@QEAAJAEBU_GUID@@H@Z.c)
 * Callees:
 *     IsGetDefaultSpatialRenderingModePresent @ 0x180061D9C (IsGetDefaultSpatialRenderingModePresent.c)
 */

__int64 __fastcall SpatialAudioEncoderProperties::ConfigureDolbyAtmosTwoSpeaker(
        SpatialAudioEncoderProperties *this,
        const struct _GUID *a2)
{
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  __int16 v5; // ax
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int16 v13; // [rsp+30h] [rbp+8h] BYREF
  int v14; // [rsp+38h] [rbp+10h] BYREF

  *((_DWORD *)this + 29) = 262142;
  v3 = (__int128)*a2;
  *((_WORD *)this + 62) = 16;
  *(_OWORD *)((char *)this + 100) = v3;
  *((_DWORD *)this + 30) = 1;
  *(_OWORD *)((char *)this + 126) = xmmword_180197300;
  *(_OWORD *)((char *)this + 142) = xmmword_180197310;
  *(_OWORD *)((char *)this + 158) = xmmword_180197320;
  *(_OWORD *)((char *)this + 174) = xmmword_180197330;
  *(_OWORD *)((char *)this + 190) = xmmword_180197340;
  *(_OWORD *)((char *)this + 206) = xmmword_180197350;
  *(_OWORD *)((char *)this + 222) = xmmword_180197360;
  *(_DWORD *)((char *)this + 238) = 0;
  if ( IsGetDefaultSpatialRenderingModePresent() )
  {
    v14 = 0;
    v13 = 0;
    if ( (int)TryGetPlatformSpecificProcessingLimitsForSpatialFormat(
                &DOLBY_ATMOS_TWOSPEAKER_SPATIAL_ENCODER,
                &v14,
                &v13) >= 0 )
    {
      *((_DWORD *)this + 29) = v14;
      *((_WORD *)this + 62) = v13;
    }
  }
  v4 = *((_OWORD *)this + 7);
  *(_OWORD *)((char *)this + 242) = *((_OWORD *)this + 6);
  v5 = *((_WORD *)this + 120);
  v6 = *((_OWORD *)this + 8);
  *(_OWORD *)((char *)this + 258) = v4;
  v7 = *((_OWORD *)this + 9);
  *(_OWORD *)((char *)this + 274) = v6;
  v8 = *((_OWORD *)this + 10);
  *(_OWORD *)((char *)this + 290) = v7;
  v9 = *((_OWORD *)this + 11);
  *(_OWORD *)((char *)this + 306) = v8;
  v10 = *((_OWORD *)this + 12);
  *(_OWORD *)((char *)this + 322) = v9;
  v11 = *((_OWORD *)this + 14);
  *(_OWORD *)((char *)this + 338) = v10;
  *(_OWORD *)((char *)this + 354) = *((_OWORD *)this + 13);
  *(_OWORD *)((char *)this + 370) = v11;
  *((_WORD *)this + 193) = v5;
  *((_OWORD *)this + 17) = xmmword_180197480;
  *((_OWORD *)this + 18) = xmmword_180197490;
  *((_OWORD *)this + 19) = xmmword_1801974A0;
  *((_OWORD *)this + 20) = xmmword_1801974B0;
  *((_OWORD *)this + 21) = xmmword_1801974C0;
  *((_OWORD *)this + 22) = xmmword_1801974D0;
  *((_OWORD *)this + 23) = xmmword_1801974E0;
  *((_DWORD *)this + 96) = 1;
  return 0LL;
}
