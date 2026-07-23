/*
 * XREFs of sub_1409F4A30 @ 0x1409F4A30
 * Callers:
 *     sub_1406CEEB0 @ 0x1406CEEB0 (sub_1406CEEB0.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1409F4A30(__int64 a1, unsigned __int16 **a2)
{
  unsigned int v2; // r8d
  unsigned int v3; // ebx
  unsigned int v5; // r8d
  _WORD *v6; // r15
  unsigned __int16 v7; // bp
  unsigned int i; // edi
  __int16 v9; // cx
  unsigned __int16 v10; // ax
  unsigned int v11; // edi
  unsigned __int16 *Pool2; // rax
  unsigned __int16 *v13; // rsi
  char *v14; // r14
  unsigned __int16 v15; // r8
  __int16 v16; // r10
  unsigned int j; // edx
  __int16 v18; // ax
  unsigned __int16 v19; // ax
  __int64 v20; // rcx

  v2 = *(_DWORD *)(a1 + 8);
  v3 = 0;
  if ( v2 - 2 > 0x3FE )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v5 = v2 >> 1;
    v6 = *(_WORD **)a1;
    v7 = 1;
    for ( i = 0; i < v5; v7 = v10 )
    {
      v9 = v6[i];
      if ( !v9 )
        break;
      ++i;
      v10 = v7 + 1;
      if ( v9 != 59 )
        v10 = v7;
    }
    v11 = i + 1;
    if ( v5 <= v11 )
      v11 = v5;
    Pool2 = (unsigned __int16 *)ExAllocatePool2(256LL, 2 * (v11 + 8 * v7) + 24, 1182233669LL);
    v13 = Pool2;
    if ( Pool2 )
    {
      *Pool2 = v7;
      v14 = (char *)&Pool2[8 * v7 + 12];
      memmove(v14, v6, 2LL * v11);
      *((_QWORD *)v13 + 2) = v14;
      v15 = 1;
      v16 = 0;
      for ( j = 0; j < v11; ++j )
      {
        v18 = *(_WORD *)&v14[2 * j];
        if ( !v18 || v15 >= *v13 )
          break;
        if ( v18 == 59 )
        {
          v19 = j - v16;
          *(_WORD *)&v14[2 * j] = 0;
          v20 = 2LL * v15;
          v16 = j + 1;
          ++v15;
          v13[4 * v20 - 4] = v19;
          *(_QWORD *)&v13[4 * v20 + 8] = &v14[2 * j + 2];
        }
      }
      v13[8 * v15 - 4] = v11 - v16 - 1;
      *a2 = v13;
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  return v3;
}
