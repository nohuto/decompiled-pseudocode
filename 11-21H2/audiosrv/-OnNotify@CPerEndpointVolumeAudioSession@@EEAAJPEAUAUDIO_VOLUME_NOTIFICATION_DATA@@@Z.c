/*
 * XREFs of ?OnNotify@CPerEndpointVolumeAudioSession@@EEAAJPEAUAUDIO_VOLUME_NOTIFICATION_DATA@@@Z @ 0x1800D9630
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800084A0 (--3@YAXPEAX@Z.c)
 *     ?RecalculateSessionVolume@CAudioSession@@UEAAXW4AudioVolumeChangeType@@PEBU_GUID@@K_NPEA_J@Z @ 0x180008A90 (-RecalculateSessionVolume@CAudioSession@@UEAAXW4AudioVolumeChangeType@@PEBU_GUID@@K_NPEA_J@Z.c)
 *     ?SetMute@CAudioSession@@UEAAJHPEBU_GUID@@HPEAH@Z @ 0x1800117B0 (-SetMute@CAudioSession@@UEAAJHPEBU_GUID@@HPEAH@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18002B390 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18005F02C (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     WPP_SF_ @ 0x1800C61A0 (WPP_SF_.c)
 *     WPP_SF_q @ 0x1800C9BAC (WPP_SF_q.c)
 *     WPP_SF_q_guid_ @ 0x1800CB434 (WPP_SF_q_guid_.c)
 *     WPP_SF_qdgg @ 0x1800CF2D8 (WPP_SF_qdgg.c)
 *     WPP_SF_q_guid__guid_ @ 0x1800DB7E8 (WPP_SF_q_guid__guid_.c)
 *     WPP_SF_qdd @ 0x1800DB85C (WPP_SF_qdd.c)
 *     WPP_SF_qgg_HEX__HEX_ @ 0x1800DB8BC (WPP_SF_qgg_HEX__HEX_.c)
 */

__int64 __fastcall CPerEndpointVolumeAudioSession::OnNotify(
        CPerEndpointVolumeAudioSession *this,
        struct AUDIO_VOLUME_NOTIFICATION_DATA *a2)
{
  char v2; // r13
  char v3; // r14
  CEndpointStoreCache *v6; // rcx
  char *v7; // rdx
  __int64 v8; // rax
  struct _RTL_CRITICAL_SECTION *v9; // r15
  int bMuted; // eax
  int v11; // r8d
  CEndpointStoreCache *v12; // rcx
  float *p_fMasterVolume; // r12
  __m128 fMasterVolume_low; // xmm0
  __m128 v15; // xmm1
  unsigned int v16; // eax
  SIZE_T v17; // rax
  unsigned __int64 v18; // kr00_8
  void *v19; // rax
  __int64 v20; // rsi
  float *v21; // r15
  float v22; // xmm0_4
  __int64 v23; // rax
  CEndpointStoreCache *v24; // rcx
  int v25; // esi
  int v26; // r14d
  int v27; // ecx
  __int64 v28; // rax
  float *v29; // r8
  __int64 v30; // rdx
  float v31; // xmm1_4
  int *v33; // [rsp+20h] [rbp-49h]
  float *v34; // [rsp+40h] [rbp-29h] BYREF
  __int16 v35; // [rsp+48h] [rbp-21h]
  char *v36; // [rsp+50h] [rbp-19h] BYREF
  __int16 v37; // [rsp+58h] [rbp-11h]
  struct _RTL_CRITICAL_SECTION *v38; // [rsp+D0h] [rbp+67h] BYREF
  struct _RTL_CRITICAL_SECTION *v39; // [rsp+D8h] [rbp+6Fh] BYREF
  void *v40; // [rsp+E0h] [rbp+77h]
  struct _RTL_CRITICAL_SECTION *v41; // [rsp+E8h] [rbp+7Fh] BYREF

