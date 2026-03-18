/*
 * XREFs of MmAllocateDumpHibernateResources @ 0x140801D08
 * Callers:
 *     PopHiberInitializeResources @ 0x140801D60 (PopHiberInitializeResources.c)
 *     PopEnableHiberFile @ 0x140818E88 (PopEnableHiberFile.c)
 *     IopLiveDumpAllocateMappingResources @ 0x14093C164 (IopLiveDumpAllocateMappingResources.c)
 * Callees:
 *     MiReservePtes @ 0x1403095B0 (MiReservePtes.c)
 */

ULONG_PTR __fastcall MmAllocateDumpHibernateResources(unsigned __int64 a1)
{
  ULONG_PTR result; // rax

  result = MiReservePtes((__int64)&qword_140C534C0, (unsigned int)(a1 >> 12) + ((a1 & 0xFFF) != 0));
  if ( result )
    return (__int64)(result << 25) >> 16;
  return result;
}
