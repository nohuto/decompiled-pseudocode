/*
 * XREFs of ?Initialize@ScreenManager@@UEAAJAEBUScreenManangerInitParams@@@Z @ 0x18019D710
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Register@UIApplicationViewCollection@@P81@EAAJPEAUIApplicationViewChangeListener@@PEAK@ZP81@EAAJK@ZPEAVScreenManager@@@SmartCookie@@QEAAJPEAUIApplicationViewCollection@@P81@EAAJPEAUIApplicationViewChangeListener@@PEAK@ZP81@EAAJK@ZPEAVScreenManager@@@Z @ 0x18019D7FC (--$Register@UIApplicationViewCollection@@P81@EAAJPEAUIApplicationViewChangeListener_ea_18019D7FC.c)
 *     ??$Register@UITabletModePositionerManager@@P81@EAAJPEAUITabletModePositionerManagerNotification@@PEAK@ZP81@EAAJK@ZPEAVScreenManager@@@SmartCookie@@QEAAJPEAUITabletModePositionerManager@@P81@EAAJPEAUITabletModePositionerManagerNotification@@PEAK@ZP81@EAAJK@ZPEAVScreenManager@@@Z @ 0x18019D8D0 (--$Register@UITabletModePositionerManager@@P81@EAAJPEAUITabletModePositionerManagerNotification@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ScreenManager::Initialize(ScreenManager *this, const struct ScreenManangerInitParams *a2)
{
  __int64 v4; // rdi
  int v5; // edi
  int v6; // r8d
  int v7; // r9d
  int v8; // r8d
  int v9; // r9d
  int v10; // eax
  unsigned int v11; // ebx
  __int64 v13; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v15; // [rsp+40h] [rbp+8h] BYREF
  __int64 v16; // [rsp+48h] [rbp+10h] BYREF

  v4 = *((_QWORD *)a2 + 3);
  if ( *((_QWORD *)this + 38) != v4 )
  {
    if ( v4 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v4 + 8LL))(*((_QWORD *)a2 + 3));
    v16 = *((_QWORD *)this + 38);
    *((_QWORD *)this + 38) = v4;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v16);
  }
  v5 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)a2 + 1) + 24LL))(*((_QWORD *)a2 + 1), &v15);
  if ( v5 < 0 )
  {
    v13 = 126LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (int)"pcshell\\twinui\\tabletmode\\lib\\screenmanager.cpp",
      (const char *)(unsigned int)v5);
    return (unsigned int)v5;
  }
  *((_BYTE *)this + 344) = v15 == 1;
  v5 = SmartCookie::Register<ITabletModePositionerManager,long (ITabletModePositionerManager::*)(ITabletModePositionerManagerNotification *,unsigned long *),long (ITabletModePositionerManager::*)(unsigned long),ScreenManager *>(
         (int)this + 48,
         *((_QWORD *)a2 + 2),
         v6,
         v7,
         (__int64)this);
  if ( v5 < 0 )
  {
    v13 = 132LL;
    goto LABEL_11;
  }
  v10 = SmartCookie::Register<IApplicationViewCollection,long (IApplicationViewCollection::*)(IApplicationViewChangeListener *,unsigned long *),long (IApplicationViewCollection::*)(unsigned long),ScreenManager *>(
          (int)this + 176,
          *(_QWORD *)a2,
          v8,
          v9,
          (__int64)this);
  v11 = v10;
  if ( v10 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x89,
    (int)"pcshell\\twinui\\tabletmode\\lib\\screenmanager.cpp",
    (const char *)(unsigned int)v10);
  return v11;
}
