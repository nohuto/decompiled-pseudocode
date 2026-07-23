/*
 * XREFs of sub_140304060 @ 0x140304060
 * Callers:
 *     KeClockInterruptNotify @ 0x140305780 (KeClockInterruptNotify.c)
 * Callees:
 *     KeAcquireSpinLockAtDpcLevel @ 0x140211E00 (KeAcquireSpinLockAtDpcLevel.c)
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     HalRequestIpi @ 0x14023DD20 (HalRequestIpi.c)
 *     KeIsEmptyAffinityEx @ 0x140292F90 (KeIsEmptyAffinityEx.c)
 *     KeEnumerateNextProcessor @ 0x140294050 (KeEnumerateNextProcessor.c)
 *     KeAddProcessorAffinityEx @ 0x140294460 (KeAddProcessorAffinityEx.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140303720 @ 0x140303720 (sub_140303720.c)
 *     sub_140303740 @ 0x140303740 (sub_140303740.c)
 *     sub_140307660 @ 0x140307660 (sub_140307660.c)
 *     sub_140345190 @ 0x140345190 (sub_140345190.c)
 *     sub_140348800 @ 0x140348800 (sub_140348800.c)
 *     sub_14039D6B0 @ 0x14039D6B0 (sub_14039D6B0.c)
 *     sub_1403A572C @ 0x1403A572C (sub_1403A572C.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14056CFD8 @ 0x14056CFD8 (sub_14056CFD8.c)
 *     sub_14057A5A8 @ 0x14057A5A8 (sub_14057A5A8.c)
 *     sub_1405D9F60 @ 0x1405D9F60 (sub_1405D9F60.c)
 */

