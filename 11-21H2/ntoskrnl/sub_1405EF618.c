/*
 * XREFs of sub_1405EF618 @ 0x1405EF618
 * Callers:
 *     sub_1405EF0B4 @ 0x1405EF0B4 (sub_1405EF0B4.c)
 *     sub_1405EF24C @ 0x1405EF24C (sub_1405EF24C.c)
 * Callees:
 *     sub_14045F1E0 @ 0x14045F1E0 (sub_14045F1E0.c)
 */

__int16 __fastcall sub_1405EF618(int a1, _DWORD *a2, __int64 a3, unsigned __int16 *a4, int a5, __int64 a6)
{
  unsigned __int64 v10; // rax
  unsigned __int16 v11; // r8
  int v12; // edx
  int v13; // edx
  unsigned int v14; // r9d
  __int64 v15; // rcx
  __int16 v16; // ax
  int v17; // r8d
  __int16 result; // ax
  _WORD *v19; // r10

  *(_QWORD *)a6 = 0LL;
  *(_DWORD *)(a6 + 8) = 0;
  *(_WORD *)(a6 + 12) = 0;
  v10 = 0xCCCCCCCCCCCCCCCCuLL;
  if ( (*a4 & 0x1000) != 0 )
    v10 = 0x9090909090909090uLL;
  *(_QWORD *)(a6 + 2) = v10;
  *(_DWORD *)(a6 + 10) = v10;
  v11 = *a4;
  if ( a5 )
  {
    if ( (v11 & 0x4000) != 0 )
      v12 = *(_DWORD *)(a3 + 68);
    else
      v12 = *(_DWORD *)(a3 + 72);
    v13 = *a2 + v12 - (a1 + 5);
    *(_BYTE *)(a6 + 2) = ((v11 & 0x1000) == 0) | 0xE8;
    *(_DWORD *)(a6 + 3) = v13;
  }
  else
  {
    v14 = 0;
    if ( (v11 & 0x2000) != 0 )
    {
      *(_BYTE *)(a6 + 2) = 72;
      v14 = 1;
      v11 = *a4;
    }
    v15 = v14 + 1;
    *(_BYTE *)(v14 + a6 + 2) = -1;
    v16 = *a4 & 0x1000;
    if ( (v11 & 0x4000) != 0 )
    {
      *(_BYTE *)(v15 + a6 + 2) = v16 != 0 ? 21 : 37;
      v17 = a2[1] - (v14 + a1 + 6);
      *(_BYTE *)(v14 + 2 + a6 + 2) = v17;
      *(_BYTE *)(v14 + 3 + a6 + 2) = BYTE1(v17);
      *(_BYTE *)(v14 + 4 + a6 + 2) = BYTE2(v17);
      *(_BYTE *)(v14 + 5 + a6 + 2) = HIBYTE(v17);
    }
    else
    {
      *(_BYTE *)(v15 + a6 + 2) = v16 != 0 ? -48 : -32;
      if ( (*a4 & 0x1000) != 0 )
      {
        *(_BYTE *)(v14 + 2 + a6 + 2) = 15;
        *(_BYTE *)(v14 + 3 + a6 + 2) = 31;
        *(_BYTE *)(v14 + 4 + a6 + 2) = 0;
      }
    }
  }
  result = (1 << sub_14045F1E0(a4)) - 1;
  *v19 = result;
  return result;
}
