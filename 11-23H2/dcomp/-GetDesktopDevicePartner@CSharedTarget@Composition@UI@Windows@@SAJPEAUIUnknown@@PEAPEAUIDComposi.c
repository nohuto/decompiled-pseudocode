/*
 * XREFs of ?GetDesktopDevicePartner@CSharedTarget@Composition@UI@Windows@@SAJPEAUIUnknown@@PEAPEAUIDCompositionDesktopDevicePartner@@@Z @ 0x180016250
 * Callers:
 *     DCompositionCreateCrossDeviceVisualHandle @ 0x180016170 (DCompositionCreateCrossDeviceVisualHandle.c)
 *     ?SetRoot@CSharedTarget@Composition@UI@Windows@@UEAAJPEAUIDCompositionVisual@@@Z @ 0x18010DBC0 (-SetRoot@CSharedTarget@Composition@UI@Windows@@UEAAJPEAUIDCompositionVisual@@@Z.c)
 * Callees:
 *     ?GetDeviceAndHandleWorker@CDevice@DirectComposition@@CAXPEAXPEAPEAV12@PEAI@Z @ 0x18002400C (-GetDeviceAndHandleWorker@CDevice@DirectComposition@@CAXPEAXPEAPEAV12@PEAI@Z.c)
 *     ?ValidateInterface@NestableRuntimeClass@WRL2@Microsoft@@SAJPEAUIUnknown@@PEBUInterfaceType@123@PEAPEAV123@@Z @ 0x18006BB3C (-ValidateInterface@NestableRuntimeClass@WRL2@Microsoft@@SAJPEAUIUnknown@@PEBUInterfaceType@123@P.c)
 *     ?InternalQueryInterface@NestableRuntimeClass@WRL2@Microsoft@@QEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180074FB0 (-InternalQueryInterface@NestableRuntimeClass@WRL2@Microsoft@@QEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionObject@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18008286C (-InternalUnlock@-$RefPtr@VCompositionObject@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::CSharedTarget::GetDesktopDevicePartner(
        struct IUnknown *a1,
        struct IDCompositionDesktopDevicePartner **a2)
{
  struct IUnknown *v3; // r11
  int Interface; // ebx
  struct Microsoft::WRL2::NestableRuntimeClass *v6; // [rsp+38h] [rbp+10h] BYREF
  struct DirectComposition::CDevice *v7; // [rsp+40h] [rbp+18h] BYREF

  *a2 = 0LL;
  v7 = 0LL;
  LODWORD(v6) = 0;
  DirectComposition::CDevice::GetDeviceAndHandleWorker(a1, &v7, (unsigned int *)&v6);
  if ( v7 && (_DWORD)v6 )
  {
    Interface = (**(__int64 (__fastcall ***)(struct DirectComposition::CDevice *, GUID *, struct IDCompositionDesktopDevicePartner **))v7)(
                  v7,
                  &GUID_d14b6158_c3fa_4bce_9c1f_b61d8665eab0,
                  a2);
  }
  else
  {
    if ( (int)Microsoft::WRL2::NestableRuntimeClass::ValidateInterface(
                v3,
                (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::InteropVisual::s_InterfaceType,
                &v6) < 0 )
      Interface = -2147024809;
    else
      Interface = Microsoft::WRL2::NestableRuntimeClass::InternalQueryInterface(
                    *((Microsoft::WRL2::NestableRuntimeClass **)v6 + 3),
                    &GUID_d14b6158_c3fa_4bce_9c1f_b61d8665eab0,
                    (void **)a2);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionObject>::InternalUnlock(&v6);
  }
  if ( Interface < 0 )
    *a2 = 0LL;
  return (unsigned int)Interface;
}
