/*
 * XREFs of sub_140354B48 @ 0x140354B48
 * Callers:
 *     sub_140354A20 @ 0x140354A20 (sub_140354A20.c)
 *     sub_140354A90 @ 0x140354A90 (sub_140354A90.c)
 *     sub_1403B17EC @ 0x1403B17EC (sub_1403B17EC.c)
 *     sub_14045E3C0 @ 0x14045E3C0 (sub_14045E3C0.c)
 *     sub_14045E4C2 @ 0x14045E4C2 (sub_14045E4C2.c)
 *     sub_1405D4D6C @ 0x1405D4D6C (sub_1405D4D6C.c)
 *     sub_1405D4E64 @ 0x1405D4E64 (sub_1405D4E64.c)
 *     sub_1405D5360 @ 0x1405D5360 (sub_1405D5360.c)
 * Callees:
 *     sub_140356BCC @ 0x140356BCC (sub_140356BCC.c)
 *     sub_1405D4A94 @ 0x1405D4A94 (sub_1405D4A94.c)
 */

__int64 __fastcall sub_140354B48(__int64 a1, unsigned int *a2, char a3)
{
  __int64 v4; // r9
  __int64 v6; // rdx
  __int64 result; // rax
  unsigned int v9; // edi
  unsigned int *v10; // r8
  __int64 v11; // r10
  unsigned int v12; // ecx
  unsigned int v13; // eax
  unsigned int v14; // eax
  bool v15; // cl
  __int64 v16; // r9

  LODWORD(v4) = 0;
  v6 = a2[47] - 1;
  result = a2[41];
  if ( (unsigned int)v6 >= (unsigned int)result )
    v6 = (unsigned int)result;
  v9 = v6;
  if ( (_DWORD)v6 )
  {
    v10 = a2 + 38;
    v11 = 6LL;
    do
    {
      v12 = *v10;
      v13 = *v10++;
      if ( v12 >= v9 )
        v13 = v9;
      v9 = v13;
      v14 = v4 + 1;
      if ( v12 != (_DWORD)v6 )
        v14 = v4;
      v4 = v14;
      --v11;
    }
    while ( v11 );
    v15 = 0;
    if ( v14 == 5 )
      v15 = a2[40] < (unsigned int)v6;
    result = a2[1];
    if ( (result & 4) != 0 )
    {
      if ( !v15 )
      {
        result = (unsigned int)result & 0xFFFFFFFB;
        a2[1] = result;
        _InterlockedDecrement(&dword_140C20AA0);
      }
    }
    else if ( v15 )
    {
      a2[1] = result | 4;
      result = (unsigned int)_InterlockedIncrement(&dword_140C20AA0);
      if ( (_DWORD)result == 1 )
        result = sub_1405D4A94(0LL, v6, v10, v4);
    }
  }
  if ( v9 != a2[44] )
  {
    v16 = v9;
    LODWORD(v16) = v9 | 0x80000000;
    if ( !a3 )
      v16 = v9;
    return sub_140356BCC(a1, a2, 1LL, v16);
  }
  return result;
}
