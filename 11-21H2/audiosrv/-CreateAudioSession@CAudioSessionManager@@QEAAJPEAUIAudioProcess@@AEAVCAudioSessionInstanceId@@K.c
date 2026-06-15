/*
 * XREFs of ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x18001ACB0
 * Callers:
 *     ?GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z @ 0x180004D00 (-GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z.c)
 *     ?InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEAVCEndpointCharacteristics@@PEBU_GUID@@KPEAPEAG@Z @ 0x180018880 (-InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEAVCEndpointCharacteristics@@PEBU_GUID@@K.c)
 *     ?GetAudioSessions@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEAKPEAPEAPEAXPEAPEAPEAG@Z @ 0x1800E0900 (-GetAudioSessions@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEAKPEAPEAPEAXPEAPEAPEAG@Z.c)
 *     AudioSessionManagerGetSessionForStreamSwitch @ 0x1800E21F0 (AudioSessionManagerGetSessionForStreamSwitch.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@U?$ChainInterfaces@UIAudioSessionPolicyControl@@UIAudioSessionInfo@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIAudioSessionInfoInternal@@UIAudioSessionDuckingControl@@UIInspectable@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180004C60 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@U-$ChainInterfaces.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18000ABEC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x18001C8C0 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18001CA60 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?ToString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x18001CAA0 (-ToString@CAudioSessionInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@A.c)
 *     ?ForEachEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@QEAAJ$$QEAVCListWorker@1@@Z @ 0x18001F6E0 (-ForEachEntry@-$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@QEAAJ$$QEAVCListWorker@1.c)
 *     memcpy_s @ 0x180025BEC (memcpy_s.c)
 *     ??0CAudioSession@@IEAA@XZ @ 0x180026990 (--0CAudioSession@@IEAA@XZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18002B390 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     ??$?RVCAudioSessionInstanceId@@V0@@?$_Uhash_compare@VCAudioSessionInstanceId@@U?$hash@VCAudioSessionInstanceId@@@std@@U?$equal_to@VCAudioSessionInstanceId@@@3@@std@@QEBA_NAEBVCAudioSessionInstanceId@@0@Z @ 0x18003CC80 (--$-RVCAudioSessionInstanceId@@V0@@-$_Uhash_compare@VCAudioSessionInstanceId@@U-$hash@VCAudioSes.c)
 *     ??1Completer@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x18005DB34 (--1Completer@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     atexit @ 0x18005EF98 (atexit.c)
 *     ??3@YAXPEAX_K@Z @ 0x18005EFB8 (--3@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18005EFFC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18005F02C (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x18005F9D8 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1800C22EC (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800C3178 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?ThrowMemoryException@?$CSimpleStringT@G$0A@@ATL@@KAXXZ @ 0x1800C5788 (-ThrowMemoryException@-$CSimpleStringT@G$0A@@ATL@@KAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800C5F8C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     WPP_SF_S @ 0x1800C6210 (WPP_SF_S.c)
 *     ??1_RecurringTask@@QEAA@XZ @ 0x1800C9FF0 (--1_RecurringTask@@QEAA@XZ.c)
 *     ?RegisterOwnerProcess@CAudioSession@@QEAAJPEAUIAudioProcess@@@Z @ 0x1800DA480 (-RegisterOwnerProcess@CAudioSession@@QEAAJPEAUIAudioProcess@@@Z.c)
 *     WPP_SF_SS @ 0x1800DDE2C (WPP_SF_SS.c)
 *     ??$Make@VCPerEndpointVolumeAudioSession@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCPerEndpointVolumeAudioSession@@@12@XZ @ 0x1800DE218 (--$Make@VCPerEndpointVolumeAudioSession@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VCPerEndpointV.c)
 *     ??$_Find_last@VCAudioSessionInstanceId@@@?$_Hash@V?$_Umap_traits@VCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@VCAudioSessionInstanceId@@U?$hash@VCAudioSessionInstanceId@@@std@@U?$equal_to@VCAudioSessionInstanceId@@@3@@std@@V?$allocator@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@1@AEBVCAudioSessionInstanceId@@_K@Z @ 0x1800DE5A4 (--$_Find_last@VCAudioSessionInstanceId@@@-$_Hash@V-$_Umap_traits@VCAudioSessionInstanceId@@V-$co.c)
 *     ??$copy_to@VCAudioSession@@@?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEAPEAVCAudioSession@@@Z @ 0x1800DE85C (--$copy_to@VCAudioSession@@@-$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@QEBAJP.c)
 *     ?_Rehash_for_1@?$_Hash@V?$_Umap_traits@VCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@VCAudioSessionInstanceId@@U?$hash@VCAudioSessionInstanceId@@@std@@U?$equal_to@VCAudioSessionInstanceId@@@3@@std@@V?$allocator@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@IEAAXXZ @ 0x1800E1870 (-_Rehash_for_1@-$_Hash@V-$_Umap_traits@VCAudioSessionInstanceId@@V-$com_ptr_t@VCAudioSession@@Ue.c)
 *     ?attach@?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@QEAAXPEAVCAudioSession@@@Z @ 0x1800E1B8C (-attach@-$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@QEAAXPEAVCAudioSession@@@Z.c)
 *     wil::details::lambda_call__lambda_5b1683911ba3f7f9405586de8ce9ce3b___::reset @ 0x1800E1CB0 (wil--details--lambda_call__lambda_5b1683911ba3f7f9405586de8ce9ce3b___--reset.c)
 */

