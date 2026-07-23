/*
 * XREFs of sub_140A4FC74 @ 0x140A4FC74
 * Callers:
 *     sub_140A4E8E4 @ 0x140A4E8E4 (sub_140A4E8E4.c)
 * Callees:
 *     PoSetHiberRange @ 0x14038DBE0 (PoSetHiberRange.c)
 *     memmove @ 0x140435B40 (memmove.c)
 */

void __fastcall sub_140A4FC74(_QWORD *MemoryMap, __int64 a2)
{
  __int64 v2; // rsi
  unsigned __int64 v5; // rbx
  PVOID *v6; // rsi

  v2 = MemoryMap[27];
  if ( v2 )
  {
    v5 = (unsigned __int64)*(unsigned int *)(v2 + 40) >> 12;
    v6 = (PVOID *)(v2 + 48);
    memmove((void *)(a2 + 768), v6, 8 * v5);
    for ( *(_DWORD *)(a2 + 764) = v5; v5; --v5 )
      PoSetHiberRange(MemoryMap, 0xC000u, *v6++, 1uLL, 0x644D6946u);
  }
  else
  {
    *(_DWORD *)(a2 + 764) = 0;
  }
}
