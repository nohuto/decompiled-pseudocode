/*
 * XREFs of MiUnlockEntireDriver @ 0x140A347F0
 * Callers:
 *     MiReapplyImportOptimizationForDriverVerifier @ 0x140640E38 (MiReapplyImportOptimizationForDriverVerifier.c)
 * Callees:
 *     IoFreeMdl @ 0x1402AD270 (IoFreeMdl.c)
 *     MiReleasePtes @ 0x1402CBB70 (MiReleasePtes.c)
 *     MiGetPteAddress @ 0x1402DE29C (MiGetPteAddress.c)
 *     MiUnlockDriverPages @ 0x140875D6C (MiUnlockDriverPages.c)
 */

void __fastcall MiUnlockEntireDriver(_RTL_BITMAP_EX *a1, __int64 a2)
{
  __int64 *PteAddress; // rax
  unsigned int v5; // r8d

  if ( a2 )
  {
    if ( (*(_BYTE *)(a2 + 10) & 1) != 0 )
    {
      PteAddress = (__int64 *)MiGetPteAddress(*(_QWORD *)(a2 + 24));
      MiReleasePtes((__int64)&qword_140C69940, PteAddress, v5);
      *(_WORD *)(a2 + 10) &= ~1u;
    }
    IoFreeMdl((PMDL)a2);
  }
  MiUnlockDriverPages(a1);
}
