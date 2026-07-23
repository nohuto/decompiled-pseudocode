/*
 * XREFs of sub_140394AB4 @ 0x140394AB4
 * Callers:
 *     sub_140A50B90 @ 0x140A50B90 (sub_140A50B90.c)
 * Callees:
 *     MmAllocatePagesForMdlEx @ 0x1402630A0 (MmAllocatePagesForMdlEx.c)
 */

PMDL __fastcall sub_140394AB4(__int64 a1, __int64 a2)
{
  PMDL result; // rax

  result = MmAllocatePagesForMdlEx(
             (PHYSICAL_ADDRESS)0x1000000LL,
             (PHYSICAL_ADDRESS)0xFFFFFFFFFFFLL,
             0LL,
             a2 << 12,
             MmCached,
             5u);
  if ( result )
  {
    result->Next = *(struct _MDL **)(a1 + 128);
    *(_QWORD *)(a1 + 136) += a2;
    *(_QWORD *)(a1 + 128) = result;
  }
  return result;
}
