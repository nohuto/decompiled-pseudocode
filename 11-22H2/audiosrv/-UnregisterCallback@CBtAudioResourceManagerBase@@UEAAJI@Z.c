/*
 * XREFs of ?UnregisterCallback@CBtAudioResourceManagerBase@@UEAAJI@Z @ 0x1800FAE40
 * Callers:
 *     <none>
 * Callees:
 *     ?erase@?$_Tree@V?$_Tmap_traits@_KV?$function@$$A6AX_N@Z@std@@U?$less@_K@2@V?$allocator@U?$pair@$$CB_KV?$function@$$A6AX_N@Z@std@@@std@@@2@$0A@@std@@@std@@QEAA_KAEB_K@Z @ 0x1800FB5D0 (-erase@-$_Tree@V-$_Tmap_traits@_KV-$function@$$A6AX_N@Z@std@@U-$less@_K@2@V-$allocator@U-$pair@$.c)
 */

__int64 __fastcall CBtAudioResourceManagerBase::UnregisterCallback(RTL_SRWLOCK *this, unsigned int a2)
{
  RTL_SRWLOCK *v2; // rsi
  __int64 v3; // rbx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = this + 22;
  v3 = a2;
  AcquireSRWLockExclusive(this + 22);
  v6 = v3;
  std::_Tree<std::_Tmap_traits<unsigned __int64,std::function<void (bool)>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,std::function<void (bool)>>>,0>>::erase(
    &this[24],
    &v6);
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
  return 0LL;
}
