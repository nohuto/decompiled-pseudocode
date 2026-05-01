/*
 * XREFs of ??1?$com_ptr_t@VCreationThreadDispatcher@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18048B320
 * Callers:
 *     _lambda_52bfc6edea7729ed62f4f356328b854f_::__lambda_52bfc6edea7729ed62f4f356328b854f_ @ 0x180216FE4 (_lambda_52bfc6edea7729ed62f4f356328b854f_--__lambda_52bfc6edea7729ed62f4f356328b854f_.c)
 *     _CDesktopPositioner::CDesktopPositioner_::_1_::dtor$19 @ 0x1802BC810 (_CDesktopPositioner--CDesktopPositioner_--_1_--dtor$19.c)
 *     _XamlBaseViewController::XamlBaseViewController_::_1_::dtor$5 @ 0x1802C0BF4 (_XamlBaseViewController--XamlBaseViewController_--_1_--dtor$5.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180142290 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@VFtmBa.c)
 */

__int64 __fastcall wil::com_ptr_t<CreationThreadDispatcher,wil::err_exception_policy>::~com_ptr_t<CreationThreadDispatcher,wil::err_exception_policy>(
        __int64 *a1,
        volatile int *a2)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown,Microsoft::WRL::FtmBase>::Release(
             v2,
             a2);
  return result;
}
