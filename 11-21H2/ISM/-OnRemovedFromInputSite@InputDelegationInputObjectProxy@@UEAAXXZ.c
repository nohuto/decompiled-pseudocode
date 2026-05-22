/*
 * XREFs of ?OnRemovedFromInputSite@InputDelegationInputObjectProxy@@UEAAXXZ @ 0x1801287F0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetForegroundManager@ISMStatics@@SAPEAVForegroundManager@@XZ @ 0x18000BFFC (-GetForegroundManager@ISMStatics@@SAPEAVForegroundManager@@XZ.c)
 *     ?ClearInputDelegation@ForegroundManager@@QEAAXPEAVInputSite@@I@Z @ 0x18008A930 (-ClearInputDelegation@ForegroundManager@@QEAAXPEAVInputSite@@I@Z.c)
 */

void __fastcall InputDelegationInputObjectProxy::OnRemovedFromInputSite(struct InputSite **this)
{
  ForegroundManager *ForegroundManager; // rax
  const char *v3; // r9

  ForegroundManager = ISMStatics::GetForegroundManager();
  ForegroundManager::ClearInputDelegation(ForegroundManager, this[2], *((_DWORD *)this + 8), v3);
  this[2] = 0LL;
}
