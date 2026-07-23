/*
 * XREFs of sub_140406130 @ 0x140406130
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140400B8C @ 0x140400B8C (sub_140400B8C.c)
 *     sub_140400BBC @ 0x140400BBC (sub_140400BBC.c)
 *     sub_140400C30 @ 0x140400C30 (sub_140400C30.c)
 *     sub_140400C48 @ 0x140400C48 (sub_140400C48.c)
 *     sub_140400C90 @ 0x140400C90 (sub_140400C90.c)
 *     sub_140400CC0 @ 0x140400CC0 (sub_140400CC0.c)
 *     sub_140400D88 @ 0x140400D88 (sub_140400D88.c)
 *     sub_140400F4C @ 0x140400F4C (sub_140400F4C.c)
 *     sub_140401350 @ 0x140401350 (sub_140401350.c)
 *     sub_140406800 @ 0x140406800 (sub_140406800.c)
 *     sub_1404068A4 @ 0x1404068A4 (sub_1404068A4.c)
 *     sub_1404068E0 @ 0x1404068E0 (sub_1404068E0.c)
 *     sub_140406AD8 @ 0x140406AD8 (sub_140406AD8.c)
 *     sub_140407254 @ 0x140407254 (sub_140407254.c)
 *     sub_14040A528 @ 0x14040A528 (sub_14040A528.c)
 *     sub_14040A580 @ 0x14040A580 (sub_14040A580.c)
 *     sub_14040A5C4 @ 0x14040A5C4 (sub_14040A5C4.c)
 *     sub_14040A64C @ 0x14040A64C (sub_14040A64C.c)
 *     sub_14040A6E8 @ 0x14040A6E8 (sub_14040A6E8.c)
 *     sub_14040A7A8 @ 0x14040A7A8 (sub_14040A7A8.c)
 *     sub_140411408 @ 0x140411408 (sub_140411408.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_140406130(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5, __int64 a6, __int64 a7)
{
  __int64 v7; // rbx
  unsigned int v11; // r12d
  unsigned int v12; // r14d
  __int64 v13; // r13
  __int64 *v14; // rdi
  __int64 v15; // rax
  __int64 v16; // r15
  __int64 v17; // rbx
  unsigned int v18; // eax
  __int64 v19; // rcx
  unsigned int v20; // eax
  __int64 v21; // r15
  __int64 v22; // r13
  unsigned int v23; // eax
  __int64 v24; // r13
  int v25; // esi
  __int64 v26; // r13
  int v27; // edi
  unsigned int v28; // eax
  __int64 v29; // rcx
  char *v30; // r13
  unsigned __int64 v31; // r12
  int v32; // ebx
  __int64 v33; // rbx
  unsigned int v34; // edi
  unsigned int v35; // esi
  _QWORD *v36; // r12
  __int64 v37; // rsi
  signed __int64 v38; // rcx
  unsigned int v39; // r13d
  __int64 v40; // rsi
  _QWORD *v41; // r15
  unsigned int i; // r13d
  __int64 v43; // rsi
  _QWORD *v44; // r15
  unsigned int j; // r13d
  unsigned int v46; // edi
  unsigned int v47; // edi
  unsigned int v49; // [rsp+40h] [rbp-2B8h]
  unsigned int v50; // [rsp+40h] [rbp-2B8h]
  int v51; // [rsp+44h] [rbp-2B4h]
  unsigned int v52; // [rsp+48h] [rbp-2B0h]
  char *v53; // [rsp+48h] [rbp-2B0h]
  int v54; // [rsp+54h] [rbp-2A4h]
  int v55; // [rsp+54h] [rbp-2A4h]
  __int64 v56; // [rsp+58h] [rbp-2A0h]
  signed __int64 v57; // [rsp+58h] [rbp-2A0h]
  __int64 v58; // [rsp+60h] [rbp-298h]
  char *v59; // [rsp+68h] [rbp-290h]
  int v60; // [rsp+70h] [rbp-288h]
  char v61; // [rsp+78h] [rbp-280h]
  unsigned __int64 v63; // [rsp+88h] [rbp-270h]
  unsigned int *v64; // [rsp+90h] [rbp-268h]
  __int64 v65; // [rsp+98h] [rbp-260h]
  _QWORD v66[64]; // [rsp+B0h] [rbp-248h] BYREF

  v7 = *(unsigned int *)(a1 + 92);
  v51 = *(_DWORD *)(a1 + 88);
  v56 = a3;
  v61 = a4;
  v49 = *(_DWORD *)(a1 + 92);
  v11 = (v51 - 2 + *(_DWORD *)(a1 + 24)) / (unsigned int)(v51 - 1) + 1;
  v52 = v11;
  memset(v66, 0, sizeof(v66));
  if ( (a4 & 0xFFFFFFDF) != 0 )
  {
    return 209715726;
  }
  else
  {
    v12 = 0;
    if ( !a3 )
      v56 = *(_QWORD *)(a1 + 648);
    sub_140400F4C();
    v13 = *(unsigned int *)(a1 + 36) + a6;
    if ( (_DWORD)v7 )
    {
      v14 = v66;
      v15 = a3;
      v16 = v7;
      do
      {
        if ( v15 )
        {
          v18 = sub_140407254(a1);
          v17 = sub_1404068E0(v13, v18, a1);
          v19 = (unsigned int)sub_140407254(a1);
          v15 = a3;
          v13 += v19;
        }
        else
        {
          v17 = *(__int64 *)((char *)v14 + a1 - (_QWORD)v66 + 104);
        }
        *v14++ = v17;
        --v16;
      }
      while ( v16 );
    }
    v20 = sub_140407254(a1);
    v65 = sub_1404068E0(v13, v20, a1);
    v21 = v65;
    v22 = (unsigned int)sub_140407254(a1) + v13;
    v23 = sub_140407254(a1);
    v58 = sub_1404068E0(v22, v23, a1);
    v24 = (unsigned int)sub_140407254(a1) + v22;
    sub_140401350();
    v25 = sub_140400BBC();
    v26 = (unsigned int)sub_140401350() + v24;
    sub_140401350();
    v27 = sub_140400BBC();
    v28 = sub_140401350();
    v29 = 4LL * v11;
    v59 = (char *)(v28 + v26);
    v30 = &v59[v29];
    v64 = (unsigned int *)&v59[v29];
    v31 = (unsigned __int64)&v59[v29 + 31 + v29] & 0xFFFFFFFFFFFFFFE0uLL;
    v63 = v31;
    v32 = 2 * sub_140401350();
    v33 = a7
        - (v32
         + (unsigned int)sub_140407254(a1) * (v49 + 2)
         + *(_DWORD *)(a1 + 36)
         + ((8LL * v52 + 31) & 0xFFFFFFFFFFFFFFE0uLL));
    sub_140400B8C();
    v54 = sub_140400C90();
    v55 = sub_14040A64C(a1, v56) | v54;
    v60 = ~((unsigned __int64)-(__int64)(unsigned int)sub_140400C48() >> 32);
    sub_140400C30();
    sub_140400D88();
    sub_140400CC0();
    sub_140411408(v51, v25, v27, (_DWORD)v59, (__int64)v30, v52);
    if ( a3 )
    {
      sub_1404068A4(a1, v56, v66[0]);
      v34 = v49;
      sub_140406800(a1, v49, (unsigned int)v66, v65, v31, v33);
    }
    else
    {
      v34 = v49;
    }
    v35 = 0;
    if ( v34 )
    {
      v36 = v66;
      do
        sub_140406AD8(
          a1,
          *v36++,
          v65,
          (unsigned int)~((unsigned __int64)-(__int64)(v35++ ^ (unsigned __int64)*(unsigned int *)&v59[4 * v52 - 4]) >> 32));
      while ( v35 < v34 );
      v31 = v63;
      v30 = (char *)v64;
    }
    v37 = v58;
    v50 = v52 - 2;
    if ( v52 != 2 )
    {
      v38 = v59 - v30;
      v53 = &v30[4 * v52 - 8];
      v39 = v51 - 1;
      v57 = v38;
      do
      {
        if ( v39 )
        {
          v40 = v39;
          do
          {
            sub_14040A5C4(a1, v21, v21, 0, v31, v33);
            --v40;
          }
          while ( v40 );
          v37 = v58;
        }
        if ( v34 )
        {
          v41 = v66;
          for ( i = 0; i < v34; ++i )
            sub_140406AD8(
              a1,
              *v41++,
              v37,
              (unsigned int)~((unsigned __int64)-(__int64)(i ^ (unsigned __int64)*(unsigned int *)&v53[v57]) >> 32));
          v21 = v65;
          v12 = 0;
          v31 = v63;
          v39 = v51 - 1;
        }
        sub_14040A6E8(a1, v37, *(_DWORD *)v53, v31, v33);
        sub_14040A580(a1, v21, v37, v21, v31, v33);
        v53 -= 4;
        --v50;
      }
      while ( v50 );
      v30 = (char *)v64;
    }
    if ( v51 != 1 )
    {
      v43 = (unsigned int)(v51 - 1);
      do
      {
        sub_14040A5C4(a1, v21, v21, 0, v31, v33);
        --v43;
      }
      while ( v43 );
      v37 = v58;
    }
    if ( v34 )
    {
      v44 = v66;
      for ( j = 0; j < v34; ++j )
        sub_140406AD8(
          a1,
          *v44++,
          v37,
          (unsigned int)~((unsigned __int64)-(__int64)(j ^ (unsigned __int64)*(unsigned int *)v59) >> 32));
      v21 = v65;
      v31 = v63;
      v30 = (char *)v64;
    }
    sub_14040A6E8(a1, v37, *(_DWORD *)v30, v31, v33);
    sub_14040A528(a1, v21, v37, v21, 0, v31, v33);
    sub_14040A6E8(a1, v21, v60, v31, v33);
    if ( *(_DWORD *)(a1 + 64) && (v61 & 0x20) != 0 )
    {
      v46 = 0;
      do
      {
        sub_14040A5C4(a1, v21, v21, 0, v31, v33);
        ++v46;
      }
      while ( v46 < *(_DWORD *)(a1 + 64) );
    }
    v47 = sub_14040A64C(a1, v21) | v55;
    sub_14040A7A8(a1, v37, v31, v33);
    sub_140406AD8(a1, v37, v21, v47);
    sub_1404068A4(a1, v21, a5);
  }
  return v12;
}
