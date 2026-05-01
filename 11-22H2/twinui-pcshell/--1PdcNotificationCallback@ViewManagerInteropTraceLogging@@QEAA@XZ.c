/*
 * XREFs of ??1PdcNotificationCallback@ViewManagerInteropTraceLogging@@QEAA@XZ @ 0x1802D87F8
 * Callers:
 *     _lambda_279b59b1da187398d137b7ca9bd87eac_::operator() @ 0x1802D8824 (_lambda_279b59b1da187398d137b7ca9bd87eac_--operator().c)
 *     __lambda_279b59b1da187398d137b7ca9bd87eac_::operator()_::_1_::dtor$0 @ 0x1802D8A98 (__lambda_279b59b1da187398d137b7ca9bd87eac_--operator()_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800B4E38 (-Destroy@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsPro.c)
 */

void __fastcall ViewManagerInteropTraceLogging::PdcNotificationCallback::~PdcNotificationCallback(
        volatile signed __int32 **this)
{
  *this = (volatile signed __int32 *)&ViewManagerInteropTraceLogging::PdcNotificationCallback::`vftable';
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
