/*
 * XREFs of PsSetContextThread @ 0x1409B40A0
 * Callers:
 *     <none>
 * Callees:
 *     PspSetContextThreadInternal @ 0x140770B00 (PspSetContextThreadInternal.c)
 */

int __fastcall PsSetContextThread(struct _KTHREAD *a1, __int64 a2, char a3)
{
  return PspSetContextThreadInternal(a1, a2, a3, a3, 1);
}
