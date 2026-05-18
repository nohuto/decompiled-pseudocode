/*
 * XREFs of sub_1800F7A7C @ 0x1800F7A7C
 * Callers:
 *     sub_1800F881C @ 0x1800F881C (sub_1800F881C.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_1800129F4 @ 0x1800129F4 (sub_1800129F4.c)
 *     sub_180030730 @ 0x180030730 (sub_180030730.c)
 *     sub_180030740 @ 0x180030740 (sub_180030740.c)
 *     sub_18003372C @ 0x18003372C (sub_18003372C.c)
 *     sub_1800F5EB0 @ 0x1800F5EB0 (sub_1800F5EB0.c)
 *     sub_1800F8560 @ 0x1800F8560 (sub_1800F8560.c)
 *     sub_1800F881C @ 0x1800F881C (sub_1800F881C.c)
 *     sub_1800FA818 @ 0x1800FA818 (sub_1800FA818.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall sub_1800F7A7C(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 *v6; // rsi
  __int64 v7; // r15
  __int64 **v8; // rax
  __int64 v9; // rbx
  __int64 *v10; // rdi
  unsigned __int64 v11; // rdx
  __int64 i; // r9
  __int64 v13; // r15
  __int64 *v14; // r8
  __int64 *v15; // r8
  __int64 v16; // r15
  __int64 *v17; // r10
  __int64 *v18; // r8
  __int64 *v19; // r11
  __int64 v20; // r10
  __int64 v21; // r11
  __int64 v22; // r9
  __int64 v23; // [rsp+38h] [rbp-28h] BYREF
  __int64 v24; // [rsp+40h] [rbp-20h] BYREF
  __int64 v25; // [rsp+48h] [rbp-18h]
  __int64 v26; // [rsp+50h] [rbp-10h] BYREF
  __int64 v27; // [rsp+58h] [rbp-8h]
  __int64 *v28; // [rsp+A0h] [rbp+40h] BYREF
  __int64 *v29; // [rsp+B8h] [rbp+58h] BYREF

  v6 = *(__int64 **)a1;
  v28 = v6;
  v7 = *v6;
  while ( (__int64 *)v7 != v6 )
  {
    if ( a2 == (__int64 *)a3 )
    {
      if ( (__int64 *)v7 != v6 )
      {
        v8 = *(__int64 ***)(v7 + 8);
        *v8 = v6;
        v6[1] = (__int64)v8;
        v9 = 0LL;
        do
        {
          v10 = *(__int64 **)v7;
          sub_1800FA818(v7 + 48);
          v11 = *(_QWORD *)(v7 + 40);
          if ( v11 >= 8 )
            sub_180010884(*(char **)(v7 + 16), 2 * v11 + 2);
          *(_QWORD *)(v7 + 32) = 0LL;
          *(_QWORD *)(v7 + 40) = 7LL;
          *(_WORD *)(v7 + 16) = 0;
          sub_180010884((char *)v7, 0xB0uLL);
          v7 = (__int64)v10;
          ++v9;
        }
        while ( v10 != v6 );
        *(_QWORD *)(a1 + 8) -= v9;
      }
      return;
    }
    sub_18003372C((__int64 *)(v7 + 16), a2 + 2, a3);
    sub_1800F881C(v7 + 48, a2 + 6);
    v7 = *(_QWORD *)v7;
    a2 = (__int64 *)*a2;
    v6 = v28;
  }
  v24 = a1;
  i = 0LL;
  v25 = 0LL;
  if ( a2 == (__int64 *)a3 )
  {
    v16 = v27;
  }
  else
  {
    v13 = sub_180011088(0xB0uLL);
    v29 = (__int64 *)v13;
    v23 = v13;
    v28 = (__int64 *)(v13 + 16);
    sub_1800129F4((__int64 *)(v13 + 16), (__int64)(a2 + 2));
    *(_DWORD *)(v13 + 48) = *((_DWORD *)a2 + 12);
    sub_1800129F4((__int64 *)(v13 + 56), (__int64)(a2 + 7));
    *(_DWORD *)(v13 + 88) = *((_DWORD *)a2 + 22);
    *(_QWORD *)(v13 + 96) = a2[12];
    *(_DWORD *)(v13 + 104) = *((_DWORD *)a2 + 26);
    *(_BYTE *)(v13 + 108) = *((_BYTE *)a2 + 108);
    sub_1800F5EB0((_QWORD *)(v13 + 112), (__int64)(a2 + 14), v14);
    v27 = v13;
    for ( i = 1LL; ; i = v25 + 1 )
    {
      a2 = (__int64 *)*a2;
      v25 = i;
      v26 = v13;
      v28 = (__int64 *)v13;
      v23 = 0LL;
      if ( a2 == (__int64 *)a3 )
        break;
      v23 = 0LL;
      v13 = sub_180011088(0xB0uLL);
      v23 = v13;
      sub_1800129F4((__int64 *)(v13 + 16), (__int64)(a2 + 2));
      *(_DWORD *)(v13 + 48) = *((_DWORD *)a2 + 12);
      sub_1800129F4((__int64 *)(v13 + 56), (__int64)(a2 + 7));
      *(_DWORD *)(v13 + 88) = *((_DWORD *)a2 + 22);
      *(_QWORD *)(v13 + 96) = a2[12];
      *(_DWORD *)(v13 + 104) = *((_DWORD *)a2 + 26);
      *(_BYTE *)(v13 + 108) = *((_BYTE *)a2 + 108);
      sub_1800F5EB0((_QWORD *)(v13 + 112), (__int64)(a2 + 14), v15);
      sub_180030730(v28, &v23);
      sub_180030730((__int64 *)(v13 + 8), &v26);
    }
    v16 = (__int64)v29;
  }
  v17 = *(__int64 **)a1;
  v29 = *(__int64 **)a1;
  if ( i )
  {
    v28 = (__int64 *)v17[1];
    sub_180030740((__int64 *)(v16 + 8), (__int64 *)&v28);
    *v18 = v16;
    sub_180030740(v19, (__int64 *)&v29);
    *(_QWORD *)(v20 + 8) = v21;
    *(_QWORD *)(a1 + 8) += v22;
    v25 = 0LL;
  }
  sub_1800F8560(&v24);
}
