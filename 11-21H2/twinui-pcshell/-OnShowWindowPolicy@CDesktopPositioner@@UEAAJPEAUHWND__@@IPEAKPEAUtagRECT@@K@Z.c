/*
 * XREFs of ?OnShowWindowPolicy@CDesktopPositioner@@UEAAJPEAUHWND__@@IPEAKPEAUtagRECT@@K@Z @ 0x1804FB760
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_ShellWindowingShowMaximized@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18015AF38 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_ShellWindowingShowMaximized@@@details@wil.c)
 *     ?IsOperableWindow@@YA_NPEAUHWND__@@@Z @ 0x1804B36F8 (-IsOperableWindow@@YA_NPEAUHWND__@@@Z.c)
 */

__int64 __fastcall CDesktopPositioner::OnShowWindowPolicy(
        CDesktopPositioner *this,
        HWND a2,
        __int64 a3,
        unsigned int *a4,
        struct tagRECT *a5)
{
  unsigned int v6; // edi
  int v8; // eax

  v6 = a3;
  *a4 = 0;
  *a5 = 0LL;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_ShellWindowingShowMaximized>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_ShellWindowingShowMaximized>::GetImpl'::`2'::impl,
    1u,
    a3,
    (__int64)a4);
  if ( v6 <= 0xA )
  {
    v8 = 1330;
    if ( _bittest(&v8, v6) )
    {
      if ( IsOperableWindow(a2) )
        *a4 = 2;
    }
  }
  return 0LL;
}
