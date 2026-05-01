/*
 * XREFs of ??$Make@VAppViewTitleChangeListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VAppViewTitleChangeListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@@12@XZ @ 0x1800A8830
 * Callers:
 *     ?StartAppViewTitleChangeListener@TaskFlowImmersiveShellBroker@@AEAAJXZ @ 0x1800A86F0 (-StartAppViewTitleChangeListener@TaskFlowImmersiveShellBroker@@AEAAJXZ.c)
 * Callees:
 *     ?Attach@?$ComPtr@VAppViewTitleChangeListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@@WRL@Microsoft@@QEAAXPEAVAppViewTitleChangeListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@@Z @ 0x1800A8890 (-Attach@-$ComPtr@VAppViewTitleChangeListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@.c)
 *     ??0AppViewTitleChangeListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@QEAA@XZ @ 0x1800A88C4 (--0AppViewTitleChangeListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x180188F60 (memset_0.c)
 */

_QWORD *__fastcall Microsoft::WRL::Details::Make<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListenerFactory,>(
        _QWORD *a1)
{
  Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListenerFactory *v2; // rax
  Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListenerFactory *v3; // rdi
  __int64 v4; // rax

  *a1 = 0LL;
  v2 = (Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListenerFactory *)operator new(
                                                                                              0x60uLL,
                                                                                              (const struct std::nothrow_t *)&std::nothrow);
  v3 = v2;
  if ( v2 )
  {
    memset_0(v2, 0, 0x60uLL);
    v4 = Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListenerFactory::AppViewTitleChangeListenerFactory(v3);
    Microsoft::WRL::ComPtr<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListenerFactory>::Attach(
      a1,
      v4);
  }
  return a1;
}
