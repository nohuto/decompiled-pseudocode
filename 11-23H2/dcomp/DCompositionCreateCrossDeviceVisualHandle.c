/*
 * XREFs of DCompositionCreateCrossDeviceVisualHandle @ 0x180016170
 * Callers:
 *     DCompositionCreateCrossDeviceVisual @ 0x1800FF5D0 (DCompositionCreateCrossDeviceVisual.c)
 * Callees:
 *     ?GetDesktopDevicePartner@CSharedTarget@Composition@UI@Windows@@SAJPEAUIUnknown@@PEAPEAUIDCompositionDesktopDevicePartner@@@Z @ 0x180016250 (-GetDesktopDevicePartner@CSharedTarget@Composition@UI@Windows@@SAJPEAUIUnknown@@PEAPEAUIDComposi.c)
 *     ??$ReleaseInterface@UIDCompositionDesktopDevicePartner@@@@YAXAEAPEAUIDCompositionDesktopDevicePartner@@@Z @ 0x1800162F0 (--$ReleaseInterface@UIDCompositionDesktopDevicePartner@@@@YAXAEAPEAUIDCompositionDesktopDevicePa.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall DCompositionCreateCrossDeviceVisualHandle(struct IUnknown *a1, _QWORD *a2, _QWORD *a3)
{
  int DesktopDevicePartner; // ebx
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF
  struct IDCompositionDesktopDevicePartner *v8; // [rsp+48h] [rbp+20h] BYREF

  v8 = 0LL;
  v7 = 0LL;
  if ( a2 && a3 )
  {
    *a2 = 0LL;
    *a3 = -1LL;
    DesktopDevicePartner = Windows::UI::Composition::CSharedTarget::GetDesktopDevicePartner(a1, &v8);
    if ( DesktopDevicePartner < 0
      || (DesktopDevicePartner = (*(__int64 (__fastcall **)(struct IDCompositionDesktopDevicePartner *, GUID *, __int64 *))(*(_QWORD *)v8 + 216LL))(
                                   v8,
                                   &GUID_4d93059d_097b_4651_9a60_f0f25116e2f3,
                                   &v7),
          DesktopDevicePartner < 0)
      || (DesktopDevicePartner = (*(__int64 (__fastcall **)(struct IDCompositionDesktopDevicePartner *, __int64, _QWORD *))(*(_QWORD *)v8 + 224LL))(
                                   v8,
                                   v7,
                                   a3),
          DesktopDevicePartner < 0) )
    {
      if ( v7 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
        v7 = 0LL;
      }
    }
    else
    {
      *a2 = v7;
    }
  }
  else
  {
    DesktopDevicePartner = -2147024809;
  }
  ReleaseInterface<IDCompositionDesktopDevicePartner>(&v8);
  return (unsigned int)DesktopDevicePartner;
}