// Hidden C++ exception states: #wind=31
__int64 __fastcall CAudioSessionManager::CreateAudioSession(
        CAudioSessionManager *this,
        struct IAudioProcess *a2,
        struct CAudioSessionInstanceId *a3,
        int a4,
        unsigned int a5,
        unsigned int a6,
        struct CAudioSession **a7)
{
  struct CAudioSessionInstanceId *v7; // r12
  CAudioSessionManager *v8; // r13
  unsigned int v9; // edi
  struct _RTL_CRITICAL_SECTION *v10; // rbx
  CAudioSession *v11; // r14
  CAudioSession *v12; // rsi
  _WORD *v13; // r15
  __int64 v14; // rdi
  ATL::CStringData *v15; // rcx
  unsigned __int16 i; // ax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rdi
  __int64 v20; // r15
  int v21; // eax
  int v22; // eax
  __int64 v23; // rax
  __int64 v24; // rcx
  int v25; // eax
  DWORD LastError; // edi
  struct _RTL_CRITICAL_SECTION *v27; // rdi
  struct _RTL_CRITICAL_SECTION *v28; // rbx
  struct IAudioProcess *v29; // r12
  int v30; // r15d
  _QWORD *v31; // rdi
  _QWORD *v32; // r14
  struct _RTL_CRITICAL_SECTION *v33; // r12
  __int64 v34; // r14
  __int64 v35; // r13
  char *v36; // r15
  signed int v37; // esi
  PTP_TIMER *v38; // rax
  PTP_TIMER *v39; // rbx
  HANDLE ProcessHeap; // rax
  _DWORD *v41; // rax
  _DWORD *v42; // rdi
  PTP_TIMER v43; // rax
  std::_Ref_count_base *v44; // rcx
  _BYTE *v45; // rdx
  PTP_TIMER ThreadpoolTimer; // rax
  struct _TP_TIMER *v47; // rdi
  __int64 v48; // rdi
  volatile signed __int32 *v49; // rbx
  std::_Ref_count_base *v50; // rcx
  _QWORD *v51; // rdx
  __int64 v52; // rbx
  char v53; // r12
  int v54; // r15d
  _QWORD *v55; // rdi
  _QWORD *v56; // rsi
  _QWORD *v58; // rdx
  DWORD v59; // edi
  int v60; // edi
  _QWORD *v61; // rbx
  __int64 v62; // rax
  __int64 v63; // rcx
  GUID v64; // xmm6
  struct IAudioProcess *v65; // rbx
  __int64 v66; // rax
  int v67; // eax
  unsigned int v68; // ebx
  struct _RTL_CRITICAL_SECTION *v69; // rbx
  _WORD *v70; // rsi
  __int64 v71; // rdi
  ATL::CStringData *v72; // rcx
  unsigned int v73; // edi
  unsigned __int16 j; // ax
  CAudioSessionManager *v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // rax
  __int64 v78; // rdi
  int v79; // ebx
  struct CAudioSessionInstanceId *v80; // rdi
  _QWORD *v81; // r15
  _WORD *v82; // rdi
  __int64 v83; // rbx
  ATL::CStringData *v84; // rcx
  unsigned int v85; // ebx
  unsigned __int16 k; // ax
  __int64 v87; // rax
  __int64 v88; // rcx
  _QWORD *v89; // rbx
  _QWORD *v90; // r13
  struct CAudioSessionInstanceId *v91; // r12
  HANDLE v92; // rax
  _QWORD *v93; // rbx
  _QWORD *v94; // rsi
  const void *v95; // r15
  volatile signed __int32 *v96; // rdi
  __int64 (__fastcall ***v97)(_QWORD, _QWORD, __int64); // rax
  char *v98; // r12
  char *v99; // rdi
  __int64 (__fastcall ***v100)(_QWORD, _QWORD, __int64); // rax
  __int64 (__fastcall ***v101)(_QWORD, _QWORD, __int64); // rcx
  char *v102; // r12
  char *v103; // rdi
  __int64 (__fastcall ***v104)(_QWORD, _QWORD, __int64); // rax
  __int64 (__fastcall ***v105)(_QWORD, _QWORD, __int64); // rcx
  struct CAudioSessionInstanceId *v106; // rax
  char *v107; // r12
  char *v108; // rdi
  __int64 (__fastcall ***v109)(_QWORD, _QWORD, __int64); // rax
  __int64 (__fastcall ***v110)(_QWORD, _QWORD, __int64); // rcx
  struct CAudioSessionInstanceId *v111; // rcx
  char *v112; // r15
  char *v113; // rdi
  __int64 (__fastcall ***v114)(_QWORD, _QWORD, __int64); // rax
  __int64 v115; // rcx
  CAudioSessionManager *v116; // r12
  __int64 v117; // rdx
  unsigned __int64 v118; // rcx
  float v119; // xmm0_4
  __int64 v120; // rcx
  float v121; // xmm1_4
  __int64 v122; // r15
  _QWORD *v123; // r8
  __int64 v124; // rcx
  __int64 v125; // rax
  _QWORD *v126; // rdx
  int v127; // eax
  unsigned int v128; // ebx
  __int64 v129; // r13
  unsigned int v130; // ebx
  unsigned int v131; // r15d
  unsigned int v132; // edi
  unsigned int *v133; // rax
  unsigned int *v134; // rsi
  _WORD *v135; // rcx
  unsigned __int64 v136; // rdx
  unsigned __int64 v137; // r9
  __int64 v138; // r8
  __int16 v139; // ax
  char *v140; // r8
  char *v141; // rcx
  unsigned __int64 v142; // rdx
  unsigned __int64 v143; // r10
  signed __int64 v144; // r8
  __int16 v145; // ax
  _QWORD *v146; // rdx
  _QWORD *v147; // rdx
  HANDLE v148; // rax
  CAudioSession *v149; // rbx
  __int64 v150; // rbx
  __int64 v151; // rsi
  _QWORD *v152; // rsi
  __int64 v153; // rax
  int v154; // eax
  unsigned int v155; // ebx
  PTP_POOL Threadpool; // rax
  signed int v157; // eax
  signed int v158; // eax
  signed int v159; // eax
  DWORD v160; // ebx
  __int64 *v161; // rax
  __int64 v162; // rdx
  volatile signed __int64 *v163; // rcx
  int v164; // eax
  _DWORD *v165; // r12
  __int64 v166; // rax
  __int64 (__fastcall **v167)(_QWORD, _QWORD, __int64); // rax
  __int64 v168; // rax
  PTP_TIMER *v169; // rdx
  __int64 (__fastcall **v170)(_QWORD, _QWORD, __int64); // rax
  __int64 v171; // rax
  PTP_TIMER *v172; // rdx
  __int64 (__fastcall **v173)(_QWORD, _QWORD, __int64); // rax
  __int64 v174; // rax
  PTP_TIMER *v175; // rdx
  _DWORD *v176; // r12
  __int64 v177; // rax
  int v178; // r8d
  int v179; // r9d
  int v180; // eax
  unsigned int v181; // ebx
  int v182; // [rsp+20h] [rbp-278h]
  CAudioSession *v183; // [rsp+50h] [rbp-248h] BYREF
  struct CAudioSessionInstanceId *v184; // [rsp+58h] [rbp-240h] BYREF
  CAudioSession *v185; // [rsp+60h] [rbp-238h] BYREF
  CAudioSessionManager *v186; // [rsp+68h] [rbp-230h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+70h] [rbp-228h] BYREF
  PTP_TIMER *v188; // [rsp+78h] [rbp-220h]
  WINBOOL fPending[2]; // [rsp+80h] [rbp-218h] BYREF
  CAudioSession *v190; // [rsp+88h] [rbp-210h] BYREF
  struct IAudioProcess *v191; // [rsp+90h] [rbp-208h]
  int v192[2]; // [rsp+98h] [rbp-200h] BYREF
  __int64 v193; // [rsp+A0h] [rbp-1F8h] BYREF
  __int64 v194; // [rsp+A8h] [rbp-1F0h] BYREF
  LPVOID Context[2]; // [rsp+B0h] [rbp-1E8h] BYREF
  _QWORD v196[2]; // [rsp+C0h] [rbp-1D8h] BYREF
  _QWORD *v197; // [rsp+D0h] [rbp-1C8h]
  struct _FILETIME pftDueTime; // [rsp+D8h] [rbp-1C0h] BYREF
  struct _RTL_CRITICAL_SECTION *v199; // [rsp+E0h] [rbp-1B8h] BYREF
  volatile signed __int64 *v200; // [rsp+E8h] [rbp-1B0h] BYREF
  __int64 v201; // [rsp+F0h] [rbp-1A8h]
  LPCRITICAL_SECTION v202; // [rsp+F8h] [rbp-1A0h] BYREF
  _QWORD *v203; // [rsp+100h] [rbp-198h] BYREF
  char v204; // [rsp+108h] [rbp-190h]
  char *v205; // [rsp+110h] [rbp-188h] BYREF
  struct CAudioSession **v206; // [rsp+118h] [rbp-180h]
  GUID v207; // [rsp+120h] [rbp-178h]
  __int64 *v208; // [rsp+130h] [rbp-168h]
  char v209; // [rsp+138h] [rbp-160h]
  union _RTL_RUN_ONCE *v210; // [rsp+140h] [rbp-158h] BYREF
  int v211; // [rsp+148h] [rbp-150h]
  void **v212; // [rsp+150h] [rbp-148h]
  unsigned int *v213; // [rsp+158h] [rbp-140h]
  __int64 v214; // [rsp+160h] [rbp-138h]
  __int128 v215; // [rsp+168h] [rbp-130h] BYREF
  char v216; // [rsp+178h] [rbp-120h]
  char v217; // [rsp+180h] [rbp-118h] BYREF
  _QWORD *v218; // [rsp+188h] [rbp-110h]
  __int64 v219; // [rsp+190h] [rbp-108h]
  volatile signed __int32 *v220; // [rsp+198h] [rbp-100h]
  _QWORD *v221; // [rsp+1A0h] [rbp-F8h]
  _BYTE v222[56]; // [rsp+1A8h] [rbp-F0h] BYREF
  _BYTE *v223; // [rsp+1E0h] [rbp-B8h]
  _QWORD v224[7]; // [rsp+1E8h] [rbp-B0h] BYREF
  _QWORD *v225; // [rsp+220h] [rbp-78h]
  char v226[16]; // [rsp+228h] [rbp-70h] BYREF
  char v227[16]; // [rsp+238h] [rbp-60h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+298h] [rbp+0h]

