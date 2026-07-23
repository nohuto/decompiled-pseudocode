/*
 * XREFs of PsSetContextThread @ 0x1409B1B30
 * Callers:
 *     <none>
 * Callees:
 *     sub_1407043D0 @ 0x1407043D0 (sub_1407043D0.c)
 */

int __fastcall PsSetContextThread(struct _KTHREAD *a1, __int64 a2, char a3)
{
  return sub_1407043D0(a1, a2, a3, a3, 1);
}
