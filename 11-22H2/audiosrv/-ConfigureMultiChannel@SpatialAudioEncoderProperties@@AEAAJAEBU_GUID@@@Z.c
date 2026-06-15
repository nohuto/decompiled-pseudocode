/*
 * XREFs of ?ConfigureMultiChannel@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z @ 0x180146104
 * Callers:
 *     ?RuntimeClassInitialize@SpatialAudioEncoderProperties@@QEAAJAEBU_GUID@@H@Z @ 0x180146C88 (-RuntimeClassInitialize@SpatialAudioEncoderProperties@@QEAAJAEBU_GUID@@H@Z.c)
 * Callees:
 *     ?GetMaxDynamicObjectCountPC@SpatialAudio@@YAGAEBU_GUID@@@Z @ 0x18001B004 (-GetMaxDynamicObjectCountPC@SpatialAudio@@YAGAEBU_GUID@@@Z.c)
 */

__int64 __fastcall SpatialAudioEncoderProperties::ConfigureMultiChannel(
        SpatialAudioEncoderProperties *this,
        struct _GUID *a2)
{
  __int16 v4; // ax
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1

  *((_DWORD *)this + 29) = 262142;
  *((_WORD *)this + 62) = SpatialAudio::GetMaxDynamicObjectCountPC((SpatialAudio *)a2, a2);
  *(struct _GUID *)((char *)this + 100) = *a2;
  *((_DWORD *)this + 30) = 1;
  *(_OWORD *)((char *)this + 126) = xmmword_1801A1050;
  *(_OWORD *)((char *)this + 142) = xmmword_1801A1060;
  *(_OWORD *)((char *)this + 158) = xmmword_1801A1070;
  *(_OWORD *)((char *)this + 174) = xmmword_1801A1080;
  *(_OWORD *)((char *)this + 190) = xmmword_1801A1090;
  *(_OWORD *)((char *)this + 206) = xmmword_1801A10A0;
  *(_OWORD *)((char *)this + 222) = xmmword_1801A10B0;
  *(_DWORD *)((char *)this + 238) = 0;
  v4 = *((_WORD *)this + 120);
  v5 = *((_OWORD *)this + 7);
  *(_OWORD *)((char *)this + 242) = *((_OWORD *)this + 6);
  v6 = *((_OWORD *)this + 8);
  *(_OWORD *)((char *)this + 258) = v5;
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
  *((_WORD *)this + 193) = v4;
  return 0LL;
}