  v192[0] = a4;
  v7 = a3;
  v184 = a3;
  v191 = a2;
  v8 = this;
  v186 = this;
  v206 = a7;
  v9 = 0;
  *a7 = 0LL;
  v10 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 8);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 8));
  lpCriticalSection = v10;
  v11 = 0LL;
  v183 = 0LL;
  v12 = 0LL;
  v190 = 0LL;
  EnterCriticalSection(v10);
  *(_QWORD *)fPending = (*(__int64 (__fastcall **)(__int64 *))(ATL::g_strmgr + 24))(&ATL::g_strmgr) + 24;
  if ( (int)CAudioSessionInstanceId::ToString(v7, fPending) < 0 )
  {
    v58 = (_QWORD *)(*(_QWORD *)fPending - 24LL);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)fPending - 24LL + 16), 0xFFFFFFFF) <= 1 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v58 + 8LL))(*v58);
    v11 = v183;
    v12 = v190;
  }
  else
  {
    v13 = *(_WORD **)fPending;
    v14 = *(int *)(*(_QWORD *)fPending - 16LL);
    if ( ((1 - *(_DWORD *)(*(_QWORD *)fPending - 8LL)) | (*(_DWORD *)(*(_QWORD *)fPending - 12LL) - (int)v14)) < 0 )
    {
      ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(fPending, (unsigned int)v14);
      v13 = *(_WORD **)fPending;
    }
    _o__wcsupr_s(v13, (int)v14 + 1);
    if ( (int)v14 < 0 || (v15 = (ATL::CStringData *)(v13 - 12), (int)v14 > *((_DWORD *)v13 - 3)) )
      ATL::AtlThrowImpl(-2147024809);
    *((_DWORD *)v15 + 2) = v14;
    v13[v14] = 0;
    if ( !v13 )
      ATL::AtlThrowImpl(-2147467259);
    v9 = 0;
    for ( i = *v13; *v13; i = *v13 )
    {
      v9 = i + 33 * v9;
      ++v13;
    }
    ATL::CStringData::Release(v15);
  }
  v17 = 2 * (v9 & *((_QWORD *)v8 + 12));
  v18 = *((_QWORD *)v8 + 9);
  v19 = *(_QWORD *)(v18 + 16 * (v9 & *((_QWORD *)v8 + 12)) + 8);
  if ( v19 == *((_QWORD *)v8 + 7) )
    goto LABEL_210;
  v20 = *(_QWORD *)(v18 + 8 * v17);
  while ( 1 )
  {
    if ( !(unsigned int)_o__wcsicmp(*(_QWORD *)v7, *(_QWORD *)(v19 + 16)) )
    {
      v21 = *((_DWORD *)v7 + 16);
      if ( v21 == *(_DWORD *)(v19 + 80) && (v21 || *((_DWORD *)v7 + 14) == *(_DWORD *)(v19 + 72)) )
      {
        v22 = *((_DWORD *)v7 + 12);
        if ( v22 == *(_DWORD *)(v19 + 64)
          && (v22 || !(unsigned int)_o__wcsicmp(*((_QWORD *)v7 + 1), *(_QWORD *)(v19 + 24))) )
        {
          v23 = *((_QWORD *)v7 + 3) - *(_QWORD *)(v19 + 40);
          if ( !v23 )
            v23 = *((_QWORD *)v7 + 4) - *(_QWORD *)(v19 + 48);
          if ( !v23 )
            break;
        }
      }
    }
    if ( v19 == v20 )
      goto LABEL_210;
    v19 = *(_QWORD *)(v19 + 8);
  }
  if ( !v19 )
