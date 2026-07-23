/*
 * XREFs of MiPopulateCfgBitMap @ 0x1407A4B60
 * Callers:
 *     MiMarkPrivateImageCfgBits @ 0x1407A4150 (MiMarkPrivateImageCfgBits.c)
 *     MiCfgMarkValidEntries @ 0x1407A493C (MiCfgMarkValidEntries.c)
 *     MiMarkPrivateOpenCfgBits @ 0x1407A4B24 (MiMarkPrivateOpenCfgBits.c)
 *     MiProcessPatchImageCfg @ 0x140A3B2C8 (MiProcessPatchImageCfg.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140230FD0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     MiVadDeleted @ 0x1402756A0 (MiVadDeleted.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FD0A0 (ExfAcquirePushLockExclusiveEx.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     MiCopyToCfgBitMap @ 0x1406B13B0 (MiCopyToCfgBitMap.c)
 */

__int64 __fastcall MiPopulateCfgBitMap(
        _QWORD *a1,
        unsigned __int64 a2,
        __int64 a3,
        int a4,
        unsigned __int64 a5,
        __int64 a6)
{
  __int64 v6; // r14
  __int128 *v7; // r12
  volatile signed __int32 *v9; // rbx
  unsigned __int64 v11; // rbp
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // r8
  unsigned int v15; // edi
  __int128 v18; // [rsp+58h] [rbp-60h] BYREF
  int v19; // [rsp+68h] [rbp-50h]

  v6 = a1[2];
  v7 = &v18;
  v9 = (volatile signed __int32 *)(v6 + 40);
  v11 = *a1 + ((2 * (a5 >> 4)) >> 3);
  v19 = 0;
  v18 = 0LL;
  if ( a2 <= 1 )
    v7 = 0LL;
  v12 = KeAbPreAcquire(v6 + 40, 0LL);
  v13 = v12;
  if ( _interlockedbittestandset64(v9, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v6 + 40), v12, v6 + 40);
  if ( v13 )
    *(_BYTE *)(v13 + 18) = 1;
  if ( (unsigned int)MiVadDeleted(v6) )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 40));
    KeAbPostRelease(v6 + 40);
    return 3221225738LL;
  }
  else
  {
    v15 = MiCopyToCfgBitMap((__int64)a1, a2, v14, a4, v11, v6, 0, v7, (2 * ((a6 - a5) >> 4)) >> 3);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 40));
    KeAbPostRelease(v6 + 40);
    return v15;
  }
}
