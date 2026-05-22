/*
 * XREFs of _Win32kInterop::DoConvergedMTCallback_::_1_::dtor$3 @ 0x1800DFC5D
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall Win32kInterop::DoConvergedMTCallback_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  return std::lock_guard<std::recursive_mutex>::~lock_guard<std::recursive_mutex>((_Mtx_t *)(a2 + 48));
}
