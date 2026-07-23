/*
 * XREFs of sub_14037E958 @ 0x14037E958
 * Callers:
 *     sub_140238330 @ 0x140238330 (sub_140238330.c)
 *     sub_14037FC24 @ 0x14037FC24 (sub_14037FC24.c)
 * Callees:
 *     sub_14037FA00 @ 0x14037FA00 (sub_14037FA00.c)
 *     sub_1403814C4 @ 0x1403814C4 (sub_1403814C4.c)
 */

__int64 __fastcall sub_14037E958(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned int v2; // edi
  unsigned __int64 v3; // r9
  _QWORD *v6; // r8
  char v7; // cl
  unsigned __int64 v8; // rdx
  int v9; // eax
  unsigned int v10; // ecx
  __int128 v12; // [rsp+20h] [rbp-28h] BYREF
  __int128 v13; // [rsp+30h] [rbp-18h]

  v2 = 0;
  v3 = a1 + 168;
  v6 = (_QWORD *)a1;
  if ( a1 < a1 + 168 )
  {
    v7 = 0;
    do
    {
      v8 = v6[1];
      if ( v8 != -1LL && (*v6 <= *(_QWORD *)(a1 + 184) || v8 <= a2) )
      {
        *v6 = -1LL;
        v2 |= 1 << v7;
        v6[1] = -1LL;
      }
      v6 += 3;
      ++v7;
    }
    while ( (unsigned __int64)v6 < v3 );
  }
  *(_DWORD *)(a1 + 224) |= 1u;
  v9 = *(_DWORD *)(a1 + 224);
  v12 = 0LL;
  LODWORD(v12) = 6;
  DWORD2(v12) = 1;
  v13 = 0LL;
  if ( v2 )
  {
    do
    {
      _BitScanForward(&v10, v2);
      LODWORD(v13) = v10;
      v2 &= ~(1 << v10);
      sub_14037FA00(a1 - 5744, (char *)&v12 + 1);
    }
    while ( v2 );
    v9 = *(_DWORD *)(a1 + 224);
  }
  *(_DWORD *)(a1 + 224) = v9 & 0xFFFFFFFE;
  return sub_1403814C4(a1, 0LL, v6);
}
