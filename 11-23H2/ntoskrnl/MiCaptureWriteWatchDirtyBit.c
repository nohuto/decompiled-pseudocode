/*
 * XREFs of MiCaptureWriteWatchDirtyBit @ 0x1402170B0
 * Callers:
 *     MiMakeCombineCandidateClean @ 0x14021743C (MiMakeCombineCandidateClean.c)
 *     MiRevertValidPte @ 0x140278A80 (MiRevertValidPte.c)
 *     MiWsleFlush @ 0x140280E10 (MiWsleFlush.c)
 *     MiMakeVaRangeNoAccess @ 0x14035BC1C (MiMakeVaRangeNoAccess.c)
 *     MiProtectAweRegion @ 0x14064B3A4 (MiProtectAweRegion.c)
 *     MiBuildForkPte @ 0x140662200 (MiBuildForkPte.c)
 * Callees:
 *     MiLocateAddress @ 0x140217240 (MiLocateAddress.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14025AD10 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiLockVadCore @ 0x1402877D0 (MiLockVadCore.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402A7C00 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiUnlockVadCore @ 0x1402EAAE4 (MiUnlockVadCore.c)
 *     MiGetVadMandatoryPageSize @ 0x1402EADF0 (MiGetVadMandatoryPageSize.c)
 *     MiLocateLockedVadEvent @ 0x14030B424 (MiLocateLockedVadEvent.c)
 */

void __fastcall MiCaptureWriteWatchDirtyBit(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 Address; // rsi
  __int64 LockedVadEvent; // rdi
  unsigned __int64 VadMandatoryPageSize; // rax
  unsigned __int64 v7; // rt2
  unsigned __int64 v8; // rbx
  __int64 v9; // rdx

  Address = a3;
  if ( (*(_DWORD *)(a1 + 1124) & 0x20) == 0 )
  {
    if ( a3
      || (ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[28]
                                                          + 284)),
          Address = MiLocateAddress(a2),
          ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[28]
                                                            + 284)),
          Address) )
    {
      if ( (*(_DWORD *)(Address + 48) & 0x600000) == 0x600000 )
      {
        LockedVadEvent = MiLocateLockedVadEvent(Address, 4LL);
        VadMandatoryPageSize = MiGetVadMandatoryPageSize();
        v7 = ((a2 >> 12)
            - (*(unsigned int *)(Address + 24) | ((unsigned __int64)*(unsigned __int8 *)(Address + 32) << 32)))
           % VadMandatoryPageSize;
        v8 = ((a2 >> 12)
            - (*(unsigned int *)(Address + 24) | ((unsigned __int64)*(unsigned __int8 *)(Address + 32) << 32)))
           / VadMandatoryPageSize;
        MiLockVadCore(Address, v7);
        LOBYTE(v9) = 2;
        _bittestandset64(*(signed __int64 **)(LockedVadEvent + 16), v8);
        MiUnlockVadCore(Address, v9);
      }
    }
  }
}
