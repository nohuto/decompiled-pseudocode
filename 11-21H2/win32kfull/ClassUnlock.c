/*
 * XREFs of ClassUnlock @ 0x1C01E3888
 * Callers:
 *     _lambda_fcfb12fcc043a8c73fe9205729fe4b4e_::operator() @ 0x1C015C28C (_lambda_fcfb12fcc043a8c73fe9205729fe4b4e_--operator().c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     ?ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z @ 0x1C00FF710 (-ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z.c)
 */

struct _CALLPROCDATA **__fastcall ClassUnlock(struct _CALLPROCDATA **a1, _QWORD *a2)
{
  *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 16) = *a2;
  return ClassUnlockWorker(a1);
}
