/*
 * XREFs of sub_1407473E8 @ 0x1407473E8
 * Callers:
 *     sub_1407449E0 @ 0x1407449E0 (sub_1407449E0.c)
 *     sub_140A2F5D0 @ 0x140A2F5D0 (sub_140A2F5D0.c)
 * Callees:
 *     sub_1402DFEFC @ 0x1402DFEFC (sub_1402DFEFC.c)
 *     wcschr @ 0x1403E32C0 (wcschr.c)
 *     sub_1403E3820 @ 0x1403E3820 (sub_1403E3820.c)
 */

__int64 __fastcall sub_1407473E8(const wchar_t *a1, _WORD *a2, unsigned int a3, __int64 a4)
{
  int v5; // r15d
  unsigned int v7; // r14d
  char v9; // r12
  wchar_t *v10; // rax
  wchar_t *v11; // rdi
  __int64 v12; // rsi
  wchar_t *v13; // rax
  wchar_t *v14; // r14
  int v15; // eax
  unsigned int v16; // eax
  unsigned int v18; // eax

  v5 = 0;
  v7 = a3;
  v9 = -1;
  v10 = wcschr(a1, 0x5Cu);
  v11 = v10;
  if ( v10 )
  {
    v12 = v10 - a1;
    if ( a4 )
    {
      v13 = wcschr(v10 + 1, 0x5Cu);
      v14 = v13;
      if ( v13 )
      {
        *v13 = 0;
        v18 = sub_1403E3820(v13 + 1, 0LL, 0x10u);
        if ( v18 > 0xFF )
          LOBYTE(v18) = -1;
        v9 = v18;
      }
      if ( v11[1] == 42 )
      {
        *(_BYTE *)a4 = 3;
        LOWORD(v16) = 0;
      }
      else
      {
        v15 = sub_1403E3820(v11 + 1, 0LL, 0x10u);
        if ( v15 )
        {
          v16 = v15 - 1;
          *(_BYTE *)a4 = 2;
          if ( v16 > 0xFFFF )
            LOWORD(v16) = -1;
        }
        else
        {
          *(_BYTE *)a4 = 1;
          LOWORD(v16) = 0;
        }
      }
      *(_WORD *)(a4 + 2) = v16;
      if ( v14 )
        *v14 = 92;
      v7 = a3;
    }
  }
  else
  {
    v12 = -1LL;
    do
      ++v12;
    while ( a1[v12] );
    if ( a4 )
    {
      *(_BYTE *)a4 = 0;
      *(_WORD *)(a4 + 2) = 0;
    }
  }
  if ( !a2 || (v5 = sub_1402DFEFC(a2, v7, a1, (unsigned int)v12, 0LL, 0LL, 2304), v5 >= 0) )
  {
    if ( a4 )
      *(_BYTE *)(a4 + 1) = v9;
  }
  return (unsigned int)v5;
}
