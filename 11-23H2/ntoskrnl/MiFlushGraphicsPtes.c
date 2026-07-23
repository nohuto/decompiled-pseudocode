/*
 * XREFs of MiFlushGraphicsPtes @ 0x140626978
 * Callers:
 *     MiCommitExistingVad @ 0x140276CC0 (MiCommitExistingVad.c)
 *     MiDeleteVaTail @ 0x1402793B0 (MiDeleteVaTail.c)
 *     MiDecommitPages @ 0x14027FA60 (MiDecommitPages.c)
 *     MiProtectPrivateMemory @ 0x1402A2B10 (MiProtectPrivateMemory.c)
 *     MiProtectAweRegion @ 0x14064B8F4 (MiProtectAweRegion.c)
 *     MiWriteAwePtes @ 0x14064CB0C (MiWriteAwePtes.c)
 *     MiMapUserLargePages @ 0x140669310 (MiMapUserLargePages.c)
 * Callees:
 *     KeInvalidateRangeAllCachesNoIpi @ 0x14021AE20 (KeInvalidateRangeAllCachesNoIpi.c)
 */

char __fastcall MiFlushGraphicsPtes(__int64 a1, unsigned __int64 a2)
{
  int v2; // eax
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // r8
  signed __int32 v6[10]; // [rsp+0h] [rbp-28h] BYREF

  v2 = MEMORY[0x48] & 0x300;
  if ( v2 == 256 )
  {
    _InterlockedOr(v6, 0);
  }
  else
  {
    v3 = a1 << 25 >> 16;
    if ( v3 < 0xFFFFF68000000000uLL || v3 > 0xFFFFF6FFFFFFFFFFuLL )
    {
      v4 = a2 / (unsigned int)(1 << MEMORY[0x48]);
      if ( a2 % (unsigned int)(1 << MEMORY[0x48]) )
        LODWORD(v4) = v4 + 1;
    }
    else
    {
      LODWORD(v4) = a2 * (1 << (9 - MEMORY[0x48]));
    }
    LOBYTE(v2) = KeInvalidateRangeAllCachesNoIpi(0LL, 8 * v4);
  }
  return v2;
}
