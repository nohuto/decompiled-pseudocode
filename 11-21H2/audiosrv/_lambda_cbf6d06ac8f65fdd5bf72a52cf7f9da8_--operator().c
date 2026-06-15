/*
 * XREFs of _lambda_cbf6d06ac8f65fdd5bf72a52cf7f9da8_::operator() @ 0x180008AF0
 * Callers:
 *     ?RecalculateSessionVolume@CAudioSession@@UEAAXW4AudioVolumeChangeType@@PEBU_GUID@@K_NPEA_J@Z @ 0x180008A90 (-RecalculateSessionVolume@CAudioSession@@UEAAXW4AudioVolumeChangeType@@PEBU_GUID@@K_NPEA_J@Z.c)
 * Callees:
 *     ?ForEachEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJ$$QEAVCListWorker@1@@Z @ 0x180020030 (-ForEachEntry@-$CLockedList@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJ$$QEAVCList.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18002B390 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     memcpy_0 @ 0x180062529 (memcpy_0.c)
 *     _alloca_probe @ 0x18006A600 (_alloca_probe.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     WPP_SF_S @ 0x1800C6210 (WPP_SF_S.c)
 *     WPP_SF_S_guid_ @ 0x1800DB5BC (WPP_SF_S_guid_.c)
 *     WPP_SF_Sg @ 0x1800DB6DC (WPP_SF_Sg.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_cbf6d06ac8f65fdd5bf72a52cf7f9da8_::operator()(__int64 **a1)
{
  __int64 *v2; // rbx
  struct _RTL_CRITICAL_SECTION *v3; // rsi
  bool v4; // r15
  struct _RTL_CRITICAL_SECTION *v5; // rsi
  unsigned int v6; // r12d
  size_t v7; // r14
  size_t v8; // rcx
  __int64 v9; // rax
  void *v10; // rsp
  void ***v11; // rbx
  __int64 *v12; // rcx
  __int64 v13; // rax
  unsigned int *v14; // rdx
  struct _RTL_CRITICAL_SECTION *v15; // rsi
  int v16; // r8d
  CEndpointStoreCache *v17; // rcx
  int v18; // xmm6_4
  int v19; // r14d
  int v20; // edx
  unsigned int v21; // edi
  struct _RTL_CRITICAL_SECTION *v23; // rcx
  unsigned __int64 v24; // r8
  void **v25; // rax
  GUID **v26; // rax
  GUID *v27; // rdx
  _DWORD *v28; // rax
  __int64 v29; // r9
  unsigned int v30; // edx
  __int64 v31; // [rsp+0h] [rbp-40h] BYREF
  __int64 v32; // [rsp+20h] [rbp-20h]
  void ***v33; // [rsp+28h] [rbp-18h]
  __int64 v34; // [rsp+30h] [rbp-10h]
  void **v35; // [rsp+40h] [rbp+0h] BYREF
  __int64 *v36; // [rsp+48h] [rbp+8h]
  void ***v37; // [rsp+50h] [rbp+10h]
  unsigned __int64 v38; // [rsp+58h] [rbp+18h]
  __int64 v39; // [rsp+60h] [rbp+20h]
  _QWORD v40[2]; // [rsp+68h] [rbp+28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+78h]

  if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
  {
    v26 = (GUID **)a1[1];
    v27 = &GUID_00000000_0000_0000_0000_000000000000;
    if ( *v26 )
      v27 = *v26;
    WPP_SF_S_guid_(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      (_DWORD)v27,
      (_DWORD)WPP_GLOBAL_Control,
      (*a1)[82],
      (__int64)v27);
  }
  v2 = *a1;
  v3 = (struct _RTL_CRITICAL_SECTION *)(*a1 + 92);
  EnterCriticalSection(v3);
  v4 = *((_DWORD *)v2 + 195) != 0;
  if ( v3 )
    LeaveCriticalSection(v3);
  v5 = (struct _RTL_CRITICAL_SECTION *)(*a1 + 92);
  EnterCriticalSection(v5);
  v40[0] = v5;
  v6 = *((_DWORD *)*a1 + 222);
  v7 = 4LL * v6;
  v8 = v7 + 16;
  if ( v7 + 16 < v7 )
  {
    v11 = 0LL;
    goto LABEL_44;
  }
  if ( v8 > 0x400 )
  {
    v28 = malloc(v8);
    v11 = (void ***)v28;
    if ( v28 )
    {
      *v28 = 56797;
      goto LABEL_11;
    }
  }
  else
  {
    v9 = v7 + 31;
    if ( v7 + 31 < v7 + 16 )
      v9 = 0xFFFFFFFFFFFFFF0LL;
    v10 = alloca(v9 & 0xFFFFFFFFFFFFFFF0uLL);
    v11 = &v35;
    if ( &v31 != (__int64 *)-64LL )
    {
      LODWORD(v35) = 52428;
LABEL_11:
      v11 += 2;
    }
  }
  v40[1] = v11;
  if ( !v11 )
  {
LABEL_44:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE6A,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
      (const char *)0x8007000ELL,
      v32);
    wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(v40);
    v21 = -2147024882;
    goto LABEL_26;
  }
  memcpy_0(v11, (const void *)(*a1)[112], v7);
  if ( v5 )
    LeaveCriticalSection(v5);
  if ( !*(_BYTE *)a1[2] )
  {
    v12 = *a1;
    v13 = **a1;
    v14 = (unsigned int *)a1[3];
    v34 = 50000LL;
    v33 = v11;
    LODWORD(v32) = v6;
    (*(void (__fastcall **)(__int64 *, _QWORD, bool))(v13 + 416))(v12, *v14, v4);
  }
  (*(void (__fastcall **)(__int64 *))(**a1 + 8))(*a1);
  v15 = (struct _RTL_CRITICAL_SECTION *)(*a1 + 92);
  EnterCriticalSection(v15);
  v17 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
  {
    WPP_SF_Sg(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      64,
      v16,
      (*a1)[82],
      *(_OWORD *)&_mm_cvtps_pd((__m128)*((unsigned int *)*a1 + 194)));
    v17 = WPP_GLOBAL_Control;
  }
  v18 = *((_DWORD *)*a1 + 194);
  v19 = *((_DWORD *)*a1 + 195);
  if ( v15 )
  {
    LeaveCriticalSection(v15);
    v17 = WPP_GLOBAL_Control;
  }
  v20 = *(_DWORD *)a1[3];
  if ( v20 )
  {
    if ( v20 != 1 )
      goto LABEL_23;
    v23 = (struct _RTL_CRITICAL_SECTION *)(*a1 + 54);
    v29 = *a1[1];
    v30 = *(_DWORD *)a1[4];
    v25 = &CAudioChannelVolumeChanged::`vftable';
    v36 = *a1;
    v37 = v11;
    v38 = __PAIR64__(v30, v6);
    v39 = v29;
  }
  else
  {
    v23 = (struct _RTL_CRITICAL_SECTION *)(*a1 + 54);
    v24 = *a1[1];
    v25 = &CAudioSessionVolumeChanged::`vftable';
    v36 = *a1;
    LODWORD(v37) = v18;
    BYTE4(v37) = v19 != 0;
    v38 = v24;
  }
  v35 = v25;
  CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::ForEachEntry(v23);
  v17 = WPP_GLOBAL_Control;
LABEL_23:
  if ( v17 != (CEndpointStoreCache *)&WPP_GLOBAL_Control
    && (*((_BYTE *)v17 + 28) & 0x40) != 0
    && *((_BYTE *)v17 + 25) >= 5u )
  {
    WPP_SF_S(*((_QWORD *)v17 + 2), 65LL, &WPP_d4601149da203bf03f1316021d4590fb_Traceguids, (*a1)[82]);
  }
  (*(void (__fastcall **)(__int64 *))(**a1 + 16))(*a1);
  v21 = 0;
LABEL_26:
  if ( v11 && *((_DWORD *)v11 - 4) == 56797 )
    free(v11 - 2);
  return v21;
}
