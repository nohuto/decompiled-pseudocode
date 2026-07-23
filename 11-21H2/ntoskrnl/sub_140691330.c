/*
 * XREFs of sub_140691330 @ 0x140691330
 * Callers:
 *     sub_140690FEC @ 0x140690FEC (sub_140690FEC.c)
 *     sub_1407F6200 @ 0x1407F6200 (sub_1407F6200.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_1407F7018 @ 0x1407F7018 (sub_1407F7018.c)
 */

char __fastcall sub_140691330(_QWORD *P)
{
  signed __int64 v2; // rax
  signed __int64 i; // rdx
  signed __int64 v4; // rtt
  struct _KTHREAD *CurrentThread; // rax

  _m_prefetchw(P + 2);
  v2 = P[2];
  for ( i = v2 - 1; i > 0; i = v2 - 1 )
  {
    v4 = v2;
    v2 = _InterlockedCompareExchange64(P + 2, i, v2);
    if ( v4 == v2 )
      return v2;
  }
  if ( i )
    __fastfail(0xEu);
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C48CF8, 0LL);
  sub_1407F7018(P);
  ExReleasePushLockEx((ULONG_PTR)&qword_140C48CF8, 0LL);
  LOBYTE(v2) = sub_1402F9540((__int64)KeGetCurrentThread());
  return v2;
}
