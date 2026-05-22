/*
 * XREFs of ?OpenInterface@PnpDevice@@QEAAJXZ @ 0x1800F9D6C
 * Callers:
 *     ?ProcessDeviceNotifications@PnpDeviceWatcher@@QEAAJPEAK@Z @ 0x18001C160 (-ProcessDeviceNotifications@PnpDeviceWatcher@@QEAAJPEAK@Z.c)
 *     ?StartDeviceObject@PnpDeviceWatcher@@AEAAJAEAUDeviceListEntry@1@@Z @ 0x1800F8B70 (-StartDeviceObject@PnpDeviceWatcher@@AEAAJAEAUDeviceListEntry@1@@Z.c)
 *     ?Initialize@ConsumerControlGenericDevice@@AEAAJPEAVPnpDevice@@@Z @ 0x1800FD788 (-Initialize@ConsumerControlGenericDevice@@AEAAJPEAVPnpDevice@@@Z.c)
 *     ?Initialize@HidLampArrayDevice@@AEAAJPEAVPnpDevice@@@Z @ 0x1801000B4 (-Initialize@HidLampArrayDevice@@AEAAJPEAVPnpDevice@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DLSDR@@@details@wil@@QEAA_NXZ @ 0x1800638EC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DLSDR@@@details@wil@@QEAA_NXZ.c)
 *     ?OpenInterface@PnpDevice@@QEAAJKK@Z @ 0x1800F9C34 (-OpenInterface@PnpDevice@@QEAAJKK@Z.c)
 */

__int64 __fastcall PnpDevice::OpenInterface(PnpDevice *this)
{
  int v2; // ebx
  __int64 v3; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_DLSDR>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_DLSDR>::GetImpl'::`2'::impl) )
  {
    v2 = PnpDevice::OpenInterface(this, 0xC0000000, 3u);
    if ( v2 < 0 )
    {
      v3 = 378LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v3,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpdevice.cpp",
        (const char *)(unsigned int)v2);
      return (unsigned int)v2;
    }
  }
  else
  {
    v2 = PnpDevice::OpenInterface(this, 0xC0000000, 0);
    if ( v2 < 0 )
    {
      v3 = 382LL;
      goto LABEL_4;
    }
  }
  return 0LL;
}
