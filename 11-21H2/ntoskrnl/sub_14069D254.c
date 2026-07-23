/*
 * XREFs of sub_14069D254 @ 0x14069D254
 * Callers:
 *     sub_14069BDD0 @ 0x14069BDD0 (sub_14069BDD0.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_140984460 @ 0x140984460 (sub_140984460.c)
 */

char __fastcall sub_14069D254(_QWORD **a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // r9
  _QWORD *v4; // rdi
  _QWORD *v6; // rcx

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)(a1 + 2), 0LL);
  v4 = *a1;
  while ( v4 != a1 )
  {
    v6 = v4;
    LOBYTE(v3) = 1;
    v4 = (_QWORD *)*v4;
    sub_140984460(v6, a1, 1LL, v3);
  }
  ExReleasePushLockEx((ULONG_PTR)(a1 + 2), 0LL);
  return sub_1402F9540((__int64)KeGetCurrentThread());
}
