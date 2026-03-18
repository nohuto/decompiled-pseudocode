/*
 * XREFs of MmAllocateDumpHibernateResources @ 0x1408012CC
 * Callers:
 *     PopEnableHiberFile @ 0x1408016DC (PopEnableHiberFile.c)
 *     IopLiveDumpAllocateMappingResources @ 0x14094DD88 (IopLiveDumpAllocateMappingResources.c)
 *     PopHiberInitializeResources @ 0x140988824 (PopHiberInitializeResources.c)
 * Callees:
 *     MiReservePtes @ 0x14027D190 (MiReservePtes.c)
 */

ULONG_PTR __fastcall MmAllocateDumpHibernateResources(unsigned __int64 a1)
{
  ULONG_PTR result; // rax

  result = MiReservePtes((__int64)&qword_140C69940, (unsigned int)(a1 >> 12) + ((a1 & 0xFFF) != 0));
  if ( result )
    return (__int64)(result << 25) >> 16;
  return result;
}