__int64 __fastcall sub_140304060(unsigned __int8 a1, unsigned __int8 a2)
{
  unsigned __int128 v2; // rax
  unsigned int v3; // r15d
  __int64 v4; // rbx
  __int64 v5; // rbp
  __int64 v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // r9
  unsigned __int64 v9; // r11
  __int64 v10; // r8
  unsigned __int64 v11; // r11
  signed __int64 v12; // rax
  signed __int64 v13; // rtt
  __int64 v14; // rsi
  __int64 v15; // rbx
  __int64 v16; // rcx
  unsigned __int64 v17; // r11
  unsigned __int64 v18; // rdx
  __int64 v19; // r8
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rbx
  unsigned __int64 v22; // r14
  struct _KPRCB *v23; // rdi
  char v24; // r15
  __int64 v25; // r12
  __int64 v26; // rcx
  __int16 v27; // r13
  bool v28; // si
  struct _KPRCB *v29; // rcx
  __int64 v30; // rdx
  signed __int64 v31; // rsi
  unsigned __int64 v32; // rdi
  unsigned __int64 v33; // rbp
  __int64 v34; // rbx
  char v35; // si
  wchar_t v36; // ax
  wchar_t *v37; // r10
  unsigned __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rax
  signed __int64 v41; // r10
  unsigned __int16 v42; // cx
  __int64 v43; // rdx
  wchar_t *v44; // rax
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rax
  __int64 v49; // r14
  signed __int64 v50; // rdx
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rax
  __int64 v55; // r14
  signed __int64 v56; // rdx
  bool v57; // r13
  signed __int64 v58; // r8
  volatile CCHAR v59; // t1
  unsigned __int64 v60; // rdx
  __int64 v61; // rax
  __int64 v62; // rdx
  __int64 v63; // rax
  __int64 v64; // r14
  signed __int64 v65; // rdx
  __int64 v66; // rsi
  __int64 v67; // rax
  __int64 v68; // rdx
  unsigned __int64 v69; // r10
  signed __int64 v70; // rax
  int v71; // r9d
  __int64 v72; // r8
  __int64 v73; // rcx
  unsigned __int64 v74; // r8
  __int64 v75; // rdx
  __int64 v76; // rsi
  __int64 v77; // rax
  __int64 v78; // rdx
  unsigned __int64 v79; // r10
  signed __int64 v80; // rax
  __int64 v81; // r8
  __int64 v82; // rcx
  unsigned __int64 v83; // r8
  __int64 v84; // rdx
  __int64 v85; // r8
  __int64 v86; // rax
  __int64 v87; // rdx
  __int64 v88; // rax
  __int64 v89; // r14
  signed __int64 v90; // rdx
  __int64 v91; // rdi
  __int64 v92; // rax
  __int64 v93; // rdx
  unsigned __int64 v94; // r10
  signed __int64 v95; // rax
  int v96; // r9d
  __int64 v97; // r8
  __int64 v98; // rcx
  unsigned __int64 v99; // r8
  __int64 v100; // rdx
  __int64 v101; // rdi
  __int64 v102; // rax
  __int64 v103; // rdx
  unsigned __int64 v104; // r10
  signed __int64 v105; // rax
  int v106; // r9d
  __int64 v107; // r8
  __int64 v108; // rcx
  unsigned __int64 v109; // r8
  __int64 v110; // rdx
  __int64 v111; // r8
  int v112; // eax
  __int64 v113; // rcx
  int v114; // eax
  __int64 v115; // rcx
  int v116; // eax
  int v117; // eax
  unsigned __int8 CurrentIrql; // di
  __int64 v119; // r9
  unsigned __int8 v120; // al
  int v121; // eax
  bool v122; // zf
  __int64 v123; // rax
  signed __int32 v124[8]; // [rsp+0h] [rbp-3E8h] BYREF
  unsigned __int8 v125; // [rsp+30h] [rbp-3B8h]
  unsigned __int8 v126; // [rsp+31h] [rbp-3B7h]
  unsigned int v127; // [rsp+34h] [rbp-3B4h] BYREF
  unsigned int v128; // [rsp+38h] [rbp-3B0h]
  int v129; // [rsp+3Ch] [rbp-3ACh] BYREF
  struct _KPRCB *CurrentPrcb; // [rsp+40h] [rbp-3A8h]
  __int64 v131; // [rsp+48h] [rbp-3A0h]
  __int64 v132; // [rsp+50h] [rbp-398h]
  __int64 v133; // [rsp+58h] [rbp-390h]
  __int64 v134; // [rsp+60h] [rbp-388h]
  unsigned __int16 *v135[2]; // [rsp+68h] [rbp-380h] BYREF
  __int16 v136; // [rsp+78h] [rbp-370h]
  int v137; // [rsp+7Ah] [rbp-36Eh]
  __int16 v138; // [rsp+7Eh] [rbp-36Ah]
  _DWORD v139[68]; // [rsp+80h] [rbp-368h] BYREF
  _QWORD v140[34]; // [rsp+190h] [rbp-258h] BYREF
  _QWORD v141[34]; // [rsp+2A0h] [rbp-148h] BYREF
  unsigned int v142; // [rsp+3E0h] [rbp-8h]

  v125 = a2;
  v126 = a1;
  memset(v140, 0, 0x108uLL);
  v3 = v142;
  CurrentPrcb = KeGetCurrentPrcb();
  v131 = MEMORY[0xFFFFF78000000320];
  _disable();
  v3 >>= 9;
  LOBYTE(v3) = v3 & 1;
  v128 = v3;
  do
  {
    while ( 1 )
    {
      v4 = MEMORY[0xFFFFF78000000340];
      if ( (MEMORY[0xFFFFF78000000340] & 1) == 0 )
        break;
      _mm_pause();
    }
    v5 = qword_140C4E390;
    if ( *(_DWORD *)(qword_140C4E390 + 228) == 5 )
    {
      v6 = 10000000LL;
      if ( Address )
      {
        if ( (*(_DWORD *)(qword_140C4E390 + 224) & 0x10000) != 0 )
          v7 = *(_QWORD *)(qword_140C4E390 + 72)
             + (unsigned int)(HIDWORD(KeGetPcr()[1].LockArray) * *(_DWORD *)(qword_140C4E390 + 80));
        else
          v7 = *(_QWORD *)(qword_140C4E390 + 72);
        v9 = (((unsigned __int64)sub_14042A5E0(v7, *((_QWORD *)&v2 + 1))
             * (unsigned __int128)*((unsigned __int64 *)Address + 1)) >> 64)
           + MEMORY[0xFFFFF780000003B8];
      }
      else
      {
        if ( *(_DWORD *)(qword_140C4E390 + 220) == 64 )
        {
          v61 = sub_140303720(qword_140C4E390);
          v63 = sub_14042A5E0(v61, v62);
          v64 = *(_QWORD *)(v5 + 208);
          v65 = v63;
        }
        else
        {
          do
          {
            v64 = *(_QWORD *)(v5 + 208);
            do
            {
              v66 = *(_QWORD *)(v5 + 200);
              v67 = sub_140303720(v5);
              v69 = sub_14042A5E0(v67, v68);
              _InterlockedOr(v124, 0);
              v70 = *(_QWORD *)(v5 + 200);
            }
            while ( v66 != v70 );
          }
          while ( v64 != *(_QWORD *)(v5 + 208) );
          v71 = *(_DWORD *)(v5 + 220);
          if ( ((v66 ^ v69) & (1LL << ((unsigned __int8)v71 - 1))) != 0 )
          {
            if ( v71 == 64 )
              v72 = -1LL;
            else
              v72 = (1LL << v71) - 1;
            v73 = 0LL;
            if ( v71 != 64 )
              v73 = 1LL << v71;
            v74 = v66 & v72;
            v65 = v69 | v66 ^ v74;
            if ( v69 < v74 )
              v65 += v73;
            _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 200), v65, v70);
          }
          else
          {
            if ( v71 == 64 )
              v75 = -1LL;
            else
              v75 = (1LL << v71) - 1;
            v65 = v69 | v66 & ~v75;
          }
        }
        v9 = sub_1403A572C(v64 + v65, *(_QWORD *)(v5 + 192), 10000000LL);
      }
    }
    else
    {
      v6 = *(_QWORD *)(qword_140C4E390 + 192);
      if ( *(_DWORD *)(qword_140C4E390 + 220) == 64 )
      {
        v46 = sub_140303720(qword_140C4E390);
        v48 = sub_14042A5E0(v46, v47);
        v49 = *(_QWORD *)(v5 + 208);
        v50 = v48;
      }
      else
      {
        do
        {
          v49 = *(_QWORD *)(v5 + 208);
          do
          {
            v76 = *(_QWORD *)(v5 + 200);
            v77 = sub_140303720(v5);
            v79 = sub_14042A5E0(v77, v78);
            _InterlockedOr(v124, 0);
            v80 = *(_QWORD *)(v5 + 200);
          }
          while ( v76 != v80 );
        }
        while ( v49 != *(_QWORD *)(v5 + 208) );
        v8 = *(unsigned int *)(v5 + 220);
        if ( ((v76 ^ v79) & (1LL << ((unsigned __int8)v8 - 1))) != 0 )
        {
          if ( (_DWORD)v8 == 64 )
            v81 = -1LL;
          else
            v81 = (1LL << v8) - 1;
          v82 = 0LL;
          if ( (_DWORD)v8 != 64 )
            v82 = 1LL << v8;
          v83 = v76 & v81;
          v50 = v79 | v76 ^ v83;
          if ( v79 < v83 )
            v50 += v82;
          _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 200), v50, v80);
        }
        else
        {
          if ( (_DWORD)v8 == 64 )
            v84 = -1LL;
          else
            v84 = (1LL << v8) - 1;
          v50 = v79 | v76 & ~v84;
        }
      }
      v9 = v49 + v50;
    }
    if ( v5 != qword_140C4E388 && qword_140C4E388 )
    {
      v85 = *(_QWORD *)(qword_140C4E388 + 192);
      if ( *(_DWORD *)(qword_140C4E388 + 228) == 5 )
        v85 = 10000000LL;
      v9 = sub_1403A572C(v9, v6, v85);
    }
    *((_QWORD *)&v2 + 1) = 0LL;
    v10 = MEMORY[0xFFFFF78000000350];
    if ( v9 > MEMORY[0xFFFFF78000000350] )
    {
      v11 = v9 - MEMORY[0xFFFFF78000000350];
      v132 = 0LL;
      if ( MEMORY[0xFFFFF78000000369] )
        v11 <<= MEMORY[0xFFFFF78000000369];
      v2 = v11 * (unsigned __int128)MEMORY[0xFFFFF78000000360];
      v132 = *((_QWORD *)&v2 + 1);
      qword_140C547E8 += v2;
      if ( qword_140C547E8 < (unsigned __int64)v2 )
        v132 = ++*((_QWORD *)&v2 + 1);
    }
  }
  while ( MEMORY[0xFFFFF78000000340] != v4 );
  if ( *((_QWORD *)&v2 + 1) <= 0x1F4uLL )
  {
    v21 = MEMORY[0xFFFFF78000000008];
    v22 = MEMORY[0xFFFFF78000000320];
    goto LABEL_37;
  }
  _m_prefetchw((const void *)0xFFFFF78000000340LL);
  v12 = MEMORY[0xFFFFF78000000340];
  while ( (v12 & 1) != 0 )
  {
    v12 = MEMORY[0xFFFFF78000000340];
LABEL_148:
    _mm_pause();
  }
  v13 = v12;
  v12 = _InterlockedCompareExchange64((volatile signed __int64 *)0xFFFFF78000000340LL, v12 + 1, v12);
  if ( v13 != v12 )
    goto LABEL_148;
  v14 = qword_140C4E390;
  if ( *(_DWORD *)(qword_140C4E390 + 228) == 5 )
  {
    v15 = 10000000LL;
    if ( Address )
    {
      if ( (*(_DWORD *)(qword_140C4E390 + 224) & 0x10000) != 0 )
        v16 = *(_QWORD *)(qword_140C4E390 + 72)
            + (unsigned int)(HIDWORD(KeGetPcr()[1].LockArray) * *(_DWORD *)(qword_140C4E390 + 80));
      else
        v16 = *(_QWORD *)(qword_140C4E390 + 72);
      v17 = (((unsigned __int64)sub_14042A5E0(v16, *((_QWORD *)&v2 + 1))
            * (unsigned __int128)*((unsigned __int64 *)Address + 1)) >> 64)
          + MEMORY[0xFFFFF780000003B8];
    }
    else
    {
      if ( *(_DWORD *)(qword_140C4E390 + 220) == 64 )
      {
        v86 = sub_140303720(qword_140C4E390);
        v88 = sub_14042A5E0(v86, v87);
        v89 = *(_QWORD *)(v14 + 208);
        v90 = v88;
      }
      else
      {
        do
        {
          v89 = *(_QWORD *)(v14 + 208);
          do
          {
            v91 = *(_QWORD *)(v14 + 200);
            v92 = sub_140303720(v14);
            v94 = sub_14042A5E0(v92, v93);
            _InterlockedOr(v124, 0);
            v95 = *(_QWORD *)(v14 + 200);
          }
          while ( v91 != v95 );
        }
        while ( v89 != *(_QWORD *)(v14 + 208) );
        v96 = *(_DWORD *)(v14 + 220);
        if ( ((v91 ^ v94) & (1LL << ((unsigned __int8)v96 - 1))) != 0 )
        {
          if ( v96 == 64 )
            v97 = -1LL;
          else
            v97 = (1LL << v96) - 1;
          v98 = 0LL;
          if ( v96 != 64 )
            v98 = 1LL << v96;
          v99 = v91 & v97;
          v90 = v94 | v91 ^ v99;
          if ( v94 < v99 )
            v90 += v98;
          _InterlockedCompareExchange64((volatile signed __int64 *)(v14 + 200), v90, v95);
        }
        else
        {
          if ( v96 == 64 )
            v100 = -1LL;
          else
            v100 = (1LL << v96) - 1;
          v90 = v94 | v91 & ~v100;
        }
      }
      v17 = sub_1403A572C(v89 + v90, *(_QWORD *)(v14 + 192), 10000000LL);
    }
  }
  else
  {
    v15 = *(_QWORD *)(qword_140C4E390 + 192);
    if ( *(_DWORD *)(qword_140C4E390 + 220) == 64 )
    {
      v52 = sub_140303720(qword_140C4E390);
      v54 = sub_14042A5E0(v52, v53);
      v55 = *(_QWORD *)(v14 + 208);
      v56 = v54;
    }
    else
    {
      do
      {
        v55 = *(_QWORD *)(v14 + 208);
        do
        {
          v101 = *(_QWORD *)(v14 + 200);
          v102 = sub_140303720(v14);
          v104 = sub_14042A5E0(v102, v103);
          _InterlockedOr(v124, 0);
          v105 = *(_QWORD *)(v14 + 200);
        }
        while ( v101 != v105 );
      }
      while ( v55 != *(_QWORD *)(v14 + 208) );
      v106 = *(_DWORD *)(v14 + 220);
      if ( ((v101 ^ v104) & (1LL << ((unsigned __int8)v106 - 1))) != 0 )
      {
        if ( v106 == 64 )
          v107 = -1LL;
        else
          v107 = (1LL << v106) - 1;
        v108 = 0LL;
        if ( v106 != 64 )
          v108 = 1LL << v106;
        v109 = v101 & v107;
        v56 = v104 | v101 ^ v109;
        if ( v104 < v109 )
          v56 += v108;
        _InterlockedCompareExchange64((volatile signed __int64 *)(v14 + 200), v56, v105);
      }
      else
      {
        if ( v106 == 64 )
          v110 = -1LL;
        else
          v110 = (1LL << v106) - 1;
        v56 = v104 | v101 & ~v110;
      }
    }
    v17 = v55 + v56;
  }
  if ( v14 != qword_140C4E388 && qword_140C4E388 )
  {
    v111 = *(_QWORD *)(qword_140C4E388 + 192);
    if ( *(_DWORD *)(qword_140C4E388 + 228) == 5 )
      v111 = 10000000LL;
    v17 = sub_1403A572C(v17, v15, v111);
  }
  *((_QWORD *)&v2 + 1) = 0LL;
  if ( v17 > MEMORY[0xFFFFF78000000348] )
  {
    v133 = 0LL;
    v18 = v17 - MEMORY[0xFFFFF78000000348];
    if ( MEMORY[0xFFFFF78000000368] )
      v18 <<= MEMORY[0xFFFFF78000000368];
    v2 = v18 * (unsigned __int128)MEMORY[0xFFFFF78000000358];
    v133 = *((_QWORD *)&v2 + 1);
    qword_140C548C8 += v2;
    if ( qword_140C548C8 < (unsigned __int64)v2 )
      v133 = ++*((_QWORD *)&v2 + 1);
  }
  v19 = *((_QWORD *)&v2 + 1) + MEMORY[0xFFFFF78000000014];
  *((_QWORD *)&v2 + 1) = 0LL;
  v8 = MEMORY[0xFFFFF78000000360];
  if ( v17 > MEMORY[0xFFFFF78000000350] )
  {
    v134 = 0LL;
    v20 = v17 - MEMORY[0xFFFFF78000000350];
    if ( MEMORY[0xFFFFF78000000369] )
      v20 <<= MEMORY[0xFFFFF78000000369];
    v2 = v20 * (unsigned __int128)MEMORY[0xFFFFF78000000360];
    v134 = *((_QWORD *)&v2 + 1);
    qword_140C547E8 += v2;
    if ( qword_140C547E8 < (unsigned __int64)v2 )
      v134 = ++*((_QWORD *)&v2 + 1);
  }
  v21 = MEMORY[0xFFFFF78000000008] + *((_QWORD *)&v2 + 1);
  MEMORY[0xFFFFF7800000001C] = HIDWORD(v19);
  MEMORY[0xFFFFF78000000014] = v19;
  MEMORY[0xFFFFF78000000010] = (MEMORY[0xFFFFF78000000008] + *((_QWORD *)&v2 + 1)) >> 32;
  MEMORY[0xFFFFF78000000008] += *((_QWORD *)&v2 + 1);
  MEMORY[0xFFFFF78000000348] = v17;
  MEMORY[0xFFFFF78000000350] = v17;
  v22 = MEMORY[0xFFFFF78000000320];
  v10 = (unsigned int)dword_140C4F028 - *((_QWORD *)&v2 + 1);
  if ( v10 <= 0 )
  {
    v8 = DesiredTime;
    *((_QWORD *)&v2 + 1) = 1LL;
    v10 += DesiredTime;
    if ( v10 <= 0 )
    {
      v59 = KeNumberProcessors[1];
      v60 = ((unsigned __int64)(((unsigned __int64)-v10 * (unsigned __int128)(unsigned __int64)qword_140D06FF0) >> 64) >> v59)
          + 1;
      v8 = v60 * DesiredTime;
      v10 += v8;
      *((_QWORD *)&v2 + 1) = v60 + 1;
    }
    v22 = *((_QWORD *)&v2 + 1) + MEMORY[0xFFFFF78000000320];
    MEMORY[0xFFFFF78000000328] = (*((_QWORD *)&v2 + 1) + MEMORY[0xFFFFF78000000320]) >> 32;
    MEMORY[0xFFFFF78000000320] += *((_QWORD *)&v2 + 1);
  }
  dword_140C4F028 = v10;
  ++MEMORY[0xFFFFF78000000340];
