/*
 * XREFs of ?GetEffectsFromMFXInstantiatedForStreaming@CSharedStreamGroupProxy@@UEAAJAEAV?$vector@UAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@@Z @ 0x180107720
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$unique_any_array_ptr@UAudioEffectInternal@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@Uempty_deleter@3@@wil@@QEAAXXZ @ 0x18000973C (-reset@-$unique_any_array_ptr@UAudioEffectInternal@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFr.c)
 *     ?GetEffectsFromMFXInstantiatedForDiscovery@CSharedStreamGroupProxy@@UEAAJAEAV?$vector@UAUDIO_EFFECT@@V?$allocator@UAUDIO_EFFECT@@@std@@@std@@@Z @ 0x18000BB20 (-GetEffectsFromMFXInstantiatedForDiscovery@CSharedStreamGroupProxy@@UEAAJAEAV-$vector@UAUDIO_EFF.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U_tlgWrapperPtrSize@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU_tlgWrapperPtrSize@@4@Z @ 0x18000BC4C (--$Write@U-$_tlgWrapperByVal@$07@@U_tlgWrapperPtrSize@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPro.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180024B78 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180047134 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1800669B0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800CD4A0 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ??$_Emplace_reallocate@AEBUAudioEffectInternal@@@?$vector@UAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@QEAAPEAUAudioEffectInternal@@QEAU2@AEBU2@@Z @ 0x1800EA720 (--$_Emplace_reallocate@AEBUAudioEffectInternal@@@-$vector@UAudioEffectInternal@@V-$allocator@UAu.c)
 *     ?reset@?$unique_any_array_ptr@UAUDIO_SYSTEMEFFECT@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@Uempty_deleter@3@@wil@@QEAAXXZ @ 0x1800EE76C (-reset@-$unique_any_array_ptr@UAUDIO_SYSTEMEFFECT@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFre.c)
 *     ??$_Emplace_reallocate@UAudioEffectInternal@@@?$vector@UAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@QEAAPEAUAudioEffectInternal@@QEAU2@$$QEAU2@@Z @ 0x180103E44 (--$_Emplace_reallocate@UAudioEffectInternal@@@-$vector@UAudioEffectInternal@@V-$allocator@UAudio.c)
 */

