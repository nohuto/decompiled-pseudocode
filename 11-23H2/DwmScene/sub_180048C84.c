/*
 * XREFs of sub_180048C84 @ 0x180048C84
 * Callers:
 *     sub_18004C480 @ 0x18004C480 (sub_18004C480.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011C50 @ 0x180011C50 (sub_180011C50.c)
 *     sub_180026650 @ 0x180026650 (sub_180026650.c)
 *     sub_180029664 @ 0x180029664 (sub_180029664.c)
 *     sub_180029680 @ 0x180029680 (sub_180029680.c)
 *     sub_1800392FC @ 0x1800392FC (sub_1800392FC.c)
 *     sub_18003935C @ 0x18003935C (sub_18003935C.c)
 *     sub_180039770 @ 0x180039770 (sub_180039770.c)
 *     sub_180039788 @ 0x180039788 (sub_180039788.c)
 *     sub_1800398CC @ 0x1800398CC (sub_1800398CC.c)
 *     sub_180047F10 @ 0x180047F10 (sub_180047F10.c)
 *     sub_180070B70 @ 0x180070B70 (sub_180070B70.c)
 *     sub_180070B94 @ 0x180070B94 (sub_180070B94.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall sub_180048C84(__int64 a1, __int64 *a2, __int64 a3)
{
  unsigned int v6; // eax
  __int64 v7; // rcx
  int *v8; // rdi
  _QWORD *v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 v20; // r8
  __int64 v21; // r10
  __int64 v22; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v23; // [rsp+38h] [rbp-C8h]
  _OWORD v24[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v25; // [rsp+60h] [rbp-A0h]
  __int64 v26; // [rsp+68h] [rbp-98h]
  int v27; // [rsp+70h] [rbp-90h] BYREF
  __int64 v28; // [rsp+78h] [rbp-88h]
  __int64 v29; // [rsp+80h] [rbp-80h]
  int v30; // [rsp+88h] [rbp-78h]
  __int64 v31; // [rsp+90h] [rbp-70h]
  __int64 v32; // [rsp+98h] [rbp-68h]
  int v33; // [rsp+A0h] [rbp-60h]
  __int64 v34; // [rsp+A8h] [rbp-58h]
  __int64 v35; // [rsp+B0h] [rbp-50h]
  int v36; // [rsp+B8h] [rbp-48h]
  __int64 v37; // [rsp+C0h] [rbp-40h]
  __int64 v38; // [rsp+C8h] [rbp-38h]
  int v39; // [rsp+D0h] [rbp-30h]
  __int64 v40; // [rsp+D8h] [rbp-28h]
  __int64 v41; // [rsp+E0h] [rbp-20h]
  int v42; // [rsp+E8h] [rbp-18h]
  __int64 v43; // [rsp+F0h] [rbp-10h]
  __int64 v44; // [rsp+F8h] [rbp-8h]
  int v45; // [rsp+100h] [rbp+0h]
  __int64 v46; // [rsp+108h] [rbp+8h]
  __int64 v47; // [rsp+110h] [rbp+10h]
  int v48; // [rsp+118h] [rbp+18h]
  __int64 v49; // [rsp+120h] [rbp+20h] BYREF

  if ( *(_DWORD *)(a1 + 120) )
  {
    sub_180011C50(*a2 + 72, &v22);
    v6 = sub_180026650(v22);
    if ( !sub_180029680(a1, v6) )
    {
      if ( !sub_180029664(a1, 4) )
      {
LABEL_15:
        if ( v23 )
          sub_180010530(v23);
        return;
      }
      sub_180047F10(v7, &v22);
    }
    v24[0] = 0LL;
    v25 = a1 + 144;
    v26 = 1LL;
    v27 = 0;
    v28 = a1 + 160;
    v29 = 2LL;
    v30 = 1;
    v31 = a1 + 176;
    v32 = 16LL;
    v33 = 4;
    v34 = a1 + 192;
    v35 = 4LL;
    v36 = 2;
    v37 = a1 + 240;
    v38 = 32LL;
    v39 = 5;
    v40 = a1 + 256;
    v41 = 64LL;
    v42 = 6;
    v43 = a1 + 208;
    v44 = 512LL;
    v45 = 9;
    v46 = a1 + 224;
    v47 = 1024LL;
    v48 = 10;
    v8 = &v27;
    do
    {
      v9 = (_QWORD *)*((_QWORD *)v8 - 2);
      if ( !*v9 || (a3 & *((_QWORD *)v8 - 1)) == 0 )
        v9 = v24;
      sub_1800398CC(*a2, v9);
      v8 += 6;
    }
    while ( v8 - 4 != (int *)&v49 );
    sub_180039788(*a2, *(_DWORD *)(a1 + 300));
    if ( *(_QWORD *)(a1 + 272) )
    {
      sub_180039770(*a2);
      sub_18003935C((_QWORD **)*a2, *(_DWORD *)(a1 + 112));
      v14 = sub_180070B94(v11, v10, v12, v13);
      sub_180070B70(v14, 1LL, 1LL, *(unsigned int *)(a1 + 112));
    }
    else
    {
      v24[1] = 0LL;
      sub_180039770(*a2);
      sub_1800392FC((_QWORD **)*a2, *(_DWORD *)(a1 + 120));
    }
    v19 = sub_180070B94(v16, v15, v17, v18);
    sub_180070B70(v19, 0LL, 1LL, *(unsigned int *)(a1 + 120));
    sub_180070B70(v21, 12LL, v20, 1LL);
    if ( *((_QWORD *)&v24[0] + 1) )
      sub_180010530(*((__int64 *)&v24[0] + 1));
    goto LABEL_15;
  }
}
