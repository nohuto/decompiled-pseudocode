/*
 * XREFs of sub_1405ACB84 @ 0x1405ACB84
 * Callers:
 *     sub_1405AA614 @ 0x1405AA614 (sub_1405AA614.c)
 *     sub_14097DFA0 @ 0x14097DFA0 (sub_14097DFA0.c)
 *     sub_14097E270 @ 0x14097E270 (sub_14097E270.c)
 * Callees:
 *     sub_14020D8D0 @ 0x14020D8D0 (sub_14020D8D0.c)
 *     KeShouldYieldProcessor @ 0x140222100 (KeShouldYieldProcessor.c)
 *     sub_1402285E8 @ 0x1402285E8 (sub_1402285E8.c)
 *     sub_140274C80 @ 0x140274C80 (sub_140274C80.c)
 *     sub_14029F6FC @ 0x14029F6FC (sub_14029F6FC.c)
 *     sub_1402B0CE0 @ 0x1402B0CE0 (sub_1402B0CE0.c)
 *     sub_1402CBD10 @ 0x1402CBD10 (sub_1402CBD10.c)
 *     sub_1402CF280 @ 0x1402CF280 (sub_1402CF280.c)
 *     sub_1402CF4F0 @ 0x1402CF4F0 (sub_1402CF4F0.c)
 *     sub_1402CFEB0 @ 0x1402CFEB0 (sub_1402CFEB0.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_14032CE60 @ 0x14032CE60 (sub_14032CE60.c)
 *     sub_14032F1B0 @ 0x14032F1B0 (sub_14032F1B0.c)
 *     sub_1403531F0 @ 0x1403531F0 (sub_1403531F0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1405AA4C8 @ 0x1405AA4C8 (sub_1405AA4C8.c)
 *     sub_1405AAF14 @ 0x1405AAF14 (sub_1405AAF14.c)
 *     sub_1405AB030 @ 0x1405AB030 (sub_1405AB030.c)
 *     sub_1405AC9A0 @ 0x1405AC9A0 (sub_1405AC9A0.c)
 *     sub_1405ACAD0 @ 0x1405ACAD0 (sub_1405ACAD0.c)
 */

