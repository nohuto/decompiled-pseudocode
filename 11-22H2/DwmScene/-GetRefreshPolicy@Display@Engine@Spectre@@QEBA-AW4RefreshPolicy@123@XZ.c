/*
 * XREFs of ?GetRefreshPolicy@Display@Engine@Spectre@@QEBA?AW4RefreshPolicy@123@XZ @ 0x180057978
 * Callers:
 *     ?RenderDisplays@Engine@1Spectre@@IEAAXXZ @ 0x18003633C (-RenderDisplays@Engine@1Spectre@@IEAAXXZ.c)
 * Callees:
 *     ?lock@_Mutex_base@std@@QEAAXXZ @ 0x180011C7C (-lock@_Mutex_base@std@@QEAAXXZ.c)
 */

__int64 __fastcall Spectre::Engine::Display::GetRefreshPolicy(__int64 a1)
{
  struct _Mtx_internal_imp_t *v1; // rbx
  __int64 v2; // rdi

  v1 = (struct _Mtx_internal_imp_t *)(a1 + 128);
  v2 = a1;
  std::_Mutex_base::lock((std::_Mutex_base *)(a1 + 128));
  LODWORD(v2) = *(_DWORD *)(v2 + 32);
  _Mtx_unlock(v1);
  return (unsigned int)v2;
}
