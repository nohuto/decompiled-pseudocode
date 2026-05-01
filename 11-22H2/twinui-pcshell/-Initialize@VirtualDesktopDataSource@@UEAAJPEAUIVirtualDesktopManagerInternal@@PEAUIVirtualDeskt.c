/*
 * XREFs of ?Initialize@VirtualDesktopDataSource@@UEAAJPEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktopNotificationService@@@Z @ 0x180139210
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006BCD8 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x1800E15F0 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x1800E1A80 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UIVirtualDesktopManagerInternal@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopManagerInternal@@@Z @ 0x18013A84C (--4-$ComPtr@UIVirtualDesktopManagerInternal@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopMana.c)
 *     ??4?$ComPtr@UIVirtualDesktopNotificationService@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopNotificationService@@@Z @ 0x18013AA84 (--4-$ComPtr@UIVirtualDesktopNotificationService@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktop.c)
 *     ?VirtualDesktopCollection_CreateInstance@@YAJPEAUIThumbnailDeviceSource@@AEBU_GUID@@PEAPEAX@Z @ 0x18013F2D4 (-VirtualDesktopCollection_CreateInstance@@YAJPEAUIThumbnailDeviceSource@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ??$MakeAndInitialize@VThumbnailDeviceFactory@@UIThumbnailDeviceSource@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIThumbnailDeviceSource@@@Z @ 0x18019CFE0 (--$MakeAndInitialize@VThumbnailDeviceFactory@@UIThumbnailDeviceSource@@$$V@Details@WRL@Microsoft.c)
 *     ??$Register@UIVirtualDesktopNotificationService@@P81@EAAJPEAUIVirtualDesktopNotification@@PEAK@ZP81@EAAJK@ZPEAVVirtualDesktopDataSource@@@SmartCookie@@QEAAJPEAUIVirtualDesktopNotificationService@@P81@EAAJPEAUIVirtualDesktopNotification@@PEAK@ZP81@EAAJK@ZPEAVVirtualDesktopDataSource@@@Z @ 0x1801B4094 (--$Register@UIVirtualDesktopNotificationService@@P81@EAAJPEAUIVirtualDesktopNotification@@PEAK@Z.c)
 *     ??$As@UIVirtualDesktopCollectionInternal@@@?$ComPtr@UIVirtualDesktopCollection@Multitasking@ComposableShell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIVirtualDesktopCollectionInternal@@@WRL@Microsoft@@@Details@12@@Z @ 0x1801BC1E0 (--$As@UIVirtualDesktopCollectionInternal@@@-$ComPtr@UIVirtualDesktopCollection@Multitasking@Comp.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?UninitializeInternal@VirtualDesktopDataSource@@AEAAXXZ @ 0x180540B14 (-UninitializeInternal@VirtualDesktopDataSource@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall VirtualDesktopDataSource::Initialize(
        VirtualDesktopDataSource *this,
        struct IVirtualDesktopManagerInternal *a2,
        struct IVirtualDesktopNotificationService *a3)
{
  _QWORD *v6; // r15
  int v7; // eax
  int v8; // r8d
  int v9; // r9d
  unsigned int v10; // esi
  int v11; // eax
  const struct _GUID *v12; // rdx
  int v13; // eax
  int v14; // eax
  unsigned int v15; // esi
  int v16; // eax
  unsigned int v17; // esi
  void *v18; // rcx
  RTL_SRWLOCK *v20; // [rsp+30h] [rbp-48h] BYREF
  __int64 v21[2]; // [rsp+38h] [rbp-40h] BYREF
  char v22; // [rsp+48h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  __int64 v24; // [rsp+80h] [rbp+8h] BYREF
  void *v25; // [rsp+98h] [rbp+20h] BYREF

  Microsoft::WRL::Wrappers::SRWLock::LockExclusive(&v20, (RTL_SRWLOCK *)this + 31);
  v21[1] = (__int64)this - 32;
  v22 = 1;
  Microsoft::WRL::ComPtr<IVirtualDesktopManagerInternal>::operator=((char *)this + 88, a2);
  v6 = (_QWORD *)((char *)this + 96);
  Microsoft::WRL::ComPtr<IVirtualDesktopNotificationService>::operator=((char *)this + 96, a3);
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 29);
  v7 = Microsoft::WRL::Details::MakeAndInitialize<ThumbnailDeviceFactory,IThumbnailDeviceSource,>((void **)this + 29);
  v10 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x91,
      (int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopdatasource.cpp",
      (const char *)(unsigned int)v7);
    VirtualDesktopDataSource::UninitializeInternal((VirtualDesktopDataSource *)((char *)this - 32));
LABEL_11:
    Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v20);
    return v10;
  }
  if ( *v6 )
  {
    v11 = SmartCookie::Register<IVirtualDesktopNotificationService,long (IVirtualDesktopNotificationService::*)(IVirtualDesktopNotification *,unsigned long *),long (IVirtualDesktopNotificationService::*)(unsigned long),VirtualDesktopDataSource *>(
            (int)this + 104,
            *v6,
            v8,
            v9,
            (__int64)this - 32);
    v10 = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x99,
        (int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopdatasource.cpp",
        (const char *)(unsigned int)v11);
      VirtualDesktopDataSource::UninitializeInternal((VirtualDesktopDataSource *)((char *)this - 32));
      goto LABEL_11;
    }
  }
  v25 = 0LL;
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v25);
  v13 = VirtualDesktopCollection_CreateInstance(*((struct IThumbnailDeviceSource **)this + 29), v12, &v25);
  v10 = v13;
  if ( v13 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x9E,
      (int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopdatasource.cpp",
      (const char *)(unsigned int)v13);
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v25);
    VirtualDesktopDataSource::UninitializeInternal((VirtualDesktopDataSource *)((char *)this - 32));
    goto LABEL_11;
  }
  v24 = 0LL;
  v14 = Microsoft::WRL::ComPtr<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollection>::As<IVirtualDesktopCollectionInternal>(
          &v25,
          &v24);
  v15 = v14;
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA2,
      (int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopdatasource.cpp",
      (const char *)(unsigned int)v14);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v24);
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v25);
    v22 = 0;
    VirtualDesktopDataSource::UninitializeInternal((VirtualDesktopDataSource *)((char *)this - 32));
    Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v20);
    return v15;
  }
  else
  {
    v16 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v24 + 32LL))(v24, *((_QWORD *)this + 11), *v6);
    v17 = v16;
    if ( v16 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA3,
        (int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopdatasource.cpp",
        (const char *)(unsigned int)v16);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v24);
      Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v25);
      v22 = 0;
      VirtualDesktopDataSource::UninitializeInternal((VirtualDesktopDataSource *)((char *)this - 32));
      Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v20);
      return v17;
    }
    else
    {
      v18 = v25;
      v25 = 0LL;
      v21[0] = *((_QWORD *)this + 30);
      *((_QWORD *)this + 30) = v18;
      Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(v21);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v24);
      Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v25);
      Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v20);
      return 0LL;
    }
  }
}
