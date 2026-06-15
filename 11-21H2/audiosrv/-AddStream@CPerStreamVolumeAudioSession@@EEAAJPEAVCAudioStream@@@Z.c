/*
 * XREFs of ?AddStream@CPerStreamVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z @ 0x180013D50
 * Callers:
 *     <none>
 * Callees:
 *     ?RecalculateVolume@CAudioStream@@QEAAJ_N_J@Z @ 0x180014050 (-RecalculateVolume@CAudioStream@@QEAAJ_N_J@Z.c)
 *     ?GetPolicyVolumeForAudioStream@@YAXPEAUIAudioPolicyManager@@PEAUIAudioStreamPolicyVolumeClient@@PEBU_tlgProvider_t@@PEAMPEA_JW4GPV_REASON@@@Z @ 0x1800143F0 (-GetPolicyVolumeForAudioStream@@YAXPEAUIAudioPolicyManager@@PEAUIAudioStreamPolicyVolumeClient@@.c)
 *     ?AddStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x180015150 (-AddStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180015934 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18002B390 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     ??1Completer@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x18005DB34 (--1Completer@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     atexit @ 0x18005EF98 (atexit.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18005F02C (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x180062529 (memcpy_0.c)
 *     _alloca_probe @ 0x18006A600 (_alloca_probe.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _freea @ 0x1800DBA40 (_freea.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@3@Z @ 0x1800E30C0 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U1@@-$_tlgWriteTempl.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPerStreamVolumeAudioSession::AddStream(CPerStreamVolumeAudioSession *this, struct CAudioStream *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // r14
  int v5; // xmm6_4
  bool v6; // bl
  char *v7; // rdx
  __int64 v8; // rcx
  float v9; // xmm0_4
  unsigned __int64 v10; // rax
  size_t v11; // rcx
  __int64 v12; // rax
  void *v13; // rsp
  WINBOOL *v14; // rbx
  unsigned int v15; // eax
  unsigned int v16; // r15d
  unsigned int v17; // edx
  unsigned int v18; // eax
  unsigned int v19; // edx
  int v20; // eax
  unsigned int v21; // r14d
  int v22; // eax
  unsigned int v23; // esi
  __int64 result; // rax
  __int64 v25; // r15
  int v26; // r8d
  int v27; // r9d
  WINBOOL *v28; // rax
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // kr00_8
  void *v31; // rax
  void *v32; // r15
  HANDLE ProcessHeap; // rax
  unsigned int v34; // edx
  WINBOOL *i; // r15
  __int64 j; // rax
  unsigned __int64 v37; // rax
  size_t v38; // rcx
  __int64 v39; // rax
  void *v40; // rsp
  WINBOOL *v41; // rax
  float v42; // xmm1_4
  float *v43; // rax
  __int64 v44; // rcx
  unsigned int v45; // edx
  __int64 v46; // rdx
  _BYTE v47[32]; // [rsp+0h] [rbp-40h] BYREF
  int v48[2]; // [rsp+20h] [rbp-20h]
  __int64 v49; // [rsp+28h] [rbp-18h]
  WINBOOL v50; // [rsp+40h] [rbp+0h] BYREF
  LPVOID Context; // [rsp+48h] [rbp+8h] BYREF
  WINBOOL fPending; // [rsp+50h] [rbp+10h] BYREF
  int v53[2]; // [rsp+58h] [rbp+18h] BYREF
  union _RTL_RUN_ONCE *v54; // [rsp+60h] [rbp+20h] BYREF
  int v55; // [rsp+68h] [rbp+28h]
  __int64 v56; // [rsp+70h] [rbp+30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+78h]

  *((_QWORD *)a2 + 8) = this;
  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 736);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 736));
  v5 = *((_DWORD *)this + 194);
  v6 = *((_DWORD *)this + 195) != 0;
  if ( v4 )
    LeaveCriticalSection(v4);
  v50 = LODWORD(FLOAT_1_0);
  *(_QWORD *)v53 = 0LL;
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    v54 = &`AudioSrvTelemetryProvider::Instance'::`2'::wrapper;
    Context = &qword_1801C2788;
    qword_1801C2788 = (__int64)&AudioSrvTelemetryProvider::`vftable';
    qword_1801C27A0 = (__int64)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    v55 = 0;
    wil::details::static_lazy<AudioSrvTelemetryProvider>::Completer::~Completer(&v54);
  }
  if ( a2 )
    v7 = (char *)a2 + 16;
  else
    v7 = 0LL;
  LODWORD(v49) = 0;
  *(_QWORD *)v48 = v53;
  GetPolicyVolumeForAudioStream(g_PolicyManager, v7, *((_QWORD *)Context + 1), &v50);
  v9 = *(float *)&v50;
  fPending = v50;
  *((_QWORD *)a2 + 12) = *(_QWORD *)v53;
  if ( v9 != *((float *)a2 + 23) )
  {
    *((float *)a2 + 23) = v9;
    if ( *((_QWORD *)a2 + 8) )
    {
      v25 = *(_QWORD *)(wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                          v8,
                          _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
                      + 8);
      if ( *(_DWORD *)v25 > 4u
        && (*(_BYTE *)(v25 + 16) & 2) != 0
        && (*(_QWORD *)(v25 + 24) & 2LL) == *(_QWORD *)(v25 + 24) )
      {
        v50 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 9) + 40LL))(*((_QWORD *)a2 + 9));
        v56 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)a2 + 8) + 8LL) + 64LL))(*((_QWORD *)a2 + 8) + 8LL);
        v54 = (union _RTL_RUN_ONCE *)(*(__int64 (__fastcall **)(char *))(*((_QWORD *)a2 + 1) + 80LL))((char *)a2 + 8);
        LODWORD(Context) = fPending;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
          v25,
          (unsigned int)&unk_180188E86,
          v26,
          v27,
          (__int64)&Context,
          (__int64)&v54,
          (__int64)&v56,
          (__int64)&v50);
      }
    }
  }
  *((_BYTE *)a2 + 520) = v6;
  EnterCriticalSection(v4);
  Context = v4;
  v10 = 4LL * *((unsigned int *)this + 222);
  v11 = v10 + 16;
  if ( v10 + 16 < v10 )
    goto LABEL_76;
  if ( v11 <= 0x400 )
  {
    v12 = v10 + 31;
    if ( v11 + 15 < v11 )
      v12 = 0xFFFFFFFFFFFFFF0LL;
    v13 = alloca(v12 & 0xFFFFFFFFFFFFFFF0uLL);
    v14 = &v50;
    if ( v47 == (_BYTE *)-64LL )
      goto LABEL_76;
    v50 = 52428;
    goto LABEL_15;
  }
  v28 = (WINBOOL *)malloc(v11);
  v14 = v28;
  if ( v28 )
  {
    *v28 = 56797;
LABEL_15:
    v14 += 4;
  }
  if ( !v14 )
  {
LABEL_76:
    v46 = 2562LL;
    goto LABEL_77;
  }
  memcpy_0(v14, *((const void **)this + 112), 4LL * *((unsigned int *)this + 222));
  v15 = *((_DWORD *)a2 + 21);
  if ( !*((_QWORD *)this + 112) || (v16 = *((_DWORD *)this + 222), v16 < v15) )
  {
    v30 = v15;
    v29 = 4LL * v15;
    if ( !is_mul_ok(v30, 4uLL) )
      v29 = -1LL;
    v31 = operator new[](v29, (const struct std::nothrow_t *)&std::nothrow);
    v32 = (void *)*((_QWORD *)this + 112);
    *((_QWORD *)this + 112) = v31;
    if ( v32 )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v32);
      v31 = (void *)*((_QWORD *)this + 112);
    }
    if ( !v31 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA10,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
        (const char *)0x8007000ELL,
        v48[0]);
      wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&Context);
      freea(v14);
LABEL_78:
      result = 2147942414LL;
      goto LABEL_79;
    }
    v34 = 0;
    for ( i = v14; v34 < *((_DWORD *)this + 222); ++v34 )
      *(_DWORD *)(*((_QWORD *)this + 112) + 4LL * v34) = v14[v34];
    for ( j = *((unsigned int *)a2 + 21); v34 < (unsigned int)j; j = *((unsigned int *)a2 + 21) )
      *(_DWORD *)(*((_QWORD *)this + 112) + 4LL * v34++) = 1065353216;
    *((_DWORD *)this + 222) = j;
    v37 = 4 * j;
    v38 = v37 + 16;
    if ( v37 + 16 < v37 )
      v38 = 0LL;
    if ( !v38 )
    {
      freea(v14);
LABEL_74:
      v46 = 2598LL;
LABEL_77:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v46,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
        (const char *)0x8007000ELL,
        v48[0]);
      wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&Context);
      goto LABEL_78;
    }
    if ( v38 > 0x400 )
    {
      v41 = (WINBOOL *)malloc(v38);
      v14 = v41;
      if ( !v41 )
        goto LABEL_60;
      *v41 = 56797;
    }
    else
    {
      v39 = v38 + 15;
      if ( v38 + 15 < v38 )
        v39 = 0xFFFFFFFFFFFFFF0LL;
      v40 = alloca(v39 & 0xFFFFFFFFFFFFFFF0uLL);
      v14 = &v50;
      if ( v47 == (_BYTE *)-64LL )
      {
LABEL_60:
        freea(i);
        if ( v14 )
        {
          memcpy_0(v14, *((const void **)this + 112), 4LL * *((unsigned int *)this + 222));
          v16 = *((_DWORD *)this + 222);
          goto LABEL_19;
        }
        goto LABEL_74;
      }
      v50 = 52428;
    }
    v14 += 4;
    goto LABEL_60;
  }
LABEL_19:
  if ( v4 )
    LeaveCriticalSection(v4);
  v17 = 0;
  v18 = *((_DWORD *)a2 + 21);
  if ( v18 )
  {
    do
    {
      *(_DWORD *)(*((_QWORD *)a2 + 63) + 4LL * v17++) = v5;
      v18 = *((_DWORD *)a2 + 21);
    }
    while ( v17 < v18 );
  }
  if ( v16 < v18 )
  {
    v42 = 0.0;
    if ( v16 )
    {
      v43 = (float *)v14;
      v44 = v16;
      do
      {
        if ( v42 <= *v43 )
          v42 = *v43;
        ++v43;
        --v44;
      }
      while ( v44 );
      v18 = *((_DWORD *)a2 + 21);
    }
    v45 = 0;
    if ( v18 )
    {
      do
      {
        *(float *)(*((_QWORD *)a2 + 63) + 4LL * v45) = v42 * *(float *)(*((_QWORD *)a2 + 63) + 4LL * v45);
        ++v45;
      }
      while ( v45 < *((_DWORD *)a2 + 21) );
    }
  }
  else
  {
    v19 = 0;
    if ( v18 )
    {
      do
      {
        *(float *)(*((_QWORD *)a2 + 63) + 4LL * v19) = *(float *)&v14[v19]
                                                     * *(float *)(*((_QWORD *)a2 + 63) + 4LL * v19);
        ++v19;
      }
      while ( v19 < *((_DWORD *)a2 + 21) );
    }
  }
  *((_QWORD *)a2 + 64) = 0LL;
  v20 = CAudioStream::RecalculateVolume(a2, 0, 0LL);
  v21 = v20;
  if ( v20 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x568,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
      (const char *)(unsigned int)v20,
      v48[0]);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA33,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
      (const char *)v21,
      v48[0]);
    freea(v14);
    result = v21;
LABEL_79:
    *((_QWORD *)a2 + 8) = 0LL;
    return result;
  }
  v22 = CAudioSession::AddStream(this, a2);
  v23 = v22;
  if ( v22 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA35,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
      (const char *)(unsigned int)v22,
      v48[0]);
    freea(v14);
    result = v23;
    goto LABEL_79;
  }
  if ( *(v14 - 4) == 56797 )
    free(v14 - 4);
  return 0LL;
}
