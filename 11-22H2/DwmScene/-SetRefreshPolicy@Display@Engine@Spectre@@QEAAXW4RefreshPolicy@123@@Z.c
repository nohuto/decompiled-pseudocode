/*
 * XREFs of ?SetRefreshPolicy@Display@Engine@Spectre@@QEAAXW4RefreshPolicy@123@@Z @ 0x1800582D4
 * Callers:
 *     ?RuntimeClassInitialize@SpectreRenderer@@QEAAJAEBUDwmSceneRendererDesc@@@Z @ 0x1800195D8 (-RuntimeClassInitialize@SpectreRenderer@@QEAAJAEBUDwmSceneRendererDesc@@@Z.c)
 * Callees:
 *     ?lock@_Mutex_base@std@@QEAAXXZ @ 0x180011C7C (-lock@_Mutex_base@std@@QEAAXXZ.c)
 */

int __fastcall Spectre::Engine::Display::SetRefreshPolicy(__int64 a1)
{
  struct _Mtx_internal_imp_t *v1; // rbx

  v1 = (struct _Mtx_internal_imp_t *)(a1 + 128);
  std::_Mutex_base::lock((std::_Mutex_base *)(a1 + 128));
  *(_DWORD *)(a1 + 32) = 0;
  return _Mtx_unlock(v1);
}