LABEL_210:
    v19 = *((_QWORD *)v8 + 7);
  if ( v19 == *((_QWORD *)v8 + 7) )
  {
    if ( v10 )
      LeaveCriticalSection(v10);
    v25 = -2147024894;
  }
  else
  {
    v24 = *(_QWORD *)(v19 + 96);
    if ( v24 )
    {
      v190 = *(CAudioSession **)(v19 + 96);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 8LL))(v24);
    }
    else
    {
      v190 = 0LL;
    }
    if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_SS(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        10,
        (unsigned int)&WPP_a8e1b94a3e7033841a5ad9e612e202df_Traceguids,
        0,
        *((_QWORD *)v7 + 9));
    }
    if ( v10 )
      LeaveCriticalSection(v10);
    v25 = 0;
    v12 = v190;
  }
  if ( v25 >= 0 )
  {
    if ( lpCriticalSection )
    {
      LastError = GetLastError();
      LeaveCriticalSection(lpCriticalSection);
      SetLastError(LastError);
    }
    v27 = 0LL;
    lpCriticalSection = 0LL;
    v28 = (struct _RTL_CRITICAL_SECTION *)((char *)v12 + 544);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)v12 + 544));
    v199 = (struct _RTL_CRITICAL_SECTION *)((char *)v12 + 544);
    if ( (*(unsigned int (__fastcall **)(__int64))(*((_QWORD *)v12 + 1) + 32LL))((__int64)v12 + 8) == 2 )
      goto LABEL_78;
    v29 = v191;
    v30 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v191 + 40LL))(v191);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)v12 + 664));
    v205 = (char *)v12 + 664;
    v31 = (_QWORD *)*((_QWORD *)v12 + 88);
    v32 = (_QWORD *)*((_QWORD *)v12 + 89);
    while ( v31 != v32 )
    {
      if ( (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)*v31 + 40LL))(*v31) == v30 )
      {
        wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v205);
        goto LABEL_37;
      }
      ++v31;
    }
    if ( v12 != (CAudioSession *)-664LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v12 + 664));
    v154 = CAudioSession::RegisterOwnerProcess(v12, v29);
    v155 = v154;
    if ( v154 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA4,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
        (const char *)(unsigned int)v154,
        v182);
      wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v199);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v190);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v183);
      wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&lpCriticalSection);
      return v155;
    }
LABEL_37:
    *((_QWORD *)v12 + 40) = GetTickCount64();
    v33 = (struct _RTL_CRITICAL_SECTION *)((char *)v12 + 496);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)v12 + 496));
    v34 = (*(__int64 (__fastcall **)(struct IAudioService *))(*(_QWORD *)g_AudioService + 120LL))(g_AudioService);
    v224[0] = off_1801766A8;
    v224[1] = v12;
    v225 = v224;
    v35 = *((unsigned int *)v12 + 60);
    v36 = (char *)v12 + 536;
    v37 = 0;
    if ( *(_BYTE *)(v34 + 80) )
    {
LABEL_67:
      if ( v225 )
      {
        v51 = v224;
        if ( v225 == v224 )
          v51 = 0LL;
        else
          LOBYTE(v51) = 1;
        (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v225 + 32LL))(v225, v51);
        v225 = 0LL;
      }
      if ( v37 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xDC6,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
          (const char *)(unsigned int)v37,
          v182);
      if ( v33 )
        LeaveCriticalSection(v33);
      v52 = (__int64)v183;
      v12 = v190;
      v11 = v190;
      v183 = v190;
      (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)v190 + 8LL))(v190);
      if ( v52 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v52 + 16LL))(v52);
      v27 = lpCriticalSection;
      v28 = v199;
      v7 = v184;
      v8 = v186;
