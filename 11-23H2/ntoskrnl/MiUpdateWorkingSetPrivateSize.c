/*
 * XREFs of MiUpdateWorkingSetPrivateSize @ 0x1402ED354
 * Callers:
 *     MiCombineInitialInstance @ 0x1402EC690 (MiCombineInitialInstance.c)
 *     MiDemoteCombinedPte @ 0x1402F37B4 (MiDemoteCombinedPte.c)
 *     MiBuildForkPte @ 0x140662200 (MiBuildForkPte.c)
 * Callees:
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14025AD10 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiGetSharedVm @ 0x140286E74 (MiGetSharedVm.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402A7C00 (ExReleaseSpinLockSharedFromDpcLevel.c)
 */

void __fastcall MiUpdateWorkingSetPrivateSize(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, int a4)
{
  volatile LONG *SharedVm; // rax
  volatile LONG *v9; // rax

  if ( !a4 )
  {
    SharedVm = (volatile LONG *)MiGetSharedVm(a1);
    ExAcquireSpinLockSharedAtDpcLevel(SharedVm + 16);
  }
  _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 152), a3);
  if ( a2 < 0xFFFFF68000000000uLL || a2 > 0xFFFFF6FFFFFFFFFFuLL )
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 136), a3);
  if ( !a4 )
  {
    v9 = (volatile LONG *)MiGetSharedVm(a1);
    ExReleaseSpinLockSharedFromDpcLevel(v9 + 16);
  }
}
