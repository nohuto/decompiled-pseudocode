/*
 * XREFs of MiMakeCombineCandidateClean @ 0x14021743C
 * Callers:
 *     MiCrcStillIntact @ 0x140215130 (MiCrcStillIntact.c)
 *     MiSharePages @ 0x1402161B0 (MiSharePages.c)
 * Callees:
 *     MiCaptureWriteWatchDirtyBit @ 0x1402170B0 (MiCaptureWriteWatchDirtyBit.c)
 *     MiLockPageAndSetDirty @ 0x140217514 (MiLockPageAndSetDirty.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140271580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiWriteValidPteNewProtection @ 0x140284A90 (MiWriteValidPteNewProtection.c)
 */

void __fastcall MiMakeCombineCandidateClean(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  unsigned __int64 v5; // rdi
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = MI_READ_PTE_LOCK_FREE(a1);
  v4 = v6;
  v5 = MI_READ_PTE_LOCK_FREE(&v6);
  MiWriteValidPteNewProtection(a1, v4 & 0xFFFFFFFFFFFFFFBDuLL);
  MiLockPageAndSetDirty(48 * ((v5 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL, 1LL);
  if ( a2 )
  {
    if ( (*(_DWORD *)(a2 + 48) & 0x600000) == 0x600000 )
      MiCaptureWriteWatchDirtyBit((__int64)KeGetCurrentThread()->ApcState.Process, a1 << 25 >> 16, a2);
  }
}
