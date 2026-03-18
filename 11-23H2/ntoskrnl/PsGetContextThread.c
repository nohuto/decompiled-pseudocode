/*
 * XREFs of PsGetContextThread @ 0x1408A5B70
 * Callers:
 *     <none>
 * Callees:
 *     PspGetContextThreadInternal @ 0x1407707D4 (PspGetContextThreadInternal.c)
 */

__int64 __fastcall PsGetContextThread(struct _KTHREAD *a1, __int64 a2, char a3)
{
  return PspGetContextThreadInternal(a1, a2, a3, a3, 1);
}
