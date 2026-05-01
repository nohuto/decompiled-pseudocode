/*
 * XREFs of ??1?$ComPtr@VApplicationViewTitlebarConfiguration@@@WRL@Microsoft@@QEAA@XZ @ 0x180302FCC
 * Callers:
 *     _CloneTitleBarConfiguration_::_1_::dtor$0 @ 0x18021DC59 (_CloneTitleBarConfiguration_--_1_--dtor$0.c)
 *     _wil::MakeAndInitializeOrThrow_ApplicationViewTitlebarConfiguration__::_1_::dtor$0 @ 0x18021DC6B (_wil--MakeAndInitializeOrThrow_ApplicationViewTitlebarConfiguration__--_1_--dtor$0.c)
 *     _CDesktopPositioner::_CreateTitlebarConfiguration_::_1_::dtor$0 @ 0x18021DCAA (_CDesktopPositioner--_CreateTitlebarConfiguration_--_1_--dtor$0.c)
 *     _FullScreenPositionerHelpers::CreateTitlebarConfiguration_::_1_::dtor$0 @ 0x180321522 (_FullScreenPositionerHelpers--CreateTitlebarConfiguration_--_1_--dtor$0.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicationViewTitlebarConfiguration@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800F21C0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicationView.c)
 */

volatile signed __int32 *__fastcall Microsoft::WRL::ComPtr<ApplicationViewTitlebarConfiguration>::~ComPtr<ApplicationViewTitlebarConfiguration>(
        volatile signed __int32 **a1)
{
  volatile signed __int32 *result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (volatile signed __int32 *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IApplicationViewTitlebarConfiguration,Microsoft::WRL::FtmBase>::Release(result);
  }
  return result;
}
