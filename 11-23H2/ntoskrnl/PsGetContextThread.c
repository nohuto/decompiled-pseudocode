/*
 * XREFs of PsGetContextThread @ 0x1408A5DC0
 * Callers:
 *     <none>
 * Callees:
 *     PspGetContextThreadInternal @ 0x1407709C4 (PspGetContextThreadInternal.c)
 */

int __fastcall PsGetContextThread(struct _KTHREAD *a1, __int64 a2, char a3)
{
  return PspGetContextThreadInternal(a1, a2, a3, a3, 1);
}
