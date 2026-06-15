/*
 * XREFs of ?OnNotify@CPerEndpointVolumeAudioSession@@EEAAJPEAUAUDIO_VOLUME_NOTIFICATION_DATA@@@Z @ 0x1800E16A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18000A850 (--3@YAXPEAX@Z.c)
 *     ?RecalculateSessionVolume@CAudioSession@@UEAAXW4AudioVolumeChangeType@@PEBU_GUID@@K_NPEA_J@Z @ 0x18004B710 (-RecalculateSessionVolume@CAudioSession@@UEAAXW4AudioVolumeChangeType@@PEBU_GUID@@K_NPEA_J@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006707C (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     WPP_SF_ @ 0x1800DDCA8 (WPP_SF_.c)
 *     ?SetMute@CAudioSession@@UEAAJHPEBU_GUID@@HPEAH@Z @ 0x1800E3030 (-SetMute@CAudioSession@@UEAAJHPEBU_GUID@@HPEAH@Z.c)
 *     WPP_SF_q @ 0x1800E3ED0 (WPP_SF_q.c)
 *     WPP_SF_q_guid_ @ 0x1800E3F9C (WPP_SF_q_guid_.c)
 *     WPP_SF_q_guid__guid_ @ 0x1800E3FF4 (WPP_SF_q_guid__guid_.c)
 *     WPP_SF_qdd @ 0x1800E40B8 (WPP_SF_qdd.c)
 *     WPP_SF_qdgg @ 0x1800E4178 (WPP_SF_qdgg.c)
 *     WPP_SF_qgg_HEX__HEX_ @ 0x1800E41E4 (WPP_SF_qgg_HEX__HEX_.c)
 */

__int64 __fastcall CPerEndpointVolumeAudioSession::OnNotify(
        CPerEndpointVolumeAudioSession *this,
        struct AUDIO_VOLUME_NOTIFICATION_DATA *a2)
{
  char v2; // r12
  char v3; // r14
  char v4; // r13
  CAudioSessionManager *v7; // rcx
  char *v8; // rdx
  __int64 v9; // rax
  struct _RTL_CRITICAL_SECTION *v10; // rbp
  int v11; // r8d
  CAudioSessionManager *v12; // rcx
  float *p_fMasterVolume; // r15
  __m128 fMasterVolume_low; // xmm0
  __m128 v15; // xmm1
  unsigned int v16; // eax
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // kr00_8
  float *v19; // rax
  __int64 v20; // rsi
  float *v21; // rbp
  float v22; // xmm0_4
  __int64 v23; // rax
  int v24; // esi
  int v25; // r14d
  int v26; // ecx
  __int64 v27; // rax
  __int64 v28; // rdx
  float v29; // xmm1_4
  float *v31; // [rsp+40h] [rbp-78h] BYREF
  __int16 v32; // [rsp+48h] [rbp-70h]
  char *v33; // [rsp+50h] [rbp-68h] BYREF
  __int16 v34; // [rsp+58h] [rbp-60h]
  char v35; // [rsp+C0h] [rbp+8h]
  float *v36; // [rsp+C8h] [rbp+10h]

