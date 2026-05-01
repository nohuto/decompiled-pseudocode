/*
 * XREFs of ?DisableLightDismissRequested@CInsightsExperienceManager@@AEAAXXZ @ 0x18038512C
 * Callers:
 *     ?OnEventQueued@CInsightsExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180385880 (-OnEventQueued@CInsightsExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@P.c)
 * Callees:
 *     ?UnregisterWithLightDismiss@SingleViewLightDismissHelper@@QEAAXXZ @ 0x18002555C (-UnregisterWithLightDismiss@SingleViewLightDismissHelper@@QEAAXXZ.c)
 *     ?CreateAltTabProxyWindow@CInsightsExperienceManager@@AEAAXXZ @ 0x180384F58 (-CreateAltTabProxyWindow@CInsightsExperienceManager@@AEAAXXZ.c)
 */

void __fastcall CInsightsExperienceManager::DisableLightDismissRequested(
        CInsightsExperienceManager *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2)
{
  HWND v3; // rcx

  if ( *((_BYTE *)this + 296) )
  {
    SingleViewLightDismissHelper::UnregisterWithLightDismiss((CInsightsExperienceManager *)((char *)this + 280));
    *((_BYTE *)this + 296) = 0;
  }
  if ( !*((_QWORD *)this + 40) )
  {
    CInsightsExperienceManager::CreateAltTabProxyWindow(this, a2);
    v3 = (HWND)*((_QWORD *)this + 40);
    if ( v3 )
      ShowWindow(v3, 4);
  }
}
