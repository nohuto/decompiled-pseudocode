/*
 * XREFs of ?OnMessage@DesktopBlueLightReductionManager@@UEAAJI_K_J@Z @ 0x180315D90
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_NightLightOnWCOS@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800CC450 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_NightLightOnWCOS@@@details@wil@@QEAAX_NW4.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithGITSite@@UIImmersiveWindowMessageNotification@@UIImmersiveMonitorNotification@@UIImmersiveSessionIdleNotification@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180152840 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCIm_ea_180152840.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_2aee3bdc8de74c7808524c6084b62ccc___ @ 0x18031578C (Windows--Internal--ComTaskPool--QueueTask__lambda_2aee3bdc8de74c7808524c6084b62ccc___.c)
 *     ??0?$com_ptr_t@VDesktopBlueLightReductionManager@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVDesktopBlueLightReductionManager@@@Z @ 0x180315A44 (--0-$com_ptr_t@VDesktopBlueLightReductionManager@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVDesk.c)
 */

__int64 __fastcall DesktopBlueLightReductionManager::OnMessage(
        DesktopBlueLightReductionManager *this,
        int a2,
        __int64 a3,
        const char *a4)
{
  __int64 v5; // r10
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // edi
  __int64 result; // rax
  volatile int *v10; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+28h] [rbp-20h] BYREF
  volatile int *v12; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  try
  {
    if ( a2 == 30 )
    {
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_NightLightOnWCOS>::ReportUsage(
        `wil::Feature<__WilFeatureTraits_Feature_NightLightOnWCOS>::GetImpl'::`2'::impl,
        0,
        a3,
        (__int64)a4);
      wil::com_ptr_t<DesktopBlueLightReductionManager,wil::err_exception_policy>::com_ptr_t<DesktopBlueLightReductionManager,wil::err_exception_policy>(
        &v10,
        (volatile int *)this - 26);
      v11 = v5;
      wil::com_ptr_t<DesktopBlueLightReductionManager,wil::err_exception_policy>::com_ptr_t<DesktopBlueLightReductionManager,wil::err_exception_policy>(
        &v12,
        v10);
      v8 = Windows::Internal::ComTaskPool::QueueTask__lambda_2aee3bdc8de74c7808524c6084b62ccc___(
             v7,
             v6,
             *((_DWORD *)this + 25),
             &v11);
      if ( v12 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CImmersiveShellComponentWithGITSite,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,IImmersiveSessionIdleNotification,Microsoft::WRL::FtmBase>::Release((__int64)v12);
      if ( v8 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xE9,
          (__int64)"pcshell\\twinui\\bluelightreduction\\desktopbluelightreductionmanager.cpp",
          (const char *)(unsigned int)v8);
      if ( v10 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CImmersiveShellComponentWithGITSite,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,IImmersiveSessionIdleNotification,Microsoft::WRL::FtmBase>::Release((__int64)v10);
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xEF,
                           (int)"pcshell\\twinui\\bluelightreduction\\desktopbluelightreductionmanager.cpp",
                           a4);
  }
  return result;
}
