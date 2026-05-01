/*
 * XREFs of ?Initialize@VirtualDesktopDataSource@@UEAAJPEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktopNotificationService@@@Z @ 0x18014B9C0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180040860 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x18009FDA8 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18009FDE0 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VpmUpdates@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800A01A0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VpmUpdates@@@details@wil@@QEAAX_NW4Report.c)
 *     ??4?$ComPtr@UIVirtualDesktopNotificationService@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopNotificationService@@@Z @ 0x1800A258C (--4-$ComPtr@UIVirtualDesktopNotificationService@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktop.c)
 *     ??4?$ComPtr@UIVirtualDesktopManagerInternal@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopManagerInternal@@@Z @ 0x1800A25DC (--4-$ComPtr@UIVirtualDesktopManagerInternal@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopMana.c)
 *     ??$As@UIVirtualDesktopPerMonitorCollectionInternal@@@?$ComPtr@UIVirtualDesktopPerMonitorCollection@Multitasking@ComposableShell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIVirtualDesktopPerMonitorCollectionInternal@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800B1268 (--$As@UIVirtualDesktopPerMonitorCollectionInternal@@@-$ComPtr@UIVirtualDesktopPerMonitorCollecti.c)
 *     ?VirtualDesktopPerMonitorCollection_CreateInstance@@YAJPEAUHMONITOR__@@PEAUIThumbnailDeviceSource@@AEBU_GUID@@PEAPEAX@Z @ 0x1800B12C4 (-VirtualDesktopPerMonitorCollection_CreateInstance@@YAJPEAUHMONITOR__@@PEAUIThumbnailDeviceSourc.c)
 *     ??$Register@UIVirtualDesktopNotificationService@@P81@EAAJPEAUIVirtualDesktopNotification@@PEAK@ZP81@EAAJK@ZPEAVVirtualDesktopDataSource@@@SmartCookie@@QEAAJPEAUIVirtualDesktopNotificationService@@P81@EAAJPEAUIVirtualDesktopNotification@@PEAK@ZP81@EAAJK@ZPEAVVirtualDesktopDataSource@@@Z @ 0x18010C208 (--$Register@UIVirtualDesktopNotificationService@@P81@EAAJPEAUIVirtualDesktopNotification@@PEAK@Z.c)
 *     ??$MakeAndInitialize@VThumbnailDeviceFactory@@UIThumbnailDeviceSource@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIThumbnailDeviceSource@@@Z @ 0x18014BB64 (--$MakeAndInitialize@VThumbnailDeviceFactory@@UIThumbnailDeviceSource@@$$V@Details@WRL@Microsoft.c)
 *     ??$emplace@PEAUHMONITOR__@@V?$ComPtr@UIVirtualDesktopPerMonitorCollection@Multitasking@ComposableShell@Internal@Windows@@@WRL@Microsoft@@@?$_Hash@V?$_Umap_traits@PEAUHMONITOR__@@V?$ComPtr@UIVirtualDesktopPerMonitorCollection@Multitasking@ComposableShell@Internal@Windows@@@WRL@Microsoft@@V?$_Uhash_compare@PEAUHMONITOR__@@U?$hash@PEAUHMONITOR__@@@std@@U?$equal_to@PEAUHMONITOR__@@@3@@std@@V?$allocator@U?$pair@QEAUHMONITOR__@@V?$ComPtr@UIVirtualDesktopPerMonitorCollection@Multitasking@ComposableShell@Internal@Windows@@@WRL@Microsoft@@@std@@@6@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAUHMONITOR__@@V?$ComPtr@UIVirtualDesktopPerMonitorCollection@Multitasking@ComposableShell@Internal@Windows@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@_N@1@$$QEAPEAUHMONITOR__@@$$QEAV?$ComPtr@UIVirtualDesktopPerMonitorCollection@Multitasking@ComposableShell@Internal@Windows@@@WRL@Microsoft@@@Z @ 0x18014BCA8 (--$emplace@PEAUHMONITOR__@@V-$ComPtr@UIVirtualDesktopPerMonitorCollection@Multitasking@Composabl.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?UninitializeInternal@VirtualDesktopDataSource@@AEAAXXZ @ 0x18048BCCC (-UninitializeInternal@VirtualDesktopDataSource@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=15
__int64 __fastcall VirtualDesktopDataSource::Initialize(
        VirtualDesktopDataSource *this,
        struct IVirtualDesktopManagerInternal *a2,
        struct IVirtualDesktopNotificationService *a3)
{
  __int64 *v6; // r15
  int v7; // eax
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int v10; // esi
  int v11; // eax
  const struct _GUID *v12; // r8
  int v13; // eax
  int v14; // eax
  unsigned int v15; // esi
  int v16; // eax
  unsigned int v17; // esi
  RTL_SRWLOCK *v19; // [rsp+30h] [rbp-58h] BYREF
  _QWORD v20[2]; // [rsp+38h] [rbp-50h] BYREF
  char v21; // [rsp+48h] [rbp-40h]
  _BYTE v22[16]; // [rsp+50h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  __int64 v24; // [rsp+90h] [rbp+8h] BYREF
  void *v25; // [rsp+A8h] [rbp+20h] BYREF

  Microsoft::WRL::Wrappers::SRWLock::LockExclusive(&v19, (RTL_SRWLOCK *)this + 38);
  v20[1] = (char *)this - 24;
  v21 = 1;
  Microsoft::WRL::ComPtr<IVirtualDesktopManagerInternal>::operator=((__int64 *)this + 11, (__int64)a2);
  v6 = (__int64 *)((char *)this + 96);
  Microsoft::WRL::ComPtr<IVirtualDesktopNotificationService>::operator=((__int64 *)this + 12, (__int64)a3);
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 29);
  v7 = Microsoft::WRL::Details::MakeAndInitialize<ThumbnailDeviceFactory,IThumbnailDeviceSource,>((void **)this + 29);
  v10 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8E,
      (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopdatasource.cpp",
      (const char *)(unsigned int)v7);
    VirtualDesktopDataSource::UninitializeInternal((VirtualDesktopDataSource *)((char *)this - 24));
LABEL_11:
    Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v19);
    return v10;
  }
  if ( *v6 )
  {
    v11 = SmartCookie::Register<IVirtualDesktopNotificationService,long (IVirtualDesktopNotificationService::*)(IVirtualDesktopNotification *,unsigned long *),long (IVirtualDesktopNotificationService::*)(unsigned long),VirtualDesktopDataSource *>(
            (__int64)this + 104,
            *v6,
            v8);
    v10 = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x96,
        (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopdatasource.cpp",
        (const char *)(unsigned int)v11);
      VirtualDesktopDataSource::UninitializeInternal((VirtualDesktopDataSource *)((char *)this - 24));
      goto LABEL_11;
    }
  }
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_VpmUpdates>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_VpmUpdates>::GetImpl'::`2'::impl,
    0,
    v8,
    v9);
  v25 = 0LL;
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v25);
  v13 = VirtualDesktopPerMonitorCollection_CreateInstance(
          0LL,
          *((struct IThumbnailDeviceSource **)this + 29),
          v12,
          &v25);
  v10 = v13;
  if ( v13 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB6,
      (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopdatasource.cpp",
      (const char *)(unsigned int)v13);
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v25);
    VirtualDesktopDataSource::UninitializeInternal((VirtualDesktopDataSource *)((char *)this - 24));
    goto LABEL_11;
  }
  v24 = 0LL;
  v14 = Microsoft::WRL::ComPtr<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopPerMonitorCollection>::As<IVirtualDesktopPerMonitorCollectionInternal>(
          (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))&v25,
          &v24);
  v15 = v14;
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xBA,
      (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopdatasource.cpp",
      (const char *)(unsigned int)v14);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v24);
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v25);
    v21 = 0;
    VirtualDesktopDataSource::UninitializeInternal((VirtualDesktopDataSource *)((char *)this - 24));
    Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v19);
    return v15;
  }
  else
  {
    v16 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v24 + 32LL))(
            v24,
            *((_QWORD *)this + 11),
            *v6);
    v17 = v16;
    if ( v16 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xBB,
        (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopdatasource.cpp",
        (const char *)(unsigned int)v16);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v24);
      Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v25);
      v21 = 0;
      VirtualDesktopDataSource::UninitializeInternal((VirtualDesktopDataSource *)((char *)this - 24));
      Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v19);
      return v17;
    }
    else
    {
      v20[0] = 0LL;
      std::_Hash<std::_Umap_traits<HMONITOR__ *,Microsoft::WRL::ComPtr<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopPerMonitorCollection>,std::_Uhash_compare<HMONITOR__ *,std::hash<HMONITOR__ *>,std::equal_to<HMONITOR__ *>>,std::allocator<std::pair<HMONITOR__ * const,Microsoft::WRL::ComPtr<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopPerMonitorCollection>>>,0>>::emplace<HMONITOR__ *,Microsoft::WRL::ComPtr<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopPerMonitorCollection>>(
        (char *)this + 240,
        v22,
        v20,
        &v25);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v24);
      Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v25);
      Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v19);
      return 0LL;
    }
  }
}