  v2 = 0;
  v3 = 0;
  v35 = 0;
  v4 = 0;
  v36 = 0LL;
  v7 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q_guid_(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      71,
      (unsigned int)&WPP_bb8c20e8cc9f3f3c48250634c7540f80_Traceguids,
      (_DWORD)this - 920,
      (__int64)a2);
    v7 = WPP_GLOBAL_Control;
  }
  v8 = (char *)this - 656;
  v9 = *(_QWORD *)&a2->guidEventContext.Data1 - *((_QWORD *)this - 82);
  if ( *(_QWORD *)&a2->guidEventContext.Data1 == *((_QWORD *)this - 82) )
    v9 = *(_QWORD *)a2->guidEventContext.Data4 - *((_QWORD *)v8 + 1);
  if ( v9 )
  {
    if ( v7 != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)v7 + 28) & 0x40) != 0
      && *((_BYTE *)v7 + 25) >= 4u )
    {
      WPP_SF_q_guid__guid_(
        *((_QWORD *)v7 + 2),
        (_DWORD)v8,
        (unsigned int)&WPP_GLOBAL_Control,
        (_DWORD)this - 920,
        (__int64)a2,
        (__int64)this - 656);
    }
    v10 = (struct _RTL_CRITICAL_SECTION *)((char *)this - 184);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this - 184));
    v11 = *((_DWORD *)this - 35);
    if ( a2->bMuted == v11 )
    {
      v12 = WPP_GLOBAL_Control;
    }
    else
    {
      v12 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_qdd(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          74LL,
          &WPP_bb8c20e8cc9f3f3c48250634c7540f80_Traceguids,
          (char *)this - 920,
          v11,
          a2->bMuted);
        v12 = WPP_GLOBAL_Control;
      }
      v2 = 1;
      v35 = 1;
    }
    p_fMasterVolume = &a2->fMasterVolume;
    fMasterVolume_low = (__m128)LODWORD(a2->fMasterVolume);
    if ( fMasterVolume_low.m128_f32[0] != *((float *)this - 36) )
    {
      if ( v12 != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_BYTE *)v12 + 28) & 0x40) != 0
        && *((_BYTE *)v12 + 25) >= 4u )
      {
        v15 = (__m128)*((unsigned int *)this - 36);
        v33 = (char *)this - 144;
        v31 = &a2->fMasterVolume;
        v32 = 4;
        v34 = 4;
        WPP_SF_qgg_HEX__HEX_(
          *((_QWORD *)v12 + 2),
          (unsigned int)&WPP_GLOBAL_Control,
          v11,
          (_DWORD)this - 920,
          *(_OWORD *)&_mm_cvtps_pd(v15),
          *(_OWORD *)&_mm_cvtps_pd(fMasterVolume_low),
          (__int64)&v33,
          (__int64)&v31);
        v12 = WPP_GLOBAL_Control;
      }
      v4 = 1;
    }
    v16 = *((_DWORD *)this - 8);
    if ( a2->nChannels == v16 )
    {
      v18 = v16;
      v17 = 4LL * v16;
      if ( !is_mul_ok(v18, 4uLL) )
        v17 = -1LL;
      v19 = (float *)operator new[](v17, (const struct std::nothrow_t *)&std::nothrow);
      v36 = v19;
      if ( v19 && (v20 = 0LL, *((_DWORD *)this - 8)) )
      {
        v21 = v19;
        do
        {
          if ( *p_fMasterVolume == 0.0 )
            v22 = FLOAT_1_0;
          else
            v22 = a2->afChannelVolumes[v20] / *p_fMasterVolume;
          v21[v20] = v22;
          v23 = *((_QWORD *)this - 3);
          if ( v22 == *(float *)(v23 + 4 * v20) )
          {
            v12 = WPP_GLOBAL_Control;
          }
          else
          {
            v12 = WPP_GLOBAL_Control;
            if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
              && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
              && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
            {
              WPP_SF_qdgg(
                *((_QWORD *)WPP_GLOBAL_Control + 2),
                76LL,
                &WPP_bb8c20e8cc9f3f3c48250634c7540f80_Traceguids,
                (char *)this - 920,
                v20,
                *(float *)(v23 + 4 * v20),
                v22);
              v12 = WPP_GLOBAL_Control;
            }
            v3 = 1;
          }
          v20 = (unsigned int)(v20 + 1);
        }
        while ( (unsigned int)v20 < *((_DWORD *)this - 8) );
        v2 = v35;
        v10 = (struct _RTL_CRITICAL_SECTION *)((char *)this - 184);
      }
      else
      {
        v12 = WPP_GLOBAL_Control;
      }
    }
    if ( v10 )
    {
      LeaveCriticalSection(v10);
      v12 = WPP_GLOBAL_Control;
    }
    if ( v2 || v4 || v3 )
    {
      if ( v12 != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_BYTE *)v12 + 28) & 0x40) != 0
        && *((_BYTE *)v12 + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)v12 + 2), 0x4Du, (__int64)&WPP_bb8c20e8cc9f3f3c48250634c7540f80_Traceguids);
        v12 = WPP_GLOBAL_Control;
      }
      if ( v3 )
      {
        v24 = 0;
        v25 = 0;
        if ( v12 != (CAudioSessionManager *)&WPP_GLOBAL_Control
          && (*((_BYTE *)v12 + 28) & 0x40) != 0
          && *((_BYTE *)v12 + 25) >= 4u )
        {
          WPP_SF_(*((_QWORD *)v12 + 2), 0x4Eu, (__int64)&WPP_bb8c20e8cc9f3f3c48250634c7540f80_Traceguids);
        }
        EnterCriticalSection(v10);
        v26 = *((_DWORD *)this - 8);
        if ( a2->nChannels == v26 )
        {
          v27 = 0LL;
          if ( v26 )
          {
            do
            {
              v28 = *((_QWORD *)this - 3);
              v29 = v36[v27];
              if ( *(float *)(v28 + 4 * v27) != v29 )
              {
                *(float *)(v28 + 4 * v27) = v29;
                v25 = v27;
              }
              v27 = (unsigned int)(v27 + 1);
            }
            while ( (unsigned int)v27 < *((_DWORD *)this - 8) );
          }
          v24 = 1;
        }
        if ( v10 )
          LeaveCriticalSection(v10);
        if ( v24 )
          CAudioSession::RecalculateSessionVolume((__int64)this - 912, 1, (__int64)a2, v25, 1);
        v12 = WPP_GLOBAL_Control;
      }
      if ( v2 )
      {
        CAudioSession::SetMute(
          (CPerEndpointVolumeAudioSession *)((char *)this - 920),
          a2->bMuted,
          &EVENTCONTEXT_AUDIOSUBSYSTEM,
          1,
          0LL);
        v12 = WPP_GLOBAL_Control;
      }
      if ( v4 )
      {
        if ( v12 != (CAudioSessionManager *)&WPP_GLOBAL_Control
          && (*((_BYTE *)v12 + 28) & 0x40) != 0
          && *((_BYTE *)v12 + 25) >= 4u )
        {
          WPP_SF_(*((_QWORD *)v12 + 2), 0x4Fu, (__int64)&WPP_bb8c20e8cc9f3f3c48250634c7540f80_Traceguids);
        }
        EnterCriticalSection(v10);
        *((float *)this - 36) = *p_fMasterVolume;
        if ( v10 )
          LeaveCriticalSection(v10);
        CAudioSession::RecalculateSessionVolume((__int64)this - 912, 0, (__int64)a2, 0, 1);
      }
    }
    operator delete(v36);
  }
  else if ( v7 != (CAudioSessionManager *)&WPP_GLOBAL_Control
         && (*((_BYTE *)v7 + 28) & 0x40) != 0
         && *((_BYTE *)v7 + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)v7 + 2), 72LL, &WPP_bb8c20e8cc9f3f3c48250634c7540f80_Traceguids, (char *)this - 920);
  }
  return 0LL;
}
