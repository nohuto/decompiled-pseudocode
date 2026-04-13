/*
 * XREFs of ?Close@?$AsyncBase@U?$IAsyncOperationCompletedHandler@PEAUHSTRING__@@@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@UEAAJXZ @ 0x1800302E0
 * Callers:
 *     <none>
 * Callees:
 *     ?TransitionToState@?$AsyncBase@U?$IAsyncOperationCompletedHandler@PEAU?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@AEAA_NW4AsyncStatusInternal@Details@23@@Z @ 0x180041558 (-TransitionToState@-$AsyncBase@U-$IAsyncOperationCompletedHandler@PEAU-$IVectorView@PEAVTargeted.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4360 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::AsyncBase<Windows::Foundation::IAsyncOperationCompletedHandler<HSTRING__ *>,Microsoft::WRL::Details::Nil,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::Close(
        __int64 a1)
{
  unsigned int v1; // ebx
  int v2; // edx
  _DWORD *v3; // r11
  signed __int32 v4; // ecx
  signed __int32 v6; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0;
  if ( (unsigned __int8)Microsoft::WRL::AsyncBase<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *> *>,Microsoft::WRL::Details::Nil,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::TransitionToState(
                          a1,
                          4LL) )
  {
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v3 + 144LL))(v3);
  }
  else
  {
    v4 = v3[12];
    v6 = -2;
    _InterlockedCompareExchange(&v6, v4, -2);
    if ( v6 != v2 )
    {
      v1 = -2147483635;
      RoOriginateError(2147483661LL, 0LL);
    }
  }
  return v1;
}
