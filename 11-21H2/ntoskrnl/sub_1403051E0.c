/*
 * XREFs of sub_1403051E0 @ 0x1403051E0
 * Callers:
 *     sub_140304CE0 @ 0x140304CE0 (sub_140304CE0.c)
 *     sub_1403B4C90 @ 0x1403B4C90 (sub_1403B4C90.c)
 *     sub_14045E870 @ 0x14045E870 (sub_14045E870.c)
 *     sub_1405D71E0 @ 0x1405D71E0 (sub_1405D71E0.c)
 * Callees:
 *     sub_14029394C @ 0x14029394C (sub_14029394C.c)
 *     sub_140303720 @ 0x140303720 (sub_140303720.c)
 *     sub_1403072A0 @ 0x1403072A0 (sub_1403072A0.c)
 *     sub_1403A572C @ 0x1403A572C (sub_1403A572C.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 */

char __fastcall sub_1403051E0(__int64 a1, __int64 a2, unsigned __int8 a3, char a4, __int64 a5, _DWORD *a6)
{
  __int64 v7; // rbp
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // r12
  unsigned __int128 v12; // rax
  unsigned __int64 v13; // r12
  signed __int64 v14; // rax
  signed __int64 v15; // rtt
  signed __int64 v16; // rbp
  unsigned int v17; // edi
  unsigned int v18; // ebx
  unsigned int i; // eax
  unsigned int v20; // r10d
  unsigned int v21; // r11d
  __int64 v22; // rcx
  __int64 v23; // rdx
  unsigned __int8 v24; // di
  unsigned __int64 *v25; // rbx
  char result; // al
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // r8
  unsigned __int64 v29; // r9
  __int64 v30; // rax
  signed __int64 v31; // rax
  signed __int64 v32; // rtt
  __int64 v33; // rbp
  __int64 v34; // rbx
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // r12
  unsigned __int128 v38; // rax
  unsigned __int64 v39; // rbx
  unsigned __int64 v40; // rdi
  unsigned __int64 v41; // rcx
  __int64 v42; // rdx
  unsigned __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rax
  __int64 v47; // r12
  signed __int64 v48; // rdx
  __int64 v49; // rdi
  __int64 v50; // rax
  __int64 v51; // rdx
  unsigned __int64 v52; // r11
  signed __int64 v53; // rax
  int v54; // r10d
  unsigned __int64 v55; // rcx
  __int64 v56; // r9
  __int64 v57; // r8
  unsigned __int64 v58; // r8
  __int64 v59; // rdx
  __int64 v60; // rax
  __int64 v61; // rdx
  __int64 v62; // rdi
  __int64 v63; // rax
  __int64 v64; // rdx
  unsigned __int64 v65; // r11
  int v66; // r10d
  unsigned __int64 v67; // rcx
  __int64 v68; // r9
  __int64 v69; // r8
  unsigned __int64 v70; // r8
  __int64 v71; // rdx
  __int64 v72; // r8
  __int64 v73; // rax
  __int64 v74; // rax
  __int64 v75; // rdx
  __int64 v76; // rax
  __int64 v77; // r12
  signed __int64 v78; // rdx
  __int64 v79; // rdi
  __int64 v80; // rax
  __int64 v81; // rdx
  unsigned __int64 v82; // r11
  signed __int64 v83; // rax
  int v84; // r10d
  unsigned __int64 v85; // rcx
  __int64 v86; // r9
  __int64 v87; // r8
  unsigned __int64 v88; // r8
  __int64 v89; // rdx
  __int64 v90; // rax
  __int64 v91; // rdx
  __int64 v92; // rdi
  __int64 v93; // rax
  __int64 v94; // rdx
  unsigned __int64 v95; // r11
  int v96; // r10d
  unsigned __int64 v97; // rcx
  __int64 v98; // r9
  __int64 v99; // r8
  unsigned __int64 v100; // r8
  __int64 v101; // rdx
  __int64 v102; // r8
  signed __int32 v103[8]; // [rsp+0h] [rbp-A8h] BYREF
  unsigned __int8 v104; // [rsp+30h] [rbp-78h]
  unsigned __int8 v105; // [rsp+31h] [rbp-77h]
  char v106; // [rsp+32h] [rbp-76h]
  unsigned __int64 v107; // [rsp+38h] [rbp-70h]
  signed __int64 v108; // [rsp+40h] [rbp-68h]
  __int128 v109; // [rsp+48h] [rbp-60h] BYREF
  __int64 v110; // [rsp+58h] [rbp-50h]

  v106 = a4;
  v104 = a3;
  v105 = a2;
  v110 = 0LL;
  v108 = 0LL;
  v107 = 0LL;
  v109 = 0LL;
  if ( !a3 )
  {
    _disable();
    v33 = qword_140C4E390;
    if ( *(_DWORD *)(qword_140C4E390 + 228) == 5 )
    {
      v34 = 10000000LL;
      if ( !Address )
      {
        if ( *(_DWORD *)(qword_140C4E390 + 220) == 64 )
        {
          v74 = sub_140303720(qword_140C4E390);
          v76 = sub_14042A5E0(v74, v75);
          v77 = *(_QWORD *)(v33 + 208);
          v78 = v76;
        }
        else
        {
          do
          {
            v77 = *(_QWORD *)(v33 + 208);
            do
            {
              v79 = *(_QWORD *)(v33 + 200);
              v80 = sub_140303720(v33);
              v82 = sub_14042A5E0(v80, v81);
              _InterlockedOr(v103, 0);
              v83 = *(_QWORD *)(v33 + 200);
            }
            while ( v79 != v83 );
          }
          while ( v77 != *(_QWORD *)(v33 + 208) );
          v84 = *(_DWORD *)(v33 + 220);
          v85 = v79 ^ v82;
          if ( _bittest64((const __int64 *)&v85, (unsigned __int8)(v84 - 1)) )
          {
            v86 = 1LL;
            if ( v84 == 64 )
              v87 = -1LL;
            else
              v87 = (1LL << v84) - 1;
            if ( v84 != 64 )
              v86 = 1LL << v84;
            v88 = v79 & v87;
            v78 = v82 | v79 ^ v88;
            if ( v82 < v88 )
              v78 += v86;
            _InterlockedCompareExchange64((volatile signed __int64 *)(v33 + 200), v78, v83);
          }
          else
          {
            if ( v84 == 64 )
              v89 = -1LL;
            else
              v89 = (1LL << v84) - 1;
            v78 = v82 | v79 & ~v89;
          }
        }
        v13 = sub_1403A572C(v77 + v78, *(_QWORD *)(v33 + 192), 10000000LL);
        goto LABEL_61;
      }
      if ( (*(_DWORD *)(qword_140C4E390 + 224) & 0x10000) != 0 )
        v35 = *(_QWORD *)(qword_140C4E390 + 72)
            + (unsigned int)(*(_DWORD *)(qword_140C4E390 + 80) * HIDWORD(KeGetPcr()[1].LockArray));
      else
        v35 = *(_QWORD *)(qword_140C4E390 + 72);
      v36 = sub_14042A5E0(v35, a2);
      v37 = MEMORY[0xFFFFF780000003B8];
      v38 = (unsigned __int64)v36 * (unsigned __int128)*((unsigned __int64 *)Address + 1);
    }
    else
    {
      v34 = *(_QWORD *)(qword_140C4E390 + 192);
      if ( *(_DWORD *)(qword_140C4E390 + 220) == 64 )
      {
        v90 = sub_140303720(qword_140C4E390);
        *(_QWORD *)&v38 = sub_14042A5E0(v90, v91);
        v37 = *(_QWORD *)(v33 + 208);
        *((_QWORD *)&v38 + 1) = v38;
      }
      else
      {
        do
        {
          v37 = *(_QWORD *)(v33 + 208);
          do
          {
            v92 = *(_QWORD *)(v33 + 200);
            v93 = sub_140303720(v33);
            v95 = sub_14042A5E0(v93, v94);
            _InterlockedOr(v103, 0);
            *(_QWORD *)&v38 = *(_QWORD *)(v33 + 200);
          }
          while ( v92 != (_QWORD)v38 );
        }
        while ( v37 != *(_QWORD *)(v33 + 208) );
        v96 = *(_DWORD *)(v33 + 220);
        v97 = v92 ^ v95;
        if ( _bittest64((const __int64 *)&v97, (unsigned __int8)(v96 - 1)) )
        {
          v98 = 1LL;
          if ( v96 == 64 )
            v99 = -1LL;
          else
            v99 = (1LL << v96) - 1;
          if ( v96 != 64 )
            v98 = 1LL << v96;
          v100 = v92 & v99;
          *((_QWORD *)&v38 + 1) = v95 | v92 ^ v100;
          if ( v95 < v100 )
            *((_QWORD *)&v38 + 1) += v98;
          _InterlockedCompareExchange64((volatile signed __int64 *)(v33 + 200), *((signed __int64 *)&v38 + 1), v38);
        }
        else
        {
          if ( v96 == 64 )
            v101 = -1LL;
          else
            v101 = (1LL << v96) - 1;
          *((_QWORD *)&v38 + 1) = v95 | v92 & ~v101;
        }
      }
    }
    v13 = *((_QWORD *)&v38 + 1) + v37;
LABEL_61:
    if ( v33 != qword_140C4E388 && qword_140C4E388 )
    {
      v102 = *(_QWORD *)(qword_140C4E388 + 192);
      if ( *(_DWORD *)(qword_140C4E388 + 228) == 5 )
        v102 = 10000000LL;
      v13 = sub_1403A572C(v13, v34, v102);
    }
    v39 = __rdtsc();
    if ( _bittest64((const signed __int64 *)(a1 + 35232), 0x27u) )
      v40 = __readmsr(0xDB2u);
    else
      v40 = 0LL;
    v41 = v13 - *(_QWORD *)(a1 + 33720);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 33736), v41);
    v42 = *(_QWORD *)(a1 + 35232);
    if ( (v42 & 0x8000000000LL) != 0 )
    {
      *(_QWORD *)(a1 + 33808) += sub_14029394C(v41, v39 - *(_QWORD *)(a1 + 33688), v40 - *(_QWORD *)(a1 + 33800));
      v42 = *(_QWORD *)(a1 + 35232);
    }
    v43 = *(_QWORD *)(a1 + 33688);
    *(_QWORD *)(a1 + 33720) = v13;
    if ( v39 > v43 )
      *(_QWORD *)(a1 + 33696) += v39 - v43;
    v16 = v108;
    *(_QWORD *)(a1 + 33688) = v39;
    if ( (v42 & 0x8000000000LL) != 0 )
      *(_QWORD *)(a1 + 33800) = v40;
    goto LABEL_15;
  }
  v7 = qword_140C4E390;
  if ( *(_DWORD *)(qword_140C4E390 + 228) != 5 )
  {
    v8 = *(_QWORD *)(qword_140C4E390 + 192);
    if ( *(_DWORD *)(qword_140C4E390 + 220) == 64 )
    {
      v60 = sub_140303720(qword_140C4E390);
      *(_QWORD *)&v12 = sub_14042A5E0(v60, v61);
      v11 = *(_QWORD *)(v7 + 208);
      *((_QWORD *)&v12 + 1) = v12;
    }
    else
    {
      do
      {
        v11 = *(_QWORD *)(v7 + 208);
        do
        {
          v62 = *(_QWORD *)(v7 + 200);
          v63 = sub_140303720(v7);
          v65 = sub_14042A5E0(v63, v64);
          _InterlockedOr(v103, 0);
          *(_QWORD *)&v12 = *(_QWORD *)(v7 + 200);
        }
        while ( v62 != (_QWORD)v12 );
      }
      while ( v11 != *(_QWORD *)(v7 + 208) );
      v66 = *(_DWORD *)(v7 + 220);
      v67 = v62 ^ v65;
      if ( _bittest64((const __int64 *)&v67, (unsigned __int8)(v66 - 1)) )
      {
        v68 = 1LL;
        if ( v66 == 64 )
          v69 = -1LL;
        else
          v69 = (1LL << v66) - 1;
        if ( v66 != 64 )
          v68 = 1LL << v66;
        v70 = v62 & v69;
        *((_QWORD *)&v12 + 1) = v65 | v62 ^ v70;
        if ( v65 < v70 )
          *((_QWORD *)&v12 + 1) += v68;
        _InterlockedCompareExchange64((volatile signed __int64 *)(v7 + 200), *((signed __int64 *)&v12 + 1), v12);
      }
      else
      {
        if ( v66 == 64 )
          v71 = -1LL;
        else
          v71 = (1LL << v66) - 1;
        *((_QWORD *)&v12 + 1) = v65 | v62 & ~v71;
      }
    }
    goto LABEL_7;
  }
  v8 = 10000000LL;
  if ( Address )
  {
    if ( (*(_DWORD *)(qword_140C4E390 + 224) & 0x10000) != 0 )
      v9 = *(_QWORD *)(qword_140C4E390 + 72)
         + (unsigned int)(*(_DWORD *)(qword_140C4E390 + 80) * HIDWORD(KeGetPcr()[1].LockArray));
    else
      v9 = *(_QWORD *)(qword_140C4E390 + 72);
    v10 = sub_14042A5E0(v9, a2);
    v11 = MEMORY[0xFFFFF780000003B8];
    v12 = (unsigned __int64)v10 * (unsigned __int128)*((unsigned __int64 *)Address + 1);
LABEL_7:
    v13 = *((_QWORD *)&v12 + 1) + v11;
    goto LABEL_8;
  }
  if ( *(_DWORD *)(qword_140C4E390 + 220) == 64 )
  {
    v44 = sub_140303720(qword_140C4E390);
    v46 = sub_14042A5E0(v44, v45);
    v47 = *(_QWORD *)(v7 + 208);
    v48 = v46;
  }
  else
  {
    do
    {
      v47 = *(_QWORD *)(v7 + 208);
      do
      {
        v49 = *(_QWORD *)(v7 + 200);
        v50 = sub_140303720(v7);
        v52 = sub_14042A5E0(v50, v51);
        _InterlockedOr(v103, 0);
        v53 = *(_QWORD *)(v7 + 200);
      }
      while ( v49 != v53 );
    }
    while ( v47 != *(_QWORD *)(v7 + 208) );
    v54 = *(_DWORD *)(v7 + 220);
    v55 = v49 ^ v52;
    if ( _bittest64((const __int64 *)&v55, (unsigned __int8)(v54 - 1)) )
    {
      v56 = 1LL;
      if ( v54 == 64 )
        v57 = -1LL;
      else
        v57 = (1LL << v54) - 1;
      if ( v54 != 64 )
        v56 = 1LL << v54;
      v58 = v49 & v57;
      v48 = v52 | v49 ^ v58;
      if ( v52 < v58 )
        v48 += v56;
      _InterlockedCompareExchange64((volatile signed __int64 *)(v7 + 200), v48, v53);
    }
    else
    {
      if ( v54 == 64 )
        v59 = -1LL;
      else
        v59 = (1LL << v54) - 1;
      v48 = v52 | v49 & ~v59;
    }
  }
  v13 = sub_1403A572C(v47 + v48, *(_QWORD *)(v7 + 192), 10000000LL);
