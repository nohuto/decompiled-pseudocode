/*
 * XREFs of ?HitTestRequestWithRetry@HitTestHelper@@SA?AUHitTestResult@@AEBUHitTestRequest@1@PEAUIDWMInputProxy@@PEAVInputSiteManager@@PEAUIInputSiteHierarchyManager@@@Z @ 0x180017B40
 * Callers:
 *     ?HitTest@DWMInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@PEAVInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@@Z @ 0x1800173C0 (-HitTest@DWMInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@PEAVInputContex.c)
 *     ?HitTest@DWMInputRouter@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUIInputTarget@@PEAPEAU4@@Z @ 0x18019A990 (-HitTest@DWMInputRouter@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUIInputTarget@@PEAPEAU4@@Z.c)
 *     ?HitTestForPoint@DWMInputRouter@@UEAA?AUHitTestResult@@UtagPOINT@@@Z @ 0x18019AB80 (-HitTestForPoint@DWMInputRouter@@UEAA-AUHitTestResult@@UtagPOINT@@@Z.c)
 *     ?HitTestForPointAndType@DWMInputRouter@@UEAA?AUHitTestResult@@UtagPOINT@@K@Z @ 0x18019AC00 (-HitTestForPointAndType@DWMInputRouter@@UEAA-AUHitTestResult@@UtagPOINT@@K@Z.c)
 *     ?HitTestForPointTypeAndWorkspace@DWMInputRouter@@UEAA?AUHitTestResult@@UtagPOINT@@KK@Z @ 0x18019ACB0 (-HitTestForPointTypeAndWorkspace@DWMInputRouter@@UEAA-AUHitTestResult@@UtagPOINT@@KK@Z.c)
 *     ?RequestUIAHitTest@DWMInputRouter@@QEAA?AU_GUID@@II@Z @ 0x18019B7F8 (-RequestUIAHitTest@DWMInputRouter@@QEAA-AU_GUID@@II@Z.c)
 *     ?RequestViewHitTestHelper@DWMInputRouter@@IEAAXUViewHitTestInfo@@PEAI@Z @ 0x18019BB90 (-RequestViewHitTestHelper@DWMInputRouter@@IEAAXUViewHitTestInfo@@PEAI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000E6AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Emplace_reallocate@V?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@?$vector@V?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@V?$allocator@V?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@2@@std@@QEAAPEAV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@1@QEAV21@$$QEAV21@@Z @ 0x180018030 (--$_Emplace_reallocate@V-$vector@V-$ComPtr@VInputSite@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VI.c)
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x180018310 (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     ??1Completer@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAA@XZ @ 0x180048394 (--1Completer@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x18004A308 (atexit.c)
 *     memset_0 @ 0x18004A918 (memset_0.c)
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x18004ABE0 (--3@YAXPEAX_K@Z.c)
 *     ?GetInputSiteForEvaluationListFromDITCallbackStruct@InputSiteManager@@QEAA?AV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@AEBUtagDITCALLBACKSTRUCT@@@Z @ 0x18004DBD8 (-GetInputSiteForEvaluationListFromDITCallbackStruct@InputSiteManager@@QEAA-AV-$vector@V-$ComPtr@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x18007FD24 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180080EA8 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AJPEAX@Z$1-NtCloseCompositionInputSink@.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@VInputSite@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@0@@Z @ 0x180084064 (--$_Destroy_range@V-$allocator@V-$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@YAXPEAV-$ComPtr.c)
 *     ?_Throw_bad_optional_access@std@@YAXXZ @ 0x180086B08 (-_Throw_bad_optional_access@std@@YAXXZ.c)
 *     ?_Tidy@?$vector@U_LUID@@V?$allocator@U_LUID@@@std@@@std@@AEAAXXZ @ 0x180086B38 (-_Tidy@-$vector@U_LUID@@V-$allocator@U_LUID@@@std@@@std@@AEAAXXZ.c)
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@@Z @ 0x1800892B8 (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ?_Buy_nonzero@?$vector@U_LUID@@V?$allocator@U_LUID@@@std@@@std@@AEAAX_K@Z @ 0x180198EF8 (-_Buy_nonzero@-$vector@U_LUID@@V-$allocator@U_LUID@@@std@@@std@@AEAAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=9
_BYTE *__fastcall HitTestHelper::HitTestRequestWithRetry(
        _BYTE *a1,
        __int128 *a2,
        __int64 (__fastcall ***a3)(_QWORD, __int128 *, void *),
        __int64 a4,
        __int64 a5)
{
  BOOL inited; // eax
  void *v9; // r8
  __int64 v10; // rcx
  _QWORD *v11; // r15
  char v12; // r14
  char *v13; // rdi
  char *v14; // r13
  _QWORD *v15; // rsi
  __int64 v16; // r12
  void *v17; // rdi
  char *v18; // r12
  unsigned __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  char v24; // al
  char v25; // cl
  _QWORD *v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // r10
  __int64 v30; // r14
  char *v31; // r13
  char *v32; // r15
  __int64 v33; // r14
  LPVOID Context; // [rsp+30h] [rbp-D0h] BYREF
  WINBOOL fPending[2]; // [rsp+38h] [rbp-C8h] BYREF
  void *v36[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v37; // [rsp+50h] [rbp-B0h]
  __int64 v38[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v39; // [rsp+70h] [rbp-90h]
  unsigned __int64 v40; // [rsp+80h] [rbp-80h] BYREF
  void *v41; // [rsp+88h] [rbp-78h] BYREF
  char *v42; // [rsp+90h] [rbp-70h]
  __int64 v43; // [rsp+98h] [rbp-68h]
  __int128 v44; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v45; // [rsp+B0h] [rbp-50h]
  void *v46[3]; // [rsp+B8h] [rbp-48h] BYREF
  char v47; // [rsp+D0h] [rbp-30h]
  __int64 v48; // [rsp+D8h] [rbp-28h] BYREF
  __int128 v49; // [rsp+E0h] [rbp-20h]
  __int128 v50; // [rsp+F0h] [rbp-10h]
  __int128 v51; // [rsp+100h] [rbp+0h]
  __int128 v52; // [rsp+110h] [rbp+10h]
  __int128 v53; // [rsp+120h] [rbp+20h]
  __int128 v54; // [rsp+130h] [rbp+30h] BYREF
  _QWORD *v55; // [rsp+140h] [rbp+40h]
  __int128 v56; // [rsp+150h] [rbp+50h] BYREF
  __int128 v57; // [rsp+160h] [rbp+60h]
  __int128 v58; // [rsp+170h] [rbp+70h]
  __int128 v59; // [rsp+180h] [rbp+80h]
  __int128 v60; // [rsp+190h] [rbp+90h]
  __int128 v61; // [rsp+1A0h] [rbp+A0h]
  __int128 v62; // [rsp+1B0h] [rbp+B0h]
  __int128 v63; // [rsp+1C0h] [rbp+C0h]
  unsigned int v64; // [rsp+1D0h] [rbp+D0h]
  int v65; // [rsp+1D4h] [rbp+D4h]
  const char *v66; // [rsp+1E0h] [rbp+E0h]
  GUID ActivityId; // [rsp+1E8h] [rbp+E8h] BYREF
  __int128 v68; // [rsp+1F8h] [rbp+F8h]
  __int64 v69; // [rsp+208h] [rbp+108h]
  char v70; // [rsp+210h] [rbp+110h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+308h] [rbp+208h]

  v38[0] = a4;
  v36[0] = a1;
  v66 = "ISMHitTest";
  ActivityId = 0LL;
  v68 = 0LL;
  v69 = 0LL;
  Context = 0LL;
  inited = __std_init_once_begin_initialize(&`InputTraceLogging::Instance'::`2'::wrapper, 0, fPending, &Context);
  v9 = &`InputTraceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
  if ( inited && fPending[0] )
  {
    v36[0] = &`InputTraceLogging::Instance'::`2'::wrapper;
    Context = &qword_180242A58;
    qword_180242A58 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
    qword_180242A70 = (__int64)&`InputTraceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_);
    LODWORD(v36[1]) = 0;
    wil::details::static_lazy<InputTraceLogging>::Completer::~Completer(v36);
  }
  v10 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v10 )
  {
    if ( (*(_BYTE *)(v10 + 16) & 1) != 0 && (*(_QWORD *)(v10 + 24) & 1LL) == *(_QWORD *)(v10 + 24) )
    {
      EventActivityIdControl(3u, &ActivityId);
      v29 = *(_QWORD *)(wil::details::static_lazy<InputTraceLogging>::get(
                          v28,
                          _lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_)
                      + 8);
      if ( *(_DWORD *)v29 > 6u
        && (*(_BYTE *)(v29 + 16) & 1) != 0
        && (*(_QWORD *)(v29 + 24) & 1LL) == *(_QWORD *)(v29 + 24) )
      {
        v36[0] = (void *)v66;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
          v29,
          (__int64)v36);
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
  v44 = 0LL;
  *(_QWORD *)fPending = 0LL;
  v45 = 0LL;
  *((_QWORD *)&v63 + 1) = &v70;
  v64 = 20;
  v12 = (**a3)(a3, &v56, v9);
  v47 = v12;
  v48 = *((_QWORD *)&v57 + 1);
  if ( v64 > 0x14 )
  {
    v30 = v64;
    *(_OWORD *)v36 = 0LL;
    *(_QWORD *)fPending = 0LL;
    v37 = 0LL;
    std::vector<_LUID>::_Buy_nonzero(v36, v64);
    v31 = (char *)v36[0];
    Context = v36[0];
    memset_0(v36[0], 0, 8 * v30);
    v32 = &v31[8 * v30];
    v33 = v37;
    *(_QWORD *)fPending = v37;
    std::vector<_LUID>::_Tidy(&v44);
    *(_QWORD *)&v44 = v31;
    *((_QWORD *)&v44 + 1) = v32;
    v45 = v33;
    *(_OWORD *)v36 = 0LL;
    v37 = 0LL;
    std::vector<_LUID>::_Tidy(v36);
    v56 = *a2;
    v57 = a2[1];
    v58 = a2[2];
    v59 = a2[3];
    v60 = a2[4];
    v61 = a2[5];
    v62 = a2[6];
    v63 = a2[7];
    v65 = HIDWORD(*((_QWORD *)a2 + 16));
    *((_QWORD *)&v63 + 1) = v31;
    v64 = (v32 - v31) >> 3;
    v47 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, __int128 *, void *), __int128 *))**a3)(a3, &v56);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>::reset(
      &v48,
      *((_QWORD *)&v57 + 1));
    v11 = v55;
    v12 = v47;
  }
  else
  {
    Context = (LPVOID)v44;
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
    InputSiteManager::GetInputSiteForEvaluationListFromDITCallbackStruct(v38[0], &v41, &v56);
    v13 = (char *)v41;
    v14 = v42;
    v15 = (_QWORD *)*((_QWORD *)&v54 + 1);
    if ( v41 != v42 )
    {
      do
      {
        v22 = *(_QWORD *)(*(_QWORD *)v13 + 24LL);
        v23 = *(_QWORD *)(*(_QWORD *)v13 + 16LL);
        if ( v23 == v22 )
          goto LABEL_54;
        do
        {
          if ( !*(_DWORD *)v23 )
            break;
          v23 += 16LL;
        }
        while ( v23 != v22 );
        if ( v23 == v22 )
        {
LABEL_54:
          v24 = 1;
          v25 = 0;
        }
        else
        {
          v38[0] = *(_QWORD *)(v23 + 8);
          LOBYTE(v38[1]) = 1;
          *(_OWORD *)v36 = *(_OWORD *)v38;
          v24 = 0;
          v25 = 1;
        }
        if ( v24 )
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0xE7,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\components\\hittesthelper\\hittesthelper.cpp",
            (const char *)retaddr);
        if ( !v25 )
          std::_Throw_bad_optional_access();
        v26 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, void **, void *, wil::details::in1diag3 *))(*(_QWORD *)a5 + 24LL))(
                          a5,
                          v46,
                          v36[0],
                          retaddr);
        if ( v15 == v11 )
        {
          std::vector<std::vector<Microsoft::WRL::ComPtr<InputSite>>>::_Emplace_reallocate<std::vector<Microsoft::WRL::ComPtr<InputSite>>>(
            &v54,
            v15,
            v26);
          v11 = v55;
          v15 = (_QWORD *)*((_QWORD *)&v54 + 1);
        }
        else
        {
          *v15 = 0LL;
          v15[1] = 0LL;
          v15[2] = 0LL;
          *v15 = *v26;
          v15[1] = v26[1];
          v15[2] = v26[2];
          *v26 = 0LL;
          v26[1] = 0LL;
          v26[2] = 0LL;
          v15 += 3;
          *((_QWORD *)&v54 + 1) = v15;
        }
        if ( v46[0] )
        {
          std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<InputSite>>>(v46[0], v46[1]);
          std::_Deallocate<16,0>(v46[0], 8 * (((char *)v46[2] - (char *)v46[0]) >> 3));
        }
        v13 += 8;
      }
      while ( v13 != v14 );
      v12 = v47;
      v13 = (char *)v41;
    }
    if ( (_QWORD *)v54 == v15 )
    {
      *(_OWORD *)v38 = 0LL;
      v39 = 0LL;
      if ( v15 == v11 )
      {
        std::vector<std::vector<Microsoft::WRL::ComPtr<InputSite>>>::_Emplace_reallocate<std::vector<Microsoft::WRL::ComPtr<InputSite>>>(
          &v54,
          v15,
          v38);
        v11 = v55;
        v15 = (_QWORD *)*((_QWORD *)&v54 + 1);
        v12 = v47;
        v16 = v39;
      }
      else
      {
        *v15 = 0LL;
        v15[1] = 0LL;
        v15[2] = 0LL;
        *(_OWORD *)v38 = 0LL;
        v16 = 0LL;
        v15 += 3;
        *((_QWORD *)&v54 + 1) = v15;
      }
      v17 = (void *)v38[0];
      if ( v38[0] )
      {
        std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<InputSite>>>(v38[0], v38[1]);
        std::_Deallocate<16,0>(v17, 8 * ((v16 - (__int64)v17) >> 3));
      }
      v13 = (char *)v41;
    }
    if ( v13 )
    {
      v18 = v42;
      if ( v13 != v42 )
      {
        do
        {
          v27 = *(_QWORD *)v13;
          if ( *(_QWORD *)v13 )
          {
            *(_QWORD *)v13 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
          }
          v13 += 8;
        }
        while ( v13 != v18 );
        v13 = (char *)v41;
      }
      v19 = 8 * ((v43 - (__int64)v13) >> 3);
      v40 = v19;
      v36[0] = v13;
      if ( v19 >= 0x1000 )
      {
        std::_Adjust_manually_vector_aligned(v36, &v40);
        v19 = v40;
        v13 = (char *)v36[0];
      }
      operator delete(v13, v19);
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
    v38[0] = (__int64)&`InputTraceLogging::Instance'::`2'::wrapper;
    Context = &qword_180242A58;
    qword_180242A58 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
    qword_180242A70 = (__int64)&`InputTraceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_);
    LODWORD(v38[1]) = 0;
    wil::details::static_lazy<InputTraceLogging>::Completer::~Completer(v38);
  }
  v20 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v20 > 6u && (*(_BYTE *)(v20 + 16) & 1) != 0 && (*(_QWORD *)(v20 + 24) & 1LL) == *(_QWORD *)(v20 + 24) )
  {
    v38[0] = (__int64)v66;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
      v20,
      (__int64)v38);
  }
  return a1;
}
