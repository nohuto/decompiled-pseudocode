/*
 * XREFs of ?DeleteAppSubmixClient@CProcessSubmixManager@@UEAAXPEAPEAVCAppSubmixClient@@@Z @ 0x180107330
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180015934 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18002B390 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIAudioProcess@@@Z @ 0x1800D5EFC (--0-$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIAudioProcess@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x180106518 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@44AEBU?$_tlgWrapSz@G@@@Z @ 0x180106650 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U-$_tlgWrapSz@G@@@-$_tlgWriteTe.c)
 *     ??$_Destroy_range@V?$allocator@V?$unique_ptr@VCAppSubmixClient@@U?$default_delete@VCAppSubmixClient@@@std@@@std@@@std@@@std@@YAXPEAV?$unique_ptr@VCAppSubmixClient@@U?$default_delete@VCAppSubmixClient@@@std@@@0@QEAV10@AEAV?$allocator@V?$unique_ptr@VCAppSubmixClient@@U?$default_delete@VCAppSubmixClient@@@std@@@std@@@0@@Z @ 0x180106810 (--$_Destroy_range@V-$allocator@V-$unique_ptr@VCAppSubmixClient@@U-$default_delete@VCAppSubmixCli.c)
 *     std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_std::unique_ptr_CAppSubmixClient_std::default_delete_CAppSubmixClient___________lambda_d253d5d01bc5b20cb42527c72daa90e2___ @ 0x180106E90 (std--remove_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_std--unique_ptr_CAppSub.c)
 *     std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_std::unique_ptr_CAppSubmixClientContext_std::default_delete_CAppSubmixClientContext___________lambda_888dd1e87a5b5b5588e57c9952798e20___ @ 0x180106F40 (std--remove_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_std--uniqu_ea_180106F40.c)
 *     ?erase@?$vector@V?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@std@@V?$allocator@V?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@std@@@std@@@std@@@2@0@Z @ 0x1801084AC (-erase@-$vector@V-$unique_ptr@VCAppSubmixClientContext@@U-$default_delete@VCAppSubmixClientConte.c)
 */

void __fastcall CProcessSubmixManager::DeleteAppSubmixClient(
        CAppSubmixClientContext ***this,
        struct CAppSubmixClient **a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  __int64 **v4; // r8
  __int64 **v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rbx
  __int64 v9; // r8
  __int64 v10; // r9
  CAppSubmixClientContext *v11; // rdi
  __int64 **v12; // rbx
  __int64 **v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  CAppSubmixClientContext *v17; // [rsp+50h] [rbp-9h] BYREF
  CAppSubmixClientContext *v18; // [rsp+58h] [rbp-1h] BYREF
  __int64 v19; // [rsp+60h] [rbp+7h] BYREF
  __int64 **v20; // [rsp+68h] [rbp+Fh] BYREF
  _QWORD v21[2]; // [rsp+70h] [rbp+17h] BYREF
  struct _RTL_CRITICAL_SECTION *v22; // [rsp+80h] [rbp+27h] BYREF
  char v23; // [rsp+C0h] [rbp+67h] BYREF
  __int64 **v24; // [rsp+C8h] [rbp+6Fh] BYREF
  CAppSubmixClientContext **v25; // [rsp+D0h] [rbp+77h] BYREF
  int v26; // [rsp+D8h] [rbp+7Fh] BYREF

  v24 = (__int64 **)a2;
  v2 = (struct _RTL_CRITICAL_SECTION *)(this + 2);
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 2));
  v22 = v2;
  v18 = (CAppSubmixClientContext *)(*v24)[1];
  wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>::com_ptr_t<IAudioProcess,wil::err_returncode_policy>(
    &v19,
    **v24);
  v23 = 0;
  v21[0] = &v24;
  v4 = (__int64 **)*((_QWORD *)v18 + 12);
  v5 = (__int64 **)*((_QWORD *)v18 + 11);
  v21[1] = &v23;
  std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_std::unique_ptr_CAppSubmixClient_std::default_delete_CAppSubmixClient___________lambda_d253d5d01bc5b20cb42527c72daa90e2___(
    &v20,
    v5,
    v4,
    (__int64)v21);
  if ( v23 )
  {
    v7 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
           v6,
           _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)[1];
    if ( *(_DWORD *)v7 > 4u
      && (*(_DWORD *)(v7 + 16) & 0x200LL) != 0
      && (*(_QWORD *)(v7 + 24) & 0x200LL) == *(_QWORD *)(v7 + 24) )
    {
      v8 = v19;
      LODWORD(v25) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v19 + 48LL))(v19);
      v26 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 40LL))(v8);
      v17 = v18;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v7,
        byte_18018B13D,
        v9,
        v10,
        (__int64)&v17,
        (__int64)&v26,
        (__int64)&v25);
    }
  }
  v11 = v18;
  v12 = v20;
  v13 = (__int64 **)*((_QWORD *)v18 + 12);
  if ( v20 != v13 )
  {
    std::_Destroy_range<std::allocator<std::unique_ptr<CAppSubmixClient>>>(v20, v13);
    *((_QWORD *)v11 + 12) = v12;
    v11 = v18;
  }
  if ( ((*((_QWORD *)v11 + 12) - *((_QWORD *)v11 + 11)) & 0xFFFFFFFFFFFFFFF8uLL) == 0 )
  {
    v14 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
            v6,
            _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)[1];
    if ( *(_DWORD *)v14 > 4u
      && (*(_DWORD *)(v14 + 16) & 0x200LL) != 0
      && (*(_QWORD *)(v14 + 24) & 0x200LL) == *(_QWORD *)(v14 + 24) )
    {
      v20 = *(__int64 ***)v18;
      LODWORD(v25) = *((_DWORD *)v18 + 4);
      v26 = *((_DWORD *)v18 + 3);
      LODWORD(v17) = *((_DWORD *)v18 + 2);
      v21[0] = v18;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
        v14,
        byte_18018B0CC,
        v15,
        v16,
        (__int64)v21,
        (__int64)&v17,
        (__int64)&v26,
        (__int64)&v25,
        (void **)&v20);
    }
    std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_std::unique_ptr_CAppSubmixClientContext_std::default_delete_CAppSubmixClientContext___________lambda_888dd1e87a5b5b5588e57c9952798e20___(
      &v25,
      this[7],
      this[8],
      &v18);
    std::vector<std::unique_ptr<CAppSubmixClientContext>>::erase(this + 7, &v25, v25, this[8]);
  }
  *v24 = 0LL;
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v19);
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v22);
}
