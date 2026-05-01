/*
 * XREFs of ?IsPinnable@CPinnedList@@UEAAJPEAUIDataObject@@W4PINNABLEFLAG@@@Z @ 0x180758760
 * Callers:
 *     ?IsPinnable@CPinnedList@@W7EAAJPEAUIDataObject@@W4PINNABLEFLAG@@@Z @ 0x1802ADC90 (-IsPinnable@CPinnedList@@W7EAAJPEAUIDataObject@@W4PINNABLEFLAG@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CPinnedList::IsPinnable(__int64 a1)
{
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 32LL))(a1);
}