// Hidden C++ exception states: #wind=3 #try_helpers=1
__int64 __fastcall CSharedStreamGroupProxy::GetEffectsFromMFXInstantiatedForStreaming(__int64 a1, __int64 a2)
{
  __int64 *v4; // r12
  __int64 *v5; // r13
  __int64 v6; // rsi
  __int64 (__fastcall *v7)(__int64, __int128 *, unsigned int *, __int64); // rdi
  __int64 v8; // rbx
  int v9; // eax
  unsigned int v10; // ebx
  void *v11; // rbx
  void *v12; // rdi
  HANDLE CurrentProcess; // rax
  const char *v14; // r9
  unsigned int LastError; // ebx
  __int64 v17; // rsi
  __int64 (__fastcall *v18)(__int64, __int128 *, unsigned int *, HANDLE); // rdi
  HANDLE v19; // rbx
  int v20; // eax
  unsigned int v21; // ebx
  __int64 v22; // rbx
  char *v23; // rdi
  __int64 v24; // r8
  __int64 v25; // rcx
  __int64 i; // rbx
  __int64 v27; // r8
  __int64 v28; // rdx
  int EffectsFromMFXInstantiatedForDiscovery; // eax
  unsigned int v30; // edi
  void *v31; // rdi
  __int128 *j; // rbx
  __int128 v33; // xmm0
  __int64 v34; // rdx
  _DWORD *v35; // r8
  __int64 v36; // r9
  unsigned int v37; // [rsp+40h] [rbp-78h] BYREF
  unsigned __int16 v38; // [rsp+44h] [rbp-74h] BYREF
  __int128 v39; // [rsp+48h] [rbp-70h] BYREF
  __int64 v40; // [rsp+58h] [rbp-60h]
  HANDLE TargetHandle; // [rsp+60h] [rbp-58h] BYREF
  __int128 v42; // [rsp+68h] [rbp-50h] BYREF
  __int64 v43; // [rsp+78h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]

  v4 = *(__int64 **)(a1 + 240);
  v5 = *(__int64 **)(a1 + 248);
  while ( v4 != v5 )
  {
    v42 = 0uLL;
    v37 = 0;
    v6 = *v4;
    v7 = *(__int64 (__fastcall **)(__int64, __int128 *, unsigned int *, __int64))(*(_QWORD *)*v4 + 56LL);
    v8 = *(_QWORD *)(a1 + 1816);
    wil::unique_any_array_ptr<AudioEffectInternal,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter>::reset((__int64)&v42);
    v9 = v7(v6, &v42, &v37, v8);
    v10 = v9;
    if ( v9 == -2147467263 )
    {
      TargetHandle = 0LL;
      v11 = *(void **)&g_ADGProcess[2].LockCount;
      v12 = *(void **)(a1 + 1816);
      CurrentProcess = GetCurrentProcess();
      if ( !DuplicateHandle(CurrentProcess, v12, v11, &TargetHandle, 0, 0, 2u) )
      {
        LastError = wil::details::in1diag3::Return_GetLastError(
                      retaddr,
                      (void *)0x6B3,
                      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
                      v14);
        wil::unique_any_array_ptr<AudioEffectInternal,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter>::reset((__int64)&v42);
        return LastError;
      }
      v39 = 0uLL;
      v17 = *v4;
      v18 = *(__int64 (__fastcall **)(__int64, __int128 *, unsigned int *, HANDLE))(*(_QWORD *)*v4 + 48LL);
      v19 = TargetHandle;
      wil::unique_any_array_ptr<AUDIO_SYSTEMEFFECT,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter>::reset((__int64)&v39);
      v20 = v18(v17, &v39, &v37, v19);
      v21 = v20;
      if ( v20 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x6B6,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
          (const char *)(unsigned int)v20);
        wil::unique_any_array_ptr<AUDIO_SYSTEMEFFECT,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter>::reset((__int64)&v39);
        wil::unique_any_array_ptr<AudioEffectInternal,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter>::reset((__int64)&v42);
        return v21;
      }
      v22 = v37;
      v23 = (char *)CoTaskMemAlloc(24LL * v37);
      wil::unique_any_array_ptr<AudioEffectInternal,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter>::reset((__int64)&v42);
      *(_QWORD *)&v42 = v23;
      *((_QWORD *)&v42 + 1) = v22;
      if ( !v23 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x6B9,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
          (const char *)0x8007000ELL);
        wil::unique_any_array_ptr<AUDIO_SYSTEMEFFECT,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter>::reset((__int64)&v39);
        wil::unique_any_array_ptr<AudioEffectInternal,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter>::reset((__int64)&v42);
        return 2147942414LL;
      }
      v24 = 0LL;
      while ( (unsigned int)v24 < v37 )
      {
        v25 = 3 * v24;
        *(_OWORD *)&v23[8 * v25] = *(_OWORD *)(v39 + 16LL * (unsigned int)v24);
        *(_DWORD *)(v42 + 8 * v25 + 16) = 0;
        *(_DWORD *)(v42 + 8 * v25 + 20) = 1;
        v24 = (unsigned int)(v24 + 1);
        v23 = (char *)v42;
      }
      wil::unique_any_array_ptr<AUDIO_SYSTEMEFFECT,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter>::reset((__int64)&v39);
    }
    else if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6C2,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
        (const char *)(unsigned int)v9);
      wil::unique_any_array_ptr<AudioEffectInternal,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter>::reset((__int64)&v42);
      return v10;
    }
    for ( i = 0LL; (unsigned int)i < v37; i = (unsigned int)(i + 1) )
    {
      v27 = v42 + 24 * i;
      v28 = *(_QWORD *)(a2 + 8);
      if ( v28 == *(_QWORD *)(a2 + 16) )
      {
        std::vector<AudioEffectInternal>::_Emplace_reallocate<AudioEffectInternal const &>(
          (const void **)a2,
          (_BYTE *)v28,
          v27);
      }
      else
      {
        *(_OWORD *)v28 = *(_OWORD *)v27;
        *(_QWORD *)(v28 + 16) = *(_QWORD *)(v27 + 16);
        *(_QWORD *)(a2 + 8) += 24LL;
      }
    }
    wil::unique_any_array_ptr<AudioEffectInternal,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter>::reset((__int64)&v42);
    ++v4;
  }
  if ( *(_QWORD *)(a1 + 240) == *(_QWORD *)(a1 + 248) )
  {
    v39 = 0LL;
    v40 = 0LL;
    EffectsFromMFXInstantiatedForDiscovery = CSharedStreamGroupProxy::GetEffectsFromMFXInstantiatedForDiscovery(
                                               a1,
                                               (__int64 *)&v39);
    v30 = EffectsFromMFXInstantiatedForDiscovery;
    if ( EffectsFromMFXInstantiatedForDiscovery < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6CE,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
        (const char *)(unsigned int)EffectsFromMFXInstantiatedForDiscovery);
      if ( (_QWORD)v39 )
        std::_Deallocate<16,0>((void *)v39, 8 * ((v40 - (__int64)v39) >> 3));
      return v30;
    }
    v31 = (void *)v39;
    for ( j = (__int128 *)v39; j != *((__int128 **)&v39 + 1); j = (__int128 *)((char *)j + 24) )
    {
      v33 = *j;
      v42 = *j;
      LODWORD(v43) = *((_DWORD *)j + 4);
      HIDWORD(v43) = *((_DWORD *)j + 5) == 1;
      v34 = *(_QWORD *)(a2 + 8);
      if ( v34 == *(_QWORD *)(a2 + 16) )
      {
        std::vector<AudioEffectInternal>::_Emplace_reallocate<AudioEffectInternal>(
          (const void **)a2,
          (_BYTE *)v34,
          (__int64)&v42);
      }
      else
      {
        *(_OWORD *)v34 = v33;
        *(_QWORD *)(v34 + 16) = v43;
        *(_QWORD *)(a2 + 8) += 24LL;
      }
    }
    if ( v31 )
      std::_Deallocate<16,0>(v31, 8 * ((v40 - (__int64)v31) >> 3));
  }
  v38 = -21845 * ((__int64)(*(_QWORD *)(a2 + 8) - *(_QWORD *)a2) >> 3);
  v35 = (_DWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                    a1,
                    _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)[1];
  if ( *v35 > 4u )
  {
    *(_QWORD *)&v39 = *(_QWORD *)a2;
    DWORD2(v39) = 24 * v38;
    *(_QWORD *)&v42 = &v38;
    DWORD2(v42) = 2;
    TargetHandle = (HANDLE)(a1 & ((unsigned __int128)-(__int128)(unsigned __int64)(a1 - 8) >> 64));
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperPtrSize,_tlgWrapperPtrSize>(
      (int)v35,
      (int)&unk_1801931FE,
      (__int64)v35,
      v36,
      (__int64)&TargetHandle,
      (__int64 *)&v42,
      (__int64 *)&v39);
  }
  return 0LL;
}
