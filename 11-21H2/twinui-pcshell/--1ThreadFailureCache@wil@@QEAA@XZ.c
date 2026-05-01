/*
 * XREFs of ??1ThreadFailureCache@wil@@QEAA@XZ @ 0x1805E0A48
 * Callers:
 *     __lambda_711bfd1af15e27d1f27b55343e53885b_::operator()_::_1_::dtor$1 @ 0x1805E0DC5 (__lambda_711bfd1af15e27d1f27b55343e53885b_--operator()_--_1_--dtor$1.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18007C118 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 */

void __fastcall wil::ThreadFailureCache::~ThreadFailureCache(volatile signed __int32 **this)
{
  wil::details::ThreadFailureCallbackHolder *v2; // rcx

  v2 = (wil::details::ThreadFailureCallbackHolder *)(this + 22);
  if ( *((_DWORD *)v2 + 6) )
    wil::details::ThreadFailureCallbackHolder::StopWatching(v2);
  wil::details::shared_buffer::reset(this + 20);
}
