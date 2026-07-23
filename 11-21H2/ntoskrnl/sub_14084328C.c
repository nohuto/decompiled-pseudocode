/*
 * XREFs of sub_14084328C @ 0x14084328C
 * Callers:
 *     sub_140843160 @ 0x140843160 (sub_140843160.c)
 * Callees:
 *     sub_140792CCC @ 0x140792CCC (sub_140792CCC.c)
 *     sub_140A12BF8 @ 0x140A12BF8 (sub_140A12BF8.c)
 *     sub_140A12C84 @ 0x140A12C84 (sub_140A12C84.c)
 */

__int64 __fastcall sub_14084328C(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // ebx
  unsigned int v6; // eax
  unsigned int v7; // esi
  int v9; // r9d

  v5 = 0;
  v6 = sub_140792CCC(a1, a2, 28705);
  v7 = v6;
  if ( v6 )
  {
    if ( (unsigned int)sub_140A12C84(a1, *(_QWORD *)a3, v6, 24613LL)
      && (unsigned int)sub_140A12BF8(a1, *(_DWORD *)(a3 + 32), v7, 16442, 16443, 16444) )
    {
      LOWORD(v9) = 16445;
      return (unsigned int)sub_140A12BF8(a1, *(_DWORD *)(a3 + 36), v7, v9, 16446, 16447) != 0;
    }
  }
  else
  {
    return 1;
  }
  return v5;
}
