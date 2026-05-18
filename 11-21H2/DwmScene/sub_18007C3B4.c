/*
 * XREFs of sub_18007C3B4 @ 0x18007C3B4
 * Callers:
 *     sub_18007D834 @ 0x18007D834 (sub_18007D834.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_1800120D4 @ 0x1800120D4 (sub_1800120D4.c)
 *     sub_180012170 @ 0x180012170 (sub_180012170.c)
 *     sub_1800126E8 @ 0x1800126E8 (sub_1800126E8.c)
 *     sub_18001292C @ 0x18001292C (sub_18001292C.c)
 *     sub_18007CB18 @ 0x18007CB18 (sub_18007CB18.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_18007C3B4(__int64 *a1, __int64 a2)
{
  __int64 v3; // rdi
  _QWORD *v4; // rsi
  __int64 v5; // r14
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // r15
  unsigned __int64 v9; // r12
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // r13
  unsigned __int64 v13; // r13
  _QWORD *v14; // rbp
  __int64 v15; // r15
  __int64 v16; // rax
  char *v17; // rdx
  _QWORD *v18; // r8
  char *v19; // rcx
  _QWORD *v21; // [rsp+78h] [rbp+10h]

  v3 = 0LL;
  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  v21 = *(_QWORD **)(a2 + 8);
  v4 = *(_QWORD **)a2;
  if ( *(_QWORD **)a2 != v21 )
  {
    do
    {
      if ( *(_BYTE *)(*v4 + 136LL) && !*(_DWORD *)(*v4 + 176LL) )
      {
        v5 = a1[1];
        v6 = a1[2];
        if ( v5 == v6 )
        {
          v8 = (v5 - *a1) >> 4;
          if ( v8 == 0xFFFFFFFFFFFFFFFLL )
            sub_180012170();
          v9 = v8 + 1;
          v10 = (v6 - *a1) >> 4;
          v11 = v10 >> 1;
          if ( v10 <= 0xFFFFFFFFFFFFFFFLL - (v10 >> 1) )
          {
            v12 = v8 + 1;
            if ( v11 + v10 >= v9 )
              v12 = v11 + v10;
            if ( v12 > 0xFFFFFFFFFFFFFFFLL )
              sub_1800120D4();
          }
          else
          {
            v12 = 0xFFFFFFFFFFFFFFFLL;
          }
          v13 = 2 * v12;
          v14 = (_QWORD *)sub_180011088(v13 * 8);
          v15 = 2 * v8;
          v14[v15] = 0LL;
          v14[v15 + 1] = 0LL;
          v16 = v4[1];
          if ( v16 )
            _InterlockedIncrement((volatile signed __int32 *)(v16 + 8));
          v14[v15] = *v4;
          v14[v15 + 1] = v4[1];
          v17 = (char *)a1[1];
          v18 = v14;
          v19 = (char *)*a1;
          if ( (char *)v5 != v17 )
          {
            sub_18001292C(v19, (char *)v5, v14);
            v18 = &v14[v15 + 2];
            v17 = (char *)a1[1];
            v19 = (char *)v5;
          }
          sub_18001292C(v19, v17, v18);
          if ( *a1 )
          {
            sub_1800126E8(*a1, a1[1]);
            sub_180010884((char *)*a1, (a1[2] - *a1) & 0xFFFFFFFFFFFFFFF0uLL);
          }
          *a1 = (__int64)v14;
          a1[1] = (__int64)&v14[2 * v9];
          a1[2] = (__int64)&v14[v13];
        }
        else
        {
          *(_QWORD *)v5 = 0LL;
          *(_QWORD *)(v5 + 8) = 0LL;
          v7 = v4[1];
          if ( v7 )
            _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
          *(_QWORD *)v5 = *v4;
          *(_QWORD *)(v5 + 8) = v4[1];
          a1[1] += 16LL;
        }
      }
      v4 += 2;
    }
    while ( v4 != v21 );
    v3 = a1[1];
  }
  sub_18007CB18(*a1, v3, (v3 - *a1) >> 4, sub_1800A8850, 1);
  return a1;
}
