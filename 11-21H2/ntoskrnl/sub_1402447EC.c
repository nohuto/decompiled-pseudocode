/*
 * XREFs of sub_1402447EC @ 0x1402447EC
 * Callers:
 *     sub_1402A8980 @ 0x1402A8980 (sub_1402A8980.c)
 * Callees:
 *     sub_140210484 @ 0x140210484 (sub_140210484.c)
 *     sub_14021050C @ 0x14021050C (sub_14021050C.c)
 *     sub_140210C6C @ 0x140210C6C (sub_140210C6C.c)
 *     sub_140224100 @ 0x140224100 (sub_140224100.c)
 *     sub_14029135C @ 0x14029135C (sub_14029135C.c)
 *     sub_1402B1050 @ 0x1402B1050 (sub_1402B1050.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_1402F6970 @ 0x1402F6970 (sub_1402F6970.c)
 *     sub_140340300 @ 0x140340300 (sub_140340300.c)
 *     sub_1403405E0 @ 0x1403405E0 (sub_1403405E0.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_140577654 @ 0x140577654 (sub_140577654.c)
 *     sub_14062D3AC @ 0x14062D3AC (sub_14062D3AC.c)
 */

__int64 __fastcall sub_1402447EC(__int64 a1)
{
  __int64 v1; // r15
  int v2; // eax
  __int64 v3; // rcx
  __int64 v4; // r12
  int v5; // r8d
  char v6; // r13
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v8; // rcx
  int v9; // ebx
  int v10; // edx
  unsigned int v11; // ebx
  unsigned int v12; // eax
  int v13; // r15d
  _QWORD **v14; // r14
  _QWORD *v15; // rsi
  __int64 v16; // rdi
  bool v17; // cl
  bool v18; // zf
  int v19; // r8d
  struct _KPRCB *v20; // rcx
  __int64 v21; // rdx
  _QWORD *v22; // rsi
  unsigned int v23; // r15d
  struct _KPRCB *v24; // rbx
  __int64 v25; // rcx
  int v26; // ebx
  __int64 v28; // rdx
  int v29; // r11d
  __int64 v30; // r13
  __int64 v31; // r12
  __int64 v32; // rdi
  char v33; // r14
  unsigned __int64 v34; // rdx
  struct _KPRCB *v35; // rbx
  __int64 v36; // rcx
  int v37; // ebx
  _QWORD *v38; // rbx
  char v39; // di
  int v40; // r13d
  __int64 v41; // rdx
  int v42; // r11d
  unsigned int v43; // ebx
  unsigned int v44; // eax
  int v45; // ebx
  char v46; // r12
  int v47; // r13d
  unsigned int v48; // r12d
  _QWORD **v49; // r14
  _QWORD *v50; // rsi
  _QWORD *v51; // rdi
  bool v52; // cl
  _QWORD *v53; // r15
  _QWORD *v54; // rsi
  int v55; // eax
  __int64 v56; // rdx
  int v57; // r10d
  __int64 v58; // rcx
  __int64 v59; // rcx
  unsigned int v60; // r12d
  struct _KPRCB *v61; // rcx
  __int64 v62; // rdx
  __int64 v63; // rbx
  char v64; // r14
  unsigned __int64 v65; // r15
  struct _KPRCB *v66; // rdi
  __int64 v67; // rcx
  int v68; // edi
  _QWORD *v69; // rbx
  char v70; // di
  struct _KPRCB *v71; // rbx
  int v72; // eax
  int v73; // eax
  int v74; // eax
  int v75; // eax
  int v76; // eax
  int v77; // eax
  __int64 v78; // rcx
  int v79; // eax
  int v80; // eax
  int v81; // eax
  int v82; // eax
  struct _KPRCB *v83; // rcx
  __int64 v84; // rdx
  int v85; // eax
  int v86; // r12d
  __int64 v87; // r13
  int v88; // eax
  __int64 v89; // rcx
  int v90; // eax
  __int64 v91; // rcx
  int v92; // eax
  __int64 v93; // rcx
  int v94; // eax
  int v95; // [rsp+30h] [rbp-49h]
  unsigned int v96; // [rsp+30h] [rbp-49h]
  unsigned int v97; // [rsp+34h] [rbp-45h]
  char v98; // [rsp+34h] [rbp-45h]
  int v99; // [rsp+38h] [rbp-41h]
  char v100; // [rsp+40h] [rbp-39h]
  unsigned __int64 v101; // [rsp+40h] [rbp-39h]
  unsigned int v102; // [rsp+40h] [rbp-39h]
  _DWORD v103[2]; // [rsp+48h] [rbp-31h] BYREF
  int v104; // [rsp+50h] [rbp-29h] BYREF
  _DWORD v105[2]; // [rsp+54h] [rbp-25h] BYREF
  int v106; // [rsp+5Ch] [rbp-1Dh] BYREF
  _QWORD *v107; // [rsp+60h] [rbp-19h] BYREF
  _QWORD *v108; // [rsp+68h] [rbp-11h] BYREF
  __int64 v109; // [rsp+70h] [rbp-9h]
  _QWORD *v110; // [rsp+78h] [rbp-1h] BYREF
  _QWORD *v111; // [rsp+80h] [rbp+7h] BYREF
  __int64 v112; // [rsp+E0h] [rbp+67h] BYREF
  int v113; // [rsp+E8h] [rbp+6Fh]
  int v114; // [rsp+F0h] [rbp+77h]
  int v115; // [rsp+F8h] [rbp+7Fh]

  v112 = a1;
  v1 = a1;
  v2 = sub_14029135C();
  v115 = 16;
  if ( v2 )
  {
    v4 = *(_QWORD *)(v3 + 34888);
    v109 = v4;
    if ( (*(_DWORD *)(v4 + 8) & 0x300) != 0 )
    {
      v5 = dword_140D05074 * *(unsigned __int8 *)(v4 + 660);
      v110 = 0LL;
      v6 = *(_BYTE *)(v4 + 659);
      CurrentPrcb = KeGetCurrentPrcb();
      v103[0] = 0;
      v114 = v5;
      v100 = v6;
      while ( 1 )
      {
        v8 = *((_QWORD *)CurrentPrcb + 4375);
        if ( v8 )
        {
          if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
          {
            v72 = *(_DWORD *)(v8 + 24);
            *(_DWORD *)(v8 + 24) = v72 + 1;
            if ( v72 == -1 )
              sub_140418E4C(CurrentPrcb);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
          break;
        v59 = *((_QWORD *)CurrentPrcb + 4375);
        if ( v59 )
        {
          if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
          {
            v73 = *(_DWORD *)(v59 + 24) - 1;
            *(_DWORD *)(v59 + 24) = v73;
            if ( !v73 )
              sub_140418E4C(CurrentPrcb);
          }
        }
        do
          sub_1402F32E0(v103);
        while ( *(_QWORD *)v4 );
      }
      v9 = *(_DWORD *)(v4 + 8) & 0x300;
      if ( v9 )
      {
        v10 = 16;
        v113 = 16;
        v97 = dword_140D050CC * dword_140D05080;
        v95 = MEMORY[0xFFFFF78000000320] - dword_140D050A8;
        v11 = __ROR4__(v9, v6);
        do
        {
          _BitScanForward(&v12, v11);
          v11 ^= 1 << v12;
          v103[1] = v12;
          v13 = ((_BYTE)v12 + v6) & 0x1F;
          v14 = (_QWORD **)(v4 + 16 + 16LL * (((_BYTE)v12 + v6) & 0x1F));
          v15 = *v14;
          do
          {
            v16 = (__int64)(v15 - 27);
            v17 = 0;
            v18 = (*(_DWORD *)(v15 - 12) & 0x400000) == 0;
            v15 = (_QWORD *)*v15;
            if ( !v18 )
            {
              v75 = sub_140577654(v16, 0LL);
              v10 = v113;
              v17 = v75 != *(_DWORD *)(v16 + 1024);
            }
            if ( v95 - *(_DWORD *)(v16 + 436) > 0 || v17 )
            {
              sub_140210C6C(v4, v16, v13);
              sub_1402F6970(&v110, v28);
              v19 = v114;
              v10 = v113;
              if ( v29 > 0 )
                v19 = --v114;
            }
            else
            {
              v19 = v114;
            }
            v113 = --v10;
          }
          while ( v15 != v14 && v19 && v10 );
          v6 = v100;
        }
        while ( v11 && v19 && v10 );
        _InterlockedAnd64((volatile signed __int64 *)v4, 0LL);
        v20 = KeGetCurrentPrcb();
        v21 = *((_QWORD *)v20 + 4375);
        if ( v21 )
        {
          if ( *((_BYTE *)v20 + 32) <= 1u )
          {
            v76 = *(_DWORD *)(v21 + 24) - 1;
            *(_DWORD *)(v21 + 24) = v76;
            if ( !v76 )
              sub_140418E4C(v20);
          }
        }
        v22 = v110;
        if ( v110 )
        {
          v30 = v112;
          v31 = v112 + 12760;
          do
          {
            v32 = (__int64)(v22 - 27);
            v33 = 0;
            v34 = *(v22 - 18);
            v35 = KeGetCurrentPrcb();
            v104 = 0;
            v22 = (_QWORD *)*v22;
            v101 = v34;
            while ( 1 )
            {
              v36 = *((_QWORD *)v35 + 4375);
              if ( v36 )
              {
                if ( *((_BYTE *)v35 + 32) <= 1u )
                {
                  v77 = *(_DWORD *)(v36 + 24);
                  *(_DWORD *)(v36 + 24) = v77 + 1;
                  if ( v77 == -1 )
                    sub_140418E4C(v35);
                }
              }
              if ( !_interlockedbittestandset64((volatile signed __int32 *)(v32 + 64), 0LL) )
                break;
              v78 = *((_QWORD *)v35 + 4375);
              if ( v78 )
              {
                if ( *((_BYTE *)v35 + 32) <= 1u )
                {
                  v79 = *(_DWORD *)(v78 + 24) - 1;
                  *(_DWORD *)(v78 + 24) = v79;
                  if ( !v79 )
                    sub_140418E4C(v35);
                }
              }
              do
                sub_1402F32E0(&v104);
              while ( *(_QWORD *)(v32 + 64) );
            }
            v37 = *(char *)(v32 + 195);
            if ( v95 - *(_DWORD *)(v32 + 436) > 0 && v37 < 11 )
            {
              v33 = 1;
              sub_14021050C(0LL, v32, 11, v101, v97);
            }
            sub_140224100(v32);
            if ( v33 && (BYTE8(xmmword_140D06900) & 1) != 0 )
              sub_14062D3AC(v32, (unsigned int)v37);
            v38 = (_QWORD *)(v32 + 216);
            v39 = 0;
            *v38 = 0LL;
            v107 = 0LL;
            do
            {
              sub_1403405E0(v30, v38 - 27, &v107);
              v38 = v107;
              ++v39;
              if ( v107 )
                v107 = (_QWORD *)*v107;
              if ( (v39 & 0xF) == 0 )
                sub_140340300(v31);
            }
            while ( v38 );
            sub_140340300(v31);
          }
          while ( v22 );
          v4 = v109;
        }
        if ( v114 && v113 )
        {
          LOBYTE(v23) = 8;
        }
        else
        {
          v23 = v13 + 1;
          if ( v23 > 9 )
            LOBYTE(v23) = 8;
        }
      }
      else
      {
        _InterlockedAnd64((volatile signed __int64 *)v4, 0LL);
        v61 = KeGetCurrentPrcb();
        v62 = *((_QWORD *)v61 + 4375);
        if ( v62 )
        {
          if ( *((_BYTE *)v61 + 32) <= 1u )
          {
            v74 = *(_DWORD *)(v62 + 24) - 1;
            *(_DWORD *)(v62 + 24) = v74;
            if ( !v74 )
              sub_140418E4C(v61);
          }
        }
        LOBYTE(v23) = 8;
      }
      *(_BYTE *)(v4 + 659) = v23;
      v1 = v112;
    }
  }
  v24 = KeGetCurrentPrcb();
  v105[0] = 0;
  while ( 1 )
  {
    v25 = *((_QWORD *)v24 + 4375);
    if ( v25 )
    {
      if ( *((_BYTE *)v24 + 32) <= 1u )
      {
        v80 = *(_DWORD *)(v25 + 24);
        *(_DWORD *)(v25 + 24) = v80 + 1;
        if ( v80 == -1 )
          sub_140418E4C(v24);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(v1 + 48), 0LL) )
      break;
    v58 = *((_QWORD *)v24 + 4375);
    if ( v58 )
    {
      if ( *((_BYTE *)v24 + 32) <= 1u )
      {
        v81 = *(_DWORD *)(v58 + 24) - 1;
        *(_DWORD *)(v58 + 24) = v81;
        if ( !v81 )
          sub_140418E4C(v24);
      }
    }
    do
      sub_1402F32E0(v105);
    while ( *(_QWORD *)(v1 + 48) );
  }
  v26 = *(_DWORD *)(v1 + 32472) & 0x300;
  if ( v26 )
  {
    v40 = *(_DWORD *)(v1 + 32484);
    v41 = v1 + 32576;
    v111 = 0LL;
    v42 = dword_140D05074;
    v98 = v40;
    v109 = v1 + 32576;
    v102 = dword_140D050CC * dword_140D05080;
    v114 = MEMORY[0xFFFFF78000000320] - dword_140D050A8;
    v43 = __ROR4__(v26, v40);
    v113 = dword_140D05074;
    do
    {
      _BitScanForward(&v44, v43);
      v105[1] = v44;
      v99 = v43 ^ (1 << v44);
      v45 = v115;
      v46 = v44 + v40;
      v47 = v114;
      v48 = v46 & 0x1F;
      v49 = (_QWORD **)(v41 + 16LL * v48);
      v96 = v48;
      v50 = *v49;
      do
      {
        v51 = v50 - 27;
        v52 = 0;
        v18 = (*(_DWORD *)(v50 - 12) & 0x400000) == 0;
        v53 = v50;
        v50 = (_QWORD *)*v50;
        if ( !v18 )
        {
          v82 = sub_140577654(v51, 0LL);
          v42 = v113;
          v52 = v82 != *((_DWORD *)v51 + 256);
        }
        if ( v47 - *((_DWORD *)v51 + 109) > 0 || v52 )
        {
          v56 = (__int64)v53;
          v1 = v112;
          sub_140210484(v112, v56, v48);
          sub_1402F6970(&v111, v51);
          if ( v57 > 0 )
            v113 = --v42;
        }
        else
        {
          v1 = v112;
        }
        --v45;
      }
      while ( v50 != v49 && v42 && v45 );
      LOBYTE(v40) = v98;
      v115 = v45;
      v43 = v99;
      if ( !v99 )
        break;
      if ( !v42 )
        break;
      v41 = v109;
    }
    while ( v115 );
    v54 = v111;
    if ( v111 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v1 + 48), 0LL);
      v83 = KeGetCurrentPrcb();
      v84 = *((_QWORD *)v83 + 4375);
      if ( v84 )
      {
        if ( *((_BYTE *)v83 + 32) <= 1u )
        {
          v85 = *(_DWORD *)(v84 + 24) - 1;
          *(_DWORD *)(v84 + 24) = v85;
          if ( !v85 )
            sub_140418E4C(v83);
        }
      }
      v86 = v114;
      v87 = v1 + 12760;
      do
      {
        v63 = (__int64)(v54 - 27);
        v64 = 0;
        v65 = *(v54 - 18);
        v66 = KeGetCurrentPrcb();
        v106 = 0;
        v54 = (_QWORD *)*v54;
        while ( 1 )
        {
          v67 = *((_QWORD *)v66 + 4375);
          if ( v67 )
          {
            if ( *((_BYTE *)v66 + 32) <= 1u )
            {
              v88 = *(_DWORD *)(v67 + 24);
              *(_DWORD *)(v67 + 24) = v88 + 1;
              if ( v88 == -1 )
                sub_140418E4C(v66);
            }
          }
          if ( !_interlockedbittestandset64((volatile signed __int32 *)(v63 + 64), 0LL) )
            break;
          v89 = *((_QWORD *)v66 + 4375);
          if ( v89 )
          {
            if ( *((_BYTE *)v66 + 32) <= 1u )
            {
              v90 = *(_DWORD *)(v89 + 24) - 1;
              *(_DWORD *)(v89 + 24) = v90;
              if ( !v90 )
                sub_140418E4C(v66);
            }
          }
          do
            sub_1402F32E0(&v106);
          while ( *(_QWORD *)(v63 + 64) );
        }
        v68 = *(char *)(v63 + 195);
        if ( v86 - *(_DWORD *)(v63 + 436) > 0 && v68 < 11 )
        {
          v64 = 1;
          sub_14021050C(0LL, v63, 11, v65, v102);
        }
        sub_140224100(v63);
        if ( v64 && (BYTE8(xmmword_140D06900) & 1) != 0 )
          sub_14062D3AC(v63, (unsigned int)v68);
        v1 = v112;
        v69 = (_QWORD *)(v63 + 216);
        v70 = 0;
        *v69 = 0LL;
        v108 = 0LL;
        do
        {
          sub_1403405E0(v1, v69 - 27, &v108);
          v69 = v108;
          ++v70;
          if ( v108 )
            v108 = (_QWORD *)*v108;
          if ( (v70 & 0xF) == 0 )
            sub_140340300(v87);
        }
        while ( v69 );
        sub_140340300(v87);
      }
      while ( v54 );
      v71 = KeGetCurrentPrcb();
      LODWORD(v112) = 0;
      v48 = v96;
      while ( 1 )
      {
        v91 = *((_QWORD *)v71 + 4375);
        if ( v91 )
        {
          if ( *((_BYTE *)v71 + 32) <= 1u )
          {
            v92 = *(_DWORD *)(v91 + 24);
            *(_DWORD *)(v91 + 24) = v92 + 1;
            if ( v92 == -1 )
              sub_140418E4C(v71);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(v1 + 48), 0LL) )
          break;
        v93 = *((_QWORD *)v71 + 4375);
        if ( v93 )
        {
          if ( *((_BYTE *)v71 + 32) <= 1u )
          {
            v94 = *(_DWORD *)(v93 + 24) - 1;
            *(_DWORD *)(v93 + 24) = v94;
            if ( !v94 )
              sub_140418E4C(v71);
          }
        }
        do
          sub_1402F32E0(&v112);
        while ( *(_QWORD *)(v1 + 48) );
      }
    }
    if ( v113 && v115 )
    {
      v55 = 8;
    }
    else
    {
      v60 = v48 + 1;
      if ( v60 > 9 )
        v60 = 8;
      v55 = v60;
    }
    *(_DWORD *)(v1 + 32484) = v55;
  }
  *(_DWORD *)(v1 + 32488) = dword_140D050A4 + MEMORY[0xFFFFF78000000320];
  _InterlockedAnd64((volatile signed __int64 *)(v1 + 48), 0LL);
  return sub_1402B1050(KeGetCurrentPrcb(), 0LL);
}
