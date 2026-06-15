/*
 * XREFs of ?GetEffectsFromMFXInstantiatedForDiscovery@CSharedStreamGroupProxy@@UEAAJAEAV?$vector@UAUDIO_EFFECT@@V?$allocator@UAUDIO_EFFECT@@@std@@@std@@@Z @ 0x18000BB20
 * Callers:
 *     ?RefreshAposEffectStates@CSharedStreamGroupProxy@@AEAAXXZ @ 0x18000B960 (-RefreshAposEffectStates@CSharedStreamGroupProxy@@AEAAXXZ.c)
 *     ?CompareEffectTogglesProcessingModeParameters@CSharedStreamGroupProxy@@IEAAJAEBVCProcessingModeParameters@@PEAW4PMP_MATCH_TYPE@@@Z @ 0x180105A10 (-CompareEffectTogglesProcessingModeParameters@CSharedStreamGroupProxy@@IEAAJAEBVCProcessingModeP.c)
 *     ?GetEffectsFromMFXInstantiatedForStreaming@CSharedStreamGroupProxy@@UEAAJAEAV?$vector@UAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@@Z @ 0x180107720 (-GetEffectsFromMFXInstantiatedForStreaming@CSharedStreamGroupProxy@@UEAAJAEAV-$vector@UAudioEffe.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U_tlgWrapperPtrSize@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU_tlgWrapperPtrSize@@4@Z @ 0x18000BC4C (--$Write@U-$_tlgWrapperByVal@$07@@U_tlgWrapperPtrSize@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPro.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180024B78 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     __security_check_cookie @ 0x1800669B0 (__security_check_cookie.c)
 *     wil::init_once__lambda_be556cb3b146703253ec008872e87b88___ @ 0x1800730B8 (wil--init_once__lambda_be556cb3b146703253ec008872e87b88___.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?reset@?$unique_any_array_ptr@UAUDIO_SYSTEMEFFECT@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@Uempty_deleter@3@@wil@@QEAAXXZ @ 0x1800EE76C (-reset@-$unique_any_array_ptr@UAUDIO_SYSTEMEFFECT@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFre.c)
 *     ??$_Emplace_reallocate@UAUDIO_EFFECT@@@?$vector@UAUDIO_EFFECT@@V?$allocator@UAUDIO_EFFECT@@@std@@@std@@QEAAPEAUAUDIO_EFFECT@@QEAU2@$$QEAU2@@Z @ 0x180103CC8 (--$_Emplace_reallocate@UAUDIO_EFFECT@@@-$vector@UAUDIO_EFFECT@@V-$allocator@UAUDIO_EFFECT@@@std@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSharedStreamGroupProxy::GetEffectsFromMFXInstantiatedForDiscovery(__int64 a1, __int64 *a2)
{
  __int64 v4; // r12
  __int64 *v5; // r15
  __int64 *v6; // r13
  _DWORD *v7; // r8
  int v8; // r9d
  __int64 v10; // rdi
  int (__fastcall *v11)(__int64, __int64 *, __int64 *, _QWORD); // rbx
  __int64 v12; // rbx
  unsigned int i; // eax
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rax
  BOOL v17; // eax
  __int128 v18; // xmm0
  unsigned __int16 v19; // [rsp+40h] [rbp-68h] BYREF
  __int64 v20; // [rsp+48h] [rbp-60h] BYREF
  __int64 v21; // [rsp+50h] [rbp-58h] BYREF
  __int64 v22; // [rsp+58h] [rbp-50h]
  __int128 v23; // [rsp+60h] [rbp-48h] BYREF
  __int64 v24; // [rsp+70h] [rbp-38h]

  v4 = a1 - 8;
  wil::init_once__lambda_be556cb3b146703253ec008872e87b88___(a1 + 1808, (CSharedStreamGroupProxy *)(a1 - 8));
  v5 = *(__int64 **)(a1 + 1776);
  v6 = *(__int64 **)(a1 + 1784);
  while ( v5 != v6 )
  {
    v21 = 0LL;
    v22 = 0LL;
    LODWORD(v20) = 0;
    v10 = *v5;
    v11 = *(int (__fastcall **)(__int64, __int64 *, __int64 *, _QWORD))(*(_QWORD *)*v5 + 32LL);
    wil::unique_any_array_ptr<AUDIO_SYSTEMEFFECT,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter>::reset(&v21);
    if ( v11(v10, &v21, &v20, 0LL) >= 0 )
    {
      v12 = 0LL;
      for ( i = 0; i < (unsigned int)v20; i = v12 )
      {
        v14 = a2[1];
        v15 = *a2;
        if ( *a2 == v14 )
          goto LABEL_18;
        do
        {
          v16 = *(_QWORD *)v15 - *(_QWORD *)(v21 + 24 * v12);
          if ( *(_QWORD *)v15 == *(_QWORD *)(v21 + 24 * v12) )
            v16 = *(_QWORD *)(v15 + 8) - *(_QWORD *)(v21 + 24 * v12 + 8);
          if ( !v16 )
            break;
          v15 += 24LL;
        }
        while ( v15 != v14 );
        if ( v15 == v14 )
        {
LABEL_18:
          v18 = *(_OWORD *)(v21 + 24 * v12);
          v23 = v18;
          LODWORD(v24) = *(_DWORD *)(v21 + 24 * v12 + 16);
          HIDWORD(v24) = *(_DWORD *)(v21 + 24 * v12 + 20) == 1;
          if ( v14 == a2[2] )
          {
            std::vector<AUDIO_EFFECT>::_Emplace_reallocate<AUDIO_EFFECT>(a2, v14, &v23);
          }
          else
          {
            *(_OWORD *)v14 = v18;
            *(_QWORD *)(v14 + 16) = v24;
            a2[1] += 24LL;
          }
        }
        else
        {
          v17 = *(_DWORD *)(v15 + 20) == 1 || *(_DWORD *)(v21 + 24 * v12 + 20) == 1;
          *(_DWORD *)(v15 + 20) = v17;
          *(_DWORD *)(v15 + 16) |= *(_DWORD *)(v21 + 24LL * (unsigned int)v12 + 16);
        }
        v12 = (unsigned int)(v12 + 1);
      }
    }
    wil::unique_any_array_ptr<AUDIO_SYSTEMEFFECT,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter>::reset(&v21);
    ++v5;
  }
  v19 = -21845 * ((a2[1] - *a2) >> 3);
  v7 = *(_DWORD **)(wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                      0xAAAAAAAAAAAAAAABuLL,
                      _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
                  + 8);
  if ( *v7 > 4u )
  {
    v21 = *a2;
    LODWORD(v22) = 24 * v19;
    *(_QWORD *)&v23 = &v19;
    DWORD2(v23) = 2;
    v20 = a1 & -(__int64)(v4 != 0);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperPtrSize,_tlgWrapperPtrSize>(
      (_DWORD)v7,
      (unsigned int)&unk_180193276,
      (_DWORD)v7,
      v8,
      (__int64)&v20,
      (__int64)&v23,
      (__int64)&v21);
  }
  return 0LL;
}
