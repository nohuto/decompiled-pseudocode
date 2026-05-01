/*
 * XREFs of ?VirtualDesktopMoved@VirtualDesktopPerMonitorCollection@@UEAAJPEAUIObjectArray@@PEAUIVirtualDesktop@@II@Z @ 0x18048F7A0
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
 *     ??$MakeAndInitialize@VVirtualDesktopPerMonitorCollectionChangedEventArgs@@UIVirtualDesktopPerMonitorCollectionChangedEventArgs@Multitasking@ComposableShell@Internal@Windows@@W4VirtualDesktopPerMonitorCollectionChangedEventType@3456@PEAUIVirtualDesktop@3456@AEAIAEAI@Details@WRL@Microsoft@@YAJPEAPEAUIVirtualDesktopPerMonitorCollectionChangedEventArgs@Multitasking@ComposableShell@Internal@Windows@@$$QEAW4VirtualDesktopPerMonitorCollectionChangedEventType@4567@$$QEAPEAUIVirtualDesktop@4567@AEAI3@Z @ 0x18048EA1C (--$MakeAndInitialize@VVirtualDesktopPerMonitorCollectionChangedEventArgs@@UIVirtual_ea_18048EA1C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall VirtualDesktopPerMonitorCollection::VirtualDesktopMoved(
        RTL_SRWLOCK *this,
        struct IObjectArray *a2,
        struct IVirtualDesktop *a3,
        __int64 a4,
        unsigned int a5)
{
  unsigned int v7; // ebx
  int WinRTDesktopForInternalDesktopInternal; // eax
  __int64 v9; // rdx
  int v10; // eax
  int v12; // [rsp+30h] [rbp-30h] BYREF
  struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *v13; // [rsp+38h] [rbp-28h] BYREF
  __int64 v14; // [rsp+40h] [rbp-20h] BYREF
  RTL_SRWLOCK *v15; // [rsp+48h] [rbp-18h] BYREF
  struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *v16; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]
  int v18; // [rsp+88h] [rbp+28h] BYREF

  v18 = a4;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_VpmUpdates>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_VpmUpdates>::GetImpl'::`2'::impl,
    0,
    (__int64)a3,
    a4);
  v14 = 0LL;
  Microsoft::WRL::Wrappers::SRWLock::LockExclusive(&v15, this + 38);
  if ( !this[10].Ptr )
  {
    v7 = -2147019873;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x159,
      (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktoppermonitorcollection.cpp",
      (const char *)0x8007139FLL);
LABEL_8:
    Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v15);
    goto LABEL_12;
  }
  v13 = 0LL;
  WinRTDesktopForInternalDesktopInternal = VirtualDesktopPerMonitorCollection::GetWinRTDesktopForInternalDesktopInternal(
                                             (struct IThumbnailDeviceSource **)&this[-3],
                                             a3,
                                             &v13);
  v7 = WinRTDesktopForInternalDesktopInternal;
  if ( WinRTDesktopForInternalDesktopInternal < 0 )
  {
    v9 = 348LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktoppermonitorcollection.cpp",
      (const char *)(unsigned int)WinRTDesktopForInternalDesktopInternal);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v13);
    goto LABEL_8;
  }
  v16 = v13;
  v12 = 3;
  WinRTDesktopForInternalDesktopInternal = Microsoft::WRL::Details::MakeAndInitialize<VirtualDesktopPerMonitorCollectionChangedEventArgs,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopPerMonitorCollectionChangedEventArgs,enum Windows::Internal::ComposableShell::Multitasking::VirtualDesktopPerMonitorCollectionChangedEventType,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *,unsigned int &,unsigned int &>(
                                             &v14,
                                             &v12,
                                             (__int64 *)&v16,
                                             &v18,
                                             (int *)&a5);
  v7 = WinRTDesktopForInternalDesktopInternal;
  if ( WinRTDesktopForInternalDesktopInternal < 0 )
  {
    v9 = 349LL;
    goto LABEL_7;
  }
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v13);
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v15);
  v10 = Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopPerMonitorCollection *,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopPerMonitorCollectionChangedEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>::InvokeAll<VirtualDesktopPerMonitorCollection *,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopPerMonitorCollectionChangedEventArgs *>(
          (__int64)&this[7],
          (__int64)&this[-3],
          v14);
  v7 = v10;
  if ( v10 >= 0 )
    v7 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x160,
      (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktoppermonitorcollection.cpp",
      (const char *)(unsigned int)v10);
LABEL_12:
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v14);
  return v7;
}
