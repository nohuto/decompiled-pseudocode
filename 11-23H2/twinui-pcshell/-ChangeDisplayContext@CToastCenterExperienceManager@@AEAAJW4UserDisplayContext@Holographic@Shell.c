/*
 * XREFs of ?ChangeDisplayContext@CToastCenterExperienceManager@@AEAAJW4UserDisplayContext@Holographic@Shell@Internal@Windows@@@Z @ 0x180435AD4
 * Callers:
 *     ?OnDisplayContextChanged@CToastCenterExperienceManager@@AEAAJXZ @ 0x1804377D8 (-OnDisplayContextChanged@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?UnregisterHolographicExecutor@CToastCenterExperienceManager@@UEAAJXZ @ 0x18043D0D0 (-UnregisterHolographicExecutor@CToastCenterExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     ?Stop@?$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180056D78 (-Stop@-$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??$?0$$V@EM_DisplayContextChanged@ToastCenterTelemetry@@AEAA@U?$integral_constant@D$0A@@wistd@@@Z @ 0x180433F30 (--$-0$$V@EM_DisplayContextChanged@ToastCenterTelemetry@@AEAA@U-$integral_constant@D$0A@@wistd@@@.c)
 *     ??$NoChangeToDisplayContext@AEAW4UserDisplayContext@Holographic@Shell@Internal@Windows@@@EM_DisplayContextChanged@ToastCenterTelemetry@@QEAAXAEAW4UserDisplayContext@Holographic@Shell@Internal@Windows@@@Z @ 0x180434C1C (--$NoChangeToDisplayContext@AEAW4UserDisplayContext@Holographic@Shell@Internal@Windows@@@EM_Disp.c)
 *     ??1EM_DisplayContextChanged@ToastCenterTelemetry@@QEAA@XZ @ 0x18043546C (--1EM_DisplayContextChanged@ToastCenterTelemetry@@QEAA@XZ.c)
 *     ?DisplayContextChangedToHeadMountedDisplay@EM_DisplayContextChanged@ToastCenterTelemetry@@QEAAXXZ @ 0x180435D6C (-DisplayContextChangedToHeadMountedDisplay@EM_DisplayContextChanged@ToastCenterTelemetry@@QEAAXX.c)
 *     ?DisplayContextChangedToMonitor@EM_DisplayContextChanged@ToastCenterTelemetry@@QEAAXXZ @ 0x180435DDC (-DisplayContextChangedToMonitor@EM_DisplayContextChanged@ToastCenterTelemetry@@QEAAXXZ.c)
 *     ?HideInHolographic@CToastCenterExperienceManager@@AEAAJXZ @ 0x1804361F8 (-HideInHolographic@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?MoveToastCenterViewToDesktop@CToastCenterExperienceManager@@AEAAJXZ @ 0x180436D08 (-MoveToastCenterViewToDesktop@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?MoveToastCenterViewToHolographic@CToastCenterExperienceManager@@AEAAJXZ @ 0x180436DA0 (-MoveToastCenterViewToHolographic@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?ShowInHolographic@CToastCenterExperienceManager@@AEAAJXZ @ 0x180439DCC (-ShowInHolographic@CToastCenterExperienceManager@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CToastCenterExperienceManager::ChangeDisplayContext(__int64 a1, int a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  int v8[4]; // [rsp+20h] [rbp-168h] BYREF
  _QWORD v9[40]; // [rsp+30h] [rbp-158h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+0h]

  v8[0] = a2;
  ToastCenterTelemetry::EM_DisplayContextChanged::EM_DisplayContextChanged((__int64)v9, a2);
  if ( !*(_QWORD *)(a1 + 128) || !*(_QWORD *)(a1 + 792) || !*(_QWORD *)(a1 + 776) || *(_DWORD *)(a1 + 784) == a2 )
  {
    ToastCenterTelemetry::EM_DisplayContextChanged::NoChangeToDisplayContext<enum Windows::Internal::Shell::Holographic::UserDisplayContext &>(
      (__int64)v9,
      v8);
    goto LABEL_17;
  }
  *(_DWORD *)(a1 + 784) = a2;
  if ( a2 != 1 )
  {
    ToastCenterTelemetry::EM_DisplayContextChanged::DisplayContextChangedToMonitor((ToastCenterTelemetry::EM_DisplayContextChanged *)v9);
    v4 = CToastCenterExperienceManager::MoveToastCenterViewToDesktop((CToastCenterExperienceManager *)a1);
    v5 = v4;
    if ( v4 < 0 )
    {
      v6 = 1818LL;
      goto LABEL_15;
    }
    v4 = CToastCenterExperienceManager::HideInHolographic((CToastCenterExperienceManager *)a1);
    v5 = v4;
    if ( v4 < 0 )
    {
      v6 = 1820LL;
      goto LABEL_15;
    }
    goto LABEL_17;
  }
  ToastCenterTelemetry::EM_DisplayContextChanged::DisplayContextChangedToHeadMountedDisplay((ToastCenterTelemetry::EM_DisplayContextChanged *)v9);
  v4 = CToastCenterExperienceManager::MoveToastCenterViewToHolographic((CToastCenterExperienceManager *)a1);
  v5 = v4;
  if ( v4 >= 0 )
  {
    if ( *(_DWORD *)(a1 + 144) == 2 )
    {
      v4 = CToastCenterExperienceManager::ShowInHolographic((CToastCenterExperienceManager *)a1);
      v5 = v4;
      if ( v4 < 0 )
      {
        v6 = 1811LL;
        goto LABEL_15;
      }
    }
LABEL_17:
    wil::ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v9, 0);
    v5 = 0;
    goto LABEL_18;
  }
  v6 = 1806LL;
LABEL_15:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
    (const char *)(unsigned int)v4);
LABEL_18:
  ToastCenterTelemetry::EM_DisplayContextChanged::~EM_DisplayContextChanged((ToastCenterTelemetry::EM_DisplayContextChanged *)v9);
  return v5;
}
