/*
 * XREFs of ??$invoke@P6AJPEAX@ZAEAPEAX@wistd@@YAJ$$QEAP6AJPEAX@ZAEAPEAX@Z @ 0x1C00346C4
 * Callers:
 *     ?Open@KRegKey@@QEAAJKPEB_WPEAX@Z @ 0x1C01065B8 (-Open@KRegKey@@QEAAJKPEB_WPEAX@Z.c)
 *     ?Open@ExecutionContextKnobCollection@@UEBAJKAEAUKnobTransaction@@@Z @ 0x1C010D8A0 (-Open@ExecutionContextKnobCollection@@UEBAJKAEAUKnobTransaction@@@Z.c)
 *     ?ndisAllocateNumaStripedPages@@YAPEAXXZ @ 0x1C0114288 (-ndisAllocateNumaStripedPages@@YAPEAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0036040 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wistd::invoke<long (*)(void *),void * &>(__int64 (__fastcall **a1)(_QWORD), _QWORD *a2)
{
  return (*a1)(*a2);
}
