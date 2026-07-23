/*
 * XREFs of MiUpdateWorkingSetPrivateSize @ 0x1402ED5E4
 * Callers:
 *     MiCombineInitialInstance @ 0x1402EC920 (MiCombineInitialInstance.c)
 *     MiDemoteCombinedPte @ 0x1402F3A44 (MiDemoteCombinedPte.c)
 *     MiBuildForkPte @ 0x140662750 (MiBuildForkPte.c)
 * Callees:
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14025AFA0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiGetSharedVm @ 0x140287104 (MiGetSharedVm.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402A7E90 (ExReleaseSpinLockSharedFromDpcLevel.c)
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
