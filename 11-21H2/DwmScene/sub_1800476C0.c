/*
 * XREFs of sub_1800476C0 @ 0x1800476C0
 * Callers:
 *     sub_18003B574 @ 0x18003B574 (sub_18003B574.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_1800129F4 @ 0x1800129F4 (sub_1800129F4.c)
 *     sub_18001DE70 @ 0x18001DE70 (sub_18001DE70.c)
 *     sub_18001DE7C @ 0x18001DE7C (sub_18001DE7C.c)
 *     sub_18001F31C @ 0x18001F31C (sub_18001F31C.c)
 *     sub_18001F56C @ 0x18001F56C (sub_18001F56C.c)
 *     sub_18001FE44 @ 0x18001FE44 (sub_18001FE44.c)
 *     sub_18002C7C4 @ 0x18002C7C4 (sub_18002C7C4.c)
 *     sub_18003070C @ 0x18003070C (sub_18003070C.c)
 *     sub_180030718 @ 0x180030718 (sub_180030718.c)
 *     sub_180030724 @ 0x180030724 (sub_180030724.c)
 *     sub_180043FDC @ 0x180043FDC (sub_180043FDC.c)
 *     sub_180044C14 @ 0x180044C14 (sub_180044C14.c)
 *     sub_1800465B0 @ 0x1800465B0 (sub_1800465B0.c)
 *     sub_180046B98 @ 0x180046B98 (sub_180046B98.c)
 *     sub_180047644 @ 0x180047644 (sub_180047644.c)
 *     sub_180047A84 @ 0x180047A84 (sub_180047A84.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall sub_1800476C0(__int64 a1, __int64 a2)
{
  __int64 *v4; // r14
  __int64 *v5; // rbx
  __int64 v6; // rdx
  volatile __int32 *v7; // rax
  __int32 v8; // r8d
  __int64 *v9; // rax
  int v10; // eax
  _DWORD *v11; // rdx
  __int64 **v12; // rax
  __int64 *i; // rax
  __int64 *j; // rcx
  __int64 v15; // rdi
  __int64 v16; // rbx
  __int64 v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rdx
  volatile __int32 *v20; // rax
  __int32 v21; // r8d
  __int64 *v22; // rax
  int v23; // eax
  _DWORD *v24; // rdx
  char *v25; // rbx
  __int64 v26; // rdx
  volatile __int32 *v27; // rax
  __int32 v28; // r8d
  __int64 *v29; // rax
  int v30; // eax
  _DWORD *v31; // rdx
  char **v32; // rax
  char *k; // rax
  char *m; // rcx
  unsigned int v36; // [rsp+20h] [rbp-99h] BYREF
  unsigned int v37; // [rsp+28h] [rbp-91h] BYREF
  unsigned int v38; // [rsp+30h] [rbp-89h] BYREF
  unsigned int v39; // [rsp+38h] [rbp-81h] BYREF
  unsigned int v40; // [rsp+40h] [rbp-79h] BYREF
  __int64 v41; // [rsp+48h] [rbp-71h] BYREF
  __int64 v42; // [rsp+50h] [rbp-69h] BYREF
  __int64 v43; // [rsp+58h] [rbp-61h]
  __int64 v44; // [rsp+60h] [rbp-59h]
  __int64 v45; // [rsp+68h] [rbp-51h]
  __int64 v46; // [rsp+70h] [rbp-49h]
  __int64 v47[2]; // [rsp+78h] [rbp-41h] BYREF
  __int128 v48; // [rsp+88h] [rbp-31h]
  _QWORD v49[2]; // [rsp+A0h] [rbp-19h] BYREF
  __int128 v50; // [rsp+B0h] [rbp-9h] BYREF
  _QWORD v51[2]; // [rsp+C0h] [rbp+7h] BYREF
  _QWORD v52[8]; // [rsp+D0h] [rbp+17h] BYREF
  unsigned int v53; // [rsp+138h] [rbp+7Fh] BYREF

  sub_18002C7C4(a1 + 16);
  v4 = (__int64 *)(a1 + 88);
  v5 = **(__int64 ***)(a1 + 88);
  while ( !*((_BYTE *)v5 + 25) )
  {
    v44 = v5[8] + 76;
    v53 = 1;
    sub_180030724(&v53);
    v7 = (volatile __int32 *)sub_18001DE70(v6);
    while ( _InterlockedExchange(v7, v8) )
      ;
    v9 = sub_1800465B0(v5[8], v49);
    sub_180047644(a1, a2, v9);
    sub_180010910((__int64)v49);
    v36 = 0;
    sub_18003070C(v44);
    v10 = sub_180030718(&v36);
    *v11 = v10;
    v12 = (__int64 **)v5[2];
    if ( *((_BYTE *)v12 + 25) )
    {
      for ( i = (__int64 *)v5[1]; !*((_BYTE *)i + 25) && v5 == (__int64 *)i[2]; i = (__int64 *)i[1] )
        v5 = i;
      v5 = i;
    }
    else
    {
      v5 = (__int64 *)v5[2];
      for ( j = *v12; !*((_BYTE *)j + 25); j = (__int64 *)*j )
        v5 = j;
    }
  }
  sub_180047A84(a1);
  v15 = *v4;
  v16 = *(_QWORD *)(*v4 + 8);
  *(_QWORD *)&v48 = v16;
  DWORD2(v48) = 0;
  while ( !*(_BYTE *)(v16 + 25) )
  {
    *(_QWORD *)&v48 = v16;
    if ( (unsigned __int8)sub_180043FDC((char *)(v16 + 32), &qword_1801F8058) )
    {
      DWORD2(v48) = 0;
      v16 = *(_QWORD *)(v16 + 16);
    }
    else
    {
      DWORD2(v48) = 1;
      v15 = v16;
      v16 = *(_QWORD *)v16;
    }
  }
  if ( *(_BYTE *)(v15 + 25) || (unsigned __int8)sub_180043FDC((char *)&qword_1801F8058, (_QWORD *)(v15 + 32)) )
  {
    if ( *(_QWORD *)(a1 + 96) == 0x333333333333333LL )
      sub_18001F56C();
    v41 = *v4;
    v42 = a1 + 88;
    v43 = 0LL;
    v17 = sub_180011088(0x50uLL);
    v43 = v17;
    sub_1800129F4((__int64 *)(v17 + 32), (__int64)&qword_1801F8058);
    *(_QWORD *)(v17 + 64) = 0LL;
    *(_QWORD *)(v17 + 72) = 0LL;
    sub_18001DE7C((__int64 *)v17, &v41);
    sub_18001DE7C((__int64 *)(v17 + 8), &v41);
    sub_18001DE7C((__int64 *)(v17 + 16), &v41);
    *(_WORD *)(v17 + 24) = 0;
    v43 = 0LL;
    sub_180044C14((__int64)&v42);
    v50 = v48;
    v15 = sub_18001F31C((_QWORD *)(a1 + 88), (__int64)&v50, v17);
  }
  v18 = *(_QWORD *)(v15 + 72);
  if ( v18 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v18 + 8));
    v18 = *(_QWORD *)(v15 + 72);
  }
  v47[0] = *(_QWORD *)(v15 + 64);
  v47[1] = v18;
  v45 = v47[0] + 76;
  v37 = 1;
  sub_180030724(&v37);
  v20 = (volatile __int32 *)sub_18001DE70(v19);
  while ( _InterlockedExchange(v20, v21) )
    ;
  v22 = sub_1800465B0(v47[0], v51);
  sub_180046B98(a1, a2, v22);
  sub_180010910((__int64)v51);
  v38 = 0;
  sub_18003070C(v45);
  v23 = sub_180030718(&v38);
  *v24 = v23;
  v25 = *(char **)*v4;
  while ( !v25[25] )
  {
    if ( !sub_18001FE44(v25 + 32, &qword_1801F8058) )
    {
      v46 = *((_QWORD *)v25 + 8) + 76LL;
      v39 = 1;
      sub_180030724(&v39);
      v27 = (volatile __int32 *)sub_18001DE70(v26);
      while ( _InterlockedExchange(v27, v28) )
        ;
      v29 = sub_1800465B0(*((_QWORD *)v25 + 8), v52);
      sub_180046B98(a1, a2, v29);
      sub_180010910((__int64)v52);
      v40 = 0;
      sub_18003070C(v46);
      v30 = sub_180030718(&v40);
      *v31 = v30;
    }
    v32 = (char **)*((_QWORD *)v25 + 2);
    if ( *((_BYTE *)v32 + 25) )
    {
      for ( k = (char *)*((_QWORD *)v25 + 1); !k[25] && v25 == *((char **)k + 2); k = (char *)*((_QWORD *)k + 1) )
        v25 = k;
      v25 = k;
    }
    else
    {
      v25 = (char *)*((_QWORD *)v25 + 2);
      for ( m = *v32; !m[25]; m = *(char **)m )
        v25 = m;
    }
  }
  _InterlockedIncrement((volatile signed __int32 *)sub_18001DE70(a1 + 192));
  return sub_180010910((__int64)v47);
}
