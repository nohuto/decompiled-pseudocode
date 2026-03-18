/*
 * XREFs of ?_RemoveAndReenumerateSelf@FxPkgPdo@@CAXPEAX@Z @ 0x1C0069EC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall FxPkgPdo::_RemoveAndReenumerateSelf(void *Context)
{
  KeGetCurrentIrql();
  (*(void (__fastcall **)(void *))(*(_QWORD *)Context + 264LL))(Context);
}
