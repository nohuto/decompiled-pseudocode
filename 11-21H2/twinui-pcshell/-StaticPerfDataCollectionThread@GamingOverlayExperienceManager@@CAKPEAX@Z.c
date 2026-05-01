/*
 * XREFs of ?StaticPerfDataCollectionThread@GamingOverlayExperienceManager@@CAKPEAX@Z @ 0x18033A3A0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180125F20 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UIPrivilegedOperationsConsumer@@UIXamlExplorerHost@@UIXamlExplorerHostWindowStatics@XamlExplorerHost@Shell@Internal@Windows@ABI@@UIXamlExplorerHostChildWindowStatics@89Internal@Windows@ABI@@UIXamlExplorerHostComponent@89Internal@Windows@ABI@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18013FB90 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImm_ea_18013FB90.c)
 *     ?PerfDataCollectionThread@GamingOverlayExperienceManager@@AEAAJXZ @ 0x1803368A4 (-PerfDataCollectionThread@GamingOverlayExperienceManager@@AEAAJXZ.c)
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
    v2 = *(_QWORD *)(Parameter + 200);
    while ( v2 >= 0 )
    {
      if ( (_DWORD)v2 != 0x7FFFFFFF )
      {
        v3 = v2;
        v2 = _InterlockedCompareExchange64((volatile signed __int64 *)(Parameter + 200), v2 + 1, v2);
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
    v6 = 1066LL;
  }
  else
  {
    v5 = 2147500035LL;
    v6 = 1062LL;
  }
  wil::details::in1diag3::_Log_Hr(
    v4,
    (void *)v6,
    (__int64)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
    (const char *)v5);
LABEL_13:
  if ( Parameter )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,IPrivilegedOperationsConsumer,IXamlExplorerHost,ABI::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostWindowStatics,ABI::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostChildWindowStatics,ABI::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostComponent,Microsoft::WRL::FtmBase>::Release(Parameter);
  return 0LL;
}
