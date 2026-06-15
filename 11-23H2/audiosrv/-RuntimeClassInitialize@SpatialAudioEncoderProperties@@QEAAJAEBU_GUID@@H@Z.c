/*
 * XREFs of ?RuntimeClassInitialize@SpatialAudioEncoderProperties@@QEAAJAEBU_GUID@@H@Z @ 0x180146C38
 * Callers:
 *     ??$MakeAndInitialize@VSpatialAudioEncoderProperties@@V1@AEBU_GUID@@AEAH@Details@WRL@Microsoft@@YAJPEAPEAVSpatialAudioEncoderProperties@@AEBU_GUID@@AEAH@Z @ 0x180145618 (--$MakeAndInitialize@VSpatialAudioEncoderProperties@@V1@AEBU_GUID@@AEAH@Details@WRL@Microsoft@@Y.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x180005388 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     Create_SpatialAudioPositionCalc @ 0x18002E084 (Create_SpatialAudioPositionCalc.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x18003F314 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ConfigureDolbyAtmosHeadphonesEncoder@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z @ 0x1801456F4 (-ConfigureDolbyAtmosHeadphonesEncoder@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z.c)
 *     ?ConfigureDolbyAtmosMATEncoder@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z @ 0x1801458CC (-ConfigureDolbyAtmosMATEncoder@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z.c)
 *     ?ConfigureDolbyAtmosTwoSpeaker@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z @ 0x180145AA4 (-ConfigureDolbyAtmosTwoSpeaker@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z.c)
 *     ?ConfigureDtsxHdmi@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z @ 0x180145C7C (-ConfigureDtsxHdmi@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z.c)
 *     ?ConfigureDtsxHeadphones@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z @ 0x180145DE4 (-ConfigureDtsxHeadphones@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z.c)
 *     ?ConfigureDtsxTwoSpeaker@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z @ 0x180145F4C (-ConfigureDtsxTwoSpeaker@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z.c)
 *     ?ConfigureMultiChannel@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z @ 0x1801460B4 (-ConfigureMultiChannel@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z.c)
 *     ?ConfigureSpatialAudioHrtfEncoder@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z @ 0x1801461D8 (-ConfigureSpatialAudioHrtfEncoder@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z.c)
 *     ?QueryRegisterForOverrides@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z @ 0x18014696C (-QueryRegisterForOverrides@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z.c)
 */

