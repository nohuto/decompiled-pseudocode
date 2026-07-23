/*
 * XREFs of sub_14069D2C0 @ 0x14069D2C0
 * Callers:
 *     sub_14069C820 @ 0x14069C820 (sub_14069C820.c)
 *     sub_14069CE84 @ 0x14069CE84 (sub_14069CE84.c)
 *     sub_1407CB6C0 @ 0x1407CB6C0 (sub_1407CB6C0.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     sub_140347DB0 @ 0x140347DB0 (sub_140347DB0.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     sub_14069C9C0 @ 0x14069C9C0 (sub_14069C9C0.c)
 */

volatile signed __int64 *__fastcall sub_14069D2C0(_QWORD *a1)
{
  char *v2; // rax
  struct _KTHREAD *CurrentThread; // rdx
  signed __int64 *v4; // rdi
  volatile signed __int64 *v5; // rbx
  struct _KTHREAD *v6; // rcx
  bool v7; // zf
  signed __int64 v9; // rax
  signed __int64 v10; // rtt

  v2 = (char *)sub_140347DB0();
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 243);
  v4 = (signed __int64 *)(v2 + 120);
  ExAcquirePushLockSharedEx((ULONG_PTR)(v2 + 120), 0LL);
  v5 = (volatile signed __int64 *)(*a1 & 0xFFFFFFFFFFFFFFF0uLL);
  if ( v5 )
  {
    if ( _InterlockedExchangeAdd64(v5 + 30, 0xFuLL) <= 0 )
      __fastfail(0xEu);
    _m_prefetchw(a1);
    v9 = *a1;
    while ( (unsigned __int64)(v9 & 0xF) + 14 <= 0xF && v5 == (volatile signed __int64 *)(v9 & 0xFFFFFFFFFFFFFFF0uLL) )
    {
      v10 = v9;
      v9 = _InterlockedCompareExchange64(a1, v9 + 14, v9);
      if ( v10 == v9 )
        goto LABEL_2;
    }
    sub_14069C9C0(v5, 0xEu);
  }
LABEL_2:
  if ( _InterlockedCompareExchange64(v4, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v4);
  sub_1402AFC00((ULONG_PTR)v4);
  v6 = KeGetCurrentThread();
  v7 = (*((_WORD *)v6 + 243))++ == 0xFFFF;
  if ( v7 && *((struct _KTHREAD **)v6 + 19) != (struct _KTHREAD *)((char *)v6 + 152) )
    KiCheckForKernelApcDelivery();
  return v5;
}
