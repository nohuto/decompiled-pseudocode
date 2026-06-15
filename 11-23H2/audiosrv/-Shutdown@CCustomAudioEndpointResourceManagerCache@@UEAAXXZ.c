/*
 * XREFs of ?Shutdown@CCustomAudioEndpointResourceManagerCache@@UEAAXXZ @ 0x1800FAD50
 * Callers:
 *     <none>
 * Callees:
 *     ?clear@?$forward_list@V?$com_ptr_t@UIBtAudioResourceManager@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIBtAudioResourceManager@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAXXZ @ 0x1800FB534 (-clear@-$forward_list@V-$com_ptr_t@UIBtAudioResourceManager@@Uerr_returncode_policy@wil@@@wil@@V.c)
 */

void __fastcall CCustomAudioEndpointResourceManagerCache::Shutdown(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v1; // rdi

  v1 = this + 2;
  AcquireSRWLockExclusive(this + 2);
  std::forward_list<wil::com_ptr_t<IBtAudioResourceManager,wil::err_returncode_policy>>::clear(&this[3]);
  if ( v1 )
    ReleaseSRWLockExclusive(v1);
}
