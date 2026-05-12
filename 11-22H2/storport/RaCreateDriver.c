/*
 * XREFs of RaCreateDriver @ 0x1C00A8514
 * Callers:
 *     StorPortInitialize @ 0x1C0042320 (StorPortInitialize.c)
 * Callees:
 *     memset_0 @ 0x1C0023980 (memset_0.c)
 *     StorSetFunctionExtensionTable @ 0x1C0047A88 (StorSetFunctionExtensionTable.c)
 */

__int64 (__fastcall *__fastcall RaCreateDriver(KSPIN_LOCK *a1))(__int64 a1)
{
  memset_0(a1, 0, 0x70uLL);
  *(_DWORD *)a1 = 1146246738;
  a1[13] = (KSPIN_LOCK)(a1 + 12);
  a1[12] = (KSPIN_LOCK)(a1 + 12);
  a1[8] = (KSPIN_LOCK)(a1 + 7);
  a1[7] = (KSPIN_LOCK)(a1 + 7);
  KeInitializeSpinLock(a1 + 10);
  return StorSetFunctionExtensionTable();
}
