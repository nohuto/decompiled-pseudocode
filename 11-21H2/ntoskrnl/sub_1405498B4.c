/*
 * XREFs of sub_1405498B4 @ 0x1405498B4
 * Callers:
 *     sub_14054991C @ 0x14054991C (sub_14054991C.c)
 *     sub_140A4B9E0 @ 0x140A4B9E0 (sub_140A4B9E0.c)
 * Callees:
 *     PoSetHiberRange @ 0x14038DBE0 (PoSetHiberRange.c)
 */

void __fastcall sub_1405498B4(PVOID MemoryMap)
{
  if ( qword_140C48980 )
    PoSetHiberRange(MemoryMap, 0x8000u, qword_140C48980, (unsigned int)(dword_140C48988 << 12), 0x646C7648u);
  if ( qword_140C48970 )
    PoSetHiberRange(MemoryMap, 0x8000u, qword_140C48970, 0x1000uLL, 0x646C7648u);
}
