/*
 * XREFs of ?DeleteAppSubmixClient@CProcessSubmixManager@@UEAAXPEAPEAVCAppSubmixClient@@@Z @ 0x1800D16F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIAudioProcess@@@Z @ 0x18000B48C (--0-$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIAudioProcess@@@Z.c)
 *     _tlgKeywordOn @ 0x180020530 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180024B78 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1800D051C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@44AEBU?$_tlgWrapSz@G@@@Z @ 0x1800D0654 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U-$_tlgWrapSz@G@@@-$_tlgWriteTe.c)
 *     ??$_Destroy_range@V?$allocator@V?$unique_ptr@VCAppSubmixClient@@U?$default_delete@VCAppSubmixClient@@@std@@@std@@@std@@@std@@YAXPEAV?$unique_ptr@VCAppSubmixClient@@U?$default_delete@VCAppSubmixClient@@@std@@@0@QEAV10@AEAV?$allocator@V?$unique_ptr@VCAppSubmixClient@@U?$default_delete@VCAppSubmixClient@@@std@@@std@@@0@@Z @ 0x1800D085C (--$_Destroy_range@V-$allocator@V-$unique_ptr@VCAppSubmixClient@@U-$default_delete@VCAppSubmixCli.c)
 *     std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_std::unique_ptr_CAppSubmixClient_std::default_delete_CAppSubmixClient___________lambda_d253d5d01bc5b20cb42527c72daa90e2___ @ 0x1800D10E0 (std--remove_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_std--unique_ptr_CAppSub.c)
 *     std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_std::unique_ptr_CAppSubmixClientContext_std::default_delete_CAppSubmixClientContext___________lambda_888dd1e87a5b5b5588e57c9952798e20___ @ 0x1800D1190 (std--remove_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_std--uniqu_ea_1800D1190.c)
 *     ?erase@?$vector@V?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@std@@V?$allocator@V?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@std@@@std@@@std@@@2@0@Z @ 0x1800D3450 (-erase@-$vector@V-$unique_ptr@VCAppSubmixClientContext@@U-$default_delete@VCAppSubmixClientConte.c)
 */

void __fastcall CProcessSubmixManager::DeleteAppSubmixClient(
        CAppSubmixClientContext ***this,
        struct CAppSubmixClient **a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // r14
  __int64 **v4; // r8
  __int64 **v5; // rdx
  __int64 v6; // rcx
  __int64 *v7; // rax
  _DWORD *v8; // rdi
  __int64 v9; // rbx
  __int64 v10; // r8
  __int64 v11; // r9
  CAppSubmixClientContext *v12; // rdi
  __int64 **v13; // rbx
  __int64 **v14; // rdx
  _DWORD *v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  CAppSubmixClientContext *v19; // [rsp+50h] [rbp-30h] BYREF
  CAppSubmixClientContext *v20; // [rsp+58h] [rbp-28h] BYREF
  __int64 v21; // [rsp+60h] [rbp-20h] BYREF
  __int64 **v22; // [rsp+68h] [rbp-18h] BYREF
  _QWORD v23[2]; // [rsp+70h] [rbp-10h] BYREF
  char v24; // [rsp+B0h] [rbp+30h] BYREF
  __int64 **v25; // [rsp+B8h] [rbp+38h] BYREF
  CAppSubmixClientContext **v26; // [rsp+C0h] [rbp+40h] BYREF
  int v27; // [rsp+C8h] [rbp+48h] BYREF

  v25 = (__int64 **)a2;
  v2 = (struct _RTL_CRITICAL_SECTION *)(this + 2);
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 2));
  v20 = (CAppSubmixClientContext *)(*v25)[1];
  wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>::com_ptr_t<IAudioProcess,wil::err_returncode_policy>(
    &v21,
    **v25);
  v24 = 0;
  v23[0] = &v25;
  v4 = (__int64 **)*((_QWORD *)v20 + 12);
  v5 = (__int64 **)*((_QWORD *)v20 + 11);
  v23[1] = &v24;
  std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_std::unique_ptr_CAppSubmixClient_std::default_delete_CAppSubmixClient___________lambda_d253d5d01bc5b20cb42527c72daa90e2___(
    &v22,
    v5,
    v4,
    (__int64)v23);
  if ( v24 )
  {
    v7 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
           v6,
           _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    v8 = (_DWORD *)v7[1];
    if ( *v8 > 4u )
    {
      if ( tlgKeywordOn(v7[1], 512LL) )
      {
        v9 = v21;
        LODWORD(v26) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v21 + 48LL))(v21);
        v27 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 40LL))(v9);
        v19 = v20;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          (__int64)v8,
          byte_18018F496,
          v10,
          v11,
          (__int64)&v19,
          (__int64)&v27,
          (__int64)&v26);
      }
    }
  }
  v12 = v20;
  v13 = v22;
  v14 = (__int64 **)*((_QWORD *)v20 + 12);
  if ( v22 != v14 )
  {
    std::_Destroy_range<std::allocator<std::unique_ptr<CAppSubmixClient>>>(v22, v14);
    *((_QWORD *)v12 + 12) = v13;
    v12 = v20;
  }
  if ( ((*((_QWORD *)v12 + 12) - *((_QWORD *)v12 + 11)) & 0xFFFFFFFFFFFFFFF8uLL) == 0 )
  {
    v15 = (_DWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                      v6,
                      _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)[1];
    if ( *v15 > 4u && tlgKeywordOn((__int64)v15, 512LL) )
    {
      v22 = *(__int64 ***)v20;
      LODWORD(v26) = *((_DWORD *)v20 + 4);
      v27 = *((_DWORD *)v20 + 3);
      LODWORD(v19) = *((_DWORD *)v20 + 2);
      v23[0] = v20;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
        v16,
        byte_18018F425,
        v17,
        v18,
        (__int64)v23,
        (__int64)&v19,
        (__int64)&v27,
        (__int64)&v26,
        (const WCHAR **)&v22);
    }
    std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_std::unique_ptr_CAppSubmixClientContext_std::default_delete_CAppSubmixClientContext___________lambda_888dd1e87a5b5b5588e57c9952798e20___(
      &v26,
      this[7],
      this[8],
      &v20);
    std::vector<std::unique_ptr<CAppSubmixClientContext>>::erase(this + 7, &v26, v26, this[8]);
  }
  *v25 = 0LL;
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v21);
  if ( v2 )
    LeaveCriticalSection(v2);
}
