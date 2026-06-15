/*
 * XREFs of ??_GCCustomAudioEndpointResourceManagerCache@@UEAAPEAXI@Z @ 0x1800F5830
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180067028 (--3@YAXPEAX_K@Z.c)
 *     ?clear@?$forward_list@V?$com_ptr_t@UIBtAudioResourceManager@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIBtAudioResourceManager@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAXXZ @ 0x1800FB584 (-clear@-$forward_list@V-$com_ptr_t@UIBtAudioResourceManager@@Uerr_returncode_policy@wil@@@wil@@V.c)
 */

CCustomAudioEndpointResourceManagerCache *__fastcall CCustomAudioEndpointResourceManagerCache::`scalar deleting destructor'(
        CCustomAudioEndpointResourceManagerCache *this,
        char a2)
{
  std::forward_list<wil::com_ptr_t<IBtAudioResourceManager,wil::err_returncode_policy>>::clear((char *)this + 24);
  *((_DWORD *)this + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
