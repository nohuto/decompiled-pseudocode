/*
 * XREFs of ExInitializeFastOwnerEntry2 @ 0x14041371C
 * Callers:
 *     ExInitializeFastOwnerEntry @ 0x14033CB80 (ExInitializeFastOwnerEntry.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041EA50 (KeBugCheckEx.c)
 */

struct _KTHREAD *__fastcall ExInitializeFastOwnerEntry2(__int64 a1)
{
  unsigned __int8 CurrentIrql; // al
  struct _KTHREAD *result; // rax

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > 2u )
    KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 2uLL, 0LL);
  *(_OWORD *)a1 = 0LL;
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  result = KeGetCurrentThread();
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
