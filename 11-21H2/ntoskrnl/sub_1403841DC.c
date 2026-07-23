/*
 * XREFs of sub_1403841DC @ 0x1403841DC
 * Callers:
 *     sub_140383ABC @ 0x140383ABC (sub_140383ABC.c)
 * Callees:
 *     sub_1402A70F0 @ 0x1402A70F0 (sub_1402A70F0.c)
 *     sub_1403845A0 @ 0x1403845A0 (sub_1403845A0.c)
 *     sub_140384600 @ 0x140384600 (sub_140384600.c)
 *     sub_14038473C @ 0x14038473C (sub_14038473C.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1406C57AC @ 0x1406C57AC (sub_1406C57AC.c)
 */

char __fastcall sub_1403841DC(
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
        __int64 a14,
        int a15,
        char a16,
        char a17,
        __int64 a18,
        __int64 a19,
        bool *a20)
{
  __int64 v20; // r12
  __int64 v24; // r8
  _DWORD *v26; // r9
  char v27; // si
  unsigned int v28; // r11d
  unsigned int v29; // r15d
  unsigned int v30; // r13d
  _QWORD *v31; // rax
  __int64 v32; // rcx
  unsigned int v33; // edi
  __int16 v34; // ax
  unsigned int v35; // edx
  __int64 v36; // rcx
  int v37; // r10d
  int v38; // ebx
  __int64 v40; // rdx
  int v41; // eax
  unsigned int v42; // r15d
  __int64 v43; // rax
  __int64 v44; // rax
  char v45; // al
  int v46; // r9d
  int v47; // ecx
  int v48; // r8d
  int v49; // edx
  unsigned int v50; // r8d
  int v51; // ecx
  int v52; // ecx
  int v53; // ecx
  int v54; // ecx
  int v55; // eax
  unsigned int v56; // [rsp+20h] [rbp-E0h]
  char v57; // [rsp+28h] [rbp-D8h]
  char v58; // [rsp+70h] [rbp-90h]
  char v59; // [rsp+71h] [rbp-8Fh]
  int v60; // [rsp+74h] [rbp-8Ch]
  char v61; // [rsp+78h] [rbp-88h]
  __int64 v62; // [rsp+80h] [rbp-80h]
  int v64; // [rsp+A0h] [rbp-60h]
  LUID v65; // [rsp+C8h] [rbp-38h] BYREF
  int v66; // [rsp+D0h] [rbp-30h]
  __int64 v67; // [rsp+D8h] [rbp-28h] BYREF
  int v68; // [rsp+E0h] [rbp-20h]
  __int128 v69; // [rsp+E8h] [rbp-18h] BYREF
  __int128 v70; // [rsp+F8h] [rbp-8h]
  __int128 v71; // [rsp+108h] [rbp+8h]

  v20 = 0LL;
  v24 = a1;
  v26 = a8;
  v27 = 1;
  if ( !a4 )
    a4 = a3;
  v64 = a3;
  v28 = a5;
  v29 = a5;
  v60 = 0;
  v61 = 0;
  v58 = 0;
  v59 = 0;
  v62 = a4;
  v69 = 0LL;
  v70 = 0LL;
  v71 = 0LL;
  if ( a7 )
  {
    v30 = a7;
  }
  else
  {
    DWORD1(v70) = -1;
    a6 = &v69;
    v30 = 1;
  }
  v31 = (_QWORD *)a6 + 5;
  v32 = v30;
  do
  {
    *v31 = a14;
    a14 += 128LL;
    v31 += 6;
    --v32;
  }
  while ( v32 );
  if ( (a5 & 0x1000000) != 0 )
  {
    v65 = stru_140D3CA98;
    v66 = 0;
    v45 = sub_1402A70F0(a4, (__int64)&v65, 1u, 1, a10);
    v46 = (int)a6;
    v56 = v30;
    v47 = 0x1000000;
    v48 = 8;
    if ( !v45 )
    {
      v38 = -1073741727;
      v49 = 0x100000;
LABEL_54:
      v33 = 0;
      sub_1403845A0(v47, v49, v48, v46, v56, 0);
      goto LABEL_28;
    }
    v33 = a9 | 0x1000000;
    sub_1403845A0(0x1000000, 0x200000, 8, (_DWORD)a6, v30, 0);
    v60 = 1;
    v37 = 1;
    v61 = 1;
    v29 = a5 & 0xFEFFFFFF;
    if ( (a5 & 0xFEFFFFFF) == 0 )
      goto LABEL_105;
    v24 = a1;
    a4 = v62;
    v28 = a5;
    v26 = a8;
  }
  else
  {
    v33 = a9;
  }
  v34 = *(_WORD *)(v24 + 2);
  v35 = (unsigned __int16)v34;
  LOWORD(v35) = v34 & 4;
  if ( (v34 & 4) != 0 )
  {
    if ( v34 >= 0 )
    {
      v20 = *(_QWORD *)(v24 + 32);
    }
    else
    {
      v36 = *(unsigned int *)(v24 + 16);
      if ( (_DWORD)v36 )
        v20 = v24 + v36;
    }
  }
  if ( (v34 & 0x10) == 0 )
    goto LABEL_14;
  if ( v34 >= 0 )
  {
    v44 = *(_QWORD *)(v24 + 24);
    goto LABEL_46;
  }
  v43 = *(unsigned int *)(v24 + 12);
  if ( (_DWORD)v43 )
  {
    v44 = v24 + v43;
LABEL_46:
    v65 = (LUID)v44;
    goto LABEL_15;
  }
LABEL_14:
  v65 = 0LL;
LABEL_15:
  if ( !(_WORD)v35 || !v20 )
  {
    v55 = v33 | v28;
    v33 |= v28;
    if ( (v28 & 0x2000000) != 0 )
    {
      v33 = v55 & 0xFDFFFFFF | v26[3];
      sub_1403845A0(v33, 5242880, 0, (_DWORD)a6, v30, 0);
      LODWORD(v24) = *(_DWORD *)(v62 + 200);
      if ( (v24 & 0x4000) == 0 )
      {
LABEL_104:
        v37 = v60;
LABEL_105:
        LOBYTE(v35) = 0;
        LOBYTE(v24) = 0;
        goto LABEL_25;
      }
      if ( (v24 & 0x400000) == 0 )
      {
        v57 = 1;
LABEL_101:
        v33 = 0;
        sub_1403845A0(0, v35, 0, (_DWORD)a6, v30, v57);
        *(_BYTE *)(a18 + 21) = 0;
        *(_DWORD *)(a18 + 4) = 0;
        goto LABEL_102;
      }
    }
    else
    {
      sub_1403845A0(v28, 5242880, 0, (_DWORD)a6, v30, 0);
      LODWORD(v24) = *(_DWORD *)(v62 + 200);
      if ( (v24 & 0x4000) == 0 )
        goto LABEL_104;
      if ( (v24 & 0x400000) == 0 )
      {
        v57 = 0;
        goto LABEL_101;
      }
    }
    *(_DWORD *)a18 = 0;
    *(_BYTE *)(a18 + 21) = 1;
    *(_DWORD *)(a18 + 4) = v33;
    *(_BYTE *)(a18 + 23) = 1;
    goto LABEL_104;
  }
  if ( (v29 & 0x80000) == 0 )
  {
    LOBYTE(v35) = 0;
    v37 = v60;
    LOBYTE(v24) = 0;
    goto LABEL_19;
  }
  v67 = qword_140D3CAC0;
  v68 = 0;
  if ( sub_1402A70F0(a4, (__int64)&v67, 1u, 1, a10) )
  {
    v33 |= 0x80000u;
    sub_1403845A0(0x80000, 0x200000, 9, (_DWORD)a6, v30, 0);
    v37 = v60 + 1;
    LOBYTE(v35) = 1;
    ++v60;
    LOBYTE(v24) = 0;
    v58 = 1;
    v29 &= ~0x80000u;
    if ( !v29 )
    {
LABEL_25:
      if ( v33 )
        goto LABEL_26;
LABEL_102:
      v38 = -1073741790;
      goto LABEL_28;
    }
  }
  else
  {
    v67 = qword_140D3CAA0;
    v68 = 0;
    if ( sub_1402A70F0(v62, (__int64)&v67, v50, 1, a10) )
    {
      v33 |= 0x80000u;
      sub_1403845A0(0x80000, 0x200000, 32, (_DWORD)a6, v30, 0);
      v37 = v60 + 1;
      v59 = 1;
      ++v60;
      LOBYTE(v24) = 1;
      v29 &= ~0x80000u;
      if ( !v29 )
      {
        LOBYTE(v35) = 0;
        goto LABEL_25;
      }
    }
    else
    {
      v37 = v60;
      LOBYTE(v24) = 0;
    }
    LOBYTE(v35) = 0;
  }
LABEL_19:
  if ( *(_WORD *)(v20 + 4) )
  {
    if ( (a5 & 0x2000000) != 0 )
    {
      sub_140384600(v62, v64, v20, v65.LowPart, a19, 0, v30, (__int64)a6, a7, 0, 0, a16, a17, a18);
      sub_1403845A0(-1, 0x800000, 0, (_DWORD)a6, v30, 0);
      LODWORD(v24) = *(_DWORD *)(v62 + 200);
      if ( (v24 & 0x10) != 0 )
      {
        if ( (v24 & 8) != 0 )
          v54 = a8[1] & ~(*a8 | a8[2]) | 0x10D0000;
        else
          v54 = a8[3] | 0x1FFFFF;
        sub_140384600(v62, v64, v20, v65.LowPart, a19, 0, v30, (__int64)a6, a7, v54, 1, a16, a17, a18);
        LODWORD(v24) = *(_DWORD *)(v62 + 200);
      }
      LODWORD(v26) = *((_DWORD *)a6 + 7);
      v35 = (unsigned int)v26;
      if ( (v24 & 0x2000) == 0 )
      {
        if ( (v24 & 0x4000) != 0 )
        {
          v35 = (*(_DWORD *)(a18 + 4) | *(_DWORD *)(a18 + 8)) & (unsigned int)v26;
          if ( v35 != (_DWORD)v26 && (v24 & 0x400000) != 0 )
          {
            *(_BYTE *)(a18 + 23) = 1;
            v35 = *((_DWORD *)a6 + 7);
            goto LABEL_23;
          }
        }
        else
        {
          if ( !*(_BYTE *)(a18 + 20) )
            goto LABEL_23;
          v35 = *(_DWORD *)(a18 + 4) & (unsigned int)v26;
        }
        v33 &= ~*(_DWORD *)a18;
      }
LABEL_23:
      if ( (~(v35 | 0x2000000) & v29) == 0 )
      {
        v37 = v60;
        v33 |= v35;
        LOBYTE(v35) = v58;
        LOBYTE(v24) = v59;
        goto LABEL_25;
      }
      goto LABEL_41;
    }
    sub_14038473C(v29, v62, v64, v20, *(_QWORD *)&v65, a19, 0, v30, (__int64)a6, a7, 0, a16, a17, a18);
    *(_DWORD *)(a18 + 12) = *((_DWORD *)a6 + 6);
    if ( *((_DWORD *)a6 + 6) )
    {
LABEL_41:
      v38 = -1073741790;
LABEL_42:
      v33 = 0;
      goto LABEL_28;
    }
    v40 = v62;
    v41 = *(_DWORD *)(v62 + 200);
    if ( (v41 & 0x10) != 0 )
    {
      if ( (v41 & 8) != 0 )
        v52 = a8[1] & ~(*a8 | a8[2]) | 0x10D0000;
      else
        v52 = a8[3] | 0x1FFFFF;
      LODWORD(v26) = a5;
      LODWORD(v24) = 0;
      if ( (v52 & a5) != 0 )
      {
        sub_14038473C(v29 & v52, v62, v64, v20, *(_QWORD *)&v65, a19, 0, v30, (__int64)a6, a7, 1, a16, a17, a18);
        LODWORD(v24) = *((_DWORD *)a6 + 6);
        v40 = v62;
        LODWORD(v26) = a5;
      }
    }
    else
    {
      LODWORD(v26) = a5;
      LODWORD(v24) = 0;
    }
    *(_DWORD *)(a18 + 12) = v24;
    if ( !*((_DWORD *)a6 + 6) )
    {
      v35 = *(_DWORD *)(v40 + 200);
      if ( (v35 & 0x2000) != 0 )
      {
LABEL_39:
        v37 = v60;
        v33 |= (unsigned int)v26;
        LOBYTE(v35) = v58;
        LOBYTE(v24) = v59;
        goto LABEL_25;
      }
      v42 = (unsigned int)v26 | v29;
      if ( (v35 & 0x4000) != 0 )
      {
        v53 = (v42 | *(_DWORD *)a18) & ~(*(_DWORD *)(a18 + 4) | *(_DWORD *)(a18 + 8));
        if ( v53 && !(_DWORD)v24 && (v35 & 0x400000) != 0 )
        {
          *(_BYTE *)(a18 + 23) = 1;
          v53 = 0;
        }
      }
      else
      {
        if ( !*(_BYTE *)(a18 + 20) )
        {
          *((_DWORD *)a6 + 6) = 0;
          goto LABEL_39;
        }
        v53 = (v42 | *(_DWORD *)a18) & ~*(_DWORD *)(a18 + 4);
      }
      *((_DWORD *)a6 + 6) = v53;
      if ( !v53 )
        goto LABEL_39;
    }
    v38 = -1073741790;
    goto LABEL_42;
  }
  *(_DWORD *)(a18 + 12) = v29;
  v51 = *(_DWORD *)(v62 + 200);
  if ( (v51 & 0x4000) != 0 )
    v33 &= ~*(_DWORD *)a18;
  if ( v29 == 0x2000000 )
  {
    if ( v33 )
      goto LABEL_26;
    goto LABEL_53;
  }
  if ( v29 || !*(_DWORD *)a18 || !v33 || (v51 & 0x6000) != 0 )
  {
LABEL_53:
    v38 = -1073741790;
    v56 = v30;
    v46 = (int)a6;
    v48 = 0;
    v49 = 6291456;
    v47 = -33554433;
    goto LABEL_54;
  }
LABEL_26:
  v38 = 0;
  if ( KeGetCurrentIrql() < 2u )
  {
    if ( v37 )
    {
      LOBYTE(v26) = v24;
      LOBYTE(v24) = v35;
      LOBYTE(v35) = v61;
      sub_1406C57AC(v37, v35, v24, (_DWORD)v26, (__int64)a12);
      if ( a12 )
      {
        if ( !*a12 )
        {
          v27 = 0;
          v38 = -1073741801;
          goto LABEL_42;
        }
      }
    }
  }
LABEL_28:
  *a13 = v38;
  *a11 = v33;
  if ( a20 )
    *a20 = v38 >= 0;
  return v27;
}
