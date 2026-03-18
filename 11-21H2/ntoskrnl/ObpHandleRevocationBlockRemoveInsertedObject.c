/*
 * XREFs of ObpHandleRevocationBlockRemoveInsertedObject @ 0x140984460
 * Callers:
 *     ObDestroyHandleRevocationBlock @ 0x14069BF4C (ObDestroyHandleRevocationBlock.c)
 *     ObRevokeHandles @ 0x14069D254 (ObRevokeHandles.c)
 *     ObpHandleRevocationBlockRemoveObject @ 0x1406A1350 (ObpHandleRevocationBlockRemoveObject.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleaseRundownProtection @ 0x1402AD030 (ExReleaseRundownProtection.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 */

void __fastcall ObpHandleRevocationBlockRemoveInsertedObject(
        __int64 *a1,
        struct _EX_RUNDOWN_REF *a2,
        __int64 a3,
        char a4)
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
      --CurrentThread->KernelApcDisable;
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
    ExReleaseRundownProtection(a2 + 3);
    a1[2] = a3;
  }
}