LABEL_78:
      if ( v28 )
        LeaveCriticalSection(v28);
      EnterCriticalSection((LPCRITICAL_SECTION)((char *)v8 + 8));
      if ( v27 )
      {
        v160 = GetLastError();
        LeaveCriticalSection(v27);
        SetLastError(v160);
      }
      lpCriticalSection = (LPCRITICAL_SECTION)((char *)v8 + 8);
      goto LABEL_83;
    }
    if ( !*(_QWORD *)v34 )
    {
      Threadpool = CreateThreadpool(0LL);
      *(_QWORD *)v34 = Threadpool;
      if ( !Threadpool )
      {
        v157 = GetLastError();
        v37 = v157;
        if ( v157 > 0 )
          v37 = (unsigned __int16)v157 | 0x80070000;
        if ( v37 < 0 )
          goto LABEL_67;
      }
      if ( !SetThreadpoolThreadMinimum(*(PTP_POOL *)v34, 1u) )
      {
        v158 = GetLastError();
        v37 = v158;
        if ( v158 > 0 )
          v37 = (unsigned __int16)v158 | 0x80070000;
        if ( v37 < 0 )
          goto LABEL_67;
      }
      SetThreadpoolThreadMaximum(*(PTP_POOL *)v34, 1u);
      *(_QWORD *)(v34 + 16) = *(_QWORD *)v34;
    }
    v38 = (PTP_TIMER *)operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
    v39 = v38;
    v188 = v38;
    if ( !v38 )
    {
      v37 = -2147024882;
      goto LABEL_67;
    }
    *v38 = 0LL;
    v38[1] = 0LL;
    v38[2] = 0LL;
    v223 = 0LL;
    if ( v225 )
      v223 = (_BYTE *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))*v225)(v225, v222);
    v39[3] = (PTP_TIMER)v34;
    ProcessHeap = GetProcessHeap();
    v41 = HeapAlloc(ProcessHeap, 0, 0x50uLL);
    v42 = v41;
    v188 = (PTP_TIMER *)v41;
    if ( v41 )
    {
      *(_OWORD *)v41 = 0LL;
      v41[2] = 1;
      v41[3] = 1;
      *(_QWORD *)v41 = &std::_Ref_count_obj2<std::function<void (void)>>::`vftable';
      *((_QWORD *)v41 + 9) = 0LL;
      if ( v223 )
        *((_QWORD *)v41 + 9) = (**(__int64 (__fastcall ***)(_BYTE *, __int64))v223)(v223, (__int64)(v41 + 4));
    }
    else
    {
      v42 = 0LL;
    }
    v43 = (PTP_TIMER)(v42 + 4);
    v39[1] = (PTP_TIMER)(v42 + 4);
    v44 = v39[2];
    v39[2] = (PTP_TIMER)v42;
    if ( v44 )
    {
      std::_Ref_count_base::_Decref(v44);
      v43 = v39[1];
    }
    if ( v43 )
      v37 = 0;
    else
      v37 = -2147024882;
    if ( v223 )
    {
      v45 = v222;
      if ( v223 == v222 )
        v45 = 0LL;
      else
        LOBYTE(v45) = 1;
      (*(void (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v223 + 32LL))(v223, v45);
      v223 = 0LL;
    }
    if ( v37 >= 0 )
    {
      ThreadpoolTimer = CreateThreadpoolTimer(
                          (PTP_TIMER_CALLBACK)CSerialWorkQueue::TimerCallback,
                          v39,
                          (PTP_CALLBACK_ENVIRON)(v34 + 8));
      v47 = ThreadpoolTimer;
      if ( ThreadpoolTimer )
      {
        v37 = 0;
        *v39 = ThreadpoolTimer;
        goto LABEL_56;
      }
      v159 = GetLastError();
      v37 = v159;
      if ( v159 > 0 )
        v37 = (unsigned __int16)v159 | 0x80070000;
      *v39 = 0LL;
      if ( v37 >= 0 )
      {
LABEL_56:
        pftDueTime = (struct _FILETIME)(-10000 * v35);
        SetThreadpoolTimer(v47, &pftDueTime, 0, 0);
        if ( v36 != &v217 )
        {
          v48 = *(_QWORD *)v36;
          *(_QWORD *)v36 = v39;
          if ( v48 )
          {
            if ( *(_QWORD *)v48 )
            {
              SetThreadpoolTimer(*(PTP_TIMER *)v48, 0LL, 0, 0);
              WaitForThreadpoolTimerCallbacks(*(PTP_TIMER *)v48, 1);
              CloseThreadpoolTimer(*(PTP_TIMER *)v48);
            }
            v219 = *(_QWORD *)(v48 + 8);
            *(_QWORD *)(v48 + 8) = 0LL;
            v220 = *(volatile signed __int32 **)(v48 + 16);
            v49 = v220;
            *(_QWORD *)(v48 + 16) = 0LL;
            if ( v49 )
            {
              if ( _InterlockedExchangeAdd(v49 + 2, 0xFFFFFFFF) == 1 )
              {
                (**(void (__fastcall ***)(volatile signed __int32 *))v49)(v49);
                if ( _InterlockedExchangeAdd(v49 + 3, 0xFFFFFFFF) == 1 )
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v49 + 8LL))(v49);
              }
            }
            v50 = *(std::_Ref_count_base **)(v48 + 16);
            if ( v50 )
              std::_Ref_count_base::_Decref(v50);
            operator delete((void *)v48, 0x20uLL);
          }
          goto LABEL_67;
        }
      }
    }
    _RecurringTask::~_RecurringTask((_RecurringTask *)v39);
    operator delete(v39, 0x20uLL);
    goto LABEL_67;
  }
LABEL_83:
  if ( v12 )
    (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)v12 + 16LL))(v12);
  if ( v11 )
  {
    v53 = 1;
    if ( (v192[0] & 0x20) != 0 )
      *((_DWORD *)v11 + 102) = 1;
    goto LABEL_88;
  }
  if ( lpCriticalSection )
  {
    v59 = GetLastError();
    LeaveCriticalSection(lpCriticalSection);
    SetLastError(v59);
  }
  lpCriticalSection = 0LL;
  v185 = 0LL;
  v60 = v192[0];
  if ( (v192[0] & 8) != 0 )
  {
    v61 = operator new(0x3E0uLL, (const struct std::nothrow_t *)&std::nothrow);
    v62 = 0LL;
    if ( v61 )
    {
      memset_0(v61, 0, 0x3E0uLL);
      CAudioSession::CAudioSession((CAudioSession *)v61);
      *v61 = &CPerStreamVolumeAudioSession::`vftable'{for `IInspectable'};
      v61[1] = &CAudioSession::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::ChainInterfaces<IAudioSessionPolicyControl,IAudioSessionInfo,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IWeakReferenceSource,IAudioSessionInfoInternal,IAudioSessionDuckingControl,IInspectable>'};
      v61[2] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::ChainInterfaces<IAudioSessionPolicyControl,IAudioSessionInfo,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IAudioSessionInfoInternal,IAudioSessionDuckingControl,IInspectable>::`vftable'{for `IWeakReferenceSource'};
      v61[3] = &CAudioSession::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IAudioSessionInfoInternal,IAudioSessionDuckingControl,IInspectable>'};
      v61[4] = &CAudioSession::`vftable'{for `IAudioSessionDuckingControl'};
      v61[5] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::ChainInterfaces<IAudioSessionPolicyControl,IAudioSessionInfo,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IAudioSessionInfoInternal,IAudioSessionDuckingControl,IInspectable>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IInspectable>'};
      *((_BYTE *)v61 + 920) = 1;
      v61[116] = 0LL;
      InitializeCriticalSectionEx((LPCRITICAL_SECTION)(v61 + 117), 0, 0);
      *((_DWORD *)v61 + 244) = 0;
      v61[123] = 0LL;
      v62 = (__int64)v61;
    }
    v63 = (__int64)v185;
    v185 = (CAudioSession *)v62;
    if ( v63 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v63 + 16LL))(v63);
  }
  else
  {
    v161 = (__int64 *)Microsoft::WRL::Details::Make<CPerEndpointVolumeAudioSession,>(&v200);
    v162 = *v161;
    *v161 = 0LL;
    wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>::attach(&v185, v162);
    v163 = v200;
    if ( v200 )
    {
      v200 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::ChainInterfaces<IAudioSessionPolicyControl,IAudioSessionInfo,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IAudioSessionInfoInternal,IAudioSessionDuckingControl,IInspectable>::Release(v163);
    }
  }
  if ( !v185 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xDE,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
      (const char *)0x8007000ELL,
      v182);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v185);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v183);
    wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&lpCriticalSection);
    return 2147942414LL;
  }
  v64 = GUID_00000000_0000_0000_0000_000000000000;
  v65 = v191;
  if ( (v60 & 4) == 0 && !(*(unsigned __int8 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v191 + 448LL))(v191) )
    v64 = *(GUID *)(*(__int64 (__fastcall **)(struct IAudioProcess *, char *, __int64))(*(_QWORD *)v65 + 464LL))(
                     v65,
                     v227,
                     (__int64)v7 + 24);
  v66 = *(_QWORD *)v185;
  v207 = v64;
  v182 = v60;
  v67 = (*(__int64 (__fastcall **)(CAudioSession *, CAudioSessionManager *, struct IAudioProcess *, struct CAudioSessionInstanceId *))(v66 + 168))(
          v185,
          v8,
          v65,
          v7);
  v68 = v67;
  if ( v67 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xF6,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
      (const char *)(unsigned int)v67,
      v60);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v185);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v183);
    wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&lpCriticalSection);
    return v68;
  }
  v69 = (struct _RTL_CRITICAL_SECTION *)((char *)v8 + 8);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)v8 + 8));
  v202 = (LPCRITICAL_SECTION)((char *)v8 + 8);
  v11 = 0LL;
  v183 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)v8 + 8));
  v196[0] = (char *)v8 + 8;
  v193 = (*(__int64 (__fastcall **)(__int64 *))(ATL::g_strmgr + 24))(&ATL::g_strmgr) + 24;
  if ( (int)CAudioSessionInstanceId::ToString(v7, &v193) < 0 )
  {
    v146 = (_QWORD *)(v193 - 24);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v193 - 24 + 16), 0xFFFFFFFF) <= 1 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v146 + 8LL))(*v146);
    v73 = 0;
    v11 = v183;
    v69 = (struct _RTL_CRITICAL_SECTION *)v196[0];
  }
  else
  {
    v70 = (_WORD *)v193;
    v71 = *(int *)(v193 - 16);
    if ( ((1 - *(_DWORD *)(v193 - 8)) | (*(_DWORD *)(v193 - 12) - (int)v71)) < 0 )
    {
      ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(&v193, (unsigned int)v71);
      v70 = (_WORD *)v193;
    }
    _o__wcsupr_s(v70, (int)v71 + 1);
    if ( (int)v71 < 0 || (v72 = (ATL::CStringData *)(v70 - 12), (int)v71 > *((_DWORD *)v70 - 3)) )
      ATL::AtlThrowImpl(-2147024809);
    *((_DWORD *)v72 + 2) = v71;
    v70[v71] = 0;
    if ( !v70 )
      ATL::AtlThrowImpl(-2147467259);
    v73 = 0;
    for ( j = *v70; *v70; j = *v70 )
    {
      v73 = j + 33 * v73;
      ++v70;
    }
    ATL::CStringData::Release(v72);
  }
  v75 = v186;
  v76 = 2 * (v73 & *((_QWORD *)v186 + 12));
  v77 = *((_QWORD *)v186 + 9);
  v78 = *(_QWORD *)(v77 + 16 * (v73 & *((_QWORD *)v186 + 12)) + 8);
  if ( v78 == *((_QWORD *)v186 + 7) )
    goto LABEL_122;
  v151 = *(_QWORD *)(v77 + 8 * v76);
  while ( (unsigned __int8)std::_Uhash_compare<CAudioSessionInstanceId,std::hash<CAudioSessionInstanceId>,std::equal_to<CAudioSessionInstanceId>>::operator()<CAudioSessionInstanceId,CAudioSessionInstanceId>(
                             v76,
                             v184,
                             v78 + 16) )
  {
    if ( v78 == v151 )
    {
      v75 = v186;
      goto LABEL_122;
    }
    v78 = *(_QWORD *)(v78 + 8);
  }
  v75 = v186;
  if ( !v78 )
