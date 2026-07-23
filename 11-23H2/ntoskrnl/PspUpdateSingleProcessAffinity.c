/*
 * XREFs of PspUpdateSingleProcessAffinity @ 0x1409AFE00
 * Callers:
 *     PsUpdateActiveProcessAffinity @ 0x1409AE9A4 (PsUpdateActiveProcessAffinity.c)
 *     PspSetProcessAffinityUpdateMode @ 0x1409AFC18 (PspSetProcessAffinityUpdateMode.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140230E80 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1402BDAF0 (ExfReleasePushLockShared.c)
 *     PspWritePebAffinityInfo @ 0x1407A28EC (PspWritePebAffinityInfo.c)
 *     PspSetProcessAffinitySafe @ 0x1409AFAC0 (PspSetProcessAffinitySafe.c)
 */

void __fastcall PspUpdateSingleProcessAffinity(__int64 a1, __int64 a2, unsigned __int16 *a3)
{
  signed __int64 *v6; // rbx
  int v7; // esi
  int v8; // [rsp+68h] [rbp+10h] BYREF

  if ( (*(_DWORD *)(a2 + 1120) & 0x80000) != 0 )
  {
    v6 = (signed __int64 *)(a2 + 1080);
    v8 = 0;
    v7 = 0;
    ExAcquirePushLockSharedEx(a2 + 1080, 0LL);
    if ( (*(_DWORD *)(a2 + 1120) & 0x80000) != 0 )
      v7 = PspSetProcessAffinitySafe(a2, 2, a3, 0LL, &v8);
    if ( _InterlockedCompareExchange64(v6, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v6);
    KeAbPostRelease((ULONG_PTR)v6);
    if ( v7 >= 0 )
    {
      if ( v8 )
        PspWritePebAffinityInfo(a1, a2);
    }
  }
}
