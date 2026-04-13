/*
 * XREFs of ?PutOnComplete@?$AsyncBaseFTM@U?$IAsyncOperationCompletedHandler@PEAU?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJPEAU?$IAsyncOperationCompletedHandler@PEAU?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@@Foundation@3@@Z @ 0x18009F320
 * Callers:
 *     ?put_Completed@?$AsyncOperation@U?$IAsyncOperation@PEAU?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@PEAU?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@@23@V?$CMarshaledInterfaceResult@U?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJPEAU?$IAsyncOperationCompletedHandler@PEAU?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@@Foundation@3@@Z @ 0x1800A44B0 (-put_Completed@-$AsyncOperation@U-$IAsyncOperation@PEAU-$IVectorView@PEAVTargetedContentTriggerI.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::AsyncBaseFTM<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *> *>,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::PutOnComplete(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // r8
  int AgileReference; // edi
  __int64 *v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rcx
  signed __int32 v12[8]; // [rsp+0h] [rbp-58h] BYREF
  GUID v13; // [rsp+40h] [rbp-18h] BYREF
  signed __int32 v14; // [rsp+60h] [rbp+8h] BYREF
  signed __int32 v15; // [rsp+70h] [rbp+18h] BYREF

  v14 = -2;
  v6 = *(unsigned int *)(a1 + 48);
  _InterlockedCompareExchange(&v14, v6, -2);
  if ( v14 == 4 )
  {
    AgileReference = -2147483634;
    RoOriginateError(2147483662LL, 0LL, v6, a4);
    return (unsigned int)AgileReference;
  }
  if ( _InterlockedIncrement((volatile signed __int32 *)(a1 + 20)) != 1 )
    return (unsigned int)-2147483624;
  v8 = (__int64 *)(a1 + 112);
  v9 = *(_QWORD *)(a1 + 112);
  *(_QWORD *)(a1 + 112) = 0LL;
  v10 = 0LL;
  if ( v9 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    v10 = *v8;
  }
  if ( !a2 )
  {
    *v8 = 0LL;
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    AgileReference = 0;
    goto LABEL_14;
  }
  if ( v10 )
  {
    *v8 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  AgileReference = RoGetAgileReference(0LL, &GUID_08f0b54e_7aba_5ce4_bf52_79368d04b857, a2, v8);
  if ( AgileReference >= 0 )
  {
LABEL_14:
    if ( Microsoft::WRL::gCausality )
    {
      v13 = GUID_CAUSALITY_WINDOWS_PLATFORM_ID;
      (*(void (__fastcall **)(struct Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics *, __int64, __int64, GUID *, __int64, _DWORD))(*(_QWORD *)Microsoft::WRL::gCausality + 64LL))(
        Microsoft::WRL::gCausality,
        2LL,
        2LL,
        &v13,
        a1,
        0);
    }
    if ( a2 )
    {
      *(_QWORD *)(a1 + 120) = *(_QWORD *)(*(_QWORD *)a2 + 24LL);
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 128));
    }
    _InterlockedOr(v12, 0);
    v15 = -2;
    _InterlockedCompareExchange(&v15, *(_DWORD *)(a1 + 48), -2);
    if ( (unsigned int)(v15 - 1) <= 3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 128LL))(a1);
  }
  return (unsigned int)AgileReference;
}
