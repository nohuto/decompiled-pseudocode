/*
 * XREFs of ??$MakeAndInitialize@VVirtualDesktopPerMonitorCollection@@V1@AEAPEAUHMONITOR__@@AEAPEAUIThumbnailDeviceSource@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopPerMonitorCollection@@AEAPEAUHMONITOR__@@AEAPEAUIThumbnailDeviceSource@@@Z @ 0x1800B14D8
 * Callers:
 *     ?VirtualDesktopPerMonitorCollection_CreateInstance@@YAJPEAUHMONITOR__@@PEAUIThumbnailDeviceSource@@AEBU_GUID@@PEAPEAX@Z @ 0x1800B12C4 (-VirtualDesktopPerMonitorCollection_CreateInstance@@YAJPEAUHMONITOR__@@PEAUIThumbnailDeviceSourc.c)
 * Callees:
 *     ??0VirtualDesktopPerMonitorCollection@@QEAA@XZ @ 0x1800B15D0 (--0VirtualDesktopPerMonitorCollection@@QEAA@XZ.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180125F20 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIVirtualDesktopPerMonitorCollection@Multitasking@ComposableShell@Internal@Windows@@UIVirtualDesktopPerMonitorCollectionInternal@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180175B40 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIVirtualDesktopPe.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<VirtualDesktopPerMonitorCollection,VirtualDesktopPerMonitorCollection,HMONITOR__ * &,IThumbnailDeviceSource * &>(
        VirtualDesktopPerMonitorCollection **a1,
        __int64 *a2,
        __int64 *a3)
{
  VirtualDesktopPerMonitorCollection *v6; // rax
  volatile int *v7; // rdx
  VirtualDesktopPerMonitorCollection *v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rsi
  __int64 v11; // rdi
  signed __int64 v12; // rax
  signed __int64 v13; // rtt

  *a1 = 0LL;
  v6 = (VirtualDesktopPerMonitorCollection *)operator new(0x150uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v6 )
  {
    v8 = VirtualDesktopPerMonitorCollection::VirtualDesktopPerMonitorCollection(v6);
    v9 = *a3;
    v10 = *a2;
    v11 = *((_QWORD *)v8 + 31);
    *((_QWORD *)v8 + 31) = v9;
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    *((_QWORD *)v8 + 40) = v10;
    v12 = *((_QWORD *)v8 + 9);
    while ( v12 >= 0 )
    {
      if ( (_DWORD)v12 != 0x7FFFFFFF )
      {
        v13 = v12;
        v12 = _InterlockedCompareExchange64((volatile signed __int64 *)v8 + 9, v12 + 1, v12);
        if ( v13 != v12 )
          continue;
      }
      goto LABEL_10;
    }
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(2 * v12 + 16), v7);
LABEL_10:
    *a1 = v8;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopPerMonitorCollection,IVirtualDesktopPerMonitorCollectionInternal,VirtualDesktopNotificationBase<IVirtualDesktopNotification>,Microsoft::WRL::FtmBase>::Release(v8);
    return 0;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
}
