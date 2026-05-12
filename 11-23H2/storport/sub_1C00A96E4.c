/*
 * XREFs of sub_1C00A96E4 @ 0x1C00A96E4
 * Callers:
 *     StorPortInitialize @ 0x1C00428F0 (StorPortInitialize.c)
 * Callees:
 *     memset_0 @ 0x1C0024D40 (memset_0.c)
 *     sub_1C0048058 @ 0x1C0048058 (sub_1C0048058.c)
 */

__int64 (__fastcall *__fastcall sub_1C00A96E4(KSPIN_LOCK *a1))(__int64 a1)
{
  memset_0(a1, 0, 0x70uLL);
  *(_DWORD *)a1 = 1146246738;
  a1[13] = (KSPIN_LOCK)(a1 + 12);
  a1[12] = (KSPIN_LOCK)(a1 + 12);
  a1[8] = (KSPIN_LOCK)(a1 + 7);
  a1[7] = (KSPIN_LOCK)(a1 + 7);
  KeInitializeSpinLock(a1 + 10);
  return sub_1C0048058();
}
