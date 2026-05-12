/*
 * XREFs of sub_1C00A3470 @ 0x1C00A3470
 * Callers:
 *     sub_1C00A332C @ 0x1C00A332C (sub_1C00A332C.c)
 * Callees:
 *     memmove @ 0x1C0024A40 (memmove.c)
 *     memset_0 @ 0x1C0024D40 (memset_0.c)
 */

void *__fastcall sub_1C00A3470(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v8; // eax
  int v9; // eax

  memset_0((void *)(a1 + 4), 0, 0x54uLL);
  *(_DWORD *)a1 = 88;
  *(_BYTE *)(a1 + 5) = *(_BYTE *)(a2 + 3);
  *(_BYTE *)(a1 + 6) = *(_BYTE *)(a2 + 4);
  *(_BYTE *)(a1 + 7) = *(_BYTE *)(a2 + 5);
  *(_BYTE *)(a1 + 10) = *(_BYTE *)(a2 + 6);
  *(_BYTE *)(a1 + 11) = *(_BYTE *)(a2 + 7);
  if ( *(_DWORD *)(a2 + 12) )
  {
    if ( *(_BYTE *)(a2 + 8) )
    {
      if ( *(_BYTE *)(a2 + 8) == 1 )
        v8 = 64;
      else
        v8 = 192;
    }
    else
    {
      v8 = 128;
    }
  }
  else
  {
    v8 = 0;
  }
  if ( !a5 )
    v8 |= 0x20u;
  *(_DWORD *)(a1 + 12) = v8 | 0x100;
  *(_DWORD *)(a1 + 16) = *(_DWORD *)(a2 + 12);
  v9 = *(_DWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 32) = a5;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_DWORD *)(a1 + 20) = v9;
  *(_QWORD *)(a1 + 24) = a4;
  return memmove((void *)(a1 + 72), (const void *)(a2 + 36), *(unsigned __int8 *)(a2 + 6));
}
