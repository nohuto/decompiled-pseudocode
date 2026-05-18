/*
 * XREFs of sub_180056E08 @ 0x180056E08
 * Callers:
 *     sub_180095A64 @ 0x180095A64 (sub_180095A64.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_18001DE04 @ 0x18001DE04 (sub_18001DE04.c)
 *     sub_18001DE7C @ 0x18001DE7C (sub_18001DE7C.c)
 *     sub_18001DE8C @ 0x18001DE8C (sub_18001DE8C.c)
 *     sub_18001F31C @ 0x18001F31C (sub_18001F31C.c)
 *     sub_18001F56C @ 0x18001F56C (sub_18001F56C.c)
 *     sub_180056DC0 @ 0x180056DC0 (sub_180056DC0.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall sub_180056E08(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r8
  unsigned int i; // esi
  __int64 *v10; // r15
  __int64 *v11; // r13
  __int64 *v12; // rbx
  __int64 *v13; // r14
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r8
  __int128 v19; // [rsp+20h] [rbp-59h] BYREF
  int v20; // [rsp+30h] [rbp-49h]
  __int64 v21; // [rsp+38h] [rbp-41h]
  __int128 v22; // [rsp+40h] [rbp-39h]
  _QWORD *v23; // [rsp+58h] [rbp-21h]
  __int64 v24; // [rsp+60h] [rbp-19h]
  _QWORD *v25; // [rsp+68h] [rbp-11h]
  char *v26; // [rsp+70h] [rbp-9h] BYREF
  unsigned __int64 v27; // [rsp+88h] [rbp+Fh]

  v5 = a1;
  v21 = a1;
  v25 = a2;
  v20 = 0;
  *a2 = 0LL;
  a2[1] = 0LL;
  *(_QWORD *)&v19 = sub_180011088(0x40uLL);
  sub_18001DE8C((__int64 *)v19, (__int64 *)&v19);
  sub_18001DE8C((__int64 *)(v6 + 8), (__int64 *)&v19);
  sub_18001DE8C((__int64 *)(v7 + 16), (__int64 *)&v19);
  *(_WORD *)(v8 + 24) = 257;
  *a2 = v8;
  v20 = 1;
  for ( i = 0; i < 0x40; ++i )
  {
    if ( _bittest64(&a3, i) )
    {
      v10 = sub_180056DC0(v5, (__int64 *)&v26, i);
      v11 = (__int64 *)*a2;
      v12 = *(__int64 **)(*a2 + 8LL);
      *(_QWORD *)&v22 = v12;
      DWORD2(v22) = 0;
      v13 = v11;
      while ( !*((_BYTE *)v12 + 25) )
      {
        *(_QWORD *)&v22 = v12;
        if ( (unsigned __int8)sub_18001DE04(v12 + 4, v10) )
        {
          DWORD2(v22) = 0;
          v12 = (__int64 *)v12[2];
        }
        else
        {
          DWORD2(v22) = 1;
          v13 = v12;
          v12 = (__int64 *)*v12;
        }
      }
      if ( *((_BYTE *)v13 + 25) || (unsigned __int8)sub_18001DE04(v10, v13 + 4) )
      {
        if ( a2[1] == 0x3FFFFFFFFFFFFFFLL )
          sub_18001F56C();
        *(_QWORD *)&v19 = v11;
        v23 = a2;
        v24 = 0LL;
        v14 = sub_180011088(0x40uLL);
        *(_QWORD *)(v14 + 48) = 0LL;
        *(_QWORD *)(v14 + 56) = 0LL;
        *(_OWORD *)(v14 + 32) = *(_OWORD *)v10;
        *(_OWORD *)(v14 + 48) = *((_OWORD *)v10 + 1);
        v10[2] = 0LL;
        v10[3] = 15LL;
        *(_BYTE *)v10 = 0;
        sub_18001DE7C((__int64 *)v14, (__int64 *)&v19);
        sub_18001DE7C((__int64 *)(v15 + 8), (__int64 *)&v19);
        sub_18001DE7C((__int64 *)(v16 + 16), (__int64 *)&v19);
        *(_WORD *)(v17 + 24) = 0;
        v24 = 0LL;
        v19 = v22;
        sub_18001F31C(a2, (__int64)&v19, v17);
      }
      if ( v27 >= 0x10 )
        sub_180010884(v26, v27 + 1);
      v5 = v21;
    }
  }
  return a2;
}