LABEL_122:
    v78 = *((_QWORD *)v75 + 7);
  if ( v78 == *((_QWORD *)v75 + 7) )
  {
    if ( v69 )
    {
      LeaveCriticalSection(v69);
      v75 = v186;
    }
    v79 = -2147024894;
    v80 = v184;
  }
  else
  {
    v164 = wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>::copy_to<CAudioSession>(v78 + 96, &v183);
    v79 = v164;
    if ( v164 >= 0 )
    {
      v80 = v184;
      if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_SS(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          10,
          (unsigned int)&WPP_a8e1b94a3e7033841a5ad9e612e202df_Traceguids,
          0,
          *((_QWORD *)v184 + 9));
      }
      wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(v196);
      v79 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x36,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
        (const char *)(unsigned int)v164,
        v182);
      wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(v196);
      v80 = v184;
    }
    v75 = v186;
    v11 = v183;
  }
  if ( v79 < 0 )
  {
    v81 = (_QWORD *)((char *)v75 + 48);
    v194 = (*(__int64 (__fastcall **)(__int64 *))(ATL::g_strmgr + 24))(&ATL::g_strmgr) + 24;
    if ( (int)CAudioSessionInstanceId::ToString(v80, &v194) < 0 )
    {
      v147 = (_QWORD *)(v194 - 24);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v194 - 24 + 16), 0xFFFFFFFF) <= 1 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v147 + 8LL))(*v147);
      v85 = 0;
      v11 = v183;
    }
    else
    {
      v82 = (_WORD *)v194;
      v83 = *(int *)(v194 - 16);
      if ( ((1 - *(_DWORD *)(v194 - 8)) | (*(_DWORD *)(v194 - 12) - (int)v83)) < 0 )
      {
        ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(&v194, (unsigned int)v83);
        v82 = (_WORD *)v194;
      }
      _o__wcsupr_s(v82, (int)v83 + 1);
      if ( (int)v83 < 0 || (v84 = (ATL::CStringData *)(v82 - 12), (int)v83 > *((_DWORD *)v82 - 3)) )
        ATL::AtlThrowImpl(-2147024809);
      *((_DWORD *)v84 + 2) = v83;
      v82[v83] = 0;
      if ( !v82 )
        ATL::AtlThrowImpl(-2147467259);
      v85 = 0;
      for ( k = *v82; *v82; k = *v82 )
      {
        v85 = k + 33 * v85;
        ++v82;
      }
      ATL::CStringData::Release(v84);
    }
    v201 = v85;
    v87 = 2 * (v85 & v81[6]);
    v88 = v81[3];
    v89 = *(_QWORD **)(v88 + 16 * (v85 & v81[6]) + 8);
    v90 = (_QWORD *)v81[1];
    v91 = v184;
    if ( v89 != v90 )
    {
      v152 = *(_QWORD **)(v88 + 8 * v87);
      while ( (unsigned __int8)std::_Uhash_compare<CAudioSessionInstanceId,std::hash<CAudioSessionInstanceId>,std::equal_to<CAudioSessionInstanceId>>::operator()<CAudioSessionInstanceId,CAudioSessionInstanceId>(
                                 v88,
                                 v91,
                                 v89 + 2) )
      {
        if ( v89 == v152 )
        {
          v90 = v89;
          goto LABEL_138;
        }
        v89 = (_QWORD *)v89[1];
      }
      v203 = v89;
      v204 = 0;
      v116 = v186;
      goto LABEL_166;
    }
