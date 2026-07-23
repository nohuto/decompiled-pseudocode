/*
 * XREFs of PspPicoGetContextThreadEx @ 0x1409B5D60
 * Callers:
 *     <none>
 * Callees:
 *     PspGetContextThreadInternal @ 0x1407709C4 (PspGetContextThreadInternal.c)
 */

int __fastcall PspPicoGetContextThreadEx(struct _KTHREAD *a1, __int64 a2, char a3, char a4, char a5)
{
  return PspGetContextThreadInternal(a1, a2, a3, a4, a5 != 0);
}
