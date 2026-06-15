/*
 * XREFs of _lambda_b08f66900c5e6cc9009fb22e38011b96_::operator() @ 0x180070D74
 * Callers:
 *     ?RecalculateSessionVolume@CAudioSession@@UEAAXW4AudioVolumeChangeType@@PEBU_GUID@@K_NPEA_J@Z @ 0x18004B710 (-RecalculateSessionVolume@CAudioSession@@UEAAXW4AudioVolumeChangeType@@PEBU_GUID@@K_NPEA_J@Z.c)
 * Callees:
 *     ?GetCurrentSessionGain@CAudioSession@@IEAAXPEA_NPEAMPEA_J@Z @ 0x18000B8D0 (-GetCurrentSessionGain@CAudioSession@@IEAAXPEA_NPEAMPEA_J@Z.c)
 *     ?ForEachEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJ$$QEAVCListWorker@1@@Z @ 0x18002625C (-ForEachEntry@-$CLockedList@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJ$$QEAVCList.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1800303E4 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     ?lock@critical_section@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180030758 (-lock@critical_section@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _freea @ 0x18004B5A0 (_freea.c)
 *     ?reset@?$unique_ptr@MU?$function_deleter@P6AXPEAX@Z$1?_freea@@YAX0@Z@wil@@@wistd@@QEAAXPEAM@Z @ 0x18004B768 (-reset@-$unique_ptr@MU-$function_deleter@P6AXPEAX@Z$1-_freea@@YAX0@Z@wil@@@wistd@@QEAAXPEAM@Z.c)
 *     __security_check_cookie @ 0x1800669B0 (__security_check_cookie.c)
 *     memcpy_0 @ 0x18006A819 (memcpy_0.c)
 *     _alloca_probe @ 0x180075940 (_alloca_probe.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_S @ 0x1800DDDDC (WPP_SF_S.c)
 *     WPP_SF_S_guid_ @ 0x1800E3A58 (WPP_SF_S_guid_.c)
 *     WPP_SF_Sg @ 0x1800E3C8C (WPP_SF_Sg.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_b08f66900c5e6cc9009fb22e38011b96_::operator()(CAudioSession **a1, __int64 a2, int a3)
{
  GUID **v4; // rax
  GUID *v5; // rcx
  unsigned int v6; // r14d
  size_t v7; // rsi
  size_t v8; // rcx
  __int64 v9; // rax
  void *v10; // rsp
  void **p_Memory; // rdx
  _DWORD *v12; // rax
  void *v13; // rbx
  CAudioSession *v15; // rcx
  __int64 v16; // rax
  CAudioSession *v17; // rdx
  __int64 v18; // r8
  int v19; // r8d
  int v20; // xmm6_4
  int v21; // esi
  int v22; // ecx
  struct _RTL_CRITICAL_SECTION *v23; // rcx
  unsigned __int64 v24; // r8
  void **v25; // rax
  __int64 v26; // r9
  unsigned int v27; // edx
  __int64 v28; // [rsp+0h] [rbp-40h] BYREF
  int v29[2]; // [rsp+20h] [rbp-20h]
  void *v30; // [rsp+28h] [rbp-18h]
  __int64 v31; // [rsp+30h] [rbp-10h]
  int v32; // [rsp+40h] [rbp+0h] BYREF
  float v33; // [rsp+44h] [rbp+4h] BYREF
  __int64 v34; // [rsp+48h] [rbp+8h] BYREF
  void *Memory; // [rsp+50h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v36; // [rsp+58h] [rbp+18h] BYREF
  void **v37; // [rsp+60h] [rbp+20h] BYREF
  CAudioSession *v38; // [rsp+68h] [rbp+28h]
  void *v39; // [rsp+70h] [rbp+30h]
  unsigned __int64 v40; // [rsp+78h] [rbp+38h]
  __int64 v41; // [rsp+80h] [rbp+40h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+68h]

  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
  {
    v4 = (GUID **)a1[1];
    v5 = &GUID_00000000_0000_0000_0000_000000000000;
    if ( *v4 )
      v5 = *v4;
    WPP_SF_S_guid_(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      (_DWORD)WPP_GLOBAL_Control,
      a3,
      *((_QWORD *)*a1 + 82),
      (__int64)v5);
  }
  LOBYTE(v32) = 0;
  v33 = FLOAT_1_0;
  v34 = 0LL;
  CAudioSession::GetCurrentSessionGain(*a1, (bool *)&v32, &v33, &v34);
  Memory = 0LL;
  wil::critical_section::lock((struct _RTL_CRITICAL_SECTION *)((char *)*a1 + 736), &v36);
  v6 = *((_DWORD *)*a1 + 222);
  v7 = 4LL * v6;
  v8 = (v7 + 16) & -(__int64)(v7 < v7 + 16);
  if ( v8 )
  {
    if ( v8 > 0x400 )
    {
      v12 = malloc(v8);
      if ( v12 )
      {
        *v12 = 56797;
        v12 += 4;
      }
      p_Memory = (void **)v12;
    }
    else
    {
      v9 = v8 + 15;
      if ( v8 + 15 < v8 )
        v9 = 0xFFFFFFFFFFFFFF0LL;
      v10 = alloca(v9 & 0xFFFFFFFFFFFFFFF0uLL);
      p_Memory = (void **)&v32;
      if ( &v28 != (__int64 *)-64LL )
      {
        v32 = 52428;
        p_Memory = &Memory;
      }
    }
  }
  else
  {
    p_Memory = 0LL;
  }
  wistd::unique_ptr<float,wil::function_deleter<void (*)(void *),&void _freea(void *)>>::reset(&Memory, p_Memory);
  v13 = Memory;
  if ( !Memory )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE68,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
      (const char *)0x8007000ELL);
    wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v36);
    return 2147942414LL;
  }
  memcpy_0(Memory, *((const void **)*a1 + 112), v7);
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v36);
  if ( !*(_BYTE *)a1[2] )
  {
    v15 = *a1;
    v16 = *(_QWORD *)*a1;
    v17 = a1[3];
    v18 = v34;
    v31 = v34;
    v30 = v13;
    v29[0] = v6;
    LOBYTE(v18) = v32;
    (*(void (__fastcall **)(CAudioSession *, _QWORD, __int64))(v16 + 416))(v15, *(unsigned int *)v17, v18);
  }
  (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)*a1 + 8LL))(*a1);
  wil::critical_section::lock(
    (struct _RTL_CRITICAL_SECTION *)((char *)*a1 + 736),
    (struct _RTL_CRITICAL_SECTION **)&v34);
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
  {
    WPP_SF_Sg(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      64,
      v19,
      *((_QWORD *)*a1 + 82),
      *(_OWORD *)&_mm_cvtps_pd((__m128)*((unsigned int *)*a1 + 194)));
  }
  v20 = *((_DWORD *)*a1 + 194);
  v21 = *((_DWORD *)*a1 + 195);
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>((struct _RTL_CRITICAL_SECTION **)&v34);
  v22 = *(_DWORD *)a1[3];
  if ( v22 )
  {
    if ( v22 != 1 )
      goto LABEL_30;
    v23 = (struct _RTL_CRITICAL_SECTION *)((char *)*a1 + 432);
    v26 = *(_QWORD *)a1[1];
    v27 = *(_DWORD *)a1[4];
    v25 = &CAudioChannelVolumeChanged::`vftable';
    v38 = *a1;
    v39 = v13;
    v40 = __PAIR64__(v27, v6);
    v41 = v26;
  }
  else
  {
    v23 = (struct _RTL_CRITICAL_SECTION *)((char *)*a1 + 432);
    v24 = *(_QWORD *)a1[1];
    v25 = &CAudioSessionVolumeChanged::`vftable';
    v38 = *a1;
    LODWORD(v39) = v20;
    BYTE4(v39) = v21 != 0;
    v40 = v24;
  }
  v37 = v25;
  CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::ForEachEntry(v23, (void (__fastcall ***)(_QWORD, void **))&v37);
LABEL_30:
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
  {
    WPP_SF_S(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      65LL,
      &WPP_bb8c20e8cc9f3f3c48250634c7540f80_Traceguids,
      *((_QWORD *)*a1 + 82));
  }
  (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)*a1 + 16LL))(*a1);
  freea(v13);
  return 0LL;
}