LABEL_138:
    if ( v81[2] == 0x276276276276276LL )
      std::_Xlength_error("unordered_map/set too long");
    v196[1] = v81 + 1;
    v92 = GetProcessHeap();
    v93 = HeapAlloc(v92, 0, 0x68uLL);
    v197 = v93;
    v94 = v93 + 2;
    v218 = v93 + 2;
    v95 = *(const void **)v91;
    v96 = (volatile signed __int32 *)(*(_QWORD *)v91 - 24LL);
    v97 = (__int64 (__fastcall ***)(_QWORD, _QWORD, __int64))(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)v96 + 32LL))(*(_QWORD *)v96);
    if ( *((int *)v96 + 4) >= 0 && v97 == *(__int64 (__fastcall ****)(_QWORD, _QWORD, __int64))v96 )
    {
      _InterlockedIncrement(v96 + 4);
      v11 = v183;
      v93 = v197;
    }
    else
    {
      v165 = v96 + 2;
      v166 = (**v97)(v97, *((unsigned int *)v96 + 2), 2LL);
      v96 = (volatile signed __int32 *)v166;
      if ( !v166 )
        ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException();
      *(_DWORD *)(v166 + 8) = *v165;
      memcpy_s((void *const)(v166 + 24), 2LL * (*v165 + 1), v95, 2LL * (*v165 + 1));
      v91 = v184;
    }
    *v94 = v96 + 6;
    v221 = v94 + 1;
    v98 = (char *)*((_QWORD *)v91 + 1);
    v99 = v98 - 24;
    v100 = (__int64 (__fastcall ***)(_QWORD, _QWORD, __int64))(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v98 - 3)
                                                                                                + 32LL))(*((_QWORD *)v98 - 3));
    v101 = v100;
    if ( *((int *)v98 - 2) >= 0 && v100 == *(__int64 (__fastcall ****)(_QWORD, _QWORD, __int64))v99 )
    {
      _InterlockedIncrement((volatile signed __int32 *)v99 + 4);
      v11 = v183;
      v93 = v197;
    }
    else
    {
      v167 = *v100;
      v188 = (PTP_TIMER *)(v99 + 8);
      v168 = (*v167)(v101, *((unsigned int *)v99 + 2), 2LL);
      v99 = (char *)v168;
      if ( !v168 )
        ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException();
      v169 = v188;
      *(_DWORD *)(v168 + 8) = *(_DWORD *)v188;
      memcpy_s((void *const)(v168 + 24), 2LL * (*(_DWORD *)v169 + 1), v98, 2LL * (*(_DWORD *)v169 + 1));
    }
    v94[1] = v99 + 24;
    v102 = (char *)*((_QWORD *)v184 + 2);
    v103 = v102 - 24;
    v104 = (__int64 (__fastcall ***)(_QWORD, _QWORD, __int64))(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v102 - 3)
                                                                                                + 32LL))(*((_QWORD *)v102 - 3));
    v105 = v104;
    if ( *((int *)v102 - 2) >= 0 && v104 == *(__int64 (__fastcall ****)(_QWORD, _QWORD, __int64))v103 )
    {
      _InterlockedIncrement((volatile signed __int32 *)v103 + 4);
      v11 = v183;
      v93 = v197;
    }
    else
    {
      v170 = *v104;
      v188 = (PTP_TIMER *)(v103 + 8);
      v171 = (*v170)(v105, *((unsigned int *)v103 + 2), 2LL);
      v103 = (char *)v171;
      if ( !v171 )
        ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException();
      v172 = v188;
      *(_DWORD *)(v171 + 8) = *(_DWORD *)v188;
      memcpy_s((void *const)(v171 + 24), 2LL * (*(_DWORD *)v172 + 1), v102, 2LL * (*(_DWORD *)v172 + 1));
    }
    v94[2] = v103 + 24;
    v106 = v184;
    *(_OWORD *)(v94 + 3) = *(_OWORD *)((char *)v184 + 24);
    v107 = (char *)*((_QWORD *)v106 + 5);
    v108 = v107 - 24;
    v109 = (__int64 (__fastcall ***)(_QWORD, _QWORD, __int64))(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v107 - 3)
                                                                                                + 32LL))(*((_QWORD *)v107 - 3));
    v110 = v109;
    if ( *((int *)v107 - 2) >= 0 && v109 == *(__int64 (__fastcall ****)(_QWORD, _QWORD, __int64))v108 )
    {
      _InterlockedIncrement((volatile signed __int32 *)v108 + 4);
      v11 = v183;
      v93 = v197;
    }
    else
    {
      v173 = *v109;
      v188 = (PTP_TIMER *)(v108 + 8);
      v174 = (*v173)(v110, *((unsigned int *)v108 + 2), 2LL);
      v108 = (char *)v174;
      if ( !v174 )
        ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException();
      v175 = v188;
      *(_DWORD *)(v174 + 8) = *(_DWORD *)v188;
      memcpy_s((void *const)(v174 + 24), 2LL * (*(_DWORD *)v175 + 1), v107, 2LL * (*(_DWORD *)v175 + 1));
    }
    v94[5] = v108 + 24;
    v111 = v184;
    *((_DWORD *)v94 + 12) = *((_DWORD *)v184 + 12);
    v94[7] = *((_QWORD *)v111 + 7);
    *((_DWORD *)v94 + 16) = *((_DWORD *)v111 + 16);
    v112 = (char *)*((_QWORD *)v111 + 9);
    v113 = v112 - 24;
    v114 = (__int64 (__fastcall ***)(_QWORD, _QWORD, __int64))(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v112 - 3)
                                                                                                + 32LL))(*((_QWORD *)v112 - 3));
    if ( *((int *)v112 - 2) >= 0 && v114 == *(__int64 (__fastcall ****)(_QWORD, _QWORD, __int64))v113 )
    {
      _InterlockedIncrement((volatile signed __int32 *)v113 + 4);
      v11 = v183;
      v93 = v197;
    }
    else
    {
      v176 = v113 + 8;
      v177 = (**v114)(v114, *((unsigned int *)v113 + 2), 2LL);
      v113 = (char *)v177;
      if ( !v177 )
        ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException();
      *(_DWORD *)(v177 + 8) = *v176;
      memcpy_s((void *const)(v177 + 24), 2LL * (*v176 + 1), v112, 2LL * (*v176 + 1));
    }
    v94[9] = v113 + 24;
    v115 = (__int64)v185;
    v94[10] = v185;
    if ( v115 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v115 + 8LL))(v115);
    v116 = v186;
    v117 = *((_QWORD *)v186 + 8);
    v118 = v117 + 1;
    if ( v117 + 1 < 0 )
      v119 = (float)(int)(v118 & 1 | (v118 >> 1)) + (float)(int)(v118 & 1 | (v118 >> 1));
    else
      v119 = (float)(int)v118;
    v120 = *((_QWORD *)v186 + 13);
    if ( v120 < 0 )
    {
      v153 = *((_QWORD *)v186 + 13) & 1LL | ((unsigned __int64)v120 >> 1);
      v121 = (float)(int)v153 + (float)(int)v153;
    }
    else
    {
      v121 = (float)(int)v120;
    }
    if ( (float)(v119 / v121) > *((float *)v186 + 12) )
    {
      std::_Hash<std::_Umap_traits<CAudioSessionInstanceId,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>,std::_Uhash_compare<CAudioSessionInstanceId,std::hash<CAudioSessionInstanceId>,std::equal_to<CAudioSessionInstanceId>>,std::allocator<std::pair<CAudioSessionInstanceId const,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>>,0>>::_Rehash_for_1((char *)v186 + 48);
      v122 = v201;
      v207 = *(GUID *)std::_Hash<std::_Umap_traits<CAudioSessionInstanceId,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>,std::_Uhash_compare<CAudioSessionInstanceId,std::hash<CAudioSessionInstanceId>,std::equal_to<CAudioSessionInstanceId>>,std::allocator<std::pair<CAudioSessionInstanceId const,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>>,0>>::_Find_last<CAudioSessionInstanceId>(
                        (char *)v116 + 48,
                        v226,
                        v94,
                        v201);
      v117 = *((_QWORD *)v116 + 8);
      v90 = *(_QWORD **)&v207.Data1;
    }
    else
    {
      v122 = v201;
    }
    v123 = (_QWORD *)v90[1];
    *((_QWORD *)v116 + 8) = v117 + 1;
    *v93 = v90;
    v93[1] = v123;
    *v123 = v93;
    v90[1] = v93;
    v124 = *((_QWORD *)v116 + 9);
    v125 = 2 * (v122 & *((_QWORD *)v116 + 12));
    v126 = *(_QWORD **)(v124 + 16 * (v122 & *((_QWORD *)v116 + 12)));
    if ( v126 == *((_QWORD **)v116 + 7) )
    {
      *(_QWORD *)(v124 + 16 * (v122 & *((_QWORD *)v116 + 12))) = v93;
    }
    else
    {
      if ( v126 == v90 )
      {
        *(_QWORD *)(v124 + 16 * (v122 & *((_QWORD *)v116 + 12))) = v93;
        goto LABEL_165;
      }
      if ( *(_QWORD **)(v124 + 16 * (v122 & *((_QWORD *)v116 + 12)) + 8) != v123 )
        goto LABEL_165;
    }
    *(_QWORD *)(v124 + 8 * v125 + 8) = v93;
