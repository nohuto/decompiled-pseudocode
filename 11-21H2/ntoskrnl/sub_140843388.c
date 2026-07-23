/*
 * XREFs of sub_140843388 @ 0x140843388
 * Callers:
 *     sub_140843160 @ 0x140843160 (sub_140843160.c)
 * Callees:
 *     sub_140792CCC @ 0x140792CCC (sub_140792CCC.c)
 *     sub_140A12BF8 @ 0x140A12BF8 (sub_140A12BF8.c)
 *     sub_140A12C84 @ 0x140A12C84 (sub_140A12C84.c)
 */

__int64 __fastcall sub_140843388(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // ebx
  unsigned int v6; // eax
  unsigned int v7; // esi
  int v9; // r9d

  v5 = 0;
  v6 = sub_140792CCC(a1, a2, 28703);
  v7 = v6;
  if ( v6 )
  {
    if ( (unsigned int)sub_140A12C84(a1, *(_QWORD *)a3, v6, 24613LL)
      && (unsigned int)sub_140A12C84(a1, *(_QWORD *)(a3 + 8), v7, 24614LL)
      && (unsigned int)sub_140A12BF8(a1, *(_DWORD *)(a3 + 44), v7, 16436, 16437, 16438) )
    {
      LOWORD(v9) = 16448;
      return (unsigned int)sub_140A12BF8(a1, *(_DWORD *)(a3 + 48), v7, v9, 16449, 16450) != 0;
    }
  }
  else
  {
    return 1;
  }
  return v5;
}
