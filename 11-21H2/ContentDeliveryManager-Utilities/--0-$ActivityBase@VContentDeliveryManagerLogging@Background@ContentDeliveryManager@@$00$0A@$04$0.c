/*
 * XREFs of ??0?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x18009A464
 * Callers:
 *     _lambda_4f27881777b3828299edd9a0e9cb6746_::operator() @ 0x18009B508 (_lambda_4f27881777b3828299edd9a0e9cb6746_--operator().c)
 *     ?GetTriggeredItemsForStateAsync@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@UEAAJPEAUHSTRING__@@00PEAPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@@Foundation@5@@Z @ 0x18009E280 (-GetTriggeredItemsForStateAsync@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Se.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180021FA4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x18002245D (memset_0.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800665B0 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??0?$ActivityData@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV012@@Z @ 0x18009A690 (--0-$ActivityData@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@U_TlgReflect.c)
 *     ??1?$ActivityData@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18009AFF0 (--1-$ActivityData@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@_ea_18009AFF0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v4; // rbx
  _QWORD *v5; // rcx
  volatile signed __int32 **v6; // r15
  volatile signed __int32 **v7; // rsi
  volatile signed __int32 **v8; // rbx
  volatile signed __int32 *v9; // rbp
  volatile signed __int32 *v10; // rax
  volatile signed __int32 *v11; // rax
  volatile signed __int32 *v12; // rbx
  volatile signed __int32 *v13; // r13
  volatile signed __int32 *v14; // rbx

  *(_QWORD *)a1 = &wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::`vftable';
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = a1;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_DWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0LL;
  v4 = a1 + 56;
  *(_QWORD *)(a1 + 48) = a1 + 56;
  *(_DWORD *)(a1 + 56) = 0;
  *(_BYTE *)(a1 + 60) = 0;
  *(_BYTE *)(a1 + 120) = 0;
  *(_DWORD *)(a1 + 96) = 0;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 128) = 1LL;
  v5 = (_QWORD *)(a1 + 136);
  v5[19] = 0LL;
  v5[20] = 0LL;
  memset_0(v5, 0, 0x98uLL);
  *(_QWORD *)(v4 + 248) = 0LL;
  v6 = (volatile signed __int32 **)(a1 + 312);
  *(_QWORD *)(a1 + 312) = 0LL;
  if ( *(_DWORD *)(a1 + 32) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
  v7 = (volatile signed __int32 **)(a2 + 39);
  if ( a2[39] )
  {
    v8 = (volatile signed __int32 **)(a1 + 312);
    *(_QWORD *)(a1 + 48) = a2[6];
    if ( (volatile signed __int32 **)(a1 + 312) != v7 )
    {
      if ( *v8 )
      {
        if ( _InterlockedExchangeAdd(*v8, 0xFFFFFFFF) == 1 )
        {
          v9 = *v8;
          if ( *v8 )
          {
            wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,_TlgReflectorTag_Param0IsProviderType>(v9 + 2);
            operator delete((void *)v9);
          }
        }
        *v8 = 0LL;
      }
      v10 = *v7;
      *v8 = *v7;
      if ( v10 )
        _InterlockedIncrement(v10);
    }
  }
  else
  {
    v11 = (volatile signed __int32 *)operator new(0x108uLL, (const struct std::nothrow_t *)&std::nothrow);
    v12 = v11;
    if ( v11 )
    {
      *v11 = 1;
      wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,_TlgReflectorTag_Param0IsProviderType>(
        v11 + 2,
        a2 + 7);
      if ( *v6 )
      {
        if ( !_InterlockedDecrement(*v6) )
        {
          v13 = *v6;
          if ( *v6 )
          {
            wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,_TlgReflectorTag_Param0IsProviderType>(v13 + 2);
            operator delete((void *)v13);
          }
        }
      }
      *v6 = v12;
      *(_QWORD *)(a1 + 48) = (unsigned __int64)(v12 + 2) & -(__int64)(v12 != 0LL);
      if ( v7 != v6 )
      {
        if ( *v7 )
        {
          if ( !_InterlockedDecrement(*v7) )
          {
            v14 = *v7;
            if ( *v7 )
            {
              wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,_TlgReflectorTag_Param0IsProviderType>(v14 + 2);
              operator delete((void *)v14);
            }
          }
          *v7 = 0LL;
          v12 = *v6;
        }
        *v7 = v12;
        if ( v12 )
          _InterlockedIncrement(v12);
      }
      a2[6] = *(_QWORD *)(a1 + 48);
      a2[5] = *(_QWORD *)(a1 + 48) + 40LL;
    }
  }
  *(_QWORD *)(a1 + 40) = *(_QWORD *)(a1 + 48) + 40LL;
  return a1;
}
