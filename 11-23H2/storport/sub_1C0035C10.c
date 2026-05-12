/*
 * XREFs of sub_1C0035C10 @ 0x1C0035C10
 * Callers:
 *     DoScreenSave @ 0x1C0034BE8 (DoScreenSave.c)
 *     sub_1C004EBE0 @ 0x1C004EBE0 (sub_1C004EBE0.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall sub_1C0035C10(__int64 a1, char a2)
{
  struct _KTIMER *v2; // rdi
  struct _KDPC *Dpc; // rsi

  v2 = (struct _KTIMER *)(a1 + 5704);
  Dpc = (struct _KDPC *)(a1 + 5768);
  if ( !a2 )
  {
    KeInitializeTimer(v2);
    KeInitializeDpc(Dpc, sub_1C0037720, *(PVOID *)(a1 + 8));
  }
  return KeSetCoalescableTimer(v2, (LARGE_INTEGER)-18000000000LL, 0x1B7740u, 0xEA60u, Dpc);
}
