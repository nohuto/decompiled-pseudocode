/*
 * XREFs of ?StaticPerfDataCollectionThread@GamingOverlayExperienceManager@@CAKPEAX@Z @ 0x1804082A0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1801484A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UIApplicationFrameEventHandler@@UIImmersiveLayoutChanges@@UIWnfCallback@@UIEyeControlManager@Input@Internal@UI@Windows@@UIInputDeviceWatcherOwner@@UIPrivilegedOperationsConsumer@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180172D50 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImm_ea_180172D50.c)
 *     ?PerfDataCollectionThread@GamingOverlayExperienceManager@@AEAAJXZ @ 0x180404644 (-PerfDataCollectionThread@GamingOverlayExperienceManager@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GamingOverlayExperienceManager::StaticPerfDataCollectionThread(__int64 Parameter)
{
  signed __int64 v2; // rax
  signed __int64 v3; // rtt
  wil::details::in1diag3 *v4; // rcx
  __int64 v5; // r9
  __int64 v6; // rdx
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( Parameter )
  {
    v2 = *(_QWORD *)(Parameter + 208);
    while ( v2 >= 0 )
    {
      if ( (_DWORD)v2 != 0x7FFFFFFF )
      {
        v3 = v2;
        v2 = _InterlockedCompareExchange64((volatile signed __int64 *)(Parameter + 208), v2 + 1, v2);
        if ( v3 != v2 )
          continue;
      }
      goto LABEL_8;
    }
    Microsoft::WRL::Details::SafeUnknownIncrementReference(
      (Microsoft::WRL::Details *)(2 * v2 + 16),
      (volatile int *)((unsigned __int64)v2 >> 63));
  }
LABEL_8:
  v4 = retaddr;
  if ( Parameter )
  {
    v7 = GamingOverlayExperienceManager::PerfDataCollectionThread((GamingOverlayExperienceManager *)Parameter);
    v4 = retaddr;
    if ( v7 >= 0 )
      goto LABEL_13;
    v5 = (unsigned int)v7;
    v6 = 1087LL;
  }
  else
  {
    v5 = 2147500035LL;
    v6 = 1083LL;
  }
  wil::details::in1diag3::_Log_Hr(
    v4,
    (void *)v6,
    (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
    (const char *)v5);
LABEL_13:
  if ( Parameter )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,IApplicationFrameEventHandler,IImmersiveLayoutChanges,IWnfCallback,Windows::UI::Internal::Input::IEyeControlManager,IInputDeviceWatcherOwner,IPrivilegedOperationsConsumer,Microsoft::WRL::FtmBase>::Release(Parameter);
  return 0LL;
}