__int64 __fastcall sub_1405ACB84(__int64 a1, _QWORD *a2, unsigned __int64 a3, __int64 a4, ULONG_PTR a5, char a6)
{
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // r9
  __int64 v11; // r10
  __int64 v12; // rdx
  int v13; // r8d
  int v14; // ecx
  unsigned __int64 v15; // r13
  __int64 v16; // rax
  unsigned int v17; // ebx
  __int64 v18; // r15
  unsigned int v19; // edx
  int v20; // eax
  unsigned __int64 v21; // r14
  int v22; // esi
  unsigned __int8 v23; // al
  __int64 v24; // r9
  _QWORD *v25; // rbx
  _QWORD *v26; // r10
  __int64 v27; // rcx
  __int64 v28; // rax
  unsigned __int64 v29; // rdx
  int i; // ecx
  unsigned int v31; // r11d
  unsigned int v32; // esi
  int v33; // eax
  unsigned __int64 v34; // rax
  __int64 v35; // rdi
  unsigned __int64 v36; // rcx
  unsigned __int64 v37; // r15
  int v38; // ebx
  unsigned __int64 v39; // rax
  __int64 v40; // r9
  ULONG_PTR v41; // rax
  __int64 v42; // r9
  __int64 v43; // rbx
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rdi
  __int64 v47; // r15
  unsigned __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rbx
  __int64 v52; // r9
  unsigned __int64 v53; // r15
  __int64 v54; // r8
  unsigned __int64 v55; // rbx
  __int64 v56; // r15
  int v57; // ebx
  __int64 v58; // rdi
  unsigned __int64 v59; // rax
  __int64 v60; // r9
  bool v61; // cf
  int v62; // ebx
  unsigned __int64 v63; // rax
  __int64 v64; // r9
  unsigned __int8 v66; // [rsp+30h] [rbp-D0h]
  unsigned int v67; // [rsp+34h] [rbp-CCh]
  signed int v68; // [rsp+38h] [rbp-C8h]
  __int64 v69; // [rsp+40h] [rbp-C0h]
  __int64 v70; // [rsp+48h] [rbp-B8h]
  __int64 v71; // [rsp+58h] [rbp-A8h]
  BOOL v72; // [rsp+60h] [rbp-A0h]
  __int64 v73; // [rsp+68h] [rbp-98h]
  __int64 v74; // [rsp+70h] [rbp-90h]
  _QWORD *v75; // [rsp+78h] [rbp-88h]
  ULONG_PTR v76; // [rsp+80h] [rbp-80h]
  __int64 v77; // [rsp+88h] [rbp-78h] BYREF
  unsigned __int64 v78; // [rsp+90h] [rbp-70h]
  unsigned __int64 v79; // [rsp+98h] [rbp-68h]
  unsigned __int64 v80; // [rsp+A0h] [rbp-60h]
  __int64 v81; // [rsp+A8h] [rbp-58h]
  _QWORD *v82; // [rsp+B0h] [rbp-50h]
  __int64 v83; // [rsp+B8h] [rbp-48h]
  __int64 v84; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v85; // [rsp+C8h] [rbp-38h]
  __int64 v86; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v87; // [rsp+D8h] [rbp-28h]
  __int64 v88; // [rsp+E0h] [rbp-20h]
  _QWORD v89[24]; // [rsp+F0h] [rbp-10h] BYREF

  v80 = a3;
  v82 = a2;
  v83 = a4;
  memset(v89, 0, 0xB8uLL);
  v85 = *(_QWORD *)(a1 + 32);
  v8 = *((_QWORD *)KeGetCurrentThread() + 23) + 1664LL;
  v73 = v8;
  v74 = *(_QWORD *)(v85 + 16);
  v9 = sub_1405AB030(a1);
  v12 = v10;
  if ( v9 )
    v12 = v9;
  v78 = v12;
  if ( v12 == 512 )
  {
    v13 = 1;
    v67 = 1;
LABEL_5:
    v14 = 0x4000000;
    goto LABEL_6;
  }
  if ( v12 == 0x40000 )
  {
    v13 = 2;
    v67 = 2;
    goto LABEL_5;
  }
  v13 = 0;
  v14 = 0;
  v67 = 0;
  if ( v12 == 16 )
  {
    v69 = v10;
    v67 = 0;
    goto LABEL_7;
  }
LABEL_6:
  v69 = 1LL;
LABEL_7:
  LODWORD(v89[0]) = 1;
  v71 = 0LL;
  v15 = 0LL;
  v68 = 0;
  v84 = 0LL;
  v89[2] = 0LL;
  v89[3] = 0LL;
  v76 = 0LL;
  WORD2(v89[0]) = 0;
  v16 = *(_QWORD *)(a1 + 24);
  LODWORD(v89[1]) = 20;
  if ( (a6 & 1) != 0 )
  {
    v17 = *(_DWORD *)(v16 + 48);
    v18 = v16;
    v70 = v16;
    v19 = v14 | 0x80000000;
    if ( (v17 & 0x600000) == 0x600000 )
      v19 = v14;
    if ( (*(_DWORD *)(v11 + 8) & 1) != 0 )
      v20 = 4;
    else
      v20 = (v17 >> 7) & 0x1F;
    v21 = sub_1402CBD10(0xFFFFF6BFFFFFFF78uLL, 0LL, v20 | v19);
    v22 = (v17 >> 12) & 0x7F;
    v23 = sub_1402CF4F0(v8);
    v13 = v67;
    v66 = v23;
    v24 = 1LL;
    v72 = (v17 & 0x2200000) == 35651584;
  }
  else
  {
    v18 = 0LL;
    v70 = 0LL;
    v66 = 17;
    v21 = 0LL;
    v24 = 1LL;
    v22 = 0;
    v72 = (*(_DWORD *)(v16 + 48) & 0x2200000) == 35651584;
  }
  v79 = 0LL;
  if ( !v80 )
  {
    v58 = v70;
    goto LABEL_117;
  }
  v25 = v82;
  v26 = v82;
  v27 = v83;
  v81 = 0LL;
  v87 = 8 * v69;
  v28 = v83 - (_QWORD)v82;
  v75 = v82;
  v88 = v83 - (_QWORD)v82;
  while ( 1 )
  {
    if ( v27 )
    {
      v29 = *(_QWORD *)((char *)v26 + v28);
      a5 = ((v29 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      for ( i = v13; i; --i )
        a5 = ((a5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      if ( v29 < (*(unsigned int *)(v18 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v18 + 32) << 32)) << 12
        || v29 > (((*(unsigned int *)(v18 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v18 + 33) << 32)) << 12) | 0xFFF) )
      {
        v18 = sub_1405AAF14(v29)[3];
        v70 = v18;
        v32 = *(_DWORD *)(v18 + 48);
        if ( (*(_DWORD *)(v85 + 8) & 1) != 0 )
          v33 = 4;
        else
          v33 = (v32 >> 7) & 0x1F;
        v34 = sub_1402CBD10(0xFFFFF6BFFFFFFF78uLL, 0LL, v33 | v31);
        v26 = v75;
        v21 = v34;
        v22 = (v32 >> 12) & 0x7F;
      }
      if ( !v25 || (v35 = v21, !*v26) )
        v35 = 0LL;
    }
    else
    {
      v35 = 0LL;
      if ( v25 )
        v35 = v21;
    }
    if ( (v35 & 1) != 0 )
      v35 ^= (v35 ^ (*v26 << 12)) & 0xFFFFFFFFFF000LL;
    v36 = (a5 >> 9) & 0x7FFFFFFFF8LL;
    if ( v18 )
    {
      v37 = v36 - 0x98000000000LL;
      if ( v15 != v36 - 0x98000000000LL )
      {
        if ( v15 )
        {
          v38 = sub_1405AC9A0(v15, v71, v68);
          sub_14032F1B0((__int64)v89);
          if ( v72 )
            v76 = 0LL;
          sub_14020D8D0(v73, v15);
          if ( v38 )
          {
            sub_1402B0CE0(v73, v66);
            sub_1402CFEB0(v15 + 8);
            v39 = sub_1402CFEB0(v15);
            sub_14029F6FC(v39, v40 - 1, 1);
            v66 = sub_1402CF4F0(v73);
          }
          v71 = 0LL;
          v68 = 0;
        }
        LOBYTE(v24) = v66;
        sub_14032CE60(a5, 0LL, v22, v24, 0);
        v15 = v37;
      }
      v18 = v70;
    }
    else
    {
      v15 = v36 - 0x98000000000LL;
    }
    v41 = v76;
    v42 = 0LL;
    v43 = *(_QWORD *)a5;
    v77 = *(_QWORD *)a5;
    if ( !v76 )
      v41 = a5;
    v86 = v43;
    v76 = v41;
    if ( (v35 & 1) == 0 )
    {
      if ( v43 )
      {
        v68 -= v69;
        v71 -= v69;
        if ( (v43 & 1) == 0 || (v42 = 3LL, !v67) )
          v42 = 4LL;
      }
      goto LABEL_63;
    }
    if ( (v43 & 1) != 0 )
    {
      if ( v35 != v43 )
        v42 = (unsigned int)(v67 != 0) + 1;
LABEL_63:
      v44 = v69;
      goto LABEL_64;
    }
    v44 = v69;
    v42 = 5LL;
    if ( (v43 & 0x800) == 0 )
    {
      v71 += v69;
      if ( !v43 )
        v68 += v69;
    }
LABEL_64:
    sub_1405ACAD0(v73, (__int64 *)a5, v35, v42, v44);
    if ( v43 )
    {
      if ( (v43 & 1) != 0 )
      {
        if ( v18 )
        {
          if ( v67 )
          {
            if ( v69 )
            {
              v46 = a5;
              v47 = v69;
              do
              {
                sub_1402285E8((__int64)v89, v67, v46);
                v46 += 8LL;
                --v47;
              }
              while ( v47 );
              v43 = v77;
            }
          }
          else
          {
            sub_1402CF280((__int64)v89, (__int64)(a5 << 25) >> 16, v69, 0);
          }
        }
        v48 = sub_140317A10((unsigned __int64)&v86);
      }
      else
      {
        v48 = v43;
        if ( qword_140C50780 && (v43 & 0x10) == 0 )
          v48 = v43 & ~qword_140C50780;
      }
      v45 = 0xFFFFFFFFFFLL;
      v49 = (v48 >> 12) & 0xFFFFFFFFFFLL;
    }
    else
    {
      v49 = -1LL;
    }
    if ( v43 )
    {
      v50 = v78;
      v51 = 48 * v49 - 0x220000000000LL;
      v52 = v74;
      v53 = 0LL;
      if ( v78 )
      {
        v54 = 1LL;
        do
        {
          if ( (*(_QWORD *)(v51 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1 )
            goto LABEL_91;
          LODWORD(v77) = 0;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v51 + 24), 0x3FuLL) )
          {
            do
            {
              do
                sub_1402F32E0(&v77, v50, v54, v52);
              while ( *(__int64 *)(v51 + 24) < 0 );
            }
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v51 + 24), 0x3FuLL) );
            v52 = v74;
            v54 = 1LL;
          }
          v45 = *(_QWORD *)(v51 + 24) & 0x3FFFFFFFFFFFFFFFLL;
          if ( v45 == 1 )
            v45 = 1LL;
          else
            *(_QWORD *)(v51 + 24) ^= (*(_QWORD *)(v51 + 24) ^ (v45 - 1)) & 0x3FFFFFFFFFFFFFFFLL;
          _InterlockedAnd64((volatile signed __int64 *)(v51 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( v45 == 1 )
          {
LABEL_91:
            sub_1405AA4C8(v45, v51, &v84, 0);
            v52 = v74;
            v54 = 1LL;
          }
          v50 = v78;
          v51 += 48 * v74;
          v53 += v52;
        }
        while ( v53 < v78 );
      }
    }
    else
    {
      v50 = v78;
      v52 = v74;
    }
    v55 = v79 + 1;
    v26 = v75 + 1;
    a5 += v87;
    ++v79;
    ++v75;
    v81 += v69;
    if ( (v81 & 0x3F) != 0 && v50 == v52 )
    {
      v58 = v70;
      v56 = v73;
      goto LABEL_110;
    }
    v56 = v73;
    if ( sub_1403531F0(v73) || (unsigned int)sub_140274C80(v73, v15) || KeShouldYieldProcessor() )
      break;
    v58 = v70;
LABEL_109:
    v26 = v75;
LABEL_110:
    v61 = v55 < v80;
    v25 = v82;
    v13 = v67;
    v28 = v88;
    v27 = v83;
    if ( !v61 )
      goto LABEL_113;
    v18 = v70;
    v24 = 1LL;
  }
  if ( v55 != v80 )
  {
    v57 = sub_1405AC9A0(v15, v71, v68);
    sub_14032F1B0((__int64)v89);
    if ( v72 )
      v76 = 0LL;
    sub_14020D8D0(v73, v15);
    sub_1402B0CE0(v73, v66);
    v58 = v70;
    if ( v57 && v70 )
    {
      sub_1402CFEB0(v15 + 8);
      v59 = sub_1402CFEB0(v15);
      sub_14029F6FC(v59, v60 - 1, 1);
    }
    v15 = 0LL;
    v71 = 0LL;
    v68 = 0;
    sub_1402CF4F0(v73);
    v55 = v79;
    goto LABEL_109;
  }
  v58 = v70;
LABEL_113:
  if ( v15 )
  {
    v62 = sub_1405AC9A0(v15, v71, v68);
    if ( v58 )
    {
      sub_14032F1B0((__int64)v89);
      sub_14020D8D0(v56, v15);
      goto LABEL_118;
    }
    return v84;
  }
LABEL_117:
  v56 = v73;
  v62 = 0;
LABEL_118:
  sub_1402B0CE0(v56, v66);
  if ( v62 && v58 )
  {
    sub_1402CFEB0(v15 + 8);
    v63 = sub_1402CFEB0(v15);
    sub_14029F6FC(v63, v64 - 1, 1);
  }
  return v84;
}
