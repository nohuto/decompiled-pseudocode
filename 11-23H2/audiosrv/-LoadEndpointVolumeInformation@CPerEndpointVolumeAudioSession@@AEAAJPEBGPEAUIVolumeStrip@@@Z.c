/*
 * XREFs of ?LoadEndpointVolumeInformation@CPerEndpointVolumeAudioSession@@AEAAJPEBGPEAUIVolumeStrip@@@Z @ 0x1800E0F3C
 * Callers:
 *     ?GetVolumeStrip@CPerEndpointVolumeAudioSession@@AEAAJPEAPEAUIVolumeStrip@@@Z @ 0x1800E0978 (-GetVolumeStrip@CPerEndpointVolumeAudioSession@@AEAAJPEAPEAUIVolumeStrip@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18000A850 (--3@YAXPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _freea @ 0x18004B5A0 (_freea.c)
 *     __security_check_cookie @ 0x1800669B0 (__security_check_cookie.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006707C (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _alloca_probe @ 0x180075940 (_alloca_probe.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SetMute@CAudioSession@@UEAAJHPEBU_GUID@@HPEAH@Z @ 0x1800E3030 (-SetMute@CAudioSession@@UEAAJHPEBU_GUID@@HPEAH@Z.c)
 *     WPP_SF_dg @ 0x1800E3E38 (WPP_SF_dg.c)
 *     WPP_SF_g @ 0x1800E3E8C (WPP_SF_g.c)
 */

__int64 __fastcall CPerEndpointVolumeAudioSession::LoadEndpointVolumeInformation(
        CPerEndpointVolumeAudioSession *this,
        const unsigned __int16 *a2,
        struct IVolumeStrip *a3)
{
  int v5; // ebx
  __int64 v6; // rdx
  size_t v8; // rcx
  __int64 v9; // rax
  void *v10; // rsp
  unsigned int *v11; // rbx
  unsigned int *v12; // rax
  __int64 v13; // rsi
  int v14; // eax
  unsigned int v15; // r15d
  unsigned int v16; // eax
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // kr00_8
  void *v19; // rax
  void *v20; // rcx
  __int64 v21; // rdx
  float v22; // xmm6_4
  __int64 v23; // r8
  float v24; // xmm0_4
  unsigned int v25; // eax
  __int64 v26; // r14
  __int64 v27; // [rsp+0h] [rbp-30h] BYREF
  unsigned int v28; // [rsp+30h] [rbp+0h] BYREF
  int v29; // [rsp+34h] [rbp+4h] BYREF
  int v30; // [rsp+38h] [rbp+8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+48h]

  v28 = 0;
  v5 = (*(__int64 (__fastcall **)(struct IVolumeStrip *, unsigned int *))(*(_QWORD *)a3 + 48LL))(a3, &v28);
  if ( v5 < 0 )
  {
    v6 = 1752LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
      (const char *)(unsigned int)v5);
    return (unsigned int)v5;
  }
  v29 = 0;
  v5 = (*(__int64 (__fastcall **)(struct IVolumeStrip *, int *))(*(_QWORD *)a3 + 152LL))(a3, &v29);
  if ( v5 < 0 )
  {
    v6 = 1756LL;
    goto LABEL_3;
  }
  v5 = CAudioSession::SetMute(this, v29, &EVENTCONTEXT_AUDIOSUBSYSTEM, 1, 0LL);
  if ( v5 < 0 )
  {
    v6 = 1758LL;
    goto LABEL_3;
  }
  v5 = (*(__int64 (__fastcall **)(struct IVolumeStrip *, int *))(*(_QWORD *)a3 + 80LL))(a3, &v30);
  if ( v5 < 0 )
  {
    v6 = 1762LL;
    goto LABEL_3;
  }
  v8 = (4LL * v28 + 16) & -(__int64)(4 * (unsigned __int64)v28 < 4 * (unsigned __int64)v28 + 16);
  if ( !v8 )
    goto LABEL_49;
  if ( v8 > 0x400 )
  {
    v12 = (unsigned int *)malloc(v8);
    v11 = v12;
    if ( !v12 )
      goto LABEL_19;
    *v12 = 56797;
  }
  else
  {
    v9 = v8 + 15;
    if ( v8 + 15 < v8 )
      v9 = 0xFFFFFFFFFFFFFF0LL;
    v10 = alloca(v9 & 0xFFFFFFFFFFFFFFF0uLL);
    v11 = &v28;
    if ( &v27 == (__int64 *)-48LL )
      goto LABEL_49;
    v28 = 52428;
  }
  v11 += 4;