LABEL_37:
  v23 = KeGetCurrentPrcb();
  v24 = v128;
  v25 = v131;
  v129 = 0;
  v26 = *((_QWORD *)v23 + 4375);
  v27 = v142;
  if ( v26 )
  {
    if ( *((_BYTE *)v23 + 32) <= 1u )
    {
      v112 = *(_DWORD *)(v26 + 24);
      *(_DWORD *)(v26 + 24) = v112 + 1;
      if ( v112 == -1 )
LABEL_191:
        sub_140418E4C(v23);
    }
  }
  while ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140C2BC60, 0LL) )
  {
    v113 = *((_QWORD *)v23 + 4375);
    if ( v113 )
    {
      if ( *((_BYTE *)v23 + 32) <= 1u )
      {
        v114 = *(_DWORD *)(v113 + 24) - 1;
        *(_DWORD *)(v113 + 24) = v114;
        if ( !v114 )
          sub_140418E4C(v23);
      }
    }
    do
      sub_1402F32E0(&v129, *((__int64 *)&v2 + 1), v10, v8);
    while ( qword_140C2BC60 );
    v115 = *((_QWORD *)v23 + 4375);
    if ( v115 )
    {
      if ( *((_BYTE *)v23 + 32) <= 1u )
      {
        v116 = *(_DWORD *)(v115 + 24);
        *(_DWORD *)(v115 + 24) = v116 + 1;
        if ( v116 == -1 )
          goto LABEL_191;
      }
    }
  }
  if ( qword_140C2BC58 && v21 >= qword_140C2BC58 && dword_140C2B994 == 2 )
  {
    sub_14057A5A8(1LL);
    if ( !*(&stru_140C2BC80 + 7) )
      WORD1(stru_140C2BC80) = *((_DWORD *)CurrentPrcb + 9) + 2048;
    sub_140345190((ULONG_PTR)&stru_140C2BC80, 0);
  }
  v28 = ((dword_140C2B994 - 1) & 0xFFFFFFFD) == 0;
  _InterlockedAnd64(&qword_140C2BC60, 0LL);
  v29 = KeGetCurrentPrcb();
  v30 = *((_QWORD *)v29 + 4375);
  if ( v30 )
  {
    if ( *((_BYTE *)v29 + 32) <= 1u )
    {
      v117 = *(_DWORD *)(v30 + 24) - 1;
      *(_DWORD *)(v30 + 24) = v117;
      if ( !v117 )
        sub_140418E4C(v29);
    }
  }
  if ( v24 )
    _enable();
  if ( dword_140D06960 - 1 + (int)v21 - (int)qword_140C4E940 >= (unsigned int)dword_140D069B8 )
    qword_140C4E940 = v21;
  if ( dword_140D06960 - 1 + (int)v21 - (int)qword_140C4E948 >= (unsigned int)dword_140D06984 )
    qword_140C4E948 = v21;
  if ( byte_140D06889 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
    {
      v119 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
      *(_DWORD *)(v119 + 20) |= (-1 << (CurrentIrql + 1)) & 0xFFFC;
    }
    sub_14056CFD8(CurrentPrcb, 0LL);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v120 = KeGetCurrentIrql();
        if ( v120 <= 0xFu && CurrentIrql <= 0xFu && v120 >= 2u )
        {
          v8 = (__int64)KeGetCurrentPrcb();
          v10 = *(_QWORD *)(v8 + 35000);
          v121 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v122 = (v121 & *(_DWORD *)(v10 + 20)) == 0;
          *(_DWORD *)(v10 + 20) &= v121;
          if ( v122 )
            sub_140418E4C(v8);
        }
      }
    }
    __writecr8(CurrentIrql);
  }
  if ( v22 != v25 && !--dword_140C2BD00 )
  {
    dword_140C2BD00 = dword_140D05278;
    sub_140345190((ULONG_PTR)&dword_140C2BCC0, 0);
  }
  if ( !byte_140D06889 )
  {
    v137 = 0;
    v138 = 0;
    v127 = 0;
    memset(&v139[2], 0, 0x100uLL);
    LODWORD(v141[0]) = 2097153;
    memset((char *)v141 + 4, 0, 0x104uLL);
    if ( qword_140D06CB0 )
    {
      if ( qword_140D06FE0 + qword_140D06CB0 < v21 && (unsigned __int8)sub_14039D6B0(v141) )
      {
        qword_140D06FE0 = v21;
        v139[0] = 2097153;
        memset(&v139[1], 0, 0x104uLL);
        v135[1] = (unsigned __int16 *)v141[1];
        v135[0] = (unsigned __int16 *)v141;
        v136 = 0;
        while ( !(unsigned int)KeEnumerateNextProcessor(&v127, v135) )
        {
          v51 = sub_140348800(v127);
          if ( (struct _KPRCB *)v51 != KeGetCurrentPrcb() && *(_QWORD *)(v51 + 33648) <= v21 )
            KeAddProcessorAffinityEx((unsigned __int16 *)v139, v127);
        }
        if ( !(unsigned int)KeIsEmptyAffinityEx(v139) )
        {
          sub_1405D9F60(v139);
          HalRequestIpi(0, (__int64)v139);
        }
      }
    }
  }
  if ( !v28 )
  {
    v31 = qword_140C204C8;
    if ( qword_140C204C8 )
    {
      v32 = (unsigned int)dword_140D06938;
      v33 = MEMORY[0xFFFFF78000000008];
      if ( qword_140C204C0 > (unsigned __int64)(unsigned int)dword_140D06938 )
        v32 = qword_140C204C0;
      if ( v32 + qword_140C204C8 <= MEMORY[0xFFFFF78000000008] )
      {
        _disable();
        v57 = (v27 & 0x200) != 0;
        KeAcquireSpinLockAtDpcLevel(&qword_140C203E0);
        if ( qword_140C20480 + (v32 >> 1) <= v33 )
        {
          v58 = v33;
          if ( v31 != 1 && v31 + DesiredTime + v32 > v33 )
            v58 = v32 + v31;
          if ( v31 == _InterlockedCompareExchange64(&qword_140C204C8, v58, v31) )
          {
            qword_140C20480 = v33;
            sub_140345190((ULONG_PTR)&dword_140C20440, 0);
          }
        }
        KeReleaseSpinLockFromDpcLevel(&qword_140C203E0);
        if ( v57 )
          _enable();
      }
    }
  }
  v34 = v21 >> 18;
  if ( byte_140D068BE && v22 > qword_140C2BD08 )
  {
    v35 = 1;
    qword_140C2BD08 += (unsigned int)dword_140D06B90;
  }
  else
  {
    v35 = 0;
  }
  if ( (unsigned int)dword_140D06884 > 1 )
  {
    LODWORD(v140[0]) = 2097153;
    memset((char *)v140 + 4, 0, 0x104uLL);
    sub_140303740((__int64)CurrentPrcb, dword_140D06884, v34, v35, (unsigned __int16 *)v140);
    v10 = LOWORD(v140[0]);
    if ( asc_140C0B580[0] < LOWORD(v140[0]) )
    {
      v37 = (wchar_t *)v140;
      v36 = asc_140C0B580[0];
    }
    else
    {
      v36 = v140[0];
      v37 = asc_140C0B580;
      v10 = asc_140C0B580[0];
    }
    asc_140C0B580[0] = v10;
    if ( (unsigned __int16)v10 > asc_140C0B580[1] )
      asc_140C0B580[0] = asc_140C0B580[1];
    if ( v36 > asc_140C0B580[1] )
      v36 = asc_140C0B580[1];
    if ( (unsigned __int16)v10 > asc_140C0B580[1] )
      v10 = asc_140C0B580[1];
    v8 = 0LL;
    if ( v36 )
    {
      v38 = 0LL;
      v39 = v36;
      v8 = v36;
      do
      {
        *(_QWORD *)&asc_140C0B580[v38 / 2 + 4] |= v140[v38 / 8 + 1];
        v38 += 8LL;
        --v39;
      }
      while ( v39 );
    }
    if ( (unsigned __int16)v8 < (unsigned __int16)v10 )
    {
      v40 = (unsigned __int16)v8 + 1LL;
      v41 = (char *)v37 - (char *)&unk_140C0B588;
      v42 = v10 - v8;
      v8 = (unsigned __int16)v10;
      v43 = v42;
      v44 = &asc_140C0B580[4 * v40];
      do
      {
        *(_QWORD *)v44 = *(_QWORD *)((char *)v44 + v41 + 8);
        v44 += 4;
        --v43;
      }
      while ( v43 );
    }
    for ( *(_DWORD *)&asc_140C0B580[2] = 0;
          (unsigned __int16)v8 < asc_140C0B580[1];
          *(_QWORD *)&asc_140C0B580[4 * v123 + 4] = 0LL )
    {
      v123 = (unsigned __int16)v8;
      LOWORD(v8) = v8 + 1;
    }
  }
  return sub_140307660(v126, v125, v10, v8);
}