LABEL_8:
  if ( v7 != qword_140C4E388 && qword_140C4E388 )
  {
    v72 = *(_QWORD *)(qword_140C4E388 + 192);
    if ( *(_DWORD *)(qword_140C4E388 + 228) == 5 )
      v72 = 10000000LL;
    v13 = sub_1403A572C(v13, v8, v72);
  }
  _m_prefetchw((const void *)(a1 + 33632));
  v14 = *(_QWORD *)(a1 + 33632);
  do
  {
    v15 = v14;
    v14 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 33632), v14, v14);
  }
  while ( v15 != v14 );
  v16 = v14;
  if ( (v14 & 1) == 0 )
    return 0;
  if ( v14 )
  {
    if ( *(_DWORD *)(a1 + 33824) == 3 )
    {
      v73 = *(_QWORD *)(a1 + 34512);
      v16 = *(_QWORD *)(v73 + 8LL * DWORD2(xmmword_140CF7090)) >> 1;
      if ( (*(_QWORD *)(v73 + 8LL * DWORD2(xmmword_140CF7090)) & 1) == 0 )
        return 0;
    }
  }
  if ( !v16 )
    return 0;
LABEL_15:
  *(_OWORD *)a5 = 0LL;
  *(_OWORD *)(a5 + 16) = 0LL;
  *(_OWORD *)(a5 + 32) = 0LL;
  *(_QWORD *)(a5 + 48) = 0LL;
  if ( a6 )
  {
    v17 = a6[12];
    memset(a6, 0, (int)(96 * v17 + 56));
    a6[12] = v17;
    v18 = 0;
    *((_QWORD *)a6 + 1) = *(_QWORD *)(a1 + 33192) + *(_QWORD *)(a1 + 33400);
    *((_QWORD *)a6 + 2) = *(_QWORD *)(a1 + 33160);
    *((_QWORD *)a6 + 3) = *(_QWORD *)(a1 + 33168);
    *((_QWORD *)a6 + 4) = *(_QWORD *)(a1 + 33176);
    *((_QWORD *)a6 + 5) = *(_QWORD *)(a1 + 33184);
    do
    {
      for ( i = 0; i < 2; ++i )
      {
        v20 = 0;
        if ( v17 )
        {
          v21 = i + 2 * v18;
          do
          {
            v22 = v20 + (_DWORD)dword_140D05350 * v21;
            v23 = v20 + v21 * a6[12];
            ++v20;
            *(_QWORD *)&a6[2 * v23 + 14] = *(_QWORD *)(*(_QWORD *)(a1 + 33200) + 8 * v22);
          }
          while ( v20 < v17 );
        }
      }
      ++v18;
    }
    while ( v18 < 6 );
  }
  v24 = v104;
  if ( !v104 )
    _enable();
  v25 = 0LL;
  if ( *(_DWORD *)(a1 + 33824) == 3 )
    v25 = (unsigned __int64 *)&v109;
  result = sub_1403072A0(a1, v105, v104, 0, (__int64)v25);
  if ( result )
  {
    if ( v106 && qword_140C24530 )
      sub_14042A5E0(*(unsigned int *)(a1 + 36), v24);
    if ( v25 )
    {
      v13 = *v25;
      v28 = v25[1];
      v29 = v25[2];
      v27 = v107;
    }
    else
    {
      v27 = *(_QWORD *)(a1 + 33640);
      v107 = v27;
      if ( v13 <= v27 )
        v13 = v27;
      v28 = *(_QWORD *)(a1 + 33624);
      v29 = *(_QWORD *)(a1 + 33696);
    }
    if ( *(_QWORD *)(a1 + 33704) )
    {
      v30 = *(_QWORD *)(a1 + 33744);
    }
    else if ( *(_QWORD *)(a1 + 33712) )
    {
      v30 = *(_QWORD *)(a1 + 33752);
    }
    else
    {
      v30 = 100LL * *(_QWORD *)(a1 + 33728);
    }
    *(_QWORD *)(a5 + 24) = v30;
    if ( *(_QWORD *)(a1 + 33712) )
      v30 = *(_QWORD *)(a1 + 33752);
    *(_QWORD *)(a5 + 32) = v30;
    *(_QWORD *)(a5 + 40) = *(_QWORD *)(a1 + 33768);
    *(_QWORD *)(a5 + 16) = *(_QWORD *)(a1 + 33808);
    *(_DWORD *)(a5 + 48) = *(_DWORD *)(a1 + 13148);
    if ( !v24 )
    {
      if ( !v25 )
        v28 += *(_QWORD *)(a1 + 33616);
      goto LABEL_48;
    }
    _m_prefetchw((const void *)(a1 + 33632));
    v31 = *(_QWORD *)(a1 + 33632);
    do
    {
      v32 = v31;
      v31 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 33632), v31, v31);
    }
    while ( v32 != v31 );
    if ( (v31 & 1) != 0 )
    {
      if ( v31 )
      {
        if ( *(_DWORD *)(a1 + 33824) == 3 )
        {
          v31 = *(_QWORD *)(*(_QWORD *)(a1 + 34512) + 8LL * DWORD2(xmmword_140CF7090)) >> 1;
          v27 = v107;
          if ( (*(_QWORD *)(*(_QWORD *)(a1 + 34512) + 8LL * DWORD2(xmmword_140CF7090)) & 1) == 0 )
            v31 = 0LL;
        }
      }
    }
    else
    {
      v31 = 0LL;
    }
    if ( v16 == v31 )
    {
      if ( !v25 )
        v28 += v13 - v27;
LABEL_48:
      *(_QWORD *)a5 = v13;
      *(_QWORD *)(a5 + 8) = v13 - v28;
      if ( a6 )
        *(_QWORD *)a6 = v29;
      return 1;
    }
    return 0;
  }
  return result;
}
