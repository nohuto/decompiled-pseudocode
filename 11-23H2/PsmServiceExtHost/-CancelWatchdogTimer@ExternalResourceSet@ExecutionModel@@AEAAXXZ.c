/*
 * XREFs of ?CancelWatchdogTimer@ExternalResourceSet@ExecutionModel@@AEAAXXZ @ 0x18003AE5C
 * Callers:
 *     ?ReleaseResourcesWithoutNotify@ExternalResourceSet@ExecutionModel@@QEAAXXZ @ 0x18003ADCC (-ReleaseResourcesWithoutNotify@ExternalResourceSet@ExecutionModel@@QEAAXXZ.c)
 *     ?OnHostFrozen@ExternalResourceSet@ExecutionModel@@UEAAJXZ @ 0x18008B5B0 (-OnHostFrozen@ExternalResourceSet@ExecutionModel@@UEAAJXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180053500 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall ExecutionModel::ExternalResourceSet::CancelWatchdogTimer(ExecutionModel::ExternalResourceSet *this)
{
  if ( (unsigned int)TpSetTimerEx(*((_QWORD *)this + 168), 0LL, 0LL, 0LL) )
  {
    *((_DWORD *)this + 338) &= ~8u;
    (*(void (__fastcall **)(ExecutionModel::ExternalResourceSet *))(*(_QWORD *)this + 16LL))(this);
  }
}
