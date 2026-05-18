/*
 * XREFs of sub_180026AE4 @ 0x180026AE4
 * Callers:
 *     sub_18002F1B0 @ 0x18002F1B0 (sub_18002F1B0.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_1800120D4 @ 0x1800120D4 (sub_1800120D4.c)
 *     sub_180012170 @ 0x180012170 (sub_180012170.c)
 *     sub_180026A88 @ 0x180026A88 (sub_180026A88.c)
 *     sub_180026D64 @ 0x180026D64 (sub_180026D64.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
unsigned __int64 __fastcall sub_180026AE4(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // r15
  __int64 v7; // rdi
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // r14
  __int64 v13; // rax
  __int64 v14; // rsi
  unsigned __int64 v15; // r15
  unsigned __int64 v16; // rbp
  __int64 (__fastcall ***v17)(_QWORD, unsigned __int64); // rcx
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rcx

  v6 = a2 - *a1;
  v7 = (a1[1] - *a1) >> 6;
  if ( v7 == 0x3FFFFFFFFFFFFFFLL )
    sub_180012170();
  v8 = v7 + 1;
  v9 = (a1[2] - *a1) >> 6;
  v10 = v9 >> 1;
  if ( v9 <= 0x3FFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v11 = v8;
    if ( v10 + v9 >= v8 )
      v11 = v10 + v9;
    if ( v11 > 0x3FFFFFFFFFFFFFFLL )
      sub_1800120D4();
  }
  else
  {
    v11 = 0x3FFFFFFFFFFFFFFLL;
  }
  v12 = v11 << 6;
  v13 = sub_180011088(v12);
  v14 = v13;
  v15 = v6 & 0xFFFFFFFFFFFFFFC0uLL;
  v16 = v15 + v13;
  *(_QWORD *)(v15 + v13 + 56) = 0LL;
  v17 = *(__int64 (__fastcall ****)(_QWORD, unsigned __int64))(a3 + 56);
  if ( v17 )
    *(_QWORD *)(v16 + 56) = (**v17)(v17, v15 + v13);
  v18 = a1[1];
  v19 = v14;
  v20 = *a1;
  if ( a2 != v18 )
  {
    sub_180026D64(v20, a2, v14);
    v19 = v16 + 64;
    v18 = a1[1];
    v20 = a2;
  }
  sub_180026D64(v20, v18, v19);
  if ( *a1 )
  {
    sub_180026A88(*a1, a1[1]);
    sub_180010884((char *)*a1, (a1[2] - *a1) & 0xFFFFFFFFFFFFFFC0uLL);
  }
  *a1 = v14;
  a1[1] = v14 + (v8 << 6);
  a1[2] = v12 + v14;
  return v16;
}
