/*
 * XREFs of sub_1403CCB34 @ 0x1403CCB34
 * Callers:
 *     sub_1403CC5E8 @ 0x1403CC5E8 (sub_1403CC5E8.c)
 * Callees:
 *     sub_1406EB810 @ 0x1406EB810 (sub_1406EB810.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1403CCB34(unsigned __int16 *a1, _QWORD *a2, _BYTE *a3)
{
  unsigned int v6; // ebp
  int v7; // r12d
  __int64 v8; // r9
  unsigned int v9; // r14d
  unsigned int v10; // ebx
  unsigned int i; // edx
  unsigned __int64 v12; // rsi
  _QWORD *Pool2; // rax
  unsigned int v14; // ecx
  __int64 v16; // r8
  unsigned int v17; // ecx
  __int16 v18; // r9

  v6 = 0;
  v7 = 0;
  if ( !a1 || (v8 = *((_QWORD *)a1 + 1)) == 0 )
  {
    if ( a2 )
      sub_1406EB810(a2, a2, a3);
    return 0LL;
  }
  v9 = *a1 >> 1;
  v10 = 1;
  for ( i = 0; i < v9; v10 = v17 )
  {
    v17 = v10 + (*(_WORD *)(v8 + 2LL * i) != 0 ? 1 : 4);
    if ( v17 < v10 )
      return 3221225621LL;
    ++i;
  }
  if ( v10 - 1 > v9 )
  {
    if ( v10 + 4 < v10 )
      return 3221225621LL;
    v10 += 4;
    v7 = 1;
  }
  v12 = 2LL * v10;
  if ( v12 > 0xFFFFFFFF )
    return 3221225621LL;
  if ( (unsigned int)v12 > 0xFFFF )
    return 3221225485LL;
  Pool2 = (_QWORD *)ExAllocatePool2(256LL, (unsigned int)v12, 1799447891LL);
  if ( Pool2 )
  {
    *a3 = 1;
    if ( v7 )
    {
      *Pool2 = 0x90009000A000DLL;
      v6 = 4;
    }
    v14 = 0;
    if ( v9 )
    {
      v16 = 0LL;
      do
      {
        v18 = *(_WORD *)(v16 + *((_QWORD *)a1 + 1));
        if ( v18 )
        {
          *((_WORD *)Pool2 + v6++) = v18;
        }
        else
        {
          *(_QWORD *)((char *)Pool2 + 2 * v6) = 0x90009000A000DLL;
          if ( v6 + 4 < v6 )
            return 3221225621LL;
          v6 += 4;
        }
        ++v14;
        v16 += 2LL;
      }
      while ( v14 < v9 );
    }
    *((_WORD *)Pool2 + v10 - 1) = 0;
    *a2 = Pool2;
    a2[1] = (unsigned int)v12;
    return 0LL;
  }
  return 3221225495LL;
}
