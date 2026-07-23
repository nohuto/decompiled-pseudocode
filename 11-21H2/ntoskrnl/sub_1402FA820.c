/*
 * XREFs of sub_1402FA820 @ 0x1402FA820
 * Callers:
 *     SeAccessCheckWithHint @ 0x1402F9CF0 (SeAccessCheckWithHint.c)
 *     sub_1402FBEC0 @ 0x1402FBEC0 (sub_1402FBEC0.c)
 *     sub_140722B40 @ 0x140722B40 (sub_140722B40.c)
 * Callees:
 *     sub_1402A70F0 @ 0x1402A70F0 (sub_1402A70F0.c)
 *     sub_1402F9680 @ 0x1402F9680 (sub_1402F9680.c)
 *     sub_1402FB0E0 @ 0x1402FB0E0 (sub_1402FB0E0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406C57AC @ 0x1406C57AC (sub_1406C57AC.c)
 */

__int64 __fastcall sub_1402FA820(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        __int128 *a6,
        unsigned int a7,
        _DWORD *a8,
        unsigned int a9,
        char a10,
        unsigned int *a11,
        _QWORD *a12,
        int *a13,
        char a14,
        char a15,
        int *a16,
        __int64 *a17,
        char *a18,
        char *a19)
{
  unsigned int v19; // r14d
  _DWORD *v21; // r9
  unsigned int v24; // r10d
  __int64 v25; // r8
  unsigned int v26; // esi
  __int16 v27; // ax
  __int16 v28; // cx
  __int64 v29; // rdx
  __int64 v30; // rdi
  unsigned int v31; // r8d
  int v32; // edx
  int v33; // ebx
  __int64 v34; // r8
  int v35; // eax
  int v36; // ecx
  int v37; // edx
  unsigned __int8 v38; // cl
  int v39; // ebx
  unsigned __int8 v40; // bp
  __int64 v42; // rax
  __int64 v43; // rax
  int v44; // r8d
  int v45; // edi
  int *v46; // rbp
  int v47; // edx
  int v48; // r9d
  int v49; // edi
  int v50; // r10d
  char v51; // al
  int v52; // eax
  int v53; // ecx
  int v54; // eax
  int v55; // eax
  int v56; // eax
  _DWORD *v57; // rax
  int v58; // ecx
  char v59; // r12
  __int64 v60; // r9
  char v61; // r13
  int v62; // r8d
  unsigned int v63; // edx
  int *v64; // rcx
  bool v65; // zf
  int v66; // eax
  unsigned int v67; // r8d
  unsigned int v68; // edx
  char *v69; // r10
  char *v70; // r9
  __int64 v71; // rax
  __int64 v72; // rax
  unsigned int v73; // esi
  int *v74; // rdi
  unsigned __int64 k; // rcx
  signed __int64 v76; // r9
  char *v77; // rcx
  __int64 v78; // rax
  __int64 v79; // rax
  __int64 v80; // rax
  int *v81; // rdi
  unsigned __int64 i; // rcx
  unsigned int *v83; // rdi
  unsigned __int64 j; // rcx
  unsigned int *v85; // rcx
  __int64 v86; // rax
  unsigned __int8 v87; // [rsp+70h] [rbp-F8h]
  unsigned __int8 v88; // [rsp+71h] [rbp-F7h]
  unsigned __int8 v89; // [rsp+72h] [rbp-F6h]
  int v90; // [rsp+74h] [rbp-F4h]
  unsigned int v91; // [rsp+78h] [rbp-F0h]
  unsigned int v92; // [rsp+7Ch] [rbp-ECh]
  LUID v95; // [rsp+C8h] [rbp-A0h] BYREF
  int v96; // [rsp+D0h] [rbp-98h]
  __int64 v97; // [rsp+D8h] [rbp-90h] BYREF
  int v98; // [rsp+E0h] [rbp-88h]
  __int128 v99; // [rsp+E8h] [rbp-80h] BYREF
  __int128 v100; // [rsp+F8h] [rbp-70h]
  __int128 v101; // [rsp+108h] [rbp-60h]

  v19 = 0;
  v21 = a8;
  if ( !a4 )
    a4 = a3;
  v24 = a5;
  v25 = (__int64)a16;
  v90 = 0;
  v89 = 0;
  v87 = 0;
  v88 = 0;
  v91 = a5;
  v92 = 1;
  v99 = 0LL;
  v100 = 0LL;
  v101 = 0LL;
  if ( (a5 & 0x1000000) != 0 )
  {
    v95 = stru_140D3CA98;
    v96 = 0;
    if ( !sub_1402A70F0(a4, (__int64)&v95, 1u, 1, a10) )
    {
      v26 = 0;
      v39 = -1073741727;
      v40 = 1;
LABEL_31:
      if ( a14 )
      {
        if ( a7 )
        {
          if ( a7 < 4 )
            goto LABEL_168;
          v79 = a7 - 1;
          if ( a11 <= (unsigned int *)&a13[v79] && &a11[v79] >= (unsigned int *)a13 )
            goto LABEL_168;
          v80 = a7 & 0xFFFFFFFC;
          do
            v19 += 4;
          while ( v19 < (unsigned int)v80 );
          v81 = a13;
          for ( i = (unsigned __int64)(4 * v80) >> 2; i; --i )
            *v81++ = v39;
          v83 = a11;
          for ( j = (unsigned __int64)(4 * v80) >> 2; j; --j )
            *v83++ = v26;
          if ( v19 < a7 )
          {
LABEL_168:
            v85 = &a11[v19];
            v86 = a7 - v19;
            do
            {
              *(unsigned int *)((char *)v85 + (char *)a13 - (char *)a11) = v39;
              *v85++ = v26;
              --v86;
            }
            while ( v86 );
          }
        }
        goto LABEL_33;
      }
LABEL_32:
      *a13 = v39;
      *a11 = v26;
LABEL_33:
      if ( v39 < 0 )
      {
        if ( a18 )
          *a18 = 0;
        if ( a19 )
          *a19 = 1;
      }
      else
      {
        if ( a18 )
          *a18 = 1;
        if ( a19 )
          *a19 = 0;
      }
      return v40;
    }
    v32 = 1;
    v90 = 1;
    v24 = a5 & 0xFEFFFFFF;
    v89 = 1;
    v26 = a9 | 0x1000000;
    v91 = a5 & 0xFEFFFFFF;
    if ( (a5 & 0xFEFFFFFF) == 0 )
      goto LABEL_87;
    v25 = (__int64)a16;
    v21 = a8;
  }
  else
  {
    v26 = a9;
  }
  v27 = *(_WORD *)(a1 + 2);
  v28 = v27 & 4;
  if ( (v27 & 4) != 0 )
  {
    if ( v27 >= 0 )
    {
      v30 = *(_QWORD *)(a1 + 32);
    }
    else
    {
      v29 = *(unsigned int *)(a1 + 16);
      if ( (_DWORD)v29 )
        v30 = a1 + v29;
      else
        v30 = 0LL;
    }
  }
  else
  {
    v30 = 0LL;
  }
  if ( (v27 & 0x10) != 0 )
  {
    if ( v27 >= 0 )
    {
      v43 = *(_QWORD *)(a1 + 24);
    }
    else
    {
      v42 = *(unsigned int *)(a1 + 12);
      if ( !(_DWORD)v42 )
      {
        v95 = 0LL;
        goto LABEL_11;
      }
      v43 = a1 + v42;
    }
    v95 = (LUID)v43;
    goto LABEL_11;
  }
  v95 = 0LL;
LABEL_11:
  if ( !v28 || !v30 )
  {
    v54 = v26 | a5;
    v26 |= a5;
    if ( (a5 & 0x2000000) != 0 )
    {
      v26 = v54 & 0xFDFFFFFF | v21[3];
      v56 = *(_DWORD *)(a4 + 200);
      if ( (v56 & 0x4000) == 0 )
        goto LABEL_86;
      if ( (v56 & 0x400000) == 0 )
        goto LABEL_108;
    }
    else
    {
      v55 = *(_DWORD *)(a4 + 200);
      if ( (v55 & 0x4000) == 0 )
      {
LABEL_86:
        v32 = v90;
LABEL_87:
        v38 = 0;
        LOBYTE(v21) = 0;
        goto LABEL_27;
      }
      if ( (v55 & 0x400000) == 0 )
      {
LABEL_108:
        v26 = 0;
        *(_DWORD *)(v25 + 4) = 0;
        *(_BYTE *)(v25 + 21) = 0;
        v39 = -1073741790;
        goto LABEL_30;
      }
    }
    *(_DWORD *)v25 = 0;
    *(_BYTE *)(v25 + 21) = 1;
    *(_DWORD *)(v25 + 4) = v26;
    *(_BYTE *)(v25 + 23) = 1;
    goto LABEL_86;
  }
  v31 = 1;
  if ( (v24 & 0x80000) == 0 )
  {
    v32 = v90;
LABEL_15:
    LOBYTE(v21) = 0;
    goto LABEL_16;
  }
  v97 = qword_140D3CAC0;
  v98 = 0;
  if ( sub_1402A70F0(a4, (__int64)&v97, 1u, 1, a10) )
  {
    v26 |= 0x80000u;
    v24 = v91 & 0xFFF7FFFF;
    v32 = v90 + 1;
    v91 = v24;
    LOBYTE(v21) = 0;
    ++v90;
    v38 = v31;
    v87 = v31;
    if ( !v24 )
      goto LABEL_27;
  }
  else
  {
    v97 = qword_140D3CAA0;
    v98 = 0;
    v51 = sub_1402A70F0(a4, (__int64)&v97, v31, v31, a10);
    v24 = v91;
    v32 = v90;
    if ( !v51 )
      goto LABEL_15;
    v24 = v91 & 0xFFF7FFFF;
    v88 = v31;
    v32 = v90 + 1;
    v91 = v24;
    v26 |= 0x80000u;
    ++v90;
    LODWORD(v21) = (unsigned __int8)v31;
    if ( !v24 )
    {
      v38 = 0;
      goto LABEL_27;
    }
  }
LABEL_16:
  if ( !*(_WORD *)(v30 + 4) )
  {
    v57 = a16;
    a16[3] = v24;
    v58 = *(_DWORD *)(a4 + 200);
    if ( (v58 & 0x4000) != 0 )
    {
      v26 &= ~*a16;
      v57 = a16;
    }
    if ( v24 == 0x2000000 )
    {
      if ( v26 )
      {
LABEL_117:
        v38 = v87;
        goto LABEL_28;
      }
    }
    else if ( !v24 && *v57 && v26 && (v58 & 0x6000) == 0 )
    {
      goto LABEL_117;
    }
    v26 = 0;
    goto LABEL_104;
  }
  if ( a7 )
  {
    v31 = a7;
    v92 = a7;
  }
  else
  {
    a6 = &v99;
    DWORD1(v100) = -1;
  }
  v33 = a5 & 0x2000000;
  if ( (a5 & 0x2000000) == 0 && !a14 )
  {
    sub_1402FB0E0(v24, a4, a3, v30, *(_QWORD *)&v95, (__int64)a17, a2, v31, (__int64)a6, a7, 0, a15, (__int64)a16);
    v34 = (__int64)a16;
    a16[3] = *((_DWORD *)a6 + 6);
    if ( !*((_DWORD *)a6 + 6) )
    {
      v35 = *(_DWORD *)(a4 + 200);
      if ( (v35 & 0x10) != 0 )
      {
        if ( (v35 & 8) != 0 )
          v50 = a8[1] & ~(*a8 | a8[2]) | 0x10D0000;
        else
          v50 = a8[3] | 0x1FFFFF;
        v36 = 0;
        if ( (v50 & a5) != 0 )
        {
          sub_1402FB0E0(
            v50 & v91,
            a4,
            a3,
            v30,
            *(_QWORD *)&v95,
            (__int64)a17,
            a2,
            v92,
            (__int64)a6,
            a7,
            1,
            a15,
            (__int64)a16);
          v36 = *((_DWORD *)a6 + 6);
          v34 = (__int64)a16;
        }
      }
      else
      {
        v36 = 0;
      }
      *(_DWORD *)(v34 + 12) = v36;
      if ( !*((_DWORD *)a6 + 6) )
      {
        v37 = *(_DWORD *)(a4 + 200);
        if ( (v37 & 0x2000) != 0 )
          goto LABEL_26;
        v48 = a5 | v91;
        if ( (v37 & 0x4000) != 0 )
        {
          v49 = (v48 | *(_DWORD *)v34) & ~(*(_DWORD *)(v34 + 4) | *(_DWORD *)(v34 + 8));
          if ( v49 && !v36 && (v37 & 0x400000) != 0 )
          {
            *(_BYTE *)(v34 + 23) = 1;
            v49 = 0;
          }
        }
        else
        {
          if ( !*(_BYTE *)(v34 + 20) )
          {
            *((_DWORD *)a6 + 6) = 0;
            goto LABEL_26;
          }
          v49 = ~*(_DWORD *)(v34 + 4) & (v48 | *(_DWORD *)v34);
        }
        *((_DWORD *)a6 + 6) = v49;
        if ( !v49 )
        {
LABEL_26:
          v32 = v90;
          v26 |= a5;
          v38 = v87;
          LODWORD(v21) = v88;
          goto LABEL_27;
        }
      }
    }
LABEL_52:
    v39 = -1073741790;
    v26 = 0;
    v40 = 1;
    goto LABEL_32;
  }
  sub_1402F9680(a4, a3, v30, *(_QWORD *)&v95, a17, a2, v31, (__int64)a6, a7, 0, 0, a15, (__int64)a16);
  v44 = *(_DWORD *)(a4 + 200);
  if ( (v44 & 0x10) != 0 )
  {
    if ( (v44 & 8) != 0 )
      v53 = a8[1] & ~(*a8 | a8[2]) | 0x10D0000;
    else
      v53 = a8[3] | 0x1FFFFF;
    sub_1402F9680(a4, a3, v30, *(_QWORD *)&v95, a17, a2, v92, (__int64)a6, a7, v53, 1, a15, (__int64)a16);
    v44 = *(_DWORD *)(a4 + 200);
  }
  v45 = *((_DWORD *)a6 + 7);
  v46 = (int *)a6 + 7;
  v47 = v45;
  if ( (v44 & 0x2000) == 0 )
  {
    if ( (v44 & 0x4000) != 0 )
    {
      v47 = (a16[1] | a16[2]) & v45;
      if ( v47 != v45 && (v44 & 0x400000) != 0 )
      {
        *((_BYTE *)a16 + 23) = 1;
        v47 = *v46;
        goto LABEL_46;
      }
      v52 = *a16;
    }
    else
    {
      if ( !*((_BYTE *)a16 + 20) )
        goto LABEL_46;
      v47 = a16[1] & v45;
      v52 = *a16;
    }
    v26 &= ~v52;
  }
LABEL_46:
  if ( !a14 )
  {
    if ( (~(v47 | 0x2000000) & v91) != 0 )
      goto LABEL_52;
    v38 = v87;
    v26 |= v47;
    v32 = v90;
    LODWORD(v21) = v88;
LABEL_27:
    if ( v26 )
    {
LABEL_28:
      v39 = 0;
      if ( KeGetCurrentIrql() < 2u )
      {
        if ( v32 )
        {
          sub_1406C57AC(v90, v89, v38, (_DWORD)v21, (__int64)a12);
          if ( a12 )
          {
            if ( !*a12 )
            {
              v40 = 0;
              v39 = -1073741801;
              v26 = 0;
              goto LABEL_31;
            }
          }
        }
      }
LABEL_30:
      v40 = 1;
      goto LABEL_31;
    }
LABEL_104:
    v39 = -1073741790;
    goto LABEL_30;
  }
  v59 = 0;
  v60 = v92;
  v61 = 0;
  v62 = v26 | a5;
  if ( v33 )
    v62 = -33554433;
  v63 = (v26 | a5) & 0xFDFFFFFF;
  if ( !v33 )
    v63 = v26 | a5;
  v64 = a13;
  do
  {
    v65 = (v62 & (v26 | *v46)) == 0;
    v66 = v62 & (v26 | *v46);
    *(int *)((char *)v64 + (char *)a11 - (char *)a13) = v66;
    if ( v65 )
    {
      *v64 = -1073741790;
      v61 = 1;
    }
    else if ( (~v66 & v63) != 0 )
    {
      *v64 = -1073741790;
      v61 = 1;
    }
    else
    {
      *v64 = 0;
      v59 = 1;
    }
    v46 += 12;
    ++v64;
    --v60;
  }
  while ( v60 );
  if ( KeGetCurrentIrql() < 2u && v59 && v90 && (sub_1406C57AC(v90, v89, v87, v88, (__int64)a12), a12) && !*a12 )
  {
    v67 = v92;
    v40 = 0;
    v59 = 0;
    v61 = 1;
    v68 = 0;
    v69 = (char *)a11;
    v70 = (char *)a13;
    if ( v92 >= 4 )
    {
      v71 = v92 - 1;
      if ( a11 > (unsigned int *)&a13[v71] || &a11[v71] < (unsigned int *)a13 )
      {
        v72 = v92 & 0xFFFFFFFC;
        do
        {
          v68 += 4;
          v73 = v68;
        }
        while ( v68 < (unsigned int)v72 );
        v74 = a13;
        for ( k = (unsigned __int64)(4 * v72) >> 2; k; --k )
          *v74++ = -1073741801;
        memset(a11, 0, 4 * v72);
        v67 = v92;
        v68 = v73;
        if ( v73 >= v92 )
          goto LABEL_149;
        v70 = (char *)a13;
        v69 = (char *)a11;
      }
    }
    v76 = v70 - v69;
    v77 = &v69[4 * v68];
    v78 = v67 - v68;
    do
    {
      *(_DWORD *)&v77[v76] = -1073741801;
      *(_DWORD *)v77 = 0;
      v77 += 4;
      --v78;
    }
    while ( v78 );
  }
  else
  {
    v40 = 1;
  }
LABEL_149:
  if ( a18 )
    *a18 = v59;
  if ( a19 )
    *a19 = v61;
  return v40;
}
