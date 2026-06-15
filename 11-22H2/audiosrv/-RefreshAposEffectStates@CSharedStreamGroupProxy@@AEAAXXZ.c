/*
 * XREFs of ?RefreshAposEffectStates@CSharedStreamGroupProxy@@AEAAXXZ @ 0x18000B960
 * Callers:
 *     ?RuntimeClassInitialize@CSharedStreamGroupProxy@@QEAAJPEAUEndpointCharacteristicsDescriptor@@PEBUStreamGroupParams@@PEAUSTREAM_GROUP_DESCRIPTOR@@KPEAUICompositeSystemEffect@@@Z @ 0x18000D1C0 (-RuntimeClassInitialize@CSharedStreamGroupProxy@@QEAAJPEAUEndpointCharacteristicsDescriptor@@PEB.c)
 *     ?UpdatePMPOnStreamGroup@CSharedStreamGroupProxy@@UEAAJAEBVCProcessingModeParameters@@@Z @ 0x18010A830 (-UpdatePMPOnStreamGroup@CSharedStreamGroupProxy@@UEAAJAEBVCProcessingModeParameters@@@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180009588 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_any_array_ptr@UAudioEffectInternal@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@Uempty_deleter@3@@wil@@QEAAXXZ @ 0x18000973C (-reset@-$unique_any_array_ptr@UAudioEffectInternal@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFr.c)
 *     ?GetEffectsFromMFXInstantiatedForDiscovery@CSharedStreamGroupProxy@@UEAAJAEAV?$vector@UAUDIO_EFFECT@@V?$allocator@UAUDIO_EFFECT@@@std@@@std@@@Z @ 0x18000BB20 (-GetEffectsFromMFXInstantiatedForDiscovery@CSharedStreamGroupProxy@@UEAAJAEAV-$vector@UAUDIO_EFF.c)
 *     ??1?$com_ptr_t@UICrossProcessMemory@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180015DEC (--1-$com_ptr_t@UICrossProcessMemory@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@33@Z @ 0x180016538 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180024B78 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180047134 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall CSharedStreamGroupProxy::RefreshAposEffectStates(CSharedStreamGroupProxy *this)
{
  _DWORD *v2; // rcx
  int v3; // r8d
  int v4; // r9d
  int EffectsFromMFXInstantiatedForDiscovery; // eax
  __int64 *v6; // rsi
  __int64 v7; // r14
  __int64 (__fastcall *v8)(__int64, _QWORD *, __int64 *, __int64); // rdi
  __int64 v9; // rbx
  int v10; // eax
  __int64 v11; // rbx
  unsigned int v12; // r10d
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r9
  _QWORD *v16; // r8
  _QWORD *i; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rcx
  _BOOL8 v21; // r8
  __int64 v22; // rax
  _QWORD v23[2]; // [rsp+40h] [rbp-40h] BYREF
  __int128 v24; // [rsp+50h] [rbp-30h] BYREF
  __int128 v25; // [rsp+60h] [rbp-20h] BYREF
  __int64 v26; // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]
  __int64 v28; // [rsp+B0h] [rbp+30h] BYREF
  __int64 v29; // [rsp+B8h] [rbp+38h] BYREF
  __int64 *v30; // [rsp+C0h] [rbp+40h] BYREF

  v2 = *(_DWORD **)(wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                      this,
                      _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
                  + 8);
  if ( *v2 > 4u )
  {
    v28 = (__int64)(*((_QWORD *)this + 32) - *((_QWORD *)this + 31)) >> 3;
    v29 = (__int64)(*((_QWORD *)this + 35) - *((_QWORD *)this + 34)) >> 4;
    v30 = (__int64 *)(((unsigned __int64)this + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64));
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
      (_DWORD)v2,
      (unsigned int)&unk_18019319E,
      v3,
      v4,
      (__int64)&v30,
      (__int64)&v29,
      (__int64)&v28);
  }
  v25 = 0LL;
  v26 = 0LL;
  EffectsFromMFXInstantiatedForDiscovery = CSharedStreamGroupProxy::GetEffectsFromMFXInstantiatedForDiscovery(
                                             (char *)this + 8,
                                             &v25);
  if ( EffectsFromMFXInstantiatedForDiscovery < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x761,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)EffectsFromMFXInstantiatedForDiscovery);
  v6 = (__int64 *)*((_QWORD *)this + 31);
  v30 = (__int64 *)*((_QWORD *)this + 32);
  if ( v6 != v30 )
  {
    while ( 1 )
    {
      v7 = *v6;
      v29 = v7;
      if ( v7 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
      v23[0] = 0LL;
      v23[1] = 0LL;
      LODWORD(v28) = 0;
      v8 = *(__int64 (__fastcall **)(__int64, _QWORD *, __int64 *, __int64))(*(_QWORD *)v7 + 56LL);
      v9 = *((_QWORD *)this + 228);
      wil::unique_any_array_ptr<AudioEffectInternal,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter>::reset((__int64)v23);
      v10 = v8(v7, v23, &v28, v9);
      if ( v10 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x767,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
          (const char *)(unsigned int)v10);
      v11 = 0LL;
      v12 = v28;
      if ( (_DWORD)v28 )
        break;
LABEL_11:
      wil::unique_any_array_ptr<AudioEffectInternal,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter>::reset((__int64)v23);
      wil::com_ptr_t<ICrossProcessMemory,wil::err_returncode_policy>::~com_ptr_t<ICrossProcessMemory,wil::err_returncode_policy>(&v29);
      if ( ++v6 == v30 )
        goto LABEL_12;
    }
    v13 = 0LL;
    v14 = v23[0];
    while ( 1 )
    {
      v15 = 3 * v13;
      if ( *(_DWORD *)(v14 + 24 * v13 + 16) )
      {
        v16 = (_QWORD *)*((_QWORD *)this + 35);
        for ( i = (_QWORD *)*((_QWORD *)this + 34); i != v16; i += 2 )
        {
          v18 = *i - *(_QWORD *)(v14 + 8 * v15);
          if ( *i == *(_QWORD *)(v14 + 8 * v15) )
            v18 = i[1] - *(_QWORD *)(v14 + 8 * v15 + 8);
          if ( !v18 )
            break;
        }
        if ( i == v16 )
        {
          v19 = v25;
          if ( (_QWORD)v25 == *((_QWORD *)&v25 + 1) )
            goto LABEL_32;
          do
          {
            v20 = *(_QWORD *)v19 - *(_QWORD *)(v14 + 24 * v11);
            if ( *(_QWORD *)v19 == *(_QWORD *)(v14 + 24 * v11) )
              v20 = *(_QWORD *)(v19 + 8) - *(_QWORD *)(v14 + 24 * v11 + 8);
            if ( !v20 )
              break;
            v19 += 24LL;
          }
          while ( v19 != *((_QWORD *)&v25 + 1) );
          if ( v19 == *((_QWORD *)&v25 + 1) )
            goto LABEL_32;
          v21 = *(_DWORD *)(v19 + 20) == 1;
        }
        else
        {
          v21 = 0LL;
        }
        v22 = *(_QWORD *)v7;
        v24 = *(_OWORD *)(v14 + 24 * v11);
        (*(void (__fastcall **)(__int64, __int128 *, _BOOL8))(v22 + 64))(v7, &v24, v21);
        v14 = v23[0];
        v12 = v28;
      }
LABEL_32:
      v11 = (unsigned int)(v11 + 1);
      v13 = (unsigned int)v11;
      if ( (unsigned int)v11 >= v12 )
        goto LABEL_11;
    }
  }
LABEL_12:
  if ( (_QWORD)v25 )
    std::_Deallocate<16,0>(v25, 8 * ((v26 - (__int64)v25) >> 3));
}
