/*
 * XREFs of ?GetProcessId@InputDelegationInputObjectProxy@@UEAAKXZ @ 0x180071A50
 * Callers:
 *     ?OnRemovedFromInputSite@InputDelegationInputObjectProxy@@UEAAXXZ @ 0x180151040 (-OnRemovedFromInputSite@InputDelegationInputObjectProxy@@UEAAXXZ.c)
 * Callees:
 *     ?GetProcessId@BaseBamoPeer@Bamo@Microsoft@@QEBAIXZ @ 0x180110FC4 (-GetProcessId@BaseBamoPeer@Bamo@Microsoft@@QEBAIXZ.c)
 */

__int64 __fastcall InputDelegationInputObjectProxy::GetProcessId(InputDelegationInputObjectProxy *this)
{
  __int64 v1; // rbx
  __int64 v2; // rax

  v1 = *((_QWORD *)this + 3);
  if ( !*(_DWORD *)(v1 + 40) )
  {
    v2 = *(_QWORD *)(v1 + 488);
    if ( v2 != *(_QWORD *)(v1 + 496) )
      *(_DWORD *)(v1 + 40) = Microsoft::Bamo::BaseBamoPeer::GetProcessId(*(Microsoft::Bamo::BaseBamoPeer **)(*(_QWORD *)(*(_QWORD *)v2 + 32LL) + 16LL));
  }
  return *(unsigned int *)(v1 + 40);
}
