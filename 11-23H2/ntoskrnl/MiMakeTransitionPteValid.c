/*
 * XREFs of MiMakeTransitionPteValid @ 0x140334FD0
 * Callers:
 *     MiCompleteProtoPteFault @ 0x140268BE0 (MiCompleteProtoPteFault.c)
 *     MiIssueHardFault @ 0x1402A10B0 (MiIssueHardFault.c)
 *     MiResolveProtoCombine @ 0x1402E3AF8 (MiResolveProtoCombine.c)
 *     MiMakeFaultPfnActive @ 0x140334EE0 (MiMakeFaultPfnActive.c)
 *     MiProtectAweRegion @ 0x14064B3A4 (MiProtectAweRegion.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x1402712F0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeValidPte @ 0x1402CF2B0 (MiMakeValidPte.c)
 */

unsigned __int64 __fastcall MiMakeTransitionPteValid(unsigned __int64 a1)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rdx

  v2 = MI_READ_PTE_LOCK_FREE(a1);
  v3 = v2;
  if ( qword_140C65B40 )
  {
    if ( (v2 & 0x10) != 0 )
      v3 = v2 & 0xFFFFFFFFFFFFFFEFuLL;
    else
      v3 = v2 & ~qword_140C65B40;
  }
  return MiMakeValidPte(a1, (v3 >> 12) & 0xFFFFFFFFFFLL, (v2 >> 5) & 0x1F);
}