LABEL_19:
  if ( !v11 )
  {
LABEL_49:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6E5,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
  v13 = 0LL;
  if ( v28 )
  {
    while ( 1 )
    {
      v14 = (*(__int64 (__fastcall **)(struct IVolumeStrip *, _QWORD, unsigned int *))(*(_QWORD *)a3 + 112LL))(
              a3,
              (unsigned int)v13,
              &v11[v13]);
      v15 = v14;
      if ( v14 < 0 )
        break;
      v13 = (unsigned int)(v13 + 1);
      if ( (unsigned int)v13 >= v28 )
        goto LABEL_23;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6E9,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
      (const char *)(unsigned int)v14);
    goto LABEL_48;
  }
LABEL_23:
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 736));
  *((_DWORD *)this + 194) = v30;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_g(*((_QWORD *)WPP_GLOBAL_Control + 2), 37LL, &WPP_bb8c20e8cc9f3f3c48250634c7540f80_Traceguids);
  }
  v16 = v28;
  *((_DWORD *)this + 222) = v28;
  v18 = v16;
  v17 = 4LL * v16;
  if ( !is_mul_ok(v18, 4uLL) )
    v17 = -1LL;
  v19 = operator new[](v17, (const struct std::nothrow_t *)&std::nothrow);
  v20 = (void *)*((_QWORD *)this + 112);
  *((_QWORD *)this + 112) = v19;
  if ( v20 )
    operator delete(v20);
  v21 = *((_QWORD *)this + 112);
  if ( !v21 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6F6,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
      (const char *)0x8007000ELL);
    if ( this != (CPerEndpointVolumeAudioSession *)-736LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 736));
    v15 = -2147024882;
LABEL_48:
    freea(v11);
    return v15;
  }
  v22 = 0.0;
  v23 = 0LL;
  if ( *((_DWORD *)this + 222) )
  {
    do
    {
      *(_DWORD *)(v21 + 4 * v23) = v11[v23];
      v21 = *((_QWORD *)this + 112);
      v24 = fmaxf(*(float *)(v21 + 4 * v23), v22);
      v22 = v24;
      v23 = (unsigned int)(v23 + 1);
      v25 = *((_DWORD *)this + 222);
    }
    while ( (unsigned int)v23 < v25 );
    if ( v24 > 0.0 )
    {
      v26 = 0LL;
      if ( v25 )
      {
        do
        {
          *(float *)(*((_QWORD *)this + 112) + 4 * v26) = *(float *)(*((_QWORD *)this + 112) + 4 * v26) / v24;
          if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
            && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            WPP_SF_dg(
              *((_QWORD *)WPP_GLOBAL_Control + 2),
              38LL,
              &WPP_bb8c20e8cc9f3f3c48250634c7540f80_Traceguids,
              (unsigned int)v26,
              *(float *)(*((_QWORD *)this + 112) + 4 * v26));
          }
          v26 = (unsigned int)(v26 + 1);
        }
        while ( (unsigned int)v26 < *((_DWORD *)this + 222) );
      }
    }
  }
  if ( this != (CPerEndpointVolumeAudioSession *)-736LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 736));
  freea(v11);
  return 0LL;
}
