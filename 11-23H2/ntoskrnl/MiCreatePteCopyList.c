/*
 * XREFs of MiCreatePteCopyList @ 0x1403608B0
 * Callers:
 *     MiGetPteMappingSet @ 0x1402841F0 (MiGetPteMappingSet.c)
 *     MiCopyPagesIntoEnclave @ 0x140A3CFC4 (MiCopyPagesIntoEnclave.c)
 * Callees:
 *     MiReservePtes @ 0x14027D190 (MiReservePtes.c)
 */

__int64 __fastcall MiCreatePteCopyList(unsigned int a1, __int64 a2)
{
  ULONG_PTR v4; // rax
  __int64 result; // rax

  *(_WORD *)(a2 + 8) = 17;
  *(_DWORD *)a2 = 0;
  *(_QWORD *)(a2 + 16) = 0LL;
  v4 = MiReservePtes((__int64)&qword_140C69940, a1);
  *(_QWORD *)(a2 + 16) = v4;
  result = v4 != 0 ? a1 : 0;
  *(_DWORD *)(a2 + 4) = result;
  return result;
}