LABEL_165:
    v203 = v93;
    v204 = 1;
LABEL_166:
    Context[0] = v116;
    Context[1] = &v203;
    v215 = *(_OWORD *)Context;
    v216 = 1;
    v127 = (*(__int64 (__fastcall **)(CAudioSession *, struct ISessionInternalEvents *))(*(_QWORD *)v185 + 152LL))(
             v185,
             g_PolicyEventsHandler);
    v128 = v127;
    if ( v127 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x106,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
        (const char *)(unsigned int)v127,
        v182);
      wil::details::lambda_call__lambda_5b1683911ba3f7f9405586de8ce9ce3b___::reset(&v215);
      wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v202);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v185);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v183);
      wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&lpCriticalSection);
      return v128;
    }
    v208 = (__int64 *)&v185;
    v209 = 1;
    v129 = (__int64)v185;
    if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 29LL, &WPP_a8e1b94a3e7033841a5ad9e612e202df_Traceguids, 0LL);
    }
    v130 = 2 * *(_DWORD *)(*(_QWORD *)(v129 + 656) - 16LL) + 2;
    v131 = 2 * *((_DWORD *)v116 + 64) + 2;
    v132 = v131 + 2 * *(_DWORD *)(*(_QWORD *)(v129 + 656) - 16LL) + 74;
    v133 = (unsigned int *)operator new[](v132, (const struct std::nothrow_t *)&std::nothrow);
    v134 = v133;
    if ( v133 )
    {
      *v133 = v132;
      v133[1] = 64;
      v133[6] = v130;
      v133[12] = v131;
      v133[13] = v130 + 72;
      v135 = v133 + 18;
      v136 = (unsigned __int64)v130 >> 1;
      if ( v136 )
      {
        v137 = 2147483646 - v136;
        v138 = *(_QWORD *)(v129 + 656) - (_QWORD)v135;
        while ( v137 + v136 )
        {
          v139 = *(_WORD *)((char *)v135 + v138);
          if ( !v139 )
            break;
          *v135++ = v139;
          if ( !--v136 )
          {
            --v135;
            break;
          }
        }
        *v135 = 0;
      }
      v140 = (char *)v116 + 240;
      if ( *((_QWORD *)v116 + 33) >= 8uLL )
        v140 = *(char **)v140;
      v141 = (char *)v134 + v134[13];
      v142 = (unsigned __int64)v131 >> 1;
      if ( v142 )
      {
        v143 = 2147483646 - v142;
        v144 = v140 - v141;
        while ( v142 + v143 )
        {
          v145 = *(_WORD *)&v141[v144];
          if ( !v145 )
            break;
          *(_WORD *)v141 = v145;
          v141 += 2;
          if ( !--v142 )
          {
            v141 -= 2;
            break;
          }
        }
        *(_WORD *)v141 = 0;
      }
      v212 = &CAudioSessionManagerNotification::`vftable';
      v213 = v134;
      v214 = v129;
      CLockedList<CAudioSessionNotificationProcess,1,0>::ForEachEntry((LPCRITICAL_SECTION)((char *)v116 + 176));
    }
    v148 = GetProcessHeap();
    HeapFree(v148, 0, v134);
    v149 = v11;
    v11 = v185;
    v183 = v185;
    if ( v185 )
      (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)v185 + 8LL))(v185);
    if ( v149 )
      (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)v149 + 16LL))(v149);
    v53 = 0;
    v209 = 0;
    v216 = 0;
    Context[0] = 0LL;
    if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, fPending, Context)
      && fPending[0] )
    {
      v210 = &`AudioSrvTelemetryProvider::Instance'::`2'::wrapper;
      Context[0] = &qword_1801C2788;
      qword_1801C2788 = (__int64)&AudioSrvTelemetryProvider::`vftable';
      qword_1801C27A0 = (__int64)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
      v211 = 0;
      wil::details::static_lazy<AudioSrvTelemetryProvider>::Completer::~Completer(&v210);
    }
    v150 = *((_QWORD *)Context[0] + 1);
    if ( *(_DWORD *)v150 > 4u
      && (*(_DWORD *)(v150 + 16) & 0x200LL) != 0
      && (*(_QWORD *)(v150 + 24) & 0x200LL) == *(_QWORD *)(v150 + 24) )
    {
      LODWORD(v186) = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v191 + 40LL))(v191);
      LODWORD(v184) = v192[0];
      *(_QWORD *)v192 = *((_QWORD *)v11 + 82);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v150,
        (unsigned int)&unk_180188CB4,
        v178,
        v179,
        (__int64)v192,
        (__int64)&v184,
        (__int64)&v186);
    }
    goto LABEL_205;
  }
  v53 = 1;
LABEL_205:
  if ( v202 )
    LeaveCriticalSection(v202);
  if ( v185 )
    (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)v185 + 16LL))(v185);
LABEL_88:
  v54 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v191 + 40LL))(v191);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)v11 + 664));
  Context[0] = (char *)v11 + 664;
  v55 = (_QWORD *)*((_QWORD *)v11 + 88);
  v56 = (_QWORD *)*((_QWORD *)v11 + 89);
  while ( v55 != v56 )
  {
    if ( (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)*v55 + 40LL))(*v55) == v54 )
    {
      wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(Context);
      goto LABEL_92;
    }
    ++v55;
  }
  if ( v11 != (CAudioSession *)-664LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v11 + 664));
  v180 = CAudioSession::RegisterOwnerProcess(v11, v191);
  v181 = v180;
  if ( v180 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x136,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
      (const char *)(unsigned int)v180,
      v182);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v183);
    wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&lpCriticalSection);
    return v181;
  }
LABEL_92:
  if ( v53 )
    (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)v11 + 184LL))(v11);
  *v206 = v11;
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  return 0LL;
}
