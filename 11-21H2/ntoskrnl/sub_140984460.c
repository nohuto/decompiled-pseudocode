/*
 * XREFs of sub_140984460 @ 0x140984460
 * Callers:
 *     sub_14069BF4C @ 0x14069BF4C (sub_14069BF4C.c)
 *     sub_14069D254 @ 0x14069D254 (sub_14069D254.c)
 *     sub_1406A1350 @ 0x1406A1350 (sub_1406A1350.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 */

void __fastcall sub_140984460(__int64 *a1, struct _EX_RUNDOWN_REF *a2, __int64 a3, char a4)
{
  ULONG_PTR v8; // rsi
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v10; // rdx
  __int64 **v11; // rax

  if ( a2 == (struct _EX_RUNDOWN_REF *)_InterlockedCompareExchange64(a1 + 2, 2LL, (signed __int64)a2) )
  {
    v8 = (ULONG_PTR)&a2[2];
    if ( !a4 )
    {
      CurrentThread = KeGetCurrentThread();
      --*((_WORD *)CurrentThread + 242);
      ExAcquirePushLockExclusiveEx(v8, 0LL);
    }
    v10 = (__int64 *)*a1;
    if ( *(__int64 **)(*a1 + 8) != a1 || (v11 = (__int64 **)a1[1], *v11 != a1) )
      __fastfail(3u);
    *v11 = v10;
    v10[1] = (__int64)v11;
    if ( !a4 )
    {
      ExReleasePushLockEx(v8, 0LL);
      KeLeaveCriticalRegion();
    }
    sub_1402AD030(a2 + 3);
    a1[2] = a3;
  }
}
