/*
 * XREFs of KeQueryAuxiliaryCounterFrequency @ 0x14056C760
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 */

__int64 KeQueryAuxiliaryCounterFrequency()
{
  return off_140C01D40[0]();
}