  v2 = 0;
  v3 = 0;
  LOBYTE(v39) = 0;
  v40 = 0LL;
  LOBYTE(v38) = 0;
  v6 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q_guid_(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x47u,
      (__int64)&WPP_d4601149da203bf03f1316021d4590fb_Traceguids,
      (char *)this - 920,
      a2);
    v6 = WPP_GLOBAL_Control;
  }
  v7 = (char *)this - 656;
  v8 = *(_QWORD *)&a2->guidEventContext.Data1 - *((_QWORD *)this - 82);
  if ( *(_QWORD *)&a2->guidEventContext.Data1 == *((_QWORD *)this - 82) )
    v8 = *(_QWORD *)a2->guidEventContext.Data4 - *((_QWORD *)v7 + 1);
  if ( v8 )
  {
    if ( v6 != (CEndpointStoreCache *)&WPP_GLOBAL_Control
      && (*((_BYTE *)v6 + 28) & 0x40) != 0
      && *((_BYTE *)v6 + 25) >= 4u )
    {
      WPP_SF_q_guid__guid_(
        *((_QWORD *)v6 + 2),
        (_DWORD)v7,
        (unsigned int)&WPP_GLOBAL_Control,
        (_DWORD)this - 920,
        (__int64)a2,
        (__int64)this - 656);
    }
    v9 = (struct _RTL_CRITICAL_SECTION *)((char *)this - 184);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this - 184));
    bMuted = a2->bMuted;
    v11 = *((_DWORD *)this - 35);
    v41 = (struct _RTL_CRITICAL_SECTION *)((char *)this - 184);
    if ( bMuted == v11 )
    {
      v12 = WPP_GLOBAL_Control;
    }
    else
    {
      v12 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_qdd(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          74LL,
          &WPP_d4601149da203bf03f1316021d4590fb_Traceguids,
          (char *)this - 920);
        v12 = WPP_GLOBAL_Control;
      }
      v2 = 1;
      LOBYTE(v39) = 1;
    }
    p_fMasterVolume = &a2->fMasterVolume;
    fMasterVolume_low = (__m128)LODWORD(a2->fMasterVolume);
    if ( fMasterVolume_low.m128_f32[0] != *((float *)this - 36) )
    {
      if ( v12 != (CEndpointStoreCache *)&WPP_GLOBAL_Control
        && (*((_BYTE *)v12 + 28) & 0x40) != 0
        && *((_BYTE *)v12 + 25) >= 4u )
      {
        v15 = (__m128)*((unsigned int *)this - 36);
        v36 = (char *)this - 144;
        v34 = &a2->fMasterVolume;
        v35 = 4;
        v37 = 4;
        WPP_SF_qgg_HEX__HEX_(
          *((_QWORD *)v12 + 2),
          (unsigned int)&WPP_GLOBAL_Control,
          v11,
          (_DWORD)this - 920,
          *(_OWORD *)&_mm_cvtps_pd(v15),
          *(_OWORD *)&_mm_cvtps_pd(fMasterVolume_low),
          (__int64)&v36,
          (__int64)&v34);
      }
      LOBYTE(v38) = 1;
    }
    v16 = *((_DWORD *)this - 8);
    if ( a2->nChannels == v16 )
    {
      v18 = v16;
      v17 = 4LL * v16;
      if ( !is_mul_ok(v18, 4uLL) )
        v17 = -1LL;
      v19 = operator new[](v17, (const struct std::nothrow_t *)&std::nothrow);
      v40 = v19;
      if ( v19 )
      {
        v20 = 0LL;
        if ( *((_DWORD *)this - 8) )
        {
          v21 = (float *)v19;
          do
          {
            if ( *p_fMasterVolume == 0.0 )
              v22 = FLOAT_1_0;
            else
              v22 = a2->afChannelVolumes[v20] / *p_fMasterVolume;
            v21[v20] = v22;
            v23 = *((_QWORD *)this - 3);
            if ( v22 != *(float *)(v23 + 4 * v20) )
            {
              if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
                && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
                && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
              {
                LODWORD(v33) = v20;
                WPP_SF_qdgg(
                  *((_QWORD *)WPP_GLOBAL_Control + 2),
                  0x4Cu,
                  (__int64)&WPP_d4601149da203bf03f1316021d4590fb_Traceguids,
                  (char *)this - 920,
                  v33,
                  *(float *)(v23 + 4 * v20),
                  v22);
              }
              v3 = 1;
            }
            v20 = (unsigned int)(v20 + 1);
          }
          while ( (unsigned int)v20 < *((_DWORD *)this - 8) );
          v2 = (char)v39;
          v9 = (struct _RTL_CRITICAL_SECTION *)((char *)this - 184);
        }
      }
    }
    wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v41);
    if ( v2 || (_BYTE)v38 || v3 )
    {
      v24 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x4Du, (__int64)&WPP_d4601149da203bf03f1316021d4590fb_Traceguids);
        v24 = WPP_GLOBAL_Control;
      }
      if ( v3 )
      {
        v25 = 0;
        v26 = 0;
        if ( v24 != (CEndpointStoreCache *)&WPP_GLOBAL_Control
          && (*((_BYTE *)v24 + 28) & 0x40) != 0
          && *((_BYTE *)v24 + 25) >= 4u )
        {
          WPP_SF_(*((_QWORD *)v24 + 2), 0x4Eu, (__int64)&WPP_d4601149da203bf03f1316021d4590fb_Traceguids);
        }
        EnterCriticalSection(v9);
        v27 = *((_DWORD *)this - 8);
        v39 = v9;
        if ( a2->nChannels == v27 )
        {
          v28 = 0LL;
          if ( v27 )
          {
            v29 = (float *)v40;
            do
            {
              v30 = *((_QWORD *)this - 3);
              v31 = v29[v28];
              if ( *(float *)(v30 + 4 * v28) != v31 )
              {
                *(float *)(v30 + 4 * v28) = v31;
                v26 = v28;
              }
              v28 = (unsigned int)(v28 + 1);
            }
            while ( (unsigned int)v28 < *((_DWORD *)this - 8) );
          }
          v25 = 1;
        }
        wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v39);
        if ( v25 )
          CAudioSession::RecalculateSessionVolume((__int64)this - 912, 1, (__int64)a2, v26, 1);
        v24 = WPP_GLOBAL_Control;
      }
      if ( v2 )
      {
        CAudioSession::SetMute(
          (CPerEndpointVolumeAudioSession *)((char *)this - 920),
          a2->bMuted,
          &EVENTCONTEXT_AUDIOSUBSYSTEM,
          1,
          0LL);
        v24 = WPP_GLOBAL_Control;
      }
      if ( (_BYTE)v38 )
      {
        if ( v24 != (CEndpointStoreCache *)&WPP_GLOBAL_Control
          && (*((_BYTE *)v24 + 28) & 0x40) != 0
          && *((_BYTE *)v24 + 25) >= 4u )
        {
          WPP_SF_(*((_QWORD *)v24 + 2), 0x4Fu, (__int64)&WPP_d4601149da203bf03f1316021d4590fb_Traceguids);
        }
        EnterCriticalSection(v9);
        *((float *)this - 36) = *p_fMasterVolume;
        v38 = v9;
        wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v38);
        CAudioSession::RecalculateSessionVolume((__int64)this - 912, 0, (__int64)a2, 0, 1);
      }
    }
    operator delete(v40);
  }
  else if ( v6 != (CEndpointStoreCache *)&WPP_GLOBAL_Control
         && (*((_BYTE *)v6 + 28) & 0x40) != 0
         && *((_BYTE *)v6 + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)v6 + 2), 0x48u, (__int64)&WPP_d4601149da203bf03f1316021d4590fb_Traceguids, (char *)this - 920);
  }
  return 0LL;
}
