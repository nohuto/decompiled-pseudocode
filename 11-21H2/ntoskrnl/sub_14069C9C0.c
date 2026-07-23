/*
 * XREFs of sub_14069C9C0 @ 0x14069C9C0
 * Callers:
 *     sub_14069B8FC @ 0x14069B8FC (sub_14069B8FC.c)
 *     sub_14069BBC0 @ 0x14069BBC0 (sub_14069BBC0.c)
 *     sub_14069BDD0 @ 0x14069BDD0 (sub_14069BDD0.c)
 *     sub_14069C07C @ 0x14069C07C (sub_14069C07C.c)
 *     sub_14069C104 @ 0x14069C104 (sub_14069C104.c)
 *     sub_14069C7C0 @ 0x14069C7C0 (sub_14069C7C0.c)
 *     sub_14069CAE8 @ 0x14069CAE8 (sub_14069CAE8.c)
 *     sub_14069CC40 @ 0x14069CC40 (sub_14069CC40.c)
 *     sub_14069D2C0 @ 0x14069D2C0 (sub_14069D2C0.c)
 *     sub_1407CB6C0 @ 0x1407CB6C0 (sub_1407CB6C0.c)
 *     sub_140983EC0 @ 0x140983EC0 (sub_140983EC0.c)
 *     sub_140A349B0 @ 0x140A349B0 (sub_140A349B0.c)
 * Callees:
 *     sub_140204738 @ 0x140204738 (sub_140204738.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_14069C07C @ 0x14069C07C (sub_14069C07C.c)
 */

void __fastcall sub_14069C9C0(volatile signed __int64 *P, unsigned int a2)
{
  volatile signed __int64 *v3; // rdi
  signed __int64 v4; // rax
  __int64 v5; // rbp
  signed __int64 i; // r8
  signed __int64 v7; // rtt
  char *v8; // rax
  struct _KTHREAD *CurrentThread; // rcx
  volatile signed __int64 *v10; // rsi
  __int64 v11; // rax
  struct _KTHREAD *v12; // rax
  bool v13; // zf

  v3 = P;
  _m_prefetchw((const void *)(P + 30));
  v4 = *((_QWORD *)P + 30);
  v5 = a2;
  for ( i = v4 - a2; i > 0; i = v4 - a2 )
  {
    v7 = v4;
    v4 = _InterlockedCompareExchange64(P + 30, i, v4);
    if ( v7 == v4 )
      return;
  }
  if ( i )
    __fastfail(0xEu);
  v8 = (char *)sub_140204738(*((_QWORD *)P + 2));
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 243);
  v10 = (volatile signed __int64 *)(v8 + 120);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)(v8 + 120), 0LL);
  v11 = _InterlockedExchangeAdd64(v3 + 30, -a2) - v5;
  if ( v11 > 0 )
  {
    v3 = 0LL;
  }
  else
  {
    if ( v11 )
      __fastfail(0xEu);
    *(_QWORD *)(*v3 + 304) = 0LL;
  }
  if ( (_InterlockedExchangeAdd64(v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v10);
  sub_1402AFC00((ULONG_PTR)v10);
  v12 = KeGetCurrentThread();
  v13 = (*((_WORD *)v12 + 243))++ == 0xFFFF;
  if ( v13 && *((struct _KTHREAD **)v12 + 19) != (struct _KTHREAD *)((char *)v12 + 152) )
    KiCheckForKernelApcDelivery();
  if ( v3 )
    sub_14069C07C((char *)v3);
}
