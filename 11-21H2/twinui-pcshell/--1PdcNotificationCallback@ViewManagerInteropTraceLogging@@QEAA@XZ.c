/*
 * XREFs of ??1PdcNotificationCallback@ViewManagerInteropTraceLogging@@QEAA@XZ @ 0x1803F8DE8
 * Callers:
 *     _lambda_91aaa5e983db1b48f3ac5a4f87e91bed_::operator() @ 0x1803F8E14 (_lambda_91aaa5e983db1b48f3ac5a4f87e91bed_--operator().c)
 *     __lambda_91aaa5e983db1b48f3ac5a4f87e91bed_::operator()_::_1_::dtor$0 @ 0x1803F908A (__lambda_91aaa5e983db1b48f3ac5a4f87e91bed_--operator()_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800979CC (-Destroy@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsPro.c)
 */

void __fastcall ViewManagerInteropTraceLogging::PdcNotificationCallback::~PdcNotificationCallback(
        ViewManagerInteropTraceLogging::PdcNotificationCallback *this)
{
  *(_QWORD *)this = &ViewManagerInteropTraceLogging::PdcNotificationCallback::`vftable';
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
