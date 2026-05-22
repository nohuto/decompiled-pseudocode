/*
 * XREFs of ?HitTestRequestWithRetry@HitTestHelper@@SA?AUHitTestResult@@AEBUHitTestRequest@1@PEAUIDWMInputProxy@@PEAVInputSiteManager@@PEAUIInputSiteHierarchyManager@@@Z @ 0x18001FE50
 * Callers:
 *     ?HitTest@DWMInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@PEAVInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@@Z @ 0x18001F480 (-HitTest@DWMInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@PEAVInputContex.c)
 *     ?HitTest@DWMInputRouter@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUIInputTarget@@PEAPEAU4@@Z @ 0x1801B9380 (-HitTest@DWMInputRouter@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUIInputTarget@@PEAPEAU4@@Z.c)
 *     ?HitTestForPoint@DWMInputRouter@@UEAA?AUHitTestResult@@UtagPOINT@@@Z @ 0x1801B95A0 (-HitTestForPoint@DWMInputRouter@@UEAA-AUHitTestResult@@UtagPOINT@@@Z.c)
 *     ?HitTestForPointAndType@DWMInputRouter@@UEAA?AUHitTestResult@@UtagPOINT@@K@Z @ 0x1801B9620 (-HitTestForPointAndType@DWMInputRouter@@UEAA-AUHitTestResult@@UtagPOINT@@K@Z.c)
 *     ?HitTestForPointTypeAndWorkspace@DWMInputRouter@@UEAA?AUHitTestResult@@UtagPOINT@@KK@Z @ 0x1801B96D0 (-HitTestForPointTypeAndWorkspace@DWMInputRouter@@UEAA-AUHitTestResult@@UtagPOINT@@KK@Z.c)
 *     ?RequestUIAHitTest@DWMInputRouter@@QEAA?AU_GUID@@II@Z @ 0x1801B9E4C (-RequestUIAHitTest@DWMInputRouter@@QEAA-AU_GUID@@II@Z.c)
 *     ?RequestViewHitTestHelper@DWMInputRouter@@IEAAXUViewHitTestInfo@@PEAI@Z @ 0x1801BA190 (-RequestViewHitTestHelper@DWMInputRouter@@IEAAXUViewHitTestInfo@@PEAI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A124 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x18001F2F0 (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     ??$_Emplace_reallocate@V?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@?$vector@V?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@V?$allocator@V?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@2@@std@@QEAAPEAV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@1@QEAV21@$$QEAV21@@Z @ 0x180020220 (--$_Emplace_reallocate@V-$vector@V-$ComPtr@VInputSite@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VI.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@VInputSite@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@0@@Z @ 0x180024924 (--$_Destroy_range@V-$allocator@V-$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@YAXPEAV-$ComPtr.c)
 *     _tlgKeywordOn @ 0x18003F41C (_tlgKeywordOn.c)
 *     ??1Completer@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAA@XZ @ 0x1800542B4 (--1Completer@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAA@XZ.c)
 *     ?_Tidy@?$vector@U_LUID@@V?$allocator@U_LUID@@@std@@@std@@AEAAXXZ @ 0x1800555C4 (-_Tidy@-$vector@U_LUID@@V-$allocator@U_LUID@@@std@@@std@@AEAAXXZ.c)
 *     atexit @ 0x180056078 (atexit.c)
 *     memset_0 @ 0x180056688 (memset_0.c)
 *     __security_check_cookie @ 0x180056730 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800569E0 (--3@YAXPEAX_K@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800581C4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?GetIdForNamespace@InputSite@@QEBA?AV?$optional@_K@std@@W4InputSiteIdNamespace@@@Z @ 0x18005EEE0 (-GetIdForNamespace@InputSite@@QEBA-AV-$optional@_K@std@@W4InputSiteIdNamespace@@@Z.c)
 *     ?GetInputSiteForEvaluationListFromDITCallbackStruct@InputSiteManager@@QEAA?AV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@AEBUtagDITCALLBACKSTRUCT@@@Z @ 0x18005F160 (-GetInputSiteForEvaluationListFromDITCallbackStruct@InputSiteManager@@QEAA-AV-$vector@V-$ComPtr@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x180096C5C (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18009822C (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AJPEAX@Z$1-NtCloseCompositionInputSink@.c)
 *     ?_Buy_nonzero@?$vector@PEAVLightDismissClientProxy@@V?$allocator@PEAVLightDismissClientProxy@@@std@@@std@@AEAAX_K@Z @ 0x18009DBEC (-_Buy_nonzero@-$vector@PEAVLightDismissClientProxy@@V-$allocator@PEAVLightDismissClientProxy@@@s.c)
 *     ?_Throw_bad_optional_access@std@@YAXXZ @ 0x18009DCC4 (-_Throw_bad_optional_access@std@@YAXXZ.c)
 *     ?_Tidy@?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@AEAAXXZ @ 0x18009DCF4 (-_Tidy@-$vector@V-$ComPtr@VInputSite@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VInputSite@@@WRL@Mi.c)
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@@Z @ 0x1800A0520 (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 */

