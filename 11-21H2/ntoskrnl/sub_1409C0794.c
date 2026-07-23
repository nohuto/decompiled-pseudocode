/*
 * XREFs of sub_1409C0794 @ 0x1409C0794
 * Callers:
 *     sub_140971068 @ 0x140971068 (sub_140971068.c)
 *     sub_140972818 @ 0x140972818 (sub_140972818.c)
 * Callees:
 *     sub_1405EF8CC @ 0x1405EF8CC (sub_1405EF8CC.c)
 *     sub_1409C03F8 @ 0x1409C03F8 (sub_1409C03F8.c)
 */

char __fastcall sub_1409C0794(
        _DWORD *a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned __int16 a6)
{
  unsigned int v6; // r12d
  __int64 v7; // rax
  __int64 v8; // rdx
  unsigned int *v9; // r13
  unsigned int *v10; // rdi
  unsigned int v11; // r8d
  unsigned int v12; // r9d
  unsigned int v13; // r10d
  int v14; // esi
  unsigned int v15; // edx
  unsigned int v16; // eax
  int v17; // r15d
  unsigned int v18; // ecx
  int v19; // ebx
  unsigned int v21; // [rsp+30h] [rbp-38h]
  unsigned int v22; // [rsp+34h] [rbp-34h]
  unsigned int v23; // [rsp+38h] [rbp-30h]
  unsigned int v24[11]; // [rsp+3Ch] [rbp-2Ch] BYREF

  a5 = 0;
  if ( a6 == 0x8664 || a6 == 0xAA64 )
  {
    v6 = 8;
  }
  else
  {
    if ( a6 != 332 )
      return 0;
    v6 = 4;
  }
  v7 = *(unsigned int *)(a2 + 24);
  v8 = (unsigned int)a1[1];
  if ( (unsigned int)v7 < (unsigned int)v8 )
  {
    v9 = (_DWORD *)((char *)a1 + v8);
    v10 = (_DWORD *)((char *)a1 + v7);
    v11 = sub_1405EF8CC(a1);
    v23 = v11;
    do
    {
LABEL_29:
      v19 = *v10;
      if ( !*v10 )
        return 1;
      if ( v10 >= v9 )
        return 0;
      if ( (v19 & 0x3FF03000) != 0 )
        return 0;
      if ( (v19 & 0x40000000) != 0 )
        return 0;
      v14 = v19 & 0xFC000;
      if ( v19 >= 0 && v14 != 114688 )
        return 0;
      v15 = v13;
      v16 = v12;
      if ( v19 >= 0 )
      {
        v15 = v12;
        v16 = v13;
      }
      ++v10;
      v22 = v15;
      v21 = v16;
      v17 = v19 & 0xFFF;
    }
    while ( (v19 & 0xFFF) == 0 );
    while ( 1 )
    {
      if ( (v19 & 0x4000) != 0 )
      {
        v18 = v6 + v10[1];
        if ( v18 < v6 || v18 > v15 )
          break;
      }
      if ( v14 == 376832 && v19 >= 0 )
        break;
      if ( (v19 & 0x8000) != 0 )
      {
        if ( !sub_1409C03F8((unsigned int)v19, *v10, a6, v24, &a5) || a5 > v21 >> 12 )
          return 0;
        v15 = v22;
        v11 = v23;
      }
      if ( v14 == 491520 && v10[1] == -1 )
        return 0;
      v10 += v11;
      if ( !--v17 )
      {
        v12 = a4;
        v13 = a3;
        goto LABEL_29;
      }
    }
  }
  return 0;
}
