/*
 * XREFs of MiCopyKstack @ 0x14062D030
 * Callers:
 *     MiSwapStackPage @ 0x14039A11C (MiSwapStackPage.c)
 *     MiStackTheftIsr @ 0x14062D9B0 (MiStackTheftIsr.c)
 * Callees:
 *     MiSetPfnIdentity @ 0x140219488 (MiSetPfnIdentity.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140271580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiWriteValidPteNewPage @ 0x1402EB2DC (MiWriteValidPteNewPage.c)
 *     KeCopyPage @ 0x140424A70 (KeCopyPage.c)
 */

__int64 __fastcall MiCopyKstack(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rdi
  __int64 v6; // rax

  v3 = *(_QWORD *)(a2 + 8) | 0x8000000000000000uLL;
  KeCopyPage(a3 << 25 >> 16, (__int64)(v3 << 25) >> 16);
  v6 = MI_READ_PTE_LOCK_FREE(v3);
  MiWriteValidPteNewPage(
    (__int64 *)v3,
    (((0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4)) & 0xFFFFFFFFFFLL) << 12) | v6 & 0xFFF0000000000FFFuLL,
    0);
  *(_BYTE *)(a2 + 34) = *(_BYTE *)(a2 + 34) & 0xF8 | 5;
  MiSetPfnIdentity(a2, 0);
  return (__int64)(v3 << 25) >> 16;
}
