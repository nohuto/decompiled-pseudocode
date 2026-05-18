/*
 * XREFs of sub_18007C1BC @ 0x18007C1BC
 * Callers:
 *     sub_18007EDCC @ 0x18007EDCC (sub_18007EDCC.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_1800120D4 @ 0x1800120D4 (sub_1800120D4.c)
 *     sub_180012170 @ 0x180012170 (sub_180012170.c)
 *     sub_1800126E8 @ 0x1800126E8 (sub_1800126E8.c)
 *     sub_18001292C @ 0x18001292C (sub_18001292C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_18007C1BC(__int64 *a1, _QWORD *a2, __int64 a3, _QWORD *a4)
{
  _QWORD *v6; // rsi
  unsigned __int64 v7; // r13
  __int64 v8; // rax
  __int64 v9; // r14
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // r15
  unsigned __int64 v13; // r12
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // r13
  _QWORD *v17; // rbp
  __int64 v18; // r15
  __int64 v19; // rax
  char *v20; // rdx
  _QWORD *v21; // r8
  char *v22; // rcx
  _QWORD *v24; // [rsp+78h] [rbp+10h]

  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  v24 = (_QWORD *)a2[1];
  v6 = (_QWORD *)*a2;
  if ( (_QWORD *)*a2 != v24 )
  {
    v7 = 0xFFFFFFFFFFFFFFFLL;
    do
    {
      v8 = _RTtypeid(*v6);
      if ( !(unsigned int)_std_type_info_compare(*a4 + 8LL, v8 + 8) )
      {
        v9 = a1[1];
        v10 = a1[2];
        if ( v9 == v10 )
        {
          v12 = (v9 - *a1) >> 4;
          if ( v12 == 0xFFFFFFFFFFFFFFFLL )
            sub_180012170();
          v13 = v12 + 1;
          v14 = (v10 - *a1) >> 4;
          v15 = v14 >> 1;
          if ( v14 <= 0xFFFFFFFFFFFFFFFLL - (v14 >> 1) )
          {
            v7 = v12 + 1;
            if ( v15 + v14 >= v13 )
              v7 = v15 + v14;
            if ( v7 > 0xFFFFFFFFFFFFFFFLL )
              sub_1800120D4();
          }
          v16 = 2 * v7;
          v17 = (_QWORD *)sub_180011088(v16 * 8);
          v18 = 2 * v12;
          v17[v18] = 0LL;
          v17[v18 + 1] = 0LL;
          v19 = v6[1];
          if ( v19 )
            _InterlockedIncrement((volatile signed __int32 *)(v19 + 8));
          v17[v18] = *v6;
          v17[v18 + 1] = v6[1];
          v20 = (char *)a1[1];
          v21 = v17;
          v22 = (char *)*a1;
          if ( (char *)v9 != v20 )
          {
            sub_18001292C(v22, (char *)v9, v17);
            v21 = &v17[v18 + 2];
            v20 = (char *)a1[1];
            v22 = (char *)v9;
          }
          sub_18001292C(v22, v20, v21);
          if ( *a1 )
          {
            sub_1800126E8(*a1, a1[1]);
            sub_180010884((char *)*a1, (a1[2] - *a1) & 0xFFFFFFFFFFFFFFF0uLL);
          }
          *a1 = (__int64)v17;
          a1[1] = (__int64)&v17[2 * v13];
          a1[2] = (__int64)&v17[v16];
          v7 = 0xFFFFFFFFFFFFFFFLL;
        }
        else
        {
          *(_QWORD *)v9 = 0LL;
          *(_QWORD *)(v9 + 8) = 0LL;
          v11 = v6[1];
          if ( v11 )
            _InterlockedIncrement((volatile signed __int32 *)(v11 + 8));
          *(_QWORD *)v9 = *v6;
          *(_QWORD *)(v9 + 8) = v6[1];
          a1[1] += 16LL;
        }
      }
      v6 += 2;
    }
    while ( v6 != v24 );
  }
  return a1;
}
