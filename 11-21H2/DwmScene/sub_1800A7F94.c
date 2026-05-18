/*
 * XREFs of sub_1800A7F94 @ 0x1800A7F94
 * Callers:
 *     sub_1800A7E24 @ 0x1800A7E24 (sub_1800A7E24.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_1800120D4 @ 0x1800120D4 (sub_1800120D4.c)
 *     sub_180012170 @ 0x180012170 (sub_180012170.c)
 *     sub_1800126E8 @ 0x1800126E8 (sub_1800126E8.c)
 *     sub_1800318A0 @ 0x1800318A0 (sub_1800318A0.c)
 */

__int64 __fastcall sub_1800A7F94(__int64 a1, char **a2)
{
  char *v2; // r12
  char *v4; // rsi
  _QWORD *v5; // rdx
  char *v6; // rbx
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // r15
  unsigned __int64 v12; // r15
  __int64 v13; // rax
  char *v14; // rbp
  __int64 *v15; // rdi
  signed __int64 v16; // rbx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 result; // rax
  __int64 v20; // rdi
  __int64 v21; // rcx
  __int64 v22; // rax
  _QWORD v23[2]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v24[5]; // [rsp+30h] [rbp-28h] BYREF

  v2 = a2[1];
  v4 = *a2;
  v5 = *(_QWORD **)(a1 + 8);
  v6 = *(char **)a1;
  v7 = (v2 - v4) >> 4;
  v8 = ((__int64)v5 - *(_QWORD *)a1) >> 4;
  if ( v7 <= v8 )
  {
    v20 = (__int64)&v6[16 * v7];
    if ( v4 != v2 )
    {
      do
      {
        v21 = *((_QWORD *)v4 + 1);
        if ( v21 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v21 + 8));
          v21 = *((_QWORD *)v4 + 1);
        }
        v24[0] = *(_QWORD *)v6;
        *(_QWORD *)v6 = *(_QWORD *)v4;
        v22 = *((_QWORD *)v6 + 1);
        *((_QWORD *)v6 + 1) = v21;
        v24[1] = v22;
        sub_180010910((__int64)v24);
        v6 += 16;
        v4 += 16;
      }
      while ( v4 != v2 );
      v5 = *(_QWORD **)(a1 + 8);
    }
    result = sub_1800126E8(v20, (__int64)v5);
    *(_QWORD *)(a1 + 8) = v20;
  }
  else
  {
    v9 = (__int64)(*(_QWORD *)(a1 + 16) - (_QWORD)v6) >> 4;
    if ( v7 > v9 )
    {
      if ( v7 > 0xFFFFFFFFFFFFFFFLL )
        sub_180012170();
      v10 = v9 >> 1;
      if ( v9 <= 0xFFFFFFFFFFFFFFFLL - (v9 >> 1) )
      {
        v11 = v10 + v9;
        if ( v10 + v9 < v7 )
          v11 = (v2 - v4) >> 4;
      }
      else
      {
        v11 = 0xFFFFFFFFFFFFFFFLL;
      }
      if ( v6 )
      {
        sub_1800126E8((__int64)v6, (__int64)v5);
        sub_180010884(*(char **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF0uLL);
        *(_QWORD *)a1 = 0LL;
        *(_QWORD *)(a1 + 8) = 0LL;
        *(_QWORD *)(a1 + 16) = 0LL;
      }
      if ( v11 > 0xFFFFFFFFFFFFFFFLL )
        sub_1800120D4();
      v12 = 16 * v11;
      v13 = sub_180011088(v12);
      *(_QWORD *)a1 = v13;
      v6 = (char *)v13;
      *(_QWORD *)(a1 + 8) = v13;
      v5 = (_QWORD *)v13;
      *(_QWORD *)(a1 + 16) = v12 + v13;
      v8 = 0LL;
    }
    v14 = &v4[16 * v8];
    if ( v4 != v14 )
    {
      v15 = (__int64 *)(v4 + 8);
      v16 = v6 - v4;
      do
      {
        v17 = *v15;
        if ( *v15 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v17 + 8));
          v17 = *v15;
        }
        v23[0] = *(__int64 *)((char *)v15 + v16 - 8);
        *(__int64 *)((char *)v15 + v16 - 8) = *(v15 - 1);
        v18 = *(__int64 *)((char *)v15 + v16);
        *(__int64 *)((char *)v15 + v16) = v17;
        v23[1] = v18;
        sub_180010910((__int64)v23);
        v15 += 2;
      }
      while ( v15 - 1 != (__int64 *)v14 );
      v5 = *(_QWORD **)(a1 + 8);
    }
    result = (__int64)sub_1800318A0(v14, v2, v5);
    *(_QWORD *)(a1 + 8) = result;
  }
  return result;
}
