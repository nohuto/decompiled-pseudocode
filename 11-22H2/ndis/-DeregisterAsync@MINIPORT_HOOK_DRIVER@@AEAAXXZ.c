/*
 * XREFs of ?DeregisterAsync@MINIPORT_HOOK_DRIVER@@AEAAXXZ @ 0x1C013DC80
 * Callers:
 *     <none>
 * Callees:
 *     ?Deregister@MINIPORT_HOOK_DRIVER@@QEAAPEAXXZ @ 0x1C013DBD8 (-Deregister@MINIPORT_HOOK_DRIVER@@QEAAPEAXXZ.c)
 */

void __fastcall MINIPORT_HOOK_DRIVER::DeregisterAsync(struct _EX_RUNDOWN_REF *this)
{
  void *v1; // rax

  v1 = (void *)MINIPORT_HOOK_DRIVER::Deregister(this);
  NmrClientDetachProviderComplete(v1);
}
