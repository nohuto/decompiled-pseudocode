/*
 * XREFs of PmLookupId @ 0x1C0027B0C
 * Callers:
 *     PmGetSnapshotData @ 0x1C0003EE0 (PmGetSnapshotData.c)
 * Callees:
 *     memcmp @ 0x1C000B530 (memcmp.c)
 */

char __fastcall PmLookupId(__int64 a1, const void *a2, unsigned __int16 a3)
{
  unsigned int v3; // r14d
  __int64 v4; // rbx
  char v5; // di
  size_t v6; // rbp
  unsigned int v8; // esi
  int v9; // ecx

  v3 = *(_DWORD *)(a1 + 8);
  v4 = a1 + 12;
  v5 = 0;
  v6 = a3;
  v8 = 0;
  if ( v3 )
  {
    while ( 1 )
    {
      if ( (*(_DWORD *)(v4 + 12) & 0xFFFFFFFD) == 0 )
      {
        v9 = *(_DWORD *)(v4 + 4);
        if ( ((unsigned int)(v9 - 1) <= 2 || v9 == 8)
          && *(_WORD *)(v4 + 8) == (_WORD)v6
          && !memcmp((const void *)(v4 + 16), a2, v6) )
        {
          break;
        }
      }
      ++v8;
      v4 += *(unsigned __int16 *)(v4 + 10);
      if ( v8 >= v3 )
        return v5;
    }
    return 1;
  }
  return v5;
}
