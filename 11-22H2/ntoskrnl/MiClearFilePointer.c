/*
 * XREFs of MiClearFilePointer @ 0x140355090
 * Callers:
 *     MiDestroySection @ 0x14020184C (MiDestroySection.c)
 *     MiCheckControlArea @ 0x14029FAA0 (MiCheckControlArea.c)
 *     MiCheckForControlAreaDeletion @ 0x140339AD8 (MiCheckForControlAreaDeletion.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402893A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14028A810 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

void __fastcall MiClearFilePointer(__int64 a1)
{
  int v1; // eax
  __int64 v3; // rbx
  _QWORD *v4; // rcx

  v1 = *(_DWORD *)(a1 + 56);
  if ( (v1 & 0x80000) == 0 )
  {
    v3 = *(_QWORD *)(a1 + 64);
    *(_DWORD *)(a1 + 56) = v1 | 0x80000;
    ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140C65640);
    v4 = *(_QWORD **)((v3 & 0xFFFFFFFFFFFFFFF0uLL) + 0x28);
    if ( (*(_DWORD *)(a1 + 56) & 0x20) != 0 )
      v4[2] = 0LL;
    else
      *v4 = 0LL;
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C65640);
  }
}
