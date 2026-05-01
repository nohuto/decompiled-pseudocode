/*
 * XREFs of ??$Make@VAppViewTitleChangeListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VAppViewTitleChangeListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@@12@XZ @ 0x180499D94
 * Callers:
 *     ?StartAppViewTitleChangeListener@TaskFlowImmersiveShellBroker@@AEAAJXZ @ 0x1804A1654 (-StartAppViewTitleChangeListener@TaskFlowImmersiveShellBroker@@AEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     ??0AppViewTitleChangeListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@QEAA@XZ @ 0x18049B3E4 (--0AppViewTitleChangeListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@QEAA@XZ.c)
 *     ?Attach@?$ComPtr@VAppViewTitleChangeListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@@WRL@Microsoft@@QEAAXPEAVAppViewTitleChangeListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@@Z @ 0x18049C728 (-Attach@-$ComPtr@VAppViewTitleChangeListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@.c)
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
