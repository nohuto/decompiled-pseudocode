/*
 * XREFs of ?VirtualDesktopCreated@VirtualDesktopPerMonitorCollection@@UEAAJPEAUIObjectArray@@PEAUIVirtualDesktop@@@Z @ 0x18048F4C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?GetWinRTDesktopForInternalDesktopInternal@VirtualDesktopPerMonitorCollection@@AEAAJPEAUIVirtualDesktop@@PEAPEAU2Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x180029B60 (-GetWinRTDesktopForInternalDesktopInternal@VirtualDesktopPerMonitorCollection@@AEAAJPEAUIVirtual.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x18009FDA8 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18009FDE0 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VpmUpdates@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800A01A0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VpmUpdates@@@details@wil@@QEAAX_NW4Report.c)
 *     ??$InvokeAll@PEAVVirtualDesktopPerMonitorCollection@@PEAUIVirtualDesktopPerMonitorCollectionChangedEventArgs@Multitasking@ComposableShell@Internal@Windows@@@?$EventSource@U?$ITypedEventHandler@PEAUIVirtualDesktopPerMonitorCollection@Multitasking@ComposableShell@Internal@Windows@@PEAUIVirtualDesktopPerMonitorCollectionChangedEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAVVirtualDesktopPerMonitorCollection@@PEAUIVirtualDesktopPerMonitorCollectionChangedEventArgs@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x18048E7C8 (--$InvokeAll@PEAVVirtualDesktopPerMonitorCollection@@PEAUIVirtualDesktopPerMonitorCollectionChan.c)
 *     ??$MakeAndInitialize@VVirtualDesktopPerMonitorCollectionChangedEventArgs@@UIVirtualDesktopPerMonitorCollectionChangedEventArgs@Multitasking@ComposableShell@Internal@Windows@@W4VirtualDesktopPerMonitorCollectionChangedEventType@3456@PEAUIVirtualDesktop@3456@@Details@WRL@Microsoft@@YAJPEAPEAUIVirtualDesktopPerMonitorCollectionChangedEventArgs@Multitasking@ComposableShell@Internal@Windows@@$$QEAW4VirtualDesktopPerMonitorCollectionChangedEventType@4567@$$QEAPEAUIVirtualDesktop@4567@@Z @ 0x18048E934 (--$MakeAndInitialize@VVirtualDesktopPerMonitorCollectionChangedEventArgs@@UIVirtualDesktopPerMon.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall VirtualDesktopPerMonitorCollection::VirtualDesktopCreated(
        RTL_SRWLOCK *this,
        struct IObjectArray *a2,
        struct IVirtualDesktop *a3,
        __int64 a4)
{
  unsigned int v6; // ebx
  int WinRTDesktopForInternalDesktopInternal; // eax
  __int64 v8; // rdx
  int v9; // eax
  struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *v11; // [rsp+20h] [rbp-20h] BYREF
  __int64 v12; // [rsp+28h] [rbp-18h] BYREF
  RTL_SRWLOCK *v13; // [rsp+30h] [rbp-10h] BYREF
  struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *v14; // [rsp+38h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+8h]
  int v16; // [rsp+68h] [rbp+28h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_VpmUpdates>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_VpmUpdates>::GetImpl'::`2'::impl,
    0,
    (__int64)a3,
    a4);
  v12 = 0LL;
  Microsoft::WRL::Wrappers::SRWLock::LockExclusive(&v13, this + 38);
  if ( !this[10].Ptr )
  {
    v6 = -2147019873;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x112,
      (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktoppermonitorcollection.cpp",
      (const char *)0x8007139FLL);
LABEL_8:
    Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v13);
    goto LABEL_11;
  }
  v11 = 0LL;
  WinRTDesktopForInternalDesktopInternal = VirtualDesktopPerMonitorCollection::GetWinRTDesktopForInternalDesktopInternal(
                                             (struct IThumbnailDeviceSource **)&this[-3],
                                             a3,
                                             &v11);
  v6 = WinRTDesktopForInternalDesktopInternal;
  if ( WinRTDesktopForInternalDesktopInternal < 0 )
  {
    v8 = 277LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktoppermonitorcollection.cpp",
      (const char *)(unsigned int)WinRTDesktopForInternalDesktopInternal);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v11);
    goto LABEL_8;
  }
  v14 = v11;
  v16 = 0;
  WinRTDesktopForInternalDesktopInternal = Microsoft::WRL::Details::MakeAndInitialize<VirtualDesktopPerMonitorCollectionChangedEventArgs,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopPerMonitorCollectionChangedEventArgs,enum Windows::Internal::ComposableShell::Multitasking::VirtualDesktopPerMonitorCollectionChangedEventType,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *>(
                                             &v12,
                                             &v16,
                                             (__int64 *)&v14);
  v6 = WinRTDesktopForInternalDesktopInternal;
  if ( WinRTDesktopForInternalDesktopInternal < 0 )
  {
    v8 = 278LL;
    goto LABEL_7;
  }
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v11);
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v13);
  v9 = Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopPerMonitorCollection *,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopPerMonitorCollectionChangedEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>::InvokeAll<VirtualDesktopPerMonitorCollection *,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopPerMonitorCollectionChangedEventArgs *>(
         (__int64)&this[7],
         (__int64)&this[-3],
         v12);
  v6 = v9;
  if ( v9 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x119,
      (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktoppermonitorcollection.cpp",
      (const char *)(unsigned int)v9);
LABEL_11:
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v12);
  return v6;
}
