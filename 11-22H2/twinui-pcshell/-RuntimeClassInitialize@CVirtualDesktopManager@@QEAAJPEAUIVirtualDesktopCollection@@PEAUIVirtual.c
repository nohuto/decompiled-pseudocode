/*
 * XREFs of ?RuntimeClassInitialize@CVirtualDesktopManager@@QEAAJPEAUIVirtualDesktopCollection@@PEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopNotification@@PEAUIVirtualDesktopForegroundPolicy@@PEAUIVirtualDesktopPersistence@@PEAUIUnknown@@PEAUIVirtualDesktopLock@@@Z @ 0x18013B204
 * Callers:
 *     ??$MakeAndInitialize@VCVirtualDesktopManager@@V1@AEAPEAUIVirtualDesktopCollection@@AEAPEAUIVirtualDesktopVisibilityPolicy@@AEAPEAUIVirtualDesktopNotification@@AEAPEAUIVirtualDesktopForegroundPolicy@@AEAPEAUIVirtualDesktopPersistence@@$$TAEAPEAUIVirtualDesktopLock@@@Details@WRL@Microsoft@@YAJPEAPEAVCVirtualDesktopManager@@AEAPEAUIVirtualDesktopCollection@@AEAPEAUIVirtualDesktopVisibilityPolicy@@AEAPEAUIVirtualDesktopNotification@@AEAPEAUIVirtualDesktopForegroundPolicy@@AEAPEAUIVirtualDesktopPersistence@@$$QEA$$TAEAPEAUIVirtualDesktopLock@@@Z @ 0x18018CB94 (--$MakeAndInitialize@VCVirtualDesktopManager@@V1@AEAPEAUIVirtualDesktopCollection@@AEAPEAUIVirtu.c)
 * Callees:
 *     ?SubscribeToWNFForBackgroundImage@CVirtualDesktopManager@@AEAAJXZ @ 0x1800A2880 (-SubscribeToWNFForBackgroundImage@CVirtualDesktopManager@@AEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UIVirtualDesktopVisibilityPolicy@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopVisibilityPolicy@@@Z @ 0x18013BEF8 (--4-$ComPtr@UIVirtualDesktopVisibilityPolicy@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopVis.c)
 *     ??4?$ComPtr@UIVirtualDesktopLock@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopLock@@@Z @ 0x18013BF58 (--4-$ComPtr@UIVirtualDesktopLock@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopLock@@@Z.c)
 *     ??4?$ComPtr@UIVirtualDesktopForegroundPolicy@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopForegroundPolicy@@@Z @ 0x18013BFB8 (--4-$ComPtr@UIVirtualDesktopForegroundPolicy@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopFor.c)
 *     ??4?$ComPtr@UIVirtualDesktopCollection@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopCollection@@@Z @ 0x18013C018 (--4-$ComPtr@UIVirtualDesktopCollection@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopCollectio.c)
 *     ??4?$ComPtr@UIVirtualDesktopPersistence@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopPersistence@@@Z @ 0x18013C078 (--4-$ComPtr@UIVirtualDesktopPersistence@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopPersiste.c)
 *     ??4?$ComPtr@UIVirtualDesktopNotification@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopNotification@@@Z @ 0x18013C0D8 (--4-$ComPtr@UIVirtualDesktopNotification@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopNotific.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVirtualDesktopManager::RuntimeClassInitialize(
        CVirtualDesktopManager *this,
        struct IVirtualDesktopCollection *a2,
        struct IVirtualDesktopVisibilityPolicy *a3,
        struct IVirtualDesktopNotification *a4,
        struct IVirtualDesktopForegroundPolicy *a5,
        struct IVirtualDesktopPersistence *a6,
        struct IUnknown *a7,
        struct IVirtualDesktopLock *a8)
{
  __int64 v11; // rdi
  __int64 (__fastcall *v12)(__int64, _QWORD, __int64, GUID *, char *); // rsi
  __int64 v13; // rcx
  __int64 v14; // rdx
  int v15; // ebx
  __int64 v16; // r8
  __int64 v18; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  Microsoft::WRL::ComPtr<IVirtualDesktopCollection>::operator=((char *)this + 104, a2);
  Microsoft::WRL::ComPtr<IVirtualDesktopVisibilityPolicy>::operator=((char *)this + 120, a3);
  Microsoft::WRL::ComPtr<IVirtualDesktopNotification>::operator=((char *)this + 128, a4);
  Microsoft::WRL::ComPtr<IVirtualDesktopForegroundPolicy>::operator=((char *)this + 136, a5);
  Microsoft::WRL::ComPtr<IVirtualDesktopPersistence>::operator=((char *)this + 144, a6);
  Microsoft::WRL::ComPtr<IVirtualDesktopLock>::operator=((char *)this + 160, a8);
  v11 = *((_QWORD *)this + 13);
  v12 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, GUID *, char *))(*(_QWORD *)v11 + 72LL);
  v13 = *((_QWORD *)this + 24);
  *((_QWORD *)this + 24) = 0LL;
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  v15 = v12(v11, 0LL, 5LL, &GUID_3f07f4be_b107_441a_af0f_39d82529072c, (char *)this + 192);
  if ( v15 < 0 )
  {
    v18 = 1612LL;
  }
  else
  {
    v15 = CVirtualDesktopManager::SubscribeToWNFForBackgroundImage(this, v14, v16);
    if ( v15 >= 0 )
      return 0LL;
    v18 = 1613LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v18,
    (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
    (const char *)(unsigned int)v15);
  return (unsigned int)v15;
}