__int64 __fastcall SpatialAudioEncoderProperties::RuntimeClassInitialize(
        SpatialAudioEncoderProperties *this,
        struct _GUID *a2,
        int a3)
{
  _QWORD *v3; // r14
  int v7; // ebp
  int v8; // r15d
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  int SpatialAudioPositionCalc; // eax
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  int RegisterForOverrides; // esi
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  void *v25; // rax
  __int64 v26; // rax
  float v27; // xmm4_4
  __int64 v28; // rcx
  __int64 v29; // rdx
  __m128 v30; // xmm3
  __m128 v31; // xmm1
  __m128 v32; // xmm0
  __m128 v33; // xmm2
  __m128 v34; // xmm3
  float v35; // xmm1_4
  __m128 v36; // xmm3
  unsigned int v37; // ecx
  const CHAR *v39; // [rsp+40h] [rbp-38h] BYREF
  int v40; // [rsp+80h] [rbp+8h] BYREF
  int v41; // [rsp+98h] [rbp+20h] BYREF

  v3 = (_QWORD *)((char *)this + 536);
  v7 = 0;
  v8 = 0;
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)this + 67);
  SpatialAudioPositionCalc = Create_SpatialAudioPositionCalc(v3, v9, v10, v11);
  RegisterForOverrides = SpatialAudioPositionCalc;
  if ( SpatialAudioPositionCalc >= 0 )
  {
    v17 = *(_QWORD *)&a2->Data1 - MICROSOFT_HRTF_SPATIAL_ENCODER;
    if ( *(_QWORD *)&a2->Data1 == (_QWORD)MICROSOFT_HRTF_SPATIAL_ENCODER )
      v17 = *(_QWORD *)a2->Data4 - *((_QWORD *)&MICROSOFT_HRTF_SPATIAL_ENCODER + 1);
    if ( v17 )
    {
      v18 = *(_QWORD *)&a2->Data1 - DOLBY_ATMOS_MAT_SPATIAL_ENCODER;
      if ( *(_QWORD *)&a2->Data1 == (_QWORD)DOLBY_ATMOS_MAT_SPATIAL_ENCODER )
        v18 = *(_QWORD *)a2->Data4 - *((_QWORD *)&DOLBY_ATMOS_MAT_SPATIAL_ENCODER + 1);
      if ( v18 )
      {
        v19 = *(_QWORD *)&a2->Data1 - DOLBY_ATMOS_HEADPHONES_SPATIAL_ENCODER;
        if ( *(_QWORD *)&a2->Data1 == (_QWORD)DOLBY_ATMOS_HEADPHONES_SPATIAL_ENCODER )
          v19 = *(_QWORD *)a2->Data4 - *((_QWORD *)&DOLBY_ATMOS_HEADPHONES_SPATIAL_ENCODER + 1);
        if ( v19 )
        {
          v20 = *(_QWORD *)&a2->Data1 - DOLBY_ATMOS_TWOSPEAKER_SPATIAL_ENCODER;
          if ( *(_QWORD *)&a2->Data1 == (_QWORD)DOLBY_ATMOS_TWOSPEAKER_SPATIAL_ENCODER )
            v20 = *(_QWORD *)a2->Data4 - *((_QWORD *)&DOLBY_ATMOS_TWOSPEAKER_SPATIAL_ENCODER + 1);
          if ( v20 )
          {
            v21 = *(_QWORD *)&a2->Data1 - DTSX_HEADPHONES_SPATIAL_ENCODER;
            if ( *(_QWORD *)&a2->Data1 == (_QWORD)DTSX_HEADPHONES_SPATIAL_ENCODER )
              v21 = *(_QWORD *)a2->Data4 - *((_QWORD *)&DTSX_HEADPHONES_SPATIAL_ENCODER + 1);
            if ( v21 )
            {
              v22 = *(_QWORD *)&a2->Data1 - DTSX_TWOSPEAKER_SPATIAL_ENCODER;
              if ( *(_QWORD *)&a2->Data1 == (_QWORD)DTSX_TWOSPEAKER_SPATIAL_ENCODER )
                v22 = *(_QWORD *)a2->Data4 - *((_QWORD *)&DTSX_TWOSPEAKER_SPATIAL_ENCODER + 1);
              if ( v22 )
              {
                v23 = *(_QWORD *)&a2->Data1 - DTSX_HDMI_SPATIAL_ENCODER;
                if ( *(_QWORD *)&a2->Data1 == (_QWORD)DTSX_HDMI_SPATIAL_ENCODER )
                  v23 = *(_QWORD *)a2->Data4 - *((_QWORD *)&DTSX_HDMI_SPATIAL_ENCODER + 1);
                if ( v23 )
                {
                  v24 = *(_QWORD *)&a2->Data1 - MULTICHANNEL_SPATIAL_ENCODER;
                  if ( *(_QWORD *)&a2->Data1 == (_QWORD)MULTICHANNEL_SPATIAL_ENCODER )
                    v24 = *(_QWORD *)a2->Data4 - *((_QWORD *)&MULTICHANNEL_SPATIAL_ENCODER + 1);
                  if ( !v24 )
                  {
                    v8 = 1;
                    SpatialAudioEncoderProperties::ConfigureMultiChannel(this, a2);
                  }
                }
                else
                {
                  SpatialAudioEncoderProperties::ConfigureDtsxHdmi(this, a2);
                }
              }
              else
              {
                SpatialAudioEncoderProperties::ConfigureDtsxTwoSpeaker(this, a2);
              }
            }
            else
            {
              SpatialAudioEncoderProperties::ConfigureDtsxHeadphones(this, a2);
            }
          }
          else
          {
            v7 = 1;
            SpatialAudioEncoderProperties::ConfigureDolbyAtmosTwoSpeaker(this, a2);
          }
        }
        else
        {
          v7 = 1;
          SpatialAudioEncoderProperties::ConfigureDolbyAtmosHeadphonesEncoder(this, a2);
        }
      }
      else
      {
        v7 = 1;
        SpatialAudioEncoderProperties::ConfigureDolbyAtmosMATEncoder(this, a2);
      }
    }
    else
    {
      SpatialAudioEncoderProperties::ConfigureSpatialAudioHrtfEncoder(this, a2);
    }
    RegisterForOverrides = SpatialAudioEncoderProperties::QueryRegisterForOverrides(
                             this,
                             (const struct _GUID *)((char *)this + 100));
    if ( RegisterForOverrides >= 0 )
    {
      if ( a3 )
      {
        RegisterForOverrides = -2147024882;
        v25 = _aligned_malloc(0x110uLL, 0x10uLL);
        *((_QWORD *)this + 6) = v25;
        if ( v25 )
        {
          RegisterForOverrides = (*(__int64 (__fastcall **)(_QWORD, char *, void *, __int64))(*(_QWORD *)*v3 + 24LL))(
                                   *v3,
                                   (char *)this + 272,
                                   v25,
                                   272LL);
          if ( v7 || v8 )
          {
            v26 = 0LL;
            v27 = *((float *)this + 69) * 0.5;
            v28 = 17LL;
            do
            {
              v29 = *((_QWORD *)this + 6);
              v30 = *(__m128 *)(v26 + v29);
              if ( v7 )
              {
                v31 = _mm_shuffle_ps(v30, v30, 255);
                v32 = _mm_shuffle_ps(v30, v30, 170);
                v33 = _mm_shuffle_ps(v30, v30, 85);
                v32.m128_f32[0] = v32.m128_f32[0] + v27;
                v30.m128_f32[0] = v30.m128_f32[0] + v27;
                v34 = _mm_movelh_ps(_mm_unpacklo_ps(v30, v32), _mm_unpacklo_ps(v33, v31));
              }
              else
              {
                LODWORD(v35) = _mm_shuffle_ps(v30, v30, 170).m128_u32[0] ^ _xmm;
                v36 = _mm_shuffle_ps(v30, v30, 198);
                v36.m128_f32[0] = v35;
                v34 = _mm_shuffle_ps(v36, v36, 198);
              }
              *(__m128 *)(v26 + v29) = v34;
              v26 += 16LL;
              --v28;
            }
            while ( v28 );
          }
        }
      }
    }
  }
  else if ( (unsigned int)dword_1801CD1E8 > 2 )
  {
    v40 = SpatialAudioPositionCalc;
    v41 = 169;
    v39 = "SpatialAudioEncoderProperties::RuntimeClassInitialize";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v13,
      (int)&dword_1801953CC,
      v14,
      v15,
      &v39,
      (__int64)&v41,
      (__int64)&v40);
  }
  *((_DWORD *)this + 136) = 0;
  if ( RegisterForOverrides >= 0 )
  {
    v37 = (*((_DWORD *)this + 29) >> 1) - ((*((_DWORD *)this + 29) >> 2) & 0x55555555);
    *((_DWORD *)this + 136) = (16843009
                             * (((v37 & 0x33333333)
                               + ((v37 >> 2) & 0x33333333)
                               + (((v37 & 0x33333333) + ((v37 >> 2) & 0x33333333)) >> 4)) & 0xF0F0F0F)) >> 24;
  }
  return (unsigned int)RegisterForOverrides;
}
