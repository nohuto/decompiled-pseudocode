/*
 * XREFs of sub_14022560C @ 0x14022560C
 * Callers:
 *     sub_1402255A0 @ 0x1402255A0 (sub_1402255A0.c)
 * Callees:
 *     KeIsSubsetAffinityEx @ 0x14020EF50 (KeIsSubsetAffinityEx.c)
 *     sub_140225BE0 @ 0x140225BE0 (sub_140225BE0.c)
 *     sub_140225C88 @ 0x140225C88 (sub_140225C88.c)
 *     sub_140225CB4 @ 0x140225CB4 (sub_140225CB4.c)
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

char __fastcall sub_14022560C(__int64 a1)
{
  int v1; // r13d
  __int64 v2; // rax
  __int64 v4; // rcx
  unsigned __int8 v5; // al
  unsigned int v6; // r10d
  unsigned int v7; // esi
  unsigned int v8; // r12d
  __int64 *v9; // r14
  __int64 v10; // rdi
  int v11; // r15d
  unsigned __int64 v12; // rsi
  bool v13; // zf
  unsigned int v14; // r11d
  unsigned int v15; // r14d
  unsigned int v16; // r9d
  __int64 v17; // r10
  __int128 *v18; // rcx
  char v19; // r8
  char v20; // di
  __int64 v22; // r13
  unsigned int v23; // eax
  unsigned int v24; // edi
  char v25; // r9
  unsigned int v26; // edx
  unsigned int v27; // eax
  unsigned int v28; // ecx
  unsigned int v29; // ecx
  unsigned int v30; // eax
  unsigned int v31; // eax
  unsigned int v32; // eax
  unsigned int v33; // eax
  unsigned int v34; // eax
  unsigned int v35; // r15d
  unsigned int v36; // eax
  unsigned int v37; // eax
  unsigned int v38; // eax
  unsigned int v39; // esi
  __int64 v40; // rdx
  unsigned int v41; // eax
  unsigned int v42; // eax
  unsigned int v43; // esi
  char v44; // r12
  unsigned int v45; // eax
  int v46; // eax
  char v47; // al
  int v48; // eax
  unsigned int v49; // edx
  int v50; // eax
  unsigned int v51; // eax
  int IsSubsetAffinity; // eax
  int v53; // eax
  char v54; // r8
  char v55; // r9
  unsigned int v56; // eax
  char v57; // [rsp+58h] [rbp-49h]
  char v58; // [rsp+59h] [rbp-48h]
  unsigned __int8 v59; // [rsp+5Ah] [rbp-47h]
  unsigned int v60; // [rsp+5Ch] [rbp-45h] BYREF
  unsigned int v61; // [rsp+60h] [rbp-41h]
  unsigned int v62; // [rsp+64h] [rbp-3Dh]
  int v63; // [rsp+68h] [rbp-39h]
  unsigned int v64; // [rsp+6Ch] [rbp-35h]
  unsigned int v65; // [rsp+70h] [rbp-31h] BYREF
  unsigned int v66; // [rsp+74h] [rbp-2Dh] BYREF
  unsigned int v67; // [rsp+78h] [rbp-29h]
  unsigned int v68; // [rsp+7Ch] [rbp-25h]
  unsigned int v69; // [rsp+80h] [rbp-21h]
  __int64 *v70; // [rsp+88h] [rbp-19h]
  __int64 v71; // [rsp+90h] [rbp-11h]
  __int64 v72; // [rsp+98h] [rbp-9h]
  __int64 v73; // [rsp+A0h] [rbp-1h]
  __int128 v74; // [rsp+A8h] [rbp+7h] BYREF
  __int128 v75; // [rsp+B8h] [rbp+17h]
  __int64 v76; // [rsp+C8h] [rbp+27h]

  v76 = 0LL;
  v2 = *(_QWORD *)(a1 + 312);
  v67 = 0;
  v71 = 0LL;
  v74 = 0LL;
  v73 = *(_QWORD *)(v2 + 8);
  v75 = 0LL;
  v57 = 0;
  v58 = 0;
  v4 = *(_QWORD *)(a1 + 16);
  v70 = &off_140C03040[534 * dword_140C232CC + 5];
  v5 = sub_140225C88(v4);
  LOBYTE(v1) = v6;
  v7 = *(_DWORD *)(a1 + 452);
  v59 = v5;
  v8 = v6 + 100;
  v60 = v6 + 100;
  v64 = *(_DWORD *)(a1 + 444);
  v65 = v64;
  v61 = v6;
  v63 = v1;
  v62 = v6;
  v69 = v7;
  v66 = v7;
  if ( dword_140D06AB8 == v6
    || (IsSubsetAffinity = KeIsSubsetAffinityEx(a1 + 24, (__int64)&dword_140C0D000), v6 = 0, IsSubsetAffinity)
    || *(_DWORD *)(a1 + 304) )
  {
    v9 = *(__int64 **)a1;
    v10 = a1;
  }
  else
  {
    v10 = qword_140D06970;
    v9 = &qword_140D06970;
  }
  v11 = 1;
  if ( (__int64 *)v10 != v9 )
  {
    while ( 1 )
    {
      v12 = *(unsigned int *)(v10 + 508);
      if ( v10 == a1 )
        goto LABEL_5;
      if ( *(_DWORD *)(v10 + 304) == v6 )
      {
        v53 = KeIsSubsetAffinityEx(v10 + 24, (__int64)&dword_140C0D000);
        v6 = 0;
        if ( !v53 && *(_QWORD *)(*(_QWORD *)(a1 + 16) - 33776LL) == *(_QWORD *)(*(_QWORD *)(v10 + 16) - 33776LL) )
        {
          v54 = *(_BYTE *)(a1 + 300);
          v55 = *(_BYTE *)(v10 + 300);
          if ( v54 == v55 || byte_140D068E1 )
            break;
        }
      }
LABEL_10:
      v10 = *(_QWORD *)v10;
      if ( (__int64 *)v10 == v9 )
      {
        v14 = v65;
        v7 = v66;
        v8 = v60;
        v64 = v65;
        v69 = v66;
        v63 = v1;
        goto LABEL_12;
      }
    }
    if ( *(_BYTE *)(a1 + 301) != *(_BYTE *)(v10 + 301) )
    {
      v12 = (*(_QWORD *)(v10 + 472) * v12 + (*(_QWORD *)(v10 + 472) >> 1)) / *(_QWORD *)(a1 + 472);
      if ( (unsigned int)v12 > *(_DWORD *)(a1 + 444) )
        LODWORD(v12) = *(_DWORD *)(a1 + 444);
    }
    if ( v54 != v55 )
    {
      if ( (unsigned int)v12 <= v62 )
        LODWORD(v12) = v62;
      v62 = v12;
      goto LABEL_10;
    }
LABEL_5:
    v1 = (unsigned __int8)v1;
    if ( (unsigned int)v12 <= v61 )
      LODWORD(v12) = v61;
    v13 = *(_BYTE *)(v10 + 516) == (unsigned __int8)v6;
    v61 = v12;
    if ( !v13 )
      v1 = 1;
    v57 |= sub_140225BE0(&v65, &v66, &v60, v10);
    v6 = 0;
    goto LABEL_10;
  }
  v14 = v64;
LABEL_12:
  v15 = 0;
  v16 = 0;
  v68 = 0;
  v17 = 0LL;
  v72 = 0LL;
  do
  {
    if ( *(_DWORD *)(a1 + 4 * v17 + 688) )
    {
      if ( v16 == 3 )
      {
        v18 = (__int128 *)(a1 + 736);
      }
      else if ( v16 == 5 )
      {
        v18 = (__int128 *)(a1 + 816);
      }
      else
      {
        v18 = (__int128 *)(a1 + 8 * (v16 - 1 + 4 * (v16 - 1 + 23LL)));
      }
      goto LABEL_17;
    }
    v22 = 28 * v17;
    if ( *(_BYTE *)(a1 + 28 * v17 + 541) )
      v23 = *(_DWORD *)(a1 + 452);
    else
      v23 = *(_DWORD *)(a1 + 448);
    v24 = *(_DWORD *)(a1 + v22 + 528);
    v25 = *(_BYTE *)(a1 + v22 + 542);
    v26 = 100;
    if ( v23 > v24 )
      v24 = v23;
    if ( v25 )
    {
      v27 = *(_DWORD *)(a1 + 444);
    }
    else
    {
      v27 = v8;
      if ( !dword_140D06AB4 )
        v27 = 100;
    }
    v28 = *(_DWORD *)(a1 + v22 + 520);
    if ( v28 < 0x64 && v27 >= v28 )
      v27 = *(_DWORD *)(a1 + v22 + 520);
    v29 = *(_DWORD *)(a1 + v22 + 524);
    if ( v27 < v29 )
      v29 = v27;
    if ( !byte_140C239E0 )
    {
      if ( dword_140C204A4 )
      {
        v26 = *(unsigned __int8 *)(a1 + v22 + 543);
      }
      else if ( (_BYTE)v63 )
      {
        v26 = *((_DWORD *)v70 + v59 + 28);
      }
      else
      {
        v26 = 0;
      }
    }
    v30 = v29;
    if ( v26 < v29 )
      v30 = v26;
    if ( v30 > v24 )
    {
      v31 = v29;
      if ( v26 < v29 )
        v31 = v26;
    }
    else
    {
      v31 = v24;
    }
    if ( v31 < v8 )
    {
      v51 = v29;
      if ( v26 < v29 )
        v51 = v26;
      if ( v51 > v24 )
      {
        v32 = v29;
        if ( v26 < v29 )
          v32 = v26;
      }
      else
      {
        v32 = v24;
      }
    }
    else
    {
      v32 = v8;
    }
    if ( v32 <= v7 )
    {
      v35 = v7;
    }
    else
    {
      v33 = v29;
      if ( v26 < v29 )
        v33 = v26;
      if ( v33 > v24 )
      {
        v34 = v29;
        if ( v26 < v29 )
          v34 = v26;
      }
      else
      {
        v34 = v24;
      }
      if ( v34 < v8 )
      {
        v56 = v29;
        if ( v26 < v29 )
          v56 = v26;
        if ( v56 <= v24 )
        {
          v35 = v24;
        }
        else
        {
          v35 = v29;
          if ( v26 < v29 )
            v35 = v26;
        }
      }
      else
      {
        v35 = v8;
      }
    }
    v36 = v24;
    if ( v29 > v24 )
      v36 = v29;
    if ( v36 < v14 )
    {
      v37 = v24;
      if ( v29 > v24 )
        v37 = v29;
    }
    else
    {
      v37 = v14;
    }
    if ( v37 <= v7 )
    {
      v24 = v7;
    }
    else
    {
      v38 = v24;
      if ( v29 > v24 )
        v38 = v29;
      if ( v38 < v14 )
      {
        if ( v29 > v24 )
          v24 = v29;
      }
      else
      {
        v24 = v14;
      }
    }
    if ( byte_140C239E0 )
    {
      v39 = v24;
      v40 = v24;
    }
    else
    {
      if ( *(_BYTE *)(a1 + v22 + 544) )
      {
        v39 = v62;
        if ( v61 > v62 )
          v39 = v61;
      }
      else
      {
        v39 = v61;
      }
      v40 = v39;
      if ( v39 > v24 )
      {
        v40 = v24;
        goto LABEL_76;
      }
    }
    if ( v39 < v35 )
      v40 = v35;
LABEL_76:
    if ( ((v25 - 2) & 0xFD) == 0 )
    {
      v41 = 100;
      if ( dword_140D06AB4 )
LABEL_161:
        v41 = v8;
      if ( (unsigned int)v40 >= v41 )
        v40 = v24;
      goto LABEL_80;
    }
    if ( (unsigned __int8)(v25 - 5) <= 1u )
      goto LABEL_161;
LABEL_80:
    v42 = 0;
    if ( !byte_140C239E0 )
      v42 = *((_DWORD *)v70 + 15);
    if ( v42 >= v39 )
      v43 = 0;
    else
      v43 = v39 - v42;
    if ( v43 < v35 )
      v43 = v35;
    if ( v43 > v8 )
      v43 = v8;
    if ( !byte_140C239E0 && !dword_140C204AC )
      v15 = *(_DWORD *)(a1 + v22 + 536);
    if ( (_BYTE)v63 && v15 >= *((_DWORD *)v70 + v59 + 26) )
      v15 = *((_DWORD *)v70 + v59 + 26);
    v44 = *(_BYTE *)(a1 + v22 + 540);
    v45 = sub_14042A5E0(v73, v40, v35);
    v16 = v68;
    HIDWORD(v75) = v15;
    if ( v43 > v45 )
      v43 = v45;
    *(_QWORD *)&v75 = __PAIR64__(v24, v35);
    *((_QWORD *)&v74 + 1) = __PAIR64__(v67, v45);
    HIDWORD(v76) = v44 == 0;
    v15 = 0;
    *(_QWORD *)&v74 = v71;
    v46 = *(_DWORD *)(a1 + v22 + 532);
    v11 = 1;
    DWORD2(v75) = v43;
    LODWORD(v76) = v46;
    if ( !v68 )
    {
      v47 = BYTE5(v76);
      if ( *(_QWORD *)(a1 + 400) )
        v47 = 1;
      BYTE5(v76) = v47;
    }
    v17 = v72;
    v18 = &v74;
LABEL_17:
    if ( !*(_BYTE *)(a1 + 988)
      && (v19 = *((_BYTE *)v18 + 36), *(_BYTE *)(a1 + 40 * v17 + 772) == v19)
      && *(_DWORD *)(a1 + 40 * v17 + 752) == *((_DWORD *)v18 + 4)
      && *(_DWORD *)(a1 + 40 * v17 + 756) == *((_DWORD *)v18 + 5)
      && *(_DWORD *)(a1 + 40 * v17 + 764) == *((_DWORD *)v18 + 7) )
    {
      v8 = v60;
      if ( *(_DWORD *)(a1 + 40 * v17 + 768) == *((_DWORD *)v18 + 8)
        && *(_QWORD *)(a1 + 40 * v17 + 736) == *(_QWORD *)v18
        && v60 == *(_DWORD *)(a1 + 512)
        && (v19
         || *(_DWORD *)(a1 + 40 * v17 + 760) == *((_DWORD *)v18 + 6)
         && *(_DWORD *)(a1 + 40 * v17 + 744) == *((_DWORD *)v18 + 2)) )
      {
        v20 = v58;
        goto LABEL_29;
      }
    }
    else
    {
      v8 = v60;
    }
    v20 = 1;
    v58 = 1;
    *(_OWORD *)(a1 + 40 * v17 + 736) = *v18;
    *(_OWORD *)(a1 + 40 * v17 + 752) = v18[1];
    *(_QWORD *)(a1 + 40 * v17 + 768) = *((_QWORD *)v18 + 4);
LABEL_29:
    v7 = v69;
    ++v16;
    v14 = v64;
    ++v17;
    v68 = v16;
    v72 = v17;
  }
  while ( v16 < 6 );
  if ( v20 )
  {
    v48 = *(_DWORD *)(a1 + 728);
    v49 = v60;
    v13 = v48 == -1;
    v50 = v48 + 1;
    *(_BYTE *)(a1 + 988) = 0;
    if ( !v13 )
      v11 = v50;
    *(_DWORD *)(a1 + 512) = v49;
    *(_DWORD *)(a1 + 728) = v11;
    *(LARGE_INTEGER *)(a1 + 976) = KeQueryPerformanceCounter(0LL);
    *(_DWORD *)(a1 + 984) = 0;
    sub_140225CB4(a1);
  }
  return v20;
}
