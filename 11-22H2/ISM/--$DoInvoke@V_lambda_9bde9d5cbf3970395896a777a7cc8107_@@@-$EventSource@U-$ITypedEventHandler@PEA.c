/*
 * XREFs of ??$DoInvoke@V_lambda_9bde9d5cbf3970395896a777a7cc8107_@@@?$EventSource@U?$ITypedEventHandler@PEAVMPCManagerClient@MPCManager@Input@Internal@Windows@@PEAVHomeGestureReadyChangedEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJV_lambda_9bde9d5cbf3970395896a777a7cc8107_@@@Z @ 0x1801847E8
 * Callers:
 *     ?OnHomeGestureReadyChanged@MPCManagerClient@@QEAAJPEAVBamoMPCManagerClientStub@@_NII_KII@Z @ 0x180188FF4 (-OnHomeGestureReadyChanged@MPCManagerClient@@QEAAJPEAVBamoMPCManagerClientStub@@_NII_KII@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800132B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ??$InvokeDelegates@V_lambda_9bde9d5cbf3970395896a777a7cc8107_@@U?$ITypedEventHandler@PEAVMPCManagerClient@MPCManager@Input@Internal@Windows@@PEAVHomeGestureReadyChangedEventArgs@2345@@Foundation@Windows@@@?$InvokeTraits@$0?1@WRL@Microsoft@@SAJV_lambda_9bde9d5cbf3970395896a777a7cc8107_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@U?$ITypedEventHandler@PEAVMPCManagerClient@MPCManager@Input@Internal@Windows@@PEAVHomeGestureReadyChangedEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@12@@Z @ 0x180184D40 (--$InvokeDelegates@V_lambda_9bde9d5cbf3970395896a777a7cc8107_@@U-$ITypedEventHandler@PEAVMPCMana.c)
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180185C50 (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Input::MPCManager::MPCManagerClient *,Windows::Internal::Input::MPCManager::HomeGestureReadyChangedEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::DoInvoke<_lambda_9bde9d5cbf3970395896a777a7cc8107_>(
        RTL_SRWLOCK *a1,
        __int128 *a2)
{
  unsigned int ready; // edi
  RTL_SRWLOCK *v5; // rbx
  volatile signed __int32 *v6; // rbx
  __int128 v8; // [rsp+20h] [rbp-18h] BYREF
  volatile signed __int32 *v9; // [rsp+40h] [rbp+8h] BYREF

  ready = 0;
  v9 = 0LL;
  v5 = a1 + 1;
  AcquireSRWLockExclusive(a1 + 1);
  Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(&v9, a1);
  if ( v5 )
    ReleaseSRWLockExclusive(v5);
  v6 = v9;
  if ( v9 )
  {
    v8 = *a2;
    ready = Microsoft::WRL::InvokeTraits<-2>::InvokeDelegates<_lambda_9bde9d5cbf3970395896a777a7cc8107_,Windows::Foundation::ITypedEventHandler<Windows::Internal::Input::MPCManager::MPCManagerClient *,Windows::Internal::Input::MPCManager::HomeGestureReadyChangedEventArgs *>>(
              &v8,
              v9,
              a1);
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v6);
  }
  return ready;
}
