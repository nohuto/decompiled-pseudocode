/*
 * XREFs of ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180177E40
 * Callers:
 *     ??$DoInvoke@V_lambda_7e0f520160950e24bd7fd597c2836819_@@@?$EventSource@U?$ITypedEventHandler@PEAVMPCManagerClient@MPCManager@Input@Internal@Windows@@PEAVServerConnectionArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJV_lambda_7e0f520160950e24bd7fd597c2836819_@@@Z @ 0x180176888 (--$DoInvoke@V_lambda_7e0f520160950e24bd7fd597c2836819_@@@-$EventSource@U-$ITypedEventHandler@PEA.c)
 *     ??$DoInvoke@V_lambda_8e884d9800c4caace3df8d0733f3eac6_@@@?$EventSource@U?$ITypedEventHandler@PEAVMPCManagerClient@MPCManager@Input@Internal@Windows@@PEAVHomeGestureEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJV_lambda_8e884d9800c4caace3df8d0733f3eac6_@@@Z @ 0x180176930 (--$DoInvoke@V_lambda_8e884d9800c4caace3df8d0733f3eac6_@@@-$EventSource@U-$ITypedEventHandler@PEA.c)
 *     ??$DoInvoke@V_lambda_9bde9d5cbf3970395896a777a7cc8107_@@@?$EventSource@U?$ITypedEventHandler@PEAVMPCManagerClient@MPCManager@Input@Internal@Windows@@PEAVHomeGestureReadyChangedEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJV_lambda_9bde9d5cbf3970395896a777a7cc8107_@@@Z @ 0x1801769D8 (--$DoInvoke@V_lambda_9bde9d5cbf3970395896a777a7cc8107_@@@-$EventSource@U-$ITypedEventHandler@PEA.c)
 *     ??$DoInvoke@V_lambda_2994a7a20cb592567dc6818203d49b13_@@@?$EventSource@U?$ITypedEventHandler@PEAVMPCConstantManagerClient@MPCManager@Input@Internal@Windows@@PEAVConstantChangedEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJV_lambda_2994a7a20cb592567dc6818203d49b13_@@@Z @ 0x180180C9C (--$DoInvoke@V_lambda_2994a7a20cb592567dc6818203d49b13_@@@-$EventSource@U-$ITypedEventHandler@PEA.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180012900 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180050B58 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 */

volatile signed __int32 **__fastcall Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(
        volatile signed __int32 **a1,
        volatile int *a2)
{
  volatile signed __int32 *v2; // r10
  volatile signed __int32 *v4; // rcx

  v2 = *(volatile signed __int32 **)a2;
  if ( *a1 != *(volatile signed __int32 **)a2 )
  {
    if ( v2 )
      Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(v2 + 3), a2);
    v4 = *a1;
    *a1 = v2;
    if ( v4 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v4);
  }
  return a1;
}
