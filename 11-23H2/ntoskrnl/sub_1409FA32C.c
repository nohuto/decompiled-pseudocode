/*
 * XREFs of sub_1409FA32C @ 0x1409FA32C
 * Callers:
 *     SLUpdateLicenseDataInternal @ 0x1409FA924 (SLUpdateLicenseDataInternal.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F7F0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockSharedEx @ 0x140230E80 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1402BDAF0 (ExfReleasePushLockShared.c)
 *     ZwClose @ 0x14041B2D0 (ZwClose.c)
 *     ZwSetValueKey @ 0x14041BCF0 (ZwSetValueKey.c)
 *     SpRegOpenRedirectedKey @ 0x14085DC10 (SpRegOpenRedirectedKey.c)
 */

__int64 __fastcall sub_1409FA32C(__int64 a1)
{
  signed __int64 *v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  struct _KTHREAD *CurrentThread; // [rsp+30h] [rbp-28h]
  char v7; // [rsp+68h] [rbp+10h]
  int v8; // [rsp+70h] [rbp+18h]
  HANDLE KeyHandle; // [rsp+78h] [rbp+20h] BYREF

  v8 = 0;
  KeyHandle = 0LL;
  v7 = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v2 = (signed __int64 *)(a1 + 46840);
  ExAcquirePushLockSharedEx(a1 + 46840, 0LL);
  if ( *(_QWORD *)(a1 + 46832) )
  {
    v8 = SpRegOpenRedirectedKey(v4, v3, &KeyHandle);
    if ( v8 >= 0 )
    {
      v7 = 1;
      v8 = ZwSetValueKey(
             KeyHandle,
             (PUNICODE_STRING)&stru_140A78B70,
             0,
             3u,
             *(PVOID *)(a1 + 46832),
             **(_DWORD **)(a1 + 46832));
    }
  }
  if ( _InterlockedCompareExchange64(v2, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v2);
  KeAbPostRelease((ULONG_PTR)v2);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v7 == 1 )
    ZwClose(KeyHandle);
  return (unsigned int)v8;
}
