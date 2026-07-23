/*
 * XREFs of MiSelectRelocationStartHint @ 0x1406AACDC
 * Callers:
 *     MiSelectImageBase @ 0x1406AAA28 (MiSelectImageBase.c)
 *     MiObtainRelocationBits @ 0x1406AAE04 (MiObtainRelocationBits.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140230FD0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     RtlFindClearBitsEx @ 0x14029C6F0 (RtlFindClearBitsEx.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FD0A0 (ExfAcquirePushLockExclusiveEx.c)
 *     KiCheckForKernelApcDelivery @ 0x14030FAB0 (KiCheckForKernelApcDelivery.c)
 *     RtlCopyBitMapEx @ 0x14033E940 (RtlCopyBitMapEx.c)
 *     RtlMergeBitMapsEx @ 0x1403A5550 (RtlMergeBitMapsEx.c)
 */

unsigned __int64 __fastcall MiSelectRelocationStartHint(__int64 a1, unsigned __int16 a2, unsigned __int64 a3, int a4)
{
  unsigned __int64 v6; // r15
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v10; // rax
  signed __int8 v11; // cf
  __int64 v12; // rsi
  unsigned __int64 ClearBits; // rsi

  v6 = a2;
  if ( !*(_QWORD *)(a1 + 8) )
    return RtlFindClearBitsEx(*(unsigned __int64 **)a1, a2, a3);
  CurrentThread = KeGetCurrentThread();
  if ( !a4 )
  {
    --CurrentThread->SpecialApcDisable;
    v10 = KeAbPreAcquire((__int64)&qword_140C65740, 0LL);
    v11 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140C65740, 0LL);
    v12 = v10;
    if ( v11 )
      ExfAcquirePushLockExclusiveEx(&qword_140C65740, v10, (__int64)&qword_140C65740);
    if ( v12 )
      *(_BYTE *)(v12 + 18) = 1;
  }
  RtlCopyBitMapEx(*(_QWORD *)a1, &qword_140C657C8, 0LL);
  RtlMergeBitMapsEx((unsigned __int64 *)&qword_140C657C8, *(__int64 **)(a1 + 8));
  ClearBits = RtlFindClearBitsEx((unsigned __int64 *)&qword_140C657C8, v6, a3);
  if ( !a4 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C65740, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C65740);
    KeAbPostRelease((ULONG_PTR)&qword_140C65740);
    if ( CurrentThread->SpecialApcDisable++ == -1
      && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    {
      KiCheckForKernelApcDelivery();
    }
  }
  return ClearBits;
}
