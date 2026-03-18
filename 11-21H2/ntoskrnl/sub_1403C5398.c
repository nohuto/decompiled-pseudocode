/*
 * XREFs of sub_1403C5398 @ 0x1403C5398
 * Callers:
 *     SLQueryLicenseValueInternal @ 0x14082D870 (SLQueryLicenseValueInternal.c)
 *     ExpConsumeAddonPolicySetCacheProvider @ 0x1409F9A60 (ExpConsumeAddonPolicySetCacheProvider.c)
 *     SLGetSubscriptionPfn @ 0x1409FA388 (SLGetSubscriptionPfn.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     sub_14082DD70 @ 0x14082DD70 (sub_14082DD70.c)
 */

__int64 __fastcall sub_1403C5398(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6)
{
  signed __int64 *v10; // rsi
  _DWORD *v11; // rax
  unsigned int v13; // [rsp+30h] [rbp-38h]
  struct _KTHREAD *CurrentThread; // [rsp+40h] [rbp-28h]

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v10 = (signed __int64 *)(a1 + 46840);
  ExAcquirePushLockSharedEx(a1 + 46840, 0LL);
  if ( *(_BYTE *)(a1 + 46828) == 1 && !*(_DWORD *)(a1 + 46824) )
    goto LABEL_7;
  v11 = *(_DWORD **)a1;
  if ( *(_QWORD *)a1 || (v11 = *(_DWORD **)(a1 + 46832)) != 0LL )
  {
    if ( *v11 != 24 )
    {
      if ( *v11 >= 0x18u )
      {
        v13 = sub_14082DD70(a1, a2, a3, a4, a5, a6);
        goto LABEL_10;
      }
      goto LABEL_9;
    }
LABEL_7:
    v13 = -1073741772;
    goto LABEL_10;
  }
LABEL_9:
  v13 = -1073741762;
LABEL_10:
  if ( _InterlockedCompareExchange64(v10, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v10);
  KeAbPostRelease((ULONG_PTR)v10);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v13;
}
