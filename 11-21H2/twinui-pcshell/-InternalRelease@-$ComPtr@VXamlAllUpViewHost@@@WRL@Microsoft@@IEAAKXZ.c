/*
 * XREFs of ?InternalRelease@?$ComPtr@VXamlAllUpViewHost@@@WRL@Microsoft@@IEAAKXZ @ 0x1804355F0
 * Callers:
 *     ??$MakeAndInitialize@VXamlAllUpViewHost@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x18042B9D8 (--$MakeAndInitialize@VXamlAllUpViewHost@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknow.c)
 *     std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_MonitorFrame_________lambda_3729ee5694c21d370e67b314ad1382e5___ @ 0x18042CD9C (std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--WRL--ComPtr_M.c)
 *     ??1?$ComPtr@VXamlAllUpViewHost@@@WRL@Microsoft@@QEAA@XZ @ 0x18042E72C (--1-$ComPtr@VXamlAllUpViewHost@@@WRL@Microsoft@@QEAA@XZ.c)
 *     _lambda_baaea9c5454d5217874bd274f7881db0_::__lambda_baaea9c5454d5217874bd274f7881db0_ @ 0x18042E794 (_lambda_baaea9c5454d5217874bd274f7881db0_--__lambda_baaea9c5454d5217874bd274f7881db0_.c)
 *     ?AnimateDismissFrames@XamlAllUpViewHost@@AEAAXXZ @ 0x180431594 (-AnimateDismissFrames@XamlAllUpViewHost@@AEAAXXZ.c)
 *     ?CreateFrameForMonitor@XamlAllUpViewHost@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x1804324F4 (-CreateFrameForMonitor@XamlAllUpViewHost@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@V?$CMultitaskingViewHostBase@UIAllUpViewHost@@@@UIAllUpViewHostInternal@@UITabletModeChangeListener@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800361F0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@V-$CMultitaskingV.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<XamlAllUpViewHost>::InternalRelease(volatile int **a1)
{
  volatile int *v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  result = 0LL;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CMultitaskingViewHostBase<IAllUpViewHost>,IAllUpViewHostInternal,ITabletModeChangeListener,VirtualDesktopNotificationBase<IVirtualDesktopNotification>>::Release(
             (__int64)v1,
             v1);
  }
  return result;
}
