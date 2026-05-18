/*
 * XREFs of ?IsCancelled@SimpleCancellationToken@Internal@Utils@Spectre@@UEBA_NXZ @ 0x1800E02C0
 * Callers:
 *     <none>
 * Callees:
 *     ?lock@_Mutex_base@std@@QEAAXXZ @ 0x180011C7C (-lock@_Mutex_base@std@@QEAAXXZ.c)
 */

bool __fastcall Spectre::Utils::Internal::SimpleCancellationToken::IsCancelled(
        Spectre::Utils::Internal::SimpleCancellationToken *this)
{
  struct _Mtx_internal_imp_t *v1; // rbx
  Spectre::Utils::Internal::SimpleCancellationToken *v2; // rdi

  v1 = (Spectre::Utils::Internal::SimpleCancellationToken *)((char *)this + 8);
  v2 = this;
  std::_Mutex_base::lock((Spectre::Utils::Internal::SimpleCancellationToken *)((char *)this + 8));
  LOBYTE(v2) = *((_BYTE *)v2 + 112);
  _Mtx_unlock(v1);
  return (char)v2;
}
