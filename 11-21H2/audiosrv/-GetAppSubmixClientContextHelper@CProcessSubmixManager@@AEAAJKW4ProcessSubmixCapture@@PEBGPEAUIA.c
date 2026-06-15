/*
 * XREFs of ?GetAppSubmixClientContextHelper@CProcessSubmixManager@@AEAAJKW4ProcessSubmixCapture@@PEBGPEAUIAudioProcess@@PEAPEAVCAppSubmixClient@@@Z @ 0x180107784
 * Callers:
 *     ?GetAppSubmixClientContext@CProcessSubmixManager@@UEAAJKW4ProcessSubmixCapture@@PEAUIAudioProcess@@PEAPEAVCAppSubmixClient@@@Z @ 0x1801076B0 (-GetAppSubmixClientContext@CProcessSubmixManager@@UEAAJKW4ProcessSubmixCapture@@PEAUIAudioProces.c)
 *     ?GetAppSubmixClientContext@CProcessSubmixManager@@UEAAJPEBGPEAUIAudioProcess@@PEAPEAVCAppSubmixClient@@@Z @ 0x180107720 (-GetAppSubmixClientContext@CProcessSubmixManager@@UEAAJPEBGPEAUIAudioProcess@@PEAPEAVCAppSubmixC.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001063C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180015934 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18002B390 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18004A9F0 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z @ 0x18004AA38 (-Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z.c)
 *     ?StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x18004AA90 (-StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z.c)
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x18005BAA8 (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x18005EFB8 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800C5F8C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@PEAX@std@@@std@@@?$_List_node@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@PEAX@std@@@1@PEAU01@@Z @ 0x1800FB58C (--$_Free_non_head@V-$allocator@U-$_List_node@V-$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_.c)
 *     ?GetFilteredSubmixes@DeviceGraphStore@@YAJKW4ProcessSubmixCapture@@KAEAV?$unordered_set@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@U?$hash@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@U?$equal_to@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@4@V?$allocator@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@4@@std@@@Z @ 0x1800FCAE8 (-GetFilteredSubmixes@DeviceGraphStore@@YAJKW4ProcessSubmixCapture@@KAEAV-$unordered_set@V-$com_p.c)
 *     ?GetSubmixesForApplication@DeviceGraphStore@@YAJPEBGKAEAV?$unordered_set@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@U?$hash@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@U?$equal_to@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@4@V?$allocator@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@4@@std@@@Z @ 0x1800FD1D8 (-GetSubmixesForApplication@DeviceGraphStore@@YAJPEBGKAEAV-$unordered_set@V-$com_ptr_t@UIProcessS.c)
 *     ?clear@?$_Hash@V?$_Uset_traits@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@U?$hash@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@U?$equal_to@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@4@@std@@V?$allocator@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@4@$0A@@std@@@std@@QEAAXXZ @ 0x1800FD994 (-clear@-$_Hash@V-$_Uset_traits@V-$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@w.c)
 *     ?DisconnectOffloadStreams@CAudioResourceManager@@QEAAJ$$QEAV?$function@$$A6A_NPEAUIAudioStreamInfo@@@Z@std@@@Z @ 0x180100034 (-DisconnectOffloadStreams@CAudioResourceManager@@QEAAJ$$QEAV-$function@$$A6A_NPEAUIAudioStreamIn.c)
 *     _lambda_a1b7f4c1e370eee7ceb304e65e8c3eda_::operator()_std::unique_ptr_CAppSubmixClientContext_std::default_delete_CAppSubmixClientContext____const__ @ 0x180106448 (_lambda_a1b7f4c1e370eee7ceb304e65e8c3eda_--operator()_std--unique_ptr_CAppSubmixClientContext_st.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x180106518 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$01@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@44AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$01@@@Z @ 0x18010672C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U-$_tlgWrapSz@G@@U-$_tlgWrapper.c)
 *     ??$_Emplace_reallocate@V?$unique_ptr@VCAppSubmixClient@@U?$default_delete@VCAppSubmixClient@@@std@@@std@@@?$vector@V?$unique_ptr@VCAppSubmixClient@@U?$default_delete@VCAppSubmixClient@@@std@@@std@@V?$allocator@V?$unique_ptr@VCAppSubmixClient@@U?$default_delete@VCAppSubmixClient@@@std@@@std@@@2@@std@@QEAAPEAV?$unique_ptr@VCAppSubmixClient@@U?$default_delete@VCAppSubmixClient@@@std@@@1@QEAV21@$$QEAV21@@Z @ 0x1801068C0 (--$_Emplace_reallocate@V-$unique_ptr@VCAppSubmixClient@@U-$default_delete@VCAppSubmixClient@@@st.c)
 *     ??$_Emplace_reallocate@V?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@std@@@?$vector@V?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@std@@V?$allocator@V?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@std@@@2@@std@@QEAAPEAV?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@1@QEAV21@$$QEAV21@@Z @ 0x180106A10 (--$_Emplace_reallocate@V-$unique_ptr@VCAppSubmixClientContext@@U-$default_delete@VCAppSubmixClie.c)
 *     ??$emplace@AEBV?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@?$_Hash@V?$_Uset_traits@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@U?$hash@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@U?$equal_to@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@4@@std@@V?$allocator@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@_N@1@AEBV?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x180106BE0 (--$emplace@AEBV-$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@-$_Hash@V-$_.c)
 *     ??$make_unique@VCAppSubmixClient@@AEAPEAUIAudioProcess@@PEAVCAppSubmixClientContext@@$0A@@std@@YA?AV?$unique_ptr@VCAppSubmixClient@@U?$default_delete@VCAppSubmixClient@@@std@@@0@AEAPEAUIAudioProcess@@$$QEAPEAVCAppSubmixClientContext@@@Z @ 0x180106D10 (--$make_unique@VCAppSubmixClient@@AEAPEAUIAudioProcess@@PEAVCAppSubmixClientContext@@$0A@@std@@Y.c)
 *     ??$make_unique@VCAppSubmixClientContext@@$$V$0A@@std@@YA?AV?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@0@XZ @ 0x180106D94 (--$make_unique@VCAppSubmixClientContext@@$$V$0A@@std@@YA-AV-$unique_ptr@VCAppSubmixClientContext.c)
 *     ??0?$unordered_set@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@U?$hash@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@U?$equal_to@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@4@V?$allocator@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@4@@std@@QEAA@XZ @ 0x180107070 (--0-$unordered_set@V-$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@U-$hash@.c)
 *     ??1CAppSubmixClientContext@@QEAA@XZ @ 0x18010714C (--1CAppSubmixClientContext@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=6 #try_helpers=1
__int64 __fastcall CProcessSubmixManager::GetAppSubmixClientContextHelper(
        __int64 a1,
        int a2,
        int a3,
        unsigned __int16 *a4,
        __int64 a5,
        _QWORD *a6)
{
  struct _RTL_CRITICAL_SECTION *v7; // rbx
  LPCWCH **v8; // rbx
  LPCWCH **i; // rsi
  void **v10; // rsi
  void *v11; // rcx
  unsigned __int16 *v12; // r12
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // r15
  int v15; // ebx
  int v16; // eax
  int SubmixesForApplication; // eax
  __int64 v18; // rcx
  void **v19; // rdi
  int FilteredSubmixes; // eax
  __int64 v21; // rcx
  void **v22; // rdi
  __int64 v23; // rcx
  _QWORD *v24; // rdi
  _QWORD *j; // rbx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 *v28; // r15
  __int64 *v29; // rcx
  __int64 **v30; // rdx
  __int64 *v31; // rbx
  __int64 *v32; // rcx
  void ***v33; // rdx
  void **v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rsi
  __int64 v37; // r8
  __int64 v38; // r9
  int v39; // eax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 *v42; // rbx
  void **v43; // rdi
  void **v45; // r15
  __int64 *v46; // rcx
  WCHAR *v47; // rdx
  __int64 v48; // r14
  __int64 v49; // r8
  __int64 v50; // r9
  void **v51; // [rsp+50h] [rbp-128h] BYREF
  int v52; // [rsp+58h] [rbp-120h] BYREF
  int v53; // [rsp+5Ch] [rbp-11Ch] BYREF
  __int64 v54; // [rsp+60h] [rbp-118h] BYREF
  __int16 v55; // [rsp+68h] [rbp-110h] BYREF
  int v56; // [rsp+70h] [rbp-108h] BYREF
  int v57; // [rsp+78h] [rbp-100h] BYREF
  __int64 *v58; // [rsp+80h] [rbp-F8h] BYREF
  struct _RTL_CRITICAL_SECTION *v59; // [rsp+88h] [rbp-F0h] BYREF
  unsigned __int16 *v60; // [rsp+90h] [rbp-E8h] BYREF
  __int128 v61; // [rsp+A0h] [rbp-D8h] BYREF
  __int128 v62; // [rsp+B0h] [rbp-C8h]
  __int128 v63; // [rsp+C0h] [rbp-B8h]
  void *v64; // [rsp+E0h] [rbp-98h] BYREF
  int v65[4]; // [rsp+F0h] [rbp-88h] BYREF
  __int128 v66; // [rsp+100h] [rbp-78h]
  int *v67; // [rsp+128h] [rbp-50h]
  wil::details::in1diag3 *retaddr; // [rsp+178h] [rbp+0h]

  v57 = a2;
  v56 = a3;
  v60 = a4;
  v54 = a5;
  v7 = (struct _RTL_CRITICAL_SECTION *)(a1 + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 16));
  v59 = v7;
  *(_QWORD *)v65 = &v56;
  *(_QWORD *)&v65[2] = &v60;
  *(_QWORD *)&v66 = &v54;
  *((_QWORD *)&v66 + 1) = &v57;
  v61 = *(_OWORD *)v65;
  v62 = v66;
  v8 = *(LPCWCH ***)(a1 + 64);
  for ( i = *(LPCWCH ***)(a1 + 56);
        i != v8
     && !lambda_a1b7f4c1e370eee7ceb304e65e8c3eda_::operator()_std::unique_ptr_CAppSubmixClientContext_std::default_delete_CAppSubmixClientContext____const__(
           (__int64)&v61,
           i);
        ++i )
  {
    ;
  }
  if ( i != *(LPCWCH ***)(a1 + 64) )
  {
    *(_QWORD *)v65 = *i;
    std::make_unique<CAppSubmixClient,IAudioProcess * &,CAppSubmixClientContext *,0>(&v51, &v54, (__int64 *)v65);
    v45 = v51;
    v46 = (__int64 *)(*i + 11);
    v47 = (WCHAR *)(*i)[12];
    if ( v47 == (*i)[13] )
    {
      std::vector<std::unique_ptr<CAppSubmixClient>>::_Emplace_reallocate<std::unique_ptr<CAppSubmixClient>>(
        v46,
        (__int64)v47,
        (__int64 **)&v51);
      v42 = (__int64 *)v51;
    }
    else
    {
      v42 = 0LL;
      v51 = 0LL;
      *(_QWORD *)v47 = v45;
      v46[1] += 8LL;
    }
    v48 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
            (__int64)v46,
            _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)[1];
    if ( *(_DWORD *)v48 > 4u
      && (*(_DWORD *)(v48 + 16) & 0x200LL) != 0
      && (*(_QWORD *)(v48 + 24) & 0x200LL) == *(_QWORD *)(v48 + 24) )
    {
      v52 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v54 + 48LL))(v54);
      v53 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v54 + 40LL))(v54);
      *(_QWORD *)v65 = *i;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v48,
        byte_18018B19D,
        v49,
        v50,
        (__int64)v65,
        (__int64)&v53,
        (__int64)&v52);
    }
    *a6 = v45;
    if ( !v42 )
      goto LABEL_59;
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v42);
    goto LABEL_58;
  }
  std::make_unique<CAppSubmixClientContext,,0>(&v51);
  v10 = v51;
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    v51,
    0LL);
  v12 = v60;
  v13 = -1LL;
  do
    ++v13;
  while ( v60[v13] );
  *v10 = 0LL;
  v14 = v13 + 1;
  if ( v13 + 1 < v13 || !is_mul_ok(v14, 2uLL) )
  {
    v15 = -2147024362;
LABEL_46:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x196,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\applicationsubmix.cpp",
      (const char *)(unsigned int)v15);
    v43 = v51;
    if ( v51 )
    {
      CAppSubmixClientContext::~CAppSubmixClientContext((CAppSubmixClientContext *)v51);
      operator delete(v43);
    }
    goto LABEL_48;
  }
  v15 = CTCoAllocPolicy::Alloc(v11, (v14 * (unsigned __int128)2uLL) >> 64, 2 * v14, v10);
  if ( v15 < 0 )
    goto LABEL_46;
  StringCchCopyNExW((char *)*v10, v13 + 1, v12, v13);
  *((_DWORD *)v51 + 2) = v57;
  *((_DWORD *)v51 + 3) = v56;
  v16 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v54 + 48LL))(v54);
  *((_DWORD *)v51 + 4) = v16;
  std::unordered_set<wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>>::unordered_set<wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>>((__int64)&v61);
  if ( v56 == 4 )
  {
    SubmixesForApplication = DeviceGraphStore::GetSubmixesForApplication(
                               (__int64)v60,
                               *((_DWORD *)v51 + 4),
                               (__int64)&v61);
    v15 = SubmixesForApplication;
    if ( SubmixesForApplication < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x19E,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\applicationsubmix.cpp",
        (const char *)(unsigned int)SubmixesForApplication);
      std::_Deallocate<16,0>(*((void **)&v62 + 1), (v63 - *((_QWORD *)&v62 + 1)) & 0xFFFFFFFFFFFFFFF8uLL);
      *((_QWORD *)&v62 + 1) = 0LL;
      v63 = 0LL;
      std::_List_node<wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>,void *>::_Free_non_head<std::allocator<std::_List_node<wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>,void *>>>(
        v18,
        *((_QWORD ***)&v61 + 1));
      std::_Deallocate<16,0>(*((void **)&v61 + 1), 0x18uLL);
      v19 = v51;
      if ( v51 )
      {
        CAppSubmixClientContext::~CAppSubmixClientContext((CAppSubmixClientContext *)v51);
        operator delete(v19);
      }
LABEL_48:
      wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v59);
      return (unsigned int)v15;
    }
  }
  else
  {
    FilteredSubmixes = DeviceGraphStore::GetFilteredSubmixes(v57, v56, *((_DWORD *)v51 + 4), (__int64)&v61);
    v15 = FilteredSubmixes;
    if ( FilteredSubmixes < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1A2,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\applicationsubmix.cpp",
        (const char *)(unsigned int)FilteredSubmixes);
      std::_Deallocate<16,0>(*((void **)&v62 + 1), (v63 - *((_QWORD *)&v62 + 1)) & 0xFFFFFFFFFFFFFFF8uLL);
      *((_QWORD *)&v62 + 1) = 0LL;
      v63 = 0LL;
      std::_List_node<wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>,void *>::_Free_non_head<std::allocator<std::_List_node<wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>,void *>>>(
        v21,
        *((_QWORD ***)&v61 + 1));
      std::_Deallocate<16,0>(*((void **)&v61 + 1), 0x18uLL);
      v22 = v51;
      if ( v51 )
      {
        CAppSubmixClientContext::~CAppSubmixClientContext((CAppSubmixClientContext *)v51);
        operator delete(v22);
      }
      goto LABEL_48;
    }
  }
  std::_Hash<std::_Uset_traits<wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>,std::_Uhash_compare<wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>,std::hash<wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>>,std::equal_to<wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>>>,std::allocator<wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>>,0>>::clear((unsigned __int64 *)v51 + 3);
  v24 = (_QWORD *)*((_QWORD *)&v61 + 1);
  for ( j = (_QWORD *)**((_QWORD **)&v61 + 1); j != v24; j = (_QWORD *)*j )
  {
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)j[2] + 120LL))(j[2]) )
      std::_Hash<std::_Uset_traits<wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>,std::_Uhash_compare<wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>,std::hash<wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>>,std::equal_to<wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>>>,std::allocator<wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>>,0>>::emplace<wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy> const &>(
        (float *)v51 + 6,
        (__int64)v65,
        j + 2);
  }
  v26 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
          v23,
          _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)[1];
  if ( *(_DWORD *)v26 > 4u
    && (*(_DWORD *)(v26 + 16) & 0x200LL) != 0
    && (*(_QWORD *)(v26 + 24) & 0x200LL) == *(_QWORD *)(v26 + 24) )
  {
    v55 = *((_WORD *)v51 + 20);
    v64 = *v51;
    LODWORD(v58) = *((_DWORD *)v51 + 4);
    v53 = *((_DWORD *)v51 + 3);
    v52 = *((_DWORD *)v51 + 2);
    *(_QWORD *)v65 = v51;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>>(
      v26,
      byte_18018B1F9,
      v26,
      v27,
      (__int64)v65,
      (__int64)&v52,
      (__int64)&v53,
      (__int64)&v58,
      &v64,
      (__int64)&v55);
  }
  *(_QWORD *)v65 = v51;
  std::make_unique<CAppSubmixClient,IAudioProcess * &,CAppSubmixClientContext *,0>(&v58, &v54, (__int64 *)v65);
  v28 = v58;
  v29 = (__int64 *)(v51 + 11);
  v30 = (__int64 **)v51[12];
  if ( v30 == v51[13] )
  {
    std::vector<std::unique_ptr<CAppSubmixClient>>::_Emplace_reallocate<std::unique_ptr<CAppSubmixClient>>(
      v29,
      (__int64)v30,
      &v58);
    v31 = v58;
  }
  else
  {
    v31 = 0LL;
    v58 = 0LL;
    *v30 = v28;
    v29[1] += 8LL;
  }
  v32 = (__int64 *)(a1 + 56);
  v33 = *(void ****)(a1 + 64);
  if ( v33 == *(void ****)(a1 + 72) )
  {
    std::vector<std::unique_ptr<CAppSubmixClientContext>>::_Emplace_reallocate<std::unique_ptr<CAppSubmixClientContext>>(
      v32,
      (__int64)v33,
      (CAppSubmixClientContext **)&v51);
  }
  else
  {
    v34 = v51;
    v51 = 0LL;
    *v33 = v34;
    *(_QWORD *)(a1 + 64) += 8LL;
  }
  v36 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
          (__int64)v32,
          _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)[1];
  if ( *(_DWORD *)v36 > 4u
    && (*(_DWORD *)(v36 + 16) & 0x200LL) != 0
    && (*(_QWORD *)(v36 + 24) & 0x200LL) == *(_QWORD *)(v36 + 24) )
  {
    v52 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v54 + 48LL))(v54);
    v53 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v54 + 40LL))(v54);
    *(_QWORD *)v65 = v51;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v36,
      byte_18018B19D,
      v37,
      v38,
      (__int64)v65,
      (__int64)&v53,
      (__int64)&v52);
  }
  *(_QWORD *)v65 = off_180177810;
  *(_QWORD *)&v65[2] = a1;
  v67 = v65;
  v39 = CAudioResourceManager::DisconnectOffloadStreams(v35, (__int64)v65);
  if ( v39 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1D3,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\applicationsubmix.cpp",
      (const char *)(unsigned int)v39);
  std::_Func_class<void,>::_Tidy((__int64)v65, v40);
  *a6 = v28;
  if ( v31 )
  {
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v31);
    operator delete(v31);
  }
  std::_Deallocate<16,0>(*((void **)&v62 + 1), (v63 - *((_QWORD *)&v62 + 1)) & 0xFFFFFFFFFFFFFFF8uLL);
  *((_QWORD *)&v62 + 1) = 0LL;
  v63 = 0LL;
  std::_List_node<wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>,void *>::_Free_non_head<std::allocator<std::_List_node<wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>,void *>>>(
    v41,
    *((_QWORD ***)&v61 + 1));
  std::_Deallocate<16,0>(*((void **)&v61 + 1), 0x18uLL);
  v42 = (__int64 *)v51;
  if ( v51 )
  {
    CAppSubmixClientContext::~CAppSubmixClientContext((CAppSubmixClientContext *)v51);
LABEL_58:
    operator delete(v42);
  }
LABEL_59:
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v59);
  return 0LL;
}