// Hidden C++ exception states: #wind=7
_BYTE *__fastcall HitTestHelper::HitTestRequestWithRetry(
        _BYTE *a1,
        __int128 *a2,
        __int64 (__fastcall ***a3)(_QWORD, __int128 *, void *),
        __int64 a4,
        __int64 a5)
{
  BOOL inited; // eax
  void *v9; // r8
  _DWORD *v10; // rcx
  _QWORD *v11; // r15
  char v12; // r14
  _QWORD *v13; // rdi
  _QWORD *v14; // r13
  _QWORD *v15; // rsi
  __int64 v16; // r12
  __int64 v17; // rdx
  void *v18; // rdi
  _QWORD *v19; // r12
  void *v20; // rdx
  __int64 v21; // rcx
  __int64 v23; // rcx
  __int64 v24; // r10
  __int64 v25; // r14
  char *v26; // r13
  char *v27; // r15
  __int64 v28; // r14
  _QWORD *v29; // rax
  _QWORD *v30; // r8
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rcx
  LPVOID Context; // [rsp+30h] [rbp-D0h] BYREF
  WINBOOL fPending[2]; // [rsp+38h] [rbp-C8h] BYREF
  void *v37[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v38; // [rsp+50h] [rbp-B0h]
  __int64 v39[2]; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v40; // [rsp+68h] [rbp-98h]
  void *v41; // [rsp+70h] [rbp-90h] BYREF
  void *v42; // [rsp+78h] [rbp-88h] BYREF
  _QWORD *v43; // [rsp+80h] [rbp-80h]
  __int64 v44; // [rsp+88h] [rbp-78h]
  __int128 v45; // [rsp+90h] [rbp-70h] BYREF
  __int64 v46; // [rsp+A0h] [rbp-60h]
  char v47; // [rsp+B0h] [rbp-50h]
  __int64 v48; // [rsp+B8h] [rbp-48h] BYREF
  __int128 v49; // [rsp+C0h] [rbp-40h]
  __int128 v50; // [rsp+D0h] [rbp-30h]
  __int128 v51; // [rsp+E0h] [rbp-20h]
  __int128 v52; // [rsp+F0h] [rbp-10h]
  __int128 v53; // [rsp+100h] [rbp+0h]
  __int128 v54; // [rsp+110h] [rbp+10h] BYREF
  _QWORD *v55; // [rsp+120h] [rbp+20h]
  __int128 v56; // [rsp+130h] [rbp+30h] BYREF
  __int128 v57; // [rsp+140h] [rbp+40h]
  __int128 v58; // [rsp+150h] [rbp+50h]
  __int128 v59; // [rsp+160h] [rbp+60h]
  __int128 v60; // [rsp+170h] [rbp+70h]
  __int128 v61; // [rsp+180h] [rbp+80h]
  __int128 v62; // [rsp+190h] [rbp+90h]
  __int128 v63; // [rsp+1A0h] [rbp+A0h]
  unsigned int v64; // [rsp+1B0h] [rbp+B0h]
  int v65; // [rsp+1B4h] [rbp+B4h]
  const char *v66; // [rsp+1C0h] [rbp+C0h]
  GUID ActivityId; // [rsp+1C8h] [rbp+C8h] BYREF
  __int128 v68; // [rsp+1D8h] [rbp+D8h]
  __int64 v69; // [rsp+1E8h] [rbp+E8h]
  char v70; // [rsp+1F0h] [rbp+F0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2E8h] [rbp+1E8h]

  v39[0] = a4;
  v37[0] = a1;
  v66 = "ISMHitTest";
  ActivityId = 0LL;
  v68 = 0LL;
  v69 = 0LL;
  Context = 0LL;
  inited = __std_init_once_begin_initialize(&`InputTraceLogging::Instance'::`2'::wrapper, 0, fPending, &Context);
  v9 = &`InputTraceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
  if ( inited && fPending[0] )
  {
    v37[0] = &`InputTraceLogging::Instance'::`2'::wrapper;
    Context = &qword_180268B08;
    qword_180268B08 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
    qword_180268B20 = (__int64)&`InputTraceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_);
    LODWORD(v37[1]) = 0;
    wil::details::static_lazy<InputTraceLogging>::Completer::~Completer(v37);
  }
  v10 = (_DWORD *)*((_QWORD *)Context + 1);
  if ( *v10 )
  {
    if ( (unsigned __int8)tlgKeywordOn(v10, 1LL) )
    {
      EventActivityIdControl(3u, &ActivityId);
      v24 = *((_QWORD *)wil::details::static_lazy<InputTraceLogging>::get(
                          v23,
                          _lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_)
            + 1);
      if ( *(_DWORD *)v24 > 6u
        && (*(_BYTE *)(v24 + 16) & 1) != 0
        && (*(_QWORD *)(v24 + 24) & 1LL) == *(_QWORD *)(v24 + 24) )
      {
        v37[0] = (void *)v66;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
          v24,
          (__int64)v37);
      }
    }
  }
  v47 = 0;
  v48 = 0LL;
  v49 = 0LL;
  v50 = 0LL;
  v51 = 0LL;
  v52 = 0LL;
  v53 = 0LL;
  v54 = 0LL;
  v11 = 0LL;
  v55 = 0LL;
  v56 = *a2;
  v57 = a2[1];
  v58 = a2[2];
  v59 = a2[3];
  v60 = a2[4];
  v61 = a2[5];
  v62 = a2[6];
  v63 = a2[7];
  v65 = HIDWORD(*((_QWORD *)a2 + 16));
  v45 = 0LL;
  *(_QWORD *)fPending = 0LL;
  v46 = 0LL;
  *((_QWORD *)&v63 + 1) = &v70;
  v64 = 20;
  v12 = (**a3)(a3, &v56, v9);
  v47 = v12;
  v48 = *((_QWORD *)&v57 + 1);
  if ( v64 > 0x14 )
  {
    v25 = v64;
    *(_OWORD *)v37 = 0LL;
    *(_QWORD *)fPending = 0LL;
    v38 = 0LL;
    std::vector<LightDismissClientProxy *>::_Buy_nonzero(v37, v64);
    v26 = (char *)v37[0];
    Context = v37[0];
    memset_0(v37[0], 0, 8 * v25);
    v27 = &v26[8 * v25];
    v28 = v38;
    *(_QWORD *)fPending = v38;
    std::vector<_LUID>::_Tidy(&v45);
    *(_QWORD *)&v45 = v26;
    *((_QWORD *)&v45 + 1) = v27;
    v46 = v28;
    *(_OWORD *)v37 = 0LL;
    v38 = 0LL;
    std::vector<_LUID>::_Tidy(v37);
    v56 = *a2;
    v57 = a2[1];
    v58 = a2[2];
    v59 = a2[3];
    v60 = a2[4];
    v61 = a2[5];
    v62 = a2[6];
    v63 = a2[7];
    v65 = HIDWORD(*((_QWORD *)a2 + 16));
    *((_QWORD *)&v63 + 1) = v26;
    v64 = (v27 - v26) >> 3;
    v47 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, __int128 *, void *), __int128 *))**a3)(a3, &v56);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>::reset(
      &v48,
      *((_QWORD *)&v57 + 1));
    v11 = v55;
    v12 = v47;
  }
  else
  {
    Context = (LPVOID)v45;
  }
  if ( v12 )
  {
    v49 = v58;
    v50 = v59;
    v51 = v60;
    v52 = v61;
    *(_QWORD *)&v53 = v57;
    BYTE8(v53) = (BYTE4(v62) & 1) != 0;
    HIDWORD(v53) = v62;
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a5 + 40LL))(a5);
  if ( v12 )
  {
    InputSiteManager::GetInputSiteForEvaluationListFromDITCallbackStruct(v39[0], &v42, &v56);
    v13 = v42;
    v14 = v43;
    v15 = (_QWORD *)*((_QWORD *)&v54 + 1);
    if ( v42 != v43 )
    {
      do
      {
        InputSite::GetIdForNamespace(*v13, v39, 0LL);
        if ( !LOBYTE(v39[1]) )
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0xE7,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\components\\hittesthelper\\hittesthelper.cpp",
            (const char *)retaddr);
        v29 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, void **, __int64, wil::details::in1diag3 *))(*(_QWORD *)a5 + 24LL))(
                          a5,
                          v37,
                          v39[0],
                          retaddr);
        v30 = v29;
        if ( v15 == v11 )
        {
          std::vector<std::vector<Microsoft::WRL::ComPtr<InputSite>>>::_Emplace_reallocate<std::vector<Microsoft::WRL::ComPtr<InputSite>>>(
            &v54,
            v15,
            v29);
          v11 = v55;
          v15 = (_QWORD *)*((_QWORD *)&v54 + 1);
        }
        else
        {
          v31 = v29[2];
          v29[2] = 0LL;
          v32 = v29[1];
          v29[1] = 0LL;
          v33 = *v29;
          *v30 = 0LL;
          *v15 = v33;
          v15[1] = v32;
          v15[2] = v31;
          v15 += 3;
          *((_QWORD *)&v54 + 1) = v15;
        }
        std::vector<Microsoft::WRL::ComPtr<InputSite>>::_Tidy(v37);
        ++v13;
      }
      while ( v13 != v14 );
      v12 = v47;
      v13 = v42;
    }
    if ( (_QWORD *)v54 == v15 )
    {
      *(_OWORD *)v39 = 0LL;
      v40 = 0LL;
      if ( v15 == v11 )
      {
        std::vector<std::vector<Microsoft::WRL::ComPtr<InputSite>>>::_Emplace_reallocate<std::vector<Microsoft::WRL::ComPtr<InputSite>>>(
          &v54,
          v15,
          v39);
        v11 = v55;
        v15 = (_QWORD *)*((_QWORD *)&v54 + 1);
        v12 = v47;
        v16 = v40;
        v17 = v39[1];
        v18 = (void *)v39[0];
      }
      else
      {
        v16 = 0LL;
        v17 = 0LL;
        v18 = 0LL;
        *v15 = 0LL;
        v15[1] = 0LL;
        v15[2] = 0LL;
        v15 += 3;
        *((_QWORD *)&v54 + 1) = v15;
      }
      if ( v18 )
      {
        std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<InputSite>>>(v18, v17);
        std::_Deallocate<16,0>(v18, 8 * ((v16 - (__int64)v18) >> 3));
      }
      v13 = v42;
    }
    if ( v13 )
    {
      v19 = v43;
      if ( v13 != v43 )
      {
        do
        {
          v34 = *v13;
          if ( *v13 )
          {
            *v13 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
          }
          ++v13;
        }
        while ( v13 != v19 );
        v13 = v42;
      }
      v20 = (void *)(8 * ((v44 - (__int64)v13) >> 3));
      v37[0] = v20;
      v41 = v13;
      if ( (unsigned __int64)v20 >= 0x1000 )
      {
        std::_Adjust_manually_vector_aligned(&v41, (unsigned __int64 *)v37);
        v13 = v41;
        v20 = v37[0];
      }
      operator delete(v13, (unsigned __int64)v20);
    }
  }
  else
  {
    v15 = (_QWORD *)*((_QWORD *)&v54 + 1);
  }
  *a1 = v12;
  *((_QWORD *)a1 + 1) = v48;
  *((_OWORD *)a1 + 1) = v49;
  *((_OWORD *)a1 + 2) = v50;
  *((_OWORD *)a1 + 3) = v51;
  *((_OWORD *)a1 + 4) = v52;
  *((_QWORD *)a1 + 10) = v53;
  a1[88] = BYTE8(v53);
  *((_DWORD *)a1 + 23) = HIDWORD(v53);
  *((_QWORD *)a1 + 12) = v54;
  *((_QWORD *)a1 + 13) = v15;
  *((_QWORD *)a1 + 14) = v11;
  if ( Context )
    std::_Deallocate<16,0>(Context, 8 * ((__int64)(*(_QWORD *)fPending - (_QWORD)Context) >> 3));
  Context = 0LL;
  if ( __std_init_once_begin_initialize(&`InputTraceLogging::Instance'::`2'::wrapper, 0, fPending, &Context)
    && fPending[0] )
  {
    v39[0] = (__int64)&`InputTraceLogging::Instance'::`2'::wrapper;
    Context = &qword_180268B08;
    qword_180268B08 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
    qword_180268B20 = (__int64)&`InputTraceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_);
    LODWORD(v39[1]) = 0;
    wil::details::static_lazy<InputTraceLogging>::Completer::~Completer(v39);
  }
  v21 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v21 > 6u && (*(_BYTE *)(v21 + 16) & 1) != 0 && (*(_QWORD *)(v21 + 24) & 1LL) == *(_QWORD *)(v21 + 24) )
  {
    v39[0] = (__int64)v66;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
      v21,
      (__int64)v39);
  }
  return a1;
}
