/*
 * XREFs of ?LoadEndpointVolumeInformation@CPerEndpointVolumeAudioSession@@AEAAJPEBGPEAUIVolumeStrip@@@Z @ 0x1800D8CE4
 * Callers:
 *     ?GetVolumeStrip@CPerEndpointVolumeAudioSession@@AEAAJPEAPEAUIVolumeStrip@@@Z @ 0x1800D8808 (-GetVolumeStrip@CPerEndpointVolumeAudioSession@@AEAAJPEAPEAUIVolumeStrip@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800084A0 (--3@YAXPEAX@Z.c)
 *     ?SetMute@CAudioSession@@UEAAJHPEBU_GUID@@HPEAH@Z @ 0x1800117B0 (-SetMute@CAudioSession@@UEAAJHPEBU_GUID@@HPEAH@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18002B390 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18005F02C (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _alloca_probe @ 0x18006A600 (_alloca_probe.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     WPP_SF_dg @ 0x1800CF1E0 (WPP_SF_dg.c)
 *     WPP_SF_g @ 0x1800CF234 (WPP_SF_g.c)
 *     _freea @ 0x1800DBA40 (_freea.c)
 */

__int64 __fastcall CPerEndpointVolumeAudioSession::LoadEndpointVolumeInformation(
        CPerEndpointVolumeAudioSession *this,
        const unsigned __int16 *a2,
        struct IVolumeStrip *a3)
{
  unsigned int v5; // edi
  int v6; // ebx
  __int64 v7; // rdx
  size_t v8; // rcx
  __int64 v9; // rax
  void *v10; // rsp
  unsigned int *v11; // rsi
  unsigned int *v12; // rax
  unsigned int v13; // ebx
  int v14; // eax
  unsigned int v15; // r12d
  float v16; // xmm0_4
  unsigned int v17; // eax
  SIZE_T v18; // rax
  unsigned __int64 v19; // kr00_8
  _DWORD *v20; // rax
  void *v21; // rcx
  _DWORD *v22; // r8
  float v23; // xmm6_4
  unsigned int v24; // edx
  float v25; // xmm0_4
  unsigned int v26; // eax
  __int64 v28; // [rsp+0h] [rbp-30h] BYREF
  int *v29; // [rsp+20h] [rbp-10h]
  unsigned int v30; // [rsp+30h] [rbp+0h] BYREF
  int v31; // [rsp+34h] [rbp+4h] BYREF
  float v32; // [rsp+38h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v33; // [rsp+40h] [rbp+10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+48h]

  v5 = 0;
  v30 = 0;
  v6 = (*(__int64 (__fastcall **)(struct IVolumeStrip *, unsigned int *))(*(_QWORD *)a3 + 48LL))(a3, &v30);
  if ( v6 < 0 )
  {
    v7 = 1755LL;
LABEL_45:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  v31 = 0;
  v6 = (*(__int64 (__fastcall **)(struct IVolumeStrip *, int *))(*(_QWORD *)a3 + 152LL))(a3, &v31);
  if ( v6 < 0 )
  {
    v7 = 1759LL;
    goto LABEL_45;
  }
  v6 = CAudioSession::SetMute(this, v31, &EVENTCONTEXT_AUDIOSUBSYSTEM, 1, 0LL);
  if ( v6 < 0 )
  {
    v7 = 1761LL;
    goto LABEL_45;
  }
  v6 = (*(__int64 (__fastcall **)(struct IVolumeStrip *, float *))(*(_QWORD *)a3 + 80LL))(a3, &v32);
  if ( v6 < 0 )
  {
    v7 = 1765LL;
    goto LABEL_45;
  }
  v8 = (4LL * v30 + 16) & -(__int64)(4 * (unsigned __int64)v30 < 4 * (unsigned __int64)v30 + 16);
  if ( !v8 )
  {
LABEL_44:
    v6 = -2147024882;
    v7 = 1768LL;
    goto LABEL_45;
  }
  if ( v8 > 0x400 )
  {
    v12 = (unsigned int *)malloc(v8);
    v11 = v12;
    if ( !v12 )
      goto LABEL_18;
    *v12 = 56797;
  }
  else
  {
    v9 = v8 + 15;
    if ( v8 + 15 < v8 )
      v9 = 0xFFFFFFFFFFFFFF0LL;
    v10 = alloca(v9 & 0xFFFFFFFFFFFFFFF0uLL);
    v11 = &v30;
    if ( &v28 == (__int64 *)-48LL )
      goto LABEL_44;
    v30 = 52428;
  }
  v11 += 4;
LABEL_18:
  if ( !v11 )
    goto LABEL_44;
  v13 = 0;
  if ( v30 )
  {
    while ( 1 )
    {
      v14 = (*(__int64 (__fastcall **)(struct IVolumeStrip *, _QWORD, unsigned int *))(*(_QWORD *)a3 + 112LL))(
              a3,
              v13,
              &v11[v13]);
      v15 = v14;
      if ( v14 < 0 )
        break;
      if ( ++v13 >= v30 )
        goto LABEL_22;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6EC,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
      (const char *)(unsigned int)v14);
    goto LABEL_43;
  }
LABEL_22:
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 736));
  v33 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 736);
  v16 = v32;
  *((float *)this + 194) = v32;
  if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_g(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x25u, (__int64)&WPP_d4601149da203bf03f1316021d4590fb_Traceguids, v16);
  }
  v17 = v30;
  *((_DWORD *)this + 222) = v30;
  v19 = v17;
  v18 = 4LL * v17;
  if ( !is_mul_ok(v19, 4uLL) )
    v18 = -1LL;
  v20 = operator new[](v18, (const struct std::nothrow_t *)&std::nothrow);
  v21 = (void *)*((_QWORD *)this + 112);
  *((_QWORD *)this + 112) = v20;
  v22 = v20;
  if ( v21 )
  {
    operator delete(v21);
    v20 = (_DWORD *)*((_QWORD *)this + 112);
    v22 = v20;
  }
  if ( !v20 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6F9,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
      (const char *)0x8007000ELL);
    wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v33);
    v15 = -2147024882;
LABEL_43:
    freea(v11);
    return v15;
  }
  v23 = 0.0;
  v24 = 0;
  if ( *((_DWORD *)this + 222) )
  {
    do
    {
      v22[v24] = v11[v24];
      v22 = (_DWORD *)*((_QWORD *)this + 112);
      v25 = fmaxf(*(float *)&v22[v24], v23);
      v23 = v25;
      ++v24;
      v26 = *((_DWORD *)this + 222);
    }
    while ( v24 < v26 );
    if ( v25 > 0.0 && v26 )
    {
      do
      {
        *(float *)(*((_QWORD *)this + 112) + 4LL * v5) = *(float *)(*((_QWORD *)this + 112) + 4LL * v5) / v25;
        if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
          && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          *(double *)&v29 = *(float *)(*((_QWORD *)this + 112) + 4LL * v5);
          WPP_SF_dg(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            0x26u,
            (__int64)&WPP_d4601149da203bf03f1316021d4590fb_Traceguids,
            v5);
        }
        ++v5;
      }
      while ( v5 < *((_DWORD *)this + 222) );
    }
  }
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v33);
  freea(v11);
  return 0LL;
}
