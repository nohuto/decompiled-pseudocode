/*
 * XREFs of MiReturnImageBase @ 0x140721EA0
 * Callers:
 *     MiCheckControlArea @ 0x14029FE50 (MiCheckControlArea.c)
 *     MiRelocateImageAgain @ 0x1406AA700 (MiRelocateImageAgain.c)
 *     MiFreeRelocations @ 0x140A48368 (MiFreeRelocations.c)
 * Callees:
 *     MiGetImageBitMapInfo @ 0x1402106D4 (MiGetImageBitMapInfo.c)
 *     KeAbPreAcquire @ 0x140230FD0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     RtlClearBitsEx @ 0x14028BDB0 (RtlClearBitsEx.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FD0A0 (ExfAcquirePushLockExclusiveEx.c)
 *     KiCheckForKernelApcDelivery @ 0x14030FAB0 (KiCheckForKernelApcDelivery.c)
 *     MiZeroCfgSystemWideBitmap @ 0x1403483A0 (MiZeroCfgSystemWideBitmap.c)
 *     MiReturnSystemImageAddress @ 0x140698C68 (MiReturnSystemImageAddress.c)
 */

void __fastcall MiReturnImageBase(__int64 a1)
{
  unsigned __int64 v1; // rsi
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v4; // rax
  signed __int8 v5; // cf
  __int64 v6; // r14
  __int128 v8; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+50h] [rbp+8h] BYREF

  v9 = 0LL;
  v1 = *(_QWORD *)a1;
  v8 = 0LL;
  if ( v1 != -1LL )
  {
    if ( *(_BYTE *)(a1 + 12) )
    {
      if ( *(_BYTE *)(a1 + 13) )
        MiReturnSystemImageAddress((v1 - 0x80000000) << 16, (unsigned int)(*(_DWORD *)(a1 + 8) << 16));
    }
    else
    {
      MiGetImageBitMapInfo(*(_DWORD *)(a1 + 16), &v8, &v9, 0LL);
      MiZeroCfgSystemWideBitmap(a1, v9 - ((v1 + *(unsigned int *)(a1 + 8)) << 16));
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->SpecialApcDisable;
      v4 = KeAbPreAcquire((__int64)&qword_140C65740, 0LL);
      v5 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140C65740, 0LL);
      v6 = v4;
      if ( v5 )
        ExfAcquirePushLockExclusiveEx(&qword_140C65740, v4, (__int64)&qword_140C65740);
      if ( v6 )
        *(_BYTE *)(v6 + 18) = 1;
      if ( *((_QWORD *)&v8 + 1) )
        RtlClearBitsEx(*((__int64 *)&v8 + 1), v1, *(unsigned int *)(a1 + 8));
      RtlClearBitsEx(v8, v1, *(unsigned int *)(a1 + 8));
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C65740, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C65740);
      KeAbPostRelease((ULONG_PTR)&qword_140C65740);
      if ( CurrentThread->SpecialApcDisable++ == -1
        && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery();
      }
    }
  }
}
