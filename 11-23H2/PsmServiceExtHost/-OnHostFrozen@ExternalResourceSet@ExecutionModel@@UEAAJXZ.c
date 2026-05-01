/*
 * XREFs of ?OnHostFrozen@ExternalResourceSet@ExecutionModel@@UEAAJXZ @ 0x18008B5B0
 * Callers:
 *     <none>
 * Callees:
 *     ?CancelWatchdogTimer@ExternalResourceSet@ExecutionModel@@AEAAXXZ @ 0x18003AE5C (-CancelWatchdogTimer@ExternalResourceSet@ExecutionModel@@AEAAXXZ.c)
 *     ?RunWatchdog@ExternalResourceSet@ExecutionModel@@AEAAXXZ @ 0x18008B70C (-RunWatchdog@ExternalResourceSet@ExecutionModel@@AEAAXXZ.c)
 */

__int64 __fastcall ExecutionModel::ExternalResourceSet::OnHostFrozen(ExecutionModel::ExternalResourceSet *this)
{
  ExecutionModel::ExternalResourceSet::CancelWatchdogTimer(this);
  ExecutionModel::ExternalResourceSet::RunWatchdog(this);
  return 0LL;
}
