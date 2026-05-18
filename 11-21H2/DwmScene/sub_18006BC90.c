/*
 * XREFs of sub_18006BC90 @ 0x18006BC90
 * Callers:
 *     sub_1800716B0 @ 0x1800716B0 (sub_1800716B0.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_1800120D4 @ 0x1800120D4 (sub_1800120D4.c)
 *     sub_180012170 @ 0x180012170 (sub_180012170.c)
 *     sub_1800126E8 @ 0x1800126E8 (sub_1800126E8.c)
 *     sub_18001292C @ 0x18001292C (sub_18001292C.c)
 */

__int64 **__fastcall sub_18006BC90(__int64 **a1, _QWORD *a2, _QWORD *a3, __int64 *a4)
{
  _QWORD *v6; // rsi
  __int64 **result; // rax
  __int64 v8; // r14
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // r15
  unsigned __int64 v12; // r12
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // r13
  unsigned __int64 v16; // r13
  __int64 v17; // r15
  _QWORD *v18; // rbp
  __int64 v19; // rax
  _QWORD *v20; // r8
  char *v21; // rdx
  char *v22; // rcx

  v6 = a2;
  result = a1;
  if ( a2 != a3 )
  {
    do
    {
      if ( (*(_DWORD *)(*v6 + 440LL) & 0x200) != 0 )
      {
        v8 = a4[1];
        v9 = a4[2];
        if ( v8 == v9 )
        {
          v11 = (v8 - *a4) >> 4;
          if ( v11 == 0xFFFFFFFFFFFFFFFLL )
            sub_180012170();
          v12 = v11 + 1;
          v13 = (v9 - *a4) >> 4;
          v14 = v13 >> 1;
          if ( v13 <= 0xFFFFFFFFFFFFFFFLL - (v13 >> 1) )
          {
            v15 = v11 + 1;
            if ( v14 + v13 >= v12 )
              v15 = v14 + v13;
            if ( v15 > 0xFFFFFFFFFFFFFFFLL )
              sub_1800120D4();
          }
          else
          {
            v15 = 0xFFFFFFFFFFFFFFFLL;
          }
          v16 = 2 * v15;
          v17 = 2 * v11;
          v18 = (_QWORD *)sub_180011088(v16 * 8);
          v18[v17] = 0LL;
          v18[v17 + 1] = 0LL;
          v19 = v6[1];
          if ( v19 )
            _InterlockedIncrement((volatile signed __int32 *)(v19 + 8));
          v20 = v18;
          v18[v17] = *v6;
          v18[v17 + 1] = v6[1];
          v21 = (char *)a4[1];
          v22 = (char *)*a4;
          if ( (char *)v8 != v21 )
          {
            sub_18001292C(v22, (char *)v8, v18);
            v21 = (char *)a4[1];
            v20 = &v18[v17 + 2];
            v22 = (char *)v8;
          }
          sub_18001292C(v22, v21, v20);
          if ( *a4 )
          {
            sub_1800126E8(*a4, a4[1]);
            sub_180010884((char *)*a4, (a4[2] - *a4) & 0xFFFFFFFFFFFFFFF0uLL);
          }
          *a4 = (__int64)v18;
          a4[1] = (__int64)&v18[2 * v12];
          a4[2] = (__int64)&v18[v16];
        }
        else
        {
          *(_QWORD *)v8 = 0LL;
          *(_QWORD *)(v8 + 8) = 0LL;
          v10 = v6[1];
          if ( v10 )
            _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
          *(_QWORD *)v8 = *v6;
          *(_QWORD *)(v8 + 8) = v6[1];
          a4[1] += 16LL;
        }
      }
      v6 += 2;
    }
    while ( v6 != a3 );
    result = a1;
  }
  *result = a4;
  return result;
}
