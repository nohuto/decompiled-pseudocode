/*
 * XREFs of sub_180038F28 @ 0x180038F28
 * Callers:
 *     sub_180034B88 @ 0x180034B88 (sub_180034B88.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_180011138 @ 0x180011138 (sub_180011138.c)
 *     sub_1800112F0 @ 0x1800112F0 (sub_1800112F0.c)
 *     sub_1800120D4 @ 0x1800120D4 (sub_1800120D4.c)
 *     sub_180012170 @ 0x180012170 (sub_180012170.c)
 *     sub_18002C460 @ 0x18002C460 (sub_18002C460.c)
 *     j_LanguageEnumProc @ 0x18002C8D8 (j_LanguageEnumProc.c)
 *     sub_1800319FC @ 0x1800319FC (sub_1800319FC.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180038F28(__int64 a1)
{
  __int64 *v1; // r13
  char *v2; // rcx
  _QWORD *v3; // rdi
  char *v4; // rbx
  char *v5; // r15
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rsi
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // r12
  unsigned __int64 v12; // r12
  char *v13; // r14
  __int64 v14; // rsi
  __int64 v15; // rcx
  char *v16; // rbx
  __int64 result; // rax
  char *v18; // rbx
  __int64 v19; // [rsp+20h] [rbp-30h] BYREF
  char v20; // [rsp+28h] [rbp-28h]
  __int128 v21; // [rsp+30h] [rbp-20h] BYREF
  char *v22; // [rsp+40h] [rbp-10h]
  __int64 v23; // [rsp+90h] [rbp+40h]
  _QWORD *v24; // [rsp+98h] [rbp+48h]

  v1 = (__int64 *)(a1 + 288);
  sub_18002C460(a1 + 312, (__int64)&v19);
  v21 = 0LL;
  v2 = 0LL;
  v22 = 0LL;
  v3 = (_QWORD *)*v1;
  v24 = (_QWORD *)v1[1];
  if ( (_QWORD *)*v1 != v24 )
  {
    v4 = (char *)*((_QWORD *)&v21 + 1);
    v5 = (char *)v21;
    do
    {
      v6 = v3[1];
      if ( v6 && *(_DWORD *)(v6 + 8) )
      {
        if ( v4 == v2 )
        {
          v8 = (v4 - v5) >> 4;
          if ( v8 == 0xFFFFFFFFFFFFFFFLL )
            sub_180012170();
          v23 = v8 + 1;
          v9 = (v2 - v5) >> 4;
          v10 = v9 >> 1;
          if ( v9 <= 0xFFFFFFFFFFFFFFFLL - (v9 >> 1) )
          {
            v11 = v8 + 1;
            if ( v10 + v9 >= v8 + 1 )
              v11 = v10 + v9;
            if ( v11 > 0xFFFFFFFFFFFFFFFLL )
              sub_1800120D4();
          }
          else
          {
            v11 = 0xFFFFFFFFFFFFFFFLL;
          }
          v12 = 16 * v11;
          v13 = (char *)sub_180011088(v12);
          v14 = 2 * v8;
          *(_QWORD *)&v13[8 * v14] = 0LL;
          *(_QWORD *)&v13[8 * v14 + 8] = 0LL;
          if ( v3[1] )
          {
            *(_QWORD *)&v13[8 * v14] = *v3;
            v15 = v3[1];
            *(_QWORD *)&v13[8 * v14 + 8] = v15;
            _InterlockedIncrement((volatile signed __int32 *)(v15 + 12));
            v4 = (char *)*((_QWORD *)&v21 + 1);
            v5 = (char *)v21;
          }
          sub_1800112F0(v5, v4, v13);
          v16 = (char *)v21;
          if ( (_QWORD)v21 )
          {
            sub_180011138(v21, *((__int64 *)&v21 + 1));
            sub_180010884(v16, (v22 - v16) & 0xFFFFFFFFFFFFFFF0uLL);
          }
          v5 = v13;
          *(_QWORD *)&v21 = v13;
          v4 = &v13[16 * v23];
          v2 = &v13[v12];
          v22 = &v13[v12];
        }
        else
        {
          *(_QWORD *)v4 = 0LL;
          *((_QWORD *)v4 + 1) = 0LL;
          if ( v3[1] )
          {
            *(_QWORD *)v4 = *v3;
            v7 = v3[1];
            *((_QWORD *)v4 + 1) = v7;
            _InterlockedIncrement((volatile signed __int32 *)(v7 + 12));
            v2 = v22;
            v4 = (char *)*((_QWORD *)&v21 + 1);
            v5 = (char *)v21;
          }
          v4 += 16;
        }
        *((_QWORD *)&v21 + 1) = v4;
      }
      v3 += 2;
    }
    while ( v3 != v24 );
  }
  result = sub_1800319FC(v1, (__int64 *)&v21);
  v18 = (char *)v21;
  if ( (_QWORD)v21 )
  {
    sub_180011138(v21, *((__int64 *)&v21 + 1));
    result = sub_180010884(v18, (v22 - v18) & 0xFFFFFFFFFFFFFFF0uLL);
  }
  if ( v20 )
    return j_LanguageEnumProc(v19);
  return result;
}
