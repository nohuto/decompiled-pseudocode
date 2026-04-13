/*
 * XREFs of ??0?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180066D6C
 * Callers:
 *     ?OnContentUpdated@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@AEAAXXZ @ 0x1800696EC (-OnContentUpdated@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@AEAAXXZ.c)
 *     _lambda_0d276c7ea3d710d19b822c1822ed0068_::operator() @ 0x180074EB8 (_lambda_0d276c7ea3d710d19b822c1822ed0068_--operator().c)
 *     _lambda_1535a6ac74a46a99e57700c911cef706_::operator() @ 0x180075054 (_lambda_1535a6ac74a46a99e57700c911cef706_--operator().c)
 *     _lambda_6ab1f6f5bfb1610cca41dbb66aaa8812_::operator() @ 0x180075388 (_lambda_6ab1f6f5bfb1610cca41dbb66aaa8812_--operator().c)
 *     _lambda_d05d40dcdd1d56fa321a7e7a2b4d6dca_::operator() @ 0x180075524 (_lambda_d05d40dcdd1d56fa321a7e7a2b4d6dca_--operator().c)
 * Callees:
 *     memset_0 @ 0x180022C6D (memset_0.c)
 *     ??0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_N@Z @ 0x180051F30 (--0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_.c)
 */

struct wil::details::IFailureCallback *__fastcall wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>(
        struct wil::details::IFailureCallback *a1,
        __int64 a2)
{
  *(_QWORD *)a1 = &wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::`vftable';
  wil::details::ThreadFailureCallbackHolder::ThreadFailureCallbackHolder(
    (struct wil::details::IFailureCallback *)((char *)a1 + 8),
    a1,
    (struct wil::details::IFailureCallback *)((char *)a1 + 96),
    0);
  *((_QWORD *)a1 + 6) = (char *)a1 + 56;
  *((_DWORD *)a1 + 14) = 0;
  *((_BYTE *)a1 + 60) = 0;
  *((_DWORD *)a1 + 24) = 0;
  *((_QWORD *)a1 + 14) = 0LL;
  *((_BYTE *)a1 + 120) = 0;
  *((_QWORD *)a1 + 13) = a2;
  *((_DWORD *)a1 + 33) = 0;
  *((_DWORD *)a1 + 32) = 1;
  *((_QWORD *)a1 + 36) = 0LL;
  *((_QWORD *)a1 + 37) = 0LL;
  memset_0((char *)a1 + 136, 0, 0x98uLL);
  *((_QWORD *)a1 + 38) = 0LL;
  *((_QWORD *)a1 + 39) = 0LL;
  return a1;
}
