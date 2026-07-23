/*
 * XREFs of DnsPrint_RpcZoneInfo @ 0x1402E97D4
 * Callers:
 *     sub_140277580 @ 0x140277580 (sub_140277580.c)
 * Callees:
 *     sub_140216C28 @ 0x140216C28 (sub_140216C28.c)
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_140230F28 @ 0x140230F28 (sub_140230F28.c)
 *     sub_140239060 @ 0x140239060 (sub_140239060.c)
 *     sub_14023CC50 @ 0x14023CC50 (sub_14023CC50.c)
 *     sub_14024DE5C @ 0x14024DE5C (sub_14024DE5C.c)
 *     sub_14024F014 @ 0x14024F014 (sub_14024F014.c)
 *     sub_140268408 @ 0x140268408 (sub_140268408.c)
 *     sub_14026EDE4 @ 0x14026EDE4 (sub_14026EDE4.c)
 *     sub_14026FB78 @ 0x14026FB78 (sub_14026FB78.c)
 *     sub_140273AF0 @ 0x140273AF0 (sub_140273AF0.c)
 *     sub_140274D10 @ 0x140274D10 (sub_140274D10.c)
 *     sub_14027A0F4 @ 0x14027A0F4 (sub_14027A0F4.c)
 *     sub_14027B604 @ 0x14027B604 (sub_14027B604.c)
 *     sub_14027DA5C @ 0x14027DA5C (sub_14027DA5C.c)
 *     sub_140282AD0 @ 0x140282AD0 (sub_140282AD0.c)
 *     sub_1402C1550 @ 0x1402C1550 (sub_1402C1550.c)
 *     sub_1402C1D70 @ 0x1402C1D70 (sub_1402C1D70.c)
 *     sub_1402CBF80 @ 0x1402CBF80 (sub_1402CBF80.c)
 *     sub_1402CF280 @ 0x1402CF280 (sub_1402CF280.c)
 *     sub_1402CFEB0 @ 0x1402CFEB0 (sub_1402CFEB0.c)
 *     sub_1402E20D0 @ 0x1402E20D0 (sub_1402E20D0.c)
 *     sub_1402E5708 @ 0x1402E5708 (sub_1402E5708.c)
 *     sub_1402E7D60 @ 0x1402E7D60 (sub_1402E7D60.c)
 *     sub_1402E8154 @ 0x1402E8154 (sub_1402E8154.c)
 *     sub_1402E8990 @ 0x1402E8990 (sub_1402E8990.c)
 *     sub_1402E89B0 @ 0x1402E89B0 (sub_1402E89B0.c)
 *     sub_1402EA5E4 @ 0x1402EA5E4 (sub_1402EA5E4.c)
 *     ?_Getint@?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@AEBAHAEAV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@0HHAEAH@Z @ 0x1402EA644 (-_Getint@-$time_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@AEBAHAEAV-$ist.c)
 *     sub_1402EACBC @ 0x1402EACBC (sub_1402EACBC.c)
 *     sub_1402F2700 @ 0x1402F2700 (sub_1402F2700.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     sub_140313B20 @ 0x140313B20 (sub_140313B20.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_140323D70 @ 0x140323D70 (sub_140323D70.c)
 *     sub_1403250B0 @ 0x1403250B0 (sub_1403250B0.c)
 *     sub_140333AA0 @ 0x140333AA0 (sub_140333AA0.c)
 *     sub_140334790 @ 0x140334790 (sub_140334790.c)
 *     sub_14033A410 @ 0x14033A410 (sub_14033A410.c)
 *     sub_14033C2A0 @ 0x14033C2A0 (sub_14033C2A0.c)
 *     sub_14033C300 @ 0x14033C300 (sub_14033C300.c)
 *     sub_14033C3E0 @ 0x14033C3E0 (sub_14033C3E0.c)
 *     sub_14033DBC0 @ 0x14033DBC0 (sub_14033DBC0.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     ExAcquireSpinLockShared @ 0x140366580 (ExAcquireSpinLockShared.c)
 *     NaptrDnsRecordConvert_0 @ 0x14036CF60 (NaptrDnsRecordConvert_0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall DnsPrint_RpcZoneInfo(
        __m128i *BugCheckParameter2,
        char a2,
        unsigned int a3,
        unsigned int *a4,
        int a5,
        unsigned __int64 *a6)
{
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // rdi
  __int64 v11; // r8
  unsigned __int64 v12; // r9
  unsigned __int64 v13; // r11
  __int64 v14; // rdx
  unsigned __int64 v15; // r10
  int v16; // r10d
  unsigned __int64 v17; // r13
  __int64 v18; // rcx
  __int64 v19; // r12
  unsigned int v20; // ebx
  int v21; // edx
  unsigned int *v22; // rax
  int v23; // ecx
  unsigned int v24; // r15d
  int v25; // ebx
  unsigned int v26; // ebx
  unsigned int v27; // edi
  unsigned __int64 v28; // r14
  __int64 v29; // rax
  __m128i *v30; // r13
  unsigned __int64 v31; // r12
  int v32; // ebx
  unsigned __int64 v33; // rdi
  int v34; // r14d
  BOOL v35; // r14d
  int v36; // r11d
  __int64 *v37; // rax
  unsigned int v38; // eax
  unsigned __int64 v39; // r14
  int v40; // eax
  ULONG_PTR v41; // rbx
  __int16 v42; // cx
  __int16 v43; // ax
  __int16 v44; // bx
  __int64 v45; // rdx
  __int16 v46; // r15
  __int64 v47; // rbx
  __int64 *v48; // r15
  int v49; // edi
  int v50; // eax
  int v51; // r11d
  __int8 v52; // al
  int v54; // r10d
  int v55; // r8d
  char v56; // al
  unsigned int v57; // eax
  int v58; // eax
  signed __int64 v59; // rbx
  unsigned __int64 *v60; // rax
  ULONG_PTR v61; // r10
  int v62; // ebx
  __int64 v63; // rax
  int v64; // eax
  int v65; // edx
  int v66; // eax
  __int64 v67; // r11
  int v68; // eax
  __int64 v69; // rdx
  __int64 v70; // r11
  __int64 v71; // rcx
  unsigned __int64 v72; // rbx
  __int64 v73; // rbx
  unsigned __int64 v74; // rax
  int v75; // ecx
  volatile LONG *v76; // rbx
  __int64 v77; // rax
  unsigned __int64 v78; // rcx
  unsigned __int64 v79; // rax
  char v80; // al
  __int64 v81; // rcx
  __int64 v82; // rcx
  _QWORD *v83; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v86; // r9
  int v87; // eax
  bool v88; // zf
  unsigned __int8 v89; // al
  struct _KPRCB *v90; // r10
  __int64 v91; // r9
  int v92; // eax
  unsigned __int8 v93; // al
  struct _KPRCB *v94; // r10
  __int64 v95; // r9
  int v96; // eax
  unsigned __int8 v97; // al
  char v98; // cl
  struct _KPRCB *v99; // r10
  int v100; // eax
  __int64 v101; // r9
  int v102; // eax
  __int64 v103; // rax
  KIRQL v104; // r15
  unsigned __int8 v105; // al
  struct _KPRCB *v106; // r10
  __int64 v107; // r9
  int v108; // eax
  unsigned __int8 v109; // al
  unsigned __int8 v110; // al
  struct _KPRCB *v111; // r10
  __int64 v112; // r9
  int v113; // eax
  __int64 v114; // rcx
  int v115; // eax
  unsigned __int8 v116; // al
  struct _KPRCB *v117; // r10
  __int64 v118; // r9
  int v119; // eax
  unsigned __int8 v120; // al
  struct _KPRCB *v121; // r10
  __int64 v122; // r9
  int v123; // eax
  __m128i *v124; // r8
  char v125; // dl
  unsigned __int8 v126; // al
  KIRQL v127; // di
  struct _KPRCB *v128; // r10
  __int64 v129; // r9
  int v130; // eax
  unsigned __int8 v131; // al
  struct _KPRCB *v132; // r9
  __int64 v133; // r8
  int v134; // eax
  unsigned __int8 v135; // al
  struct _KPRCB *v136; // r10
  __int64 v137; // r9
  int v138; // eax
  unsigned __int64 v139; // rdi
  __m128i *v140; // rax
  unsigned __int8 v141; // al
  struct _KPRCB *v142; // r9
  __int64 v143; // r8
  int v144; // eax
  char v145; // [rsp+40h] [rbp-C0h] BYREF
  KIRQL v146; // [rsp+41h] [rbp-BFh]
  unsigned int v147; // [rsp+44h] [rbp-BCh]
  unsigned __int64 v148; // [rsp+48h] [rbp-B8h]
  __m128i *v149; // [rsp+50h] [rbp-B0h]
  unsigned int *v150; // [rsp+58h] [rbp-A8h]
  __int64 v151; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v152; // [rsp+68h] [rbp-98h]
  unsigned __int64 *v153; // [rsp+70h] [rbp-90h]
  __int64 v154; // [rsp+78h] [rbp-88h]
  ULONG_PTR v155; // [rsp+80h] [rbp-80h]
  __int64 v156; // [rsp+88h] [rbp-78h]
  int v157; // [rsp+90h] [rbp-70h]
  __int64 v158; // [rsp+98h] [rbp-68h]
  __int64 v159; // [rsp+A0h] [rbp-60h]
  _QWORD *v160; // [rsp+A8h] [rbp-58h]
  int v161; // [rsp+B0h] [rbp-50h] BYREF
  int v162; // [rsp+B4h] [rbp-4Ch] BYREF
  __int64 v163; // [rsp+B8h] [rbp-48h] BYREF
  unsigned __int64 *v164; // [rsp+C0h] [rbp-40h]
  _QWORD v165[5]; // [rsp+D0h] [rbp-30h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+F8h] [rbp-8h]
  __int64 v167; // [rsp+100h] [rbp+0h]
  __int64 v168; // [rsp+108h] [rbp+8h]
  __int64 v169; // [rsp+110h] [rbp+10h]
  _QWORD v170[15]; // [rsp+120h] [rbp+20h] BYREF
  __int64 v171; // [rsp+198h] [rbp+98h]
  _QWORD v172[24]; // [rsp+1A0h] [rbp+A0h] BYREF

  v150 = a4;
  v164 = a6;
  v145 = 0;
  v146 = 0;
  ++dword_140C29CC0;
  memset((char *)v170 + 4, 0, 0x74uLL);
  v9 = BugCheckParameter2->m128i_i64[1] | 0x8000000000000000uLL;
  LODWORD(v170[0]) = a3;
  v153 = (unsigned __int64 *)v9;
  v149 = 0LL;
  v158 = 0LL;
  v157 = 0;
  v171 = -1LL;
  v151 = 0LL;
  v10 = (__int64)(v9 << 25) >> 16;
  v152 = v10;
  v12 = sub_1402CFEB0(v10);
  v14 = 8LL;
  if ( v10 < v15 || v10 > 0xFFFFF6FFFFFFFFFFuLL )
    v16 = LODWORD(v170[1]) | 1;
  else
    v16 = LODWORD(v170[1]) | 8;
  LODWORD(v170[1]) = v16;
  v148 = v13;
  v17 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)BugCheckParameter2[0x22000000000LL].m128i_i64 >> 4);
  v155 = v17;
  if ( a6 )
    *a6 = v13;
  v18 = ((unsigned __int64)BugCheckParameter2[2].m128i_i64[1] >> 43) & 0x3FF;
  v159 = 0LL;
  v19 = *(_QWORD *)(qword_140C51F48 + 8 * v18);
  v156 = v19;
  if ( v12 < 0xFFFF800000000000uLL )
    goto LABEL_6;
  if ( v12 >= qword_140C540C0 && v12 <= qword_140C51BF0 )
  {
    v54 = v16 | 8;
    v14 = 1LL;
    if ( (v54 & 1) != 0 )
    {
      v16 = v54 | 2;
      if ( v10 >= qword_140C51BE8 && v10 < qword_140C51BE8 + sub_14027A0F4() )
        v16 |= 0x100u;
    }
    else
    {
      v16 = v54 | 4;
    }
LABEL_6:
    v16 |= 0x1000u;
    LODWORD(v170[1]) = v16;
  }
  if ( (v16 & 0x1000) != 0 )
  {
    LOBYTE(v11) = a2;
    v20 = sub_1402EACBC(v19, BugCheckParameter2, v11, v9, v170);
    if ( v20 == 1 )
    {
      v20 = 0;
      v21 = v170[6];
      v147 = 0;
      v159 = *((_QWORD *)KeGetCurrentThread() + 23);
      v154 = v170[3];
      v22 = v150;
LABEL_10:
      LOBYTE(v23) = v170[1];
      goto LABEL_11;
    }
LABEL_192:
    ++dword_140C29D2C;
    dword_140C29D30 = -1431655765 * ((__int64)BugCheckParameter2[0x22000000000LL].m128i_i64 >> 4);
    sub_1402F2700(BugCheckParameter2);
    if ( (BugCheckParameter2[1].m128i_i64[1] & 0x4000000000000000LL) != 0 )
      return 0;
    return v20;
  }
  LOBYTE(v14) = a2;
  v20 = sub_140230F28((__int64)BugCheckParameter2, v14, v9, (__int64)v170);
  if ( v20 != 1 )
    goto LABEL_192;
  v21 = v170[6];
  v20 = 0;
  v154 = v170[3];
  v55 = 1;
  v147 = 1;
  v56 = *(_BYTE *)(v170[3] + 184LL) & 7;
  if ( v56 == 7 )
  {
    v22 = v150;
    if ( !*((_QWORD *)v150 + 2) )
    {
      ++dword_140C29CEC;
      goto LABEL_88;
    }
    v147 = 2;
  }
  else
  {
    if ( ((v56 - 1) & 0xFD) != 0 )
    {
      if ( LODWORD(v170[6]) == 1 )
        v55 = 2;
      v147 = v55;
    }
    v22 = v150;
  }
  if ( LODWORD(v170[6]) != 3 )
    goto LABEL_10;
  if ( (v170[1] & 1) != 0 )
    v23 = LODWORD(v170[1]) | 0xA;
  else
    v23 = LODWORD(v170[1]) | 0xC;
  LODWORD(v170[1]) = v23;
LABEL_11:
  if ( *((_QWORD *)v22 + 2) )
  {
    v24 = BugCheckParameter2[2].m128i_u8[2] >> 6;
    if ( a5 == -1 )
    {
      v25 = *((_DWORD *)sub_1402C1550(0xAAAAAAAAAAAAAAABuLL * ((__int64)BugCheckParameter2[0x22000000000LL].m128i_i64 >> 4))
            + 2);
      v26 = ((unsigned int)sub_1402E8990((__int64)BugCheckParameter2) << byte_140C506CD) | dword_140C50738 & v17 | (v25 << byte_140C506CC);
      v27 = (a3 >> 8) & 0x10000;
      if ( (a3 & 0x2000000) != 0 )
        v27 |= 0x20000u;
    }
    else
    {
      v27 = 48;
      v26 = dword_140C50738 & v17 | a5 & ~dword_140C50738;
    }
    v28 = -1LL;
    if ( v171 == -1 )
    {
      v29 = sub_1403250B0(v19, v26, v27);
      v148 = v29;
      if ( v29 == -1 )
      {
        ++dword_140C29D18;
        v20 = 0;
        goto LABEL_88;
      }
      v30 = (__m128i *)(48 * v29 - 0x220000000000LL);
      goto LABEL_18;
    }
    v83 = sub_1402C1550(0xAAAAAAAAAAAAAAABuLL * ((__int64)BugCheckParameter2[0x22000000000LL].m128i_i64 >> 4));
    v163 = 1LL;
    v30 = (__m128i *)sub_140323D70(v19, v154, v152, *((_DWORD *)v83 + 2) + 1, v24, v27, v171, (__int64)&v163);
    if ( v30 )
    {
      v148 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)v30[0x22000000000LL].m128i_i64 >> 4);
LABEL_18:
      if ( v30 != BugCheckParameter2 )
      {
        v31 = (unsigned __int8)sub_1402F2700(BugCheckParameter2);
        if ( (dword_140D06880 & 0x4000) != 0 && (unsigned int)sub_140313B20((ULONG_PTR)BugCheckParameter2) )
        {
          v32 = LODWORD(v170[1]) | 0x2000;
          LODWORD(v170[1]) |= 0x2000u;
        }
        else
        {
          v32 = v170[1];
        }
        v33 = 0LL;
        if ( BugCheckParameter2[2].m128i_i16[0] != 1 )
        {
          _InterlockedAnd64(&BugCheckParameter2[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
          if ( dword_140D06B08 )
          {
            if ( (dword_140D06B08 & 1) != 0 )
            {
              CurrentIrql = KeGetCurrentIrql();
              if ( CurrentIrql <= 0xFu && (unsigned __int8)v31 <= 0xFu && CurrentIrql >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                v86 = *((_QWORD *)CurrentPrcb + 4375);
                v87 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v31 + 1));
                v88 = (v87 & *(_DWORD *)(v86 + 20)) == 0;
                *(_DWORD *)(v86 + 20) &= v87;
                if ( v88 )
                  sub_140418E4C(CurrentPrcb);
              }
            }
          }
          __writecr8(v31);
          ++dword_140C29D08;
          goto LABEL_354;
        }
        v34 = v170[6];
        if ( ((BugCheckParameter2[2].m128i_i8[3] & 8) != 0 || (BugCheckParameter2->m128i_i8[0] & 1) == 0)
          && LODWORD(v170[6]) != 2
          && (v32 & 0x26) == 0 )
        {
          _InterlockedAnd64(&BugCheckParameter2[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
          if ( dword_140D06B08 )
          {
            if ( (dword_140D06B08 & 1) != 0 )
            {
              v89 = KeGetCurrentIrql();
              if ( v89 <= 0xFu && (unsigned __int8)v31 <= 0xFu && v89 >= 2u )
              {
                v90 = KeGetCurrentPrcb();
                v91 = *((_QWORD *)v90 + 4375);
                v92 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v31 + 1));
                v88 = (v92 & *(_DWORD *)(v91 + 20)) == 0;
                *(_DWORD *)(v91 + 20) &= v92;
                if ( v88 )
                  sub_140418E4C(v90);
              }
            }
          }
          __writecr8(v31);
          ++dword_140C29D0C;
          goto LABEL_354;
        }
        if ( (BugCheckParameter2[2].m128i_i8[2] & 7) != 6
          || v156 != *(_QWORD *)(qword_140C51F48
                               + 8 * (((unsigned __int64)BugCheckParameter2[2].m128i_i64[1] >> 43) & 0x3FF)) )
        {
          _InterlockedAnd64(&BugCheckParameter2[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
          if ( dword_140D06B08 )
          {
            if ( (dword_140D06B08 & 1) != 0 )
            {
              v135 = KeGetCurrentIrql();
              if ( v135 <= 0xFu && (unsigned __int8)v31 <= 0xFu && v135 >= 2u )
              {
                v136 = KeGetCurrentPrcb();
                v137 = *((_QWORD *)v136 + 4375);
                v138 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v31 + 1));
                v88 = (v138 & *(_DWORD *)(v137 + 20)) == 0;
                *(_DWORD *)(v137 + 20) &= v138;
                if ( v88 )
                  sub_140418E4C(v136);
              }
            }
          }
          __writecr8(v31);
          ++dword_140C29D14;
          goto LABEL_354;
        }
        if ( (v32 & 0x20) == 0 )
          v33 = sub_140317A10(v153);
        if ( v34 != 3 && (BugCheckParameter2[1].m128i_i64[1] & 0x3FFFFFFFFFFFFFFFuLL) > 1 && v147 == 1 )
        {
          if ( (v32 & 0x10) == 0 )
          {
            ++dword_140C29D20;
            _InterlockedAnd64(&BugCheckParameter2[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
            if ( dword_140D06B08 )
            {
              if ( (dword_140D06B08 & 1) != 0 )
              {
                v93 = KeGetCurrentIrql();
                if ( v93 <= 0xFu && (unsigned __int8)v31 <= 0xFu && v93 >= 2u )
                {
                  v94 = KeGetCurrentPrcb();
                  v95 = *((_QWORD *)v94 + 4375);
                  v96 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v31 + 1));
                  v88 = (v96 & *(_DWORD *)(v95 + 20)) == 0;
                  *(_DWORD *)(v95 + 20) &= v96;
                  if ( v88 )
                    sub_140418E4C(v94);
                }
              }
            }
            __writecr8(v31);
            goto LABEL_354;
          }
          v32 |= 0x208u;
          LODWORD(v170[1]) = v32;
        }
        if ( v34 != 2 )
        {
          if ( (v32 & 0x20) != 0 )
          {
            v20 = 0;
            v33 = sub_14024DE5C((__int64)BugCheckParameter2, (volatile signed __int64 *)v153);
            if ( !v33 )
            {
              _InterlockedAnd64(&BugCheckParameter2[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
              if ( dword_140D06B08 )
              {
                if ( (dword_140D06B08 & 1) != 0 )
                {
                  v97 = KeGetCurrentIrql();
                  if ( v97 <= 0xFu && (unsigned __int8)v31 <= 0xFu && v97 >= 2u )
                  {
                    v98 = v31 + 1;
                    goto LABEL_255;
                  }
                }
              }
LABEL_257:
              __writecr8(v31);
LABEL_355:
              v124 = v30;
              v149 = v30;
LABEL_356:
              if ( v124 )
              {
                v139 = (unsigned __int8)sub_1402F2700(v124);
                v140 = v149;
                v149[2].m128i_i8[2] = v149[2].m128i_i8[2] & 0xF8 | 5;
                _InterlockedAnd64(&v140[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
                if ( dword_140D06B08 )
                {
                  if ( (dword_140D06B08 & 1) != 0 )
                  {
                    v141 = KeGetCurrentIrql();
                    if ( v141 <= 0xFu && (unsigned __int8)v139 <= 0xFu && v141 >= 2u )
                    {
                      v142 = KeGetCurrentPrcb();
                      v143 = *((_QWORD *)v142 + 4375);
                      v144 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v139 + 1));
                      v88 = (v144 & *(_DWORD *)(v143 + 20)) == 0;
                      *(_DWORD *)(v143 + 20) &= v144;
                      if ( v88 )
                        sub_140418E4C(v142);
                    }
                  }
                }
                __writecr8(v139);
              }
              goto LABEL_88;
            }
          }
          else if ( ((v32 & 8) == 0 || (v32 & 0x100) != 0) && ((v33 & 0x42) != 0 || (v32 & 0x2000) != 0) )
          {
            if ( (v32 & 0x100) != 0 )
            {
              sub_14033DBC0(v153, v33 & 0xFFFFFFFFFFFFFFBDuLL);
            }
            else
            {
              v35 = 0;
              LODWORD(v170[1]) = v32 | 0x40;
              if ( (unsigned int)sub_140317A80(v153) )
              {
                v102 = sub_140229550();
                v36 = 1;
                v35 = v102 != 0;
              }
              else
              {
                v36 = 1;
              }
              v37 = (__int64 *)v153;
              *v153 = v33 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
              if ( v35 )
                sub_1402294F0((__int64)v37, v33 & 0xFFFFFFFFFFFFFBFEuLL | 0x400);
              v157 = v36;
            }
            v38 = sub_140333AA0(v154);
            v39 = v152;
            std::time_get<wchar_t,std::istreambuf_iterator<wchar_t>>::_Getint(v152, v38, v147);
LABEL_43:
            v40 = v147;
            if ( v147 == 1 )
            {
              if ( (v170[1] & 4) != 0 )
                v40 = 2;
              v147 = v40;
            }
            sub_140239060((__int64)v30);
            sub_1402E5708((__int64)v30, v24, 1u);
            if ( LODWORD(v170[6]) != 2 )
            {
              v41 = v155;
              goto LABEL_46;
            }
            v103 = sub_14027B604(v156, v39);
            v158 = v103;
            if ( v103 )
            {
              v146 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(v103 + 232));
              v104 = v146;
              if ( v158 == sub_14027B604(v156, v39) )
              {
                v41 = v155;
                if ( sub_14024F014(v39, v155) )
                {
LABEL_46:
                  sub_1402E8154(v30, BugCheckParameter2);
                  if ( (BugCheckParameter2[2].m128i_i64[1] & 0xFFFFFFFFFFLL) == v41 )
                    sub_14033C3E0(v30, v148);
                  _InterlockedAnd64(&v30[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
                  v42 = v170[1];
                  if ( (v170[1] & 0x20) == 0 && LODWORD(v170[6]) != 2 )
                  {
                    if ( (v170[1] & 0x200) == 0 )
                    {
                      if ( (v170[1] & 8) == 0 && !v147 || (v58 = v170[1] & 0xA, v58 == 10) || (v170[1] & 0x100) != 0 )
                      {
                        BugCheckParameter2[2].m128i_i8[2] = BugCheckParameter2[2].m128i_i8[2] & 0xF8 | 5;
                      }
                      else if ( (v58 != 8 || v147) && (LODWORD(v170[6]) != 3 || (v170[1] & 4) == 0) )
                      {
                        goto LABEL_56;
                      }
                    }
                    _InterlockedAnd64(&BugCheckParameter2[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
                    if ( dword_140D06B08 )
                    {
                      if ( (dword_140D06B08 & 1) != 0 )
                      {
                        v110 = KeGetCurrentIrql();
                        if ( v110 <= 0xFu && (unsigned __int8)v31 <= 0xFu && v110 >= 2u )
                        {
                          v111 = KeGetCurrentPrcb();
                          v112 = *((_QWORD *)v111 + 4375);
                          v113 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v31 + 1));
                          v88 = (v113 & *(_DWORD *)(v112 + 20)) == 0;
                          *(_DWORD *)(v112 + 20) &= v113;
                          if ( v88 )
                            sub_140418E4C(v111);
                        }
                      }
                    }
                    __writecr8(v31);
                    v42 = v170[1];
                    LOBYTE(v31) = 17;
                  }
LABEL_56:
                  if ( (v42 & 0x200) == 0 )
                  {
                    v145 = 17;
                    v156 = 0LL;
                    goto LABEL_58;
                  }
                  v156 = sub_140273AF0(v152, (__int64)&v145);
                  v73 = v156;
                  if ( !v156 )
                  {
                    ++dword_140C29D24;
                    goto LABEL_291;
                  }
                  if ( *(_WORD *)(v156 + 32) > 2u )
                  {
                    v69 = 1LL;
                    ++dword_140C29D28;
                  }
                  else
                  {
                    v33 = sub_140317A10(v153);
                    if ( (v33 & 0x42) == 0 )
                    {
LABEL_177:
                      v42 = v170[1];
                      v41 = v155;
LABEL_58:
                      if ( (v42 & 0x200) == 0 && (LODWORD(v170[6]) != 3 || (v42 & 4) == 0) && ((v42 & 0xA) != 8 || v147) )
                      {
                        if ( (_BYTE)v31 == 17 )
                        {
                          v43 = 0;
                        }
                        else
                        {
                          LODWORD(v151) = 4;
                          sub_140239060((__int64)v30);
                          v42 = v170[1];
                          v43 = v151;
                        }
                        v44 = v43 | 2;
                        if ( (v42 & 0x2000) == 0 )
                          v44 = v43;
                        sub_1402E7D60(v148, v155, v150, v44);
                        if ( (v44 & 4) != 0 )
                          _InterlockedAnd64(&v30[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
                        v46 = v170[1];
                        if ( (v170[1] & 0x20) == 0 && (_BYTE)v31 != 17 )
                          BugCheckParameter2[2].m128i_i8[2] = BugCheckParameter2[2].m128i_i8[2] & 0xF8 | 5;
LABEL_70:
                        v47 = v33 ^ (v33 ^ (v148 << 12)) & 0xFFFFFFFFFF000LL;
                        if ( (v46 & 0x20) != 0 )
                        {
                          v59 = v47 | 0x20;
                          sub_140239060((__int64)v30);
                          if ( (dword_140D06880 & 0x4000000) != 0 )
                            _mm_lfence();
                          if ( v33 != _InterlockedCompareExchange64((volatile signed __int64 *)v153, v59, v33) )
                          {
                            sub_1402E89B0((unsigned __int64 *)&v30[1]);
                            v30[2].m128i_i8[2] = v30[2].m128i_i8[2] & 0xF8 | 5;
                            _InterlockedAnd64(&v30[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
                            _InterlockedAnd64(&BugCheckParameter2[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
                            v20 = 0;
                            if ( dword_140D06B08 )
                            {
                              if ( (dword_140D06B08 & 1) != 0 )
                              {
                                v120 = KeGetCurrentIrql();
                                if ( v120 <= 0xFu && (unsigned __int8)v31 <= 0xFu && v120 >= 2u )
                                {
                                  v121 = KeGetCurrentPrcb();
                                  v122 = *((_QWORD *)v121 + 4375);
                                  v123 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v31 + 1));
                                  v88 = (v123 & *(_DWORD *)(v122 + 20)) == 0;
                                  *(_DWORD *)(v122 + 20) &= v123;
                                  if ( v88 )
                                    sub_140418E4C(v121);
                                }
                              }
                            }
                            __writecr8((unsigned __int8)v31);
                            goto LABEL_355;
                          }
                          _InterlockedAnd64(&v30[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
                          v46 = v170[1];
                          BugCheckParameter2[2].m128i_i8[2] = BugCheckParameter2[2].m128i_i8[2] & 0xF8 | 5;
LABEL_79:
                          if ( (v46 & 0x200) != 0 )
                          {
                            _InterlockedAnd64(&v30[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
                            _InterlockedAnd64(&BugCheckParameter2[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
                            LOBYTE(v45) = v145;
                            sub_140334790(v156, v45);
                            LOBYTE(v31) = 17;
                          }
                          else if ( (v46 & 0x50) == 0x10 )
                          {
                            _InterlockedAnd64(&v30[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
                          }
                          if ( (((unsigned __int64)BugCheckParameter2[2].m128i_i64[1] >> 60) & 7) == 3 )
                          {
                            v125 = 12;
                            if ( (_BYTE)v31 == 17 )
                              v125 = 8;
                            sub_14023CC50((ULONG_PTR)BugCheckParameter2, v125);
                          }
                          if ( LODWORD(v170[6]) == 2 )
                          {
                            ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v158 + 232));
                            if ( dword_140D06B08
                              && (dword_140D06B08 & 1) != 0
                              && (v126 = KeGetCurrentIrql(), v126 <= 0xFu) )
                            {
                              v127 = v146;
                              if ( v146 <= 0xFu && v126 >= 2u )
                              {
                                v128 = KeGetCurrentPrcb();
                                v129 = *((_QWORD *)v128 + 4375);
                                v130 = ~(unsigned __int16)(-1LL << (v146 + 1));
                                v88 = (v130 & *(_DWORD *)(v129 + 20)) == 0;
                                *(_DWORD *)(v129 + 20) &= v130;
                                if ( v88 )
                                  sub_140418E4C(v128);
                              }
                            }
                            else
                            {
                              v127 = v146;
                            }
                            __writecr8(v127);
                          }
                          if ( (_BYTE)v31 == 17 )
                            LOBYTE(v31) = sub_1402F2700(BugCheckParameter2);
                          sub_14033C300(BugCheckParameter2, 0LL);
                          v52 = BugCheckParameter2[2].m128i_i8[2];
                          BugCheckParameter2[2].m128i_i64[1] &= ~0x8000000000000000uLL;
                          BugCheckParameter2[2].m128i_i8[2] = v52 & 0xC7;
                          BugCheckParameter2[2].m128i_i8[3] &= ~0x20u;
                          BugCheckParameter2[1].m128i_i64[1] &= 0xC000000000000000uLL;
                          BugCheckParameter2[2].m128i_i16[0] = 0;
                          _InterlockedAnd64(&BugCheckParameter2[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
                          if ( dword_140D06B08 )
                          {
                            if ( (dword_140D06B08 & 1) != 0 )
                            {
                              v131 = KeGetCurrentIrql();
                              if ( v131 <= 0xFu && (unsigned __int8)v31 <= 0xFu && v131 >= 2u )
                              {
                                v132 = KeGetCurrentPrcb();
                                v133 = *((_QWORD *)v132 + 4375);
                                v134 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v31 + 1));
                                v88 = (v134 & *(_DWORD *)(v133 + 20)) == 0;
                                *(_DWORD *)(v133 + 20) &= v134;
                                if ( v88 )
                                  sub_140418E4C(v132);
                              }
                            }
                          }
                          __writecr8((unsigned __int8)v31);
                          v20 = 1;
                          goto LABEL_88;
                        }
                        if ( (v46 & 0x400) != 0 )
                        {
                          if ( (v46 & 0x4000) != 0 )
                          {
                            v78 = *(_QWORD *)(v159 + 1928);
                            if ( !v78
                              || (v79 = sub_140317A10(((v78 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL),
                                  ((v79 >> 12) & 0xFFFFFFFFFFLL) != v148) )
                            {
                              v149 = BugCheckParameter2;
                              v20 = 2;
                              sub_1402E89B0((unsigned __int64 *)&BugCheckParameter2[1]);
                              goto LABEL_356;
                            }
                          }
                        }
                        else
                        {
                          if ( (v46 & 0x40) != 0 )
                          {
                            v48 = (__int64 *)v153;
                            v49 = 0;
                            v50 = sub_140317A80(v153);
                            v51 = 0;
                            if ( !v50 )
                            {
LABEL_74:
                              *v48 = v47;
                              if ( v49 )
                                sub_1402294F0((__int64)v48, v47);
                              v46 = v170[1];
                              goto LABEL_77;
                            }
                            if ( (unsigned int)sub_140229550() )
                            {
                              v49 = 1;
                              if ( HIBYTE(word_140C51864) != (_BYTE)v51 )
                                goto LABEL_74;
                            }
                            else if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) == 0 )
                            {
                              goto LABEL_74;
                            }
                            if ( (v47 & 1) != 0 )
                              v47 |= 0x8000000000000000uLL;
                            goto LABEL_74;
                          }
                          if ( (v46 & 0x200) == 0 && (v46 & 0x50) == 0x10 )
                            sub_140239060((__int64)v30);
                          sub_14026EDE4((__int64 *)v153, v47, 0);
                          v46 = v170[1];
                        }
                        v51 = 0;
LABEL_77:
                        if ( v157 == v51 )
                        {
                          v57 = sub_140333AA0(v154);
                          std::time_get<wchar_t,std::istreambuf_iterator<wchar_t>>::_Getint(v152, v57, v147);
                          v46 = v170[1];
                        }
                        goto LABEL_79;
                      }
                      v60 = sub_1402CBF80(v150, v148, v41);
                      v160 = v60;
                      if ( (v170[1] & 0x200) != 0 )
                      {
                        LODWORD(v150) = sub_14026FB78(v152, v41, v148, (((_QWORD)v60 << 25) - v151) >> 16);
                        goto LABEL_139;
                      }
                      v61 = v155;
                      CurrentThread = KeGetCurrentThread();
                      v165[1] = v152;
                      v165[3] = v41;
                      v62 = 1;
                      v165[2] = (((_QWORD)v60 << 25) - v151) >> 16;
                      v165[4] = v148;
                      v165[0] = v154;
                      v168 = 0LL;
                      v169 = 0LL;
                      v167 = *((_QWORD *)CurrentThread + 23);
                      v63 = BugCheckParameter2[2].m128i_i64[1] & 0xFFFFFFFFFFLL;
                      LODWORD(v150) = 1;
                      if ( v63 == v155 )
                      {
                        if ( (*(_BYTE *)(v154 + 187) & 2) != 0
                          || _interlockedbittestandset((volatile signed __int32 *)(v159 + 2172), 1u) )
                        {
                          LODWORD(v150) = 0;
                          goto LABEL_139;
                        }
                        v75 = LODWORD(v170[1]) | 0x400;
                        LODWORD(v170[1]) |= 0x400u;
                        if ( *(_QWORD *)(v167 + 40) >> 12 != v61 )
                        {
                          HIDWORD(v168) = 1;
                          v169 = *(_QWORD *)(v167 + 1928);
                          LODWORD(v170[1]) = v75 | 0x4000;
                        }
                        sub_14027DA5C((__int64)&v170[3], 17, 0LL);
                        sub_140216C28(v167, SHIDWORD(v168), (__int64)v165);
                        v76 = (volatile LONG *)sub_140282AD0(v154);
                        ExAcquireSpinLockExclusive(v76);
                        v77 = v159;
                        *((_DWORD *)v76 + 1) = 0;
                        _InterlockedAnd((volatile signed __int32 *)(v77 + 2172), 0xFFFFFFFD);
                        v62 = (int)v150;
                      }
                      else
                      {
                        NaptrDnsRecordConvert_0(v165);
                      }
                      if ( (int)v168 < 0 )
                        v62 = 0;
                      LODWORD(v150) = v62;
LABEL_139:
                      LODWORD(v151) = 0;
                      v64 = sub_140317A80(v160);
                      v65 = 0;
                      if ( !v64 )
                      {
LABEL_140:
                        v66 = v151;
                        goto LABEL_141;
                      }
                      if ( (unsigned int)sub_140229550() )
                      {
                        v66 = 1;
                      }
                      else
                      {
                        if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) == 0 )
                          goto LABEL_140;
                        v66 = v151;
                      }
LABEL_141:
                      v67 = (__int64)v160;
                      *v160 = 0LL;
                      if ( v66 )
                      {
                        sub_1402294F0(v67, 0LL);
                        v65 = 0;
                      }
                      LODWORD(v151) = v65;
                      v68 = sub_140317A80(v67 + 8);
                      v69 = 0LL;
                      if ( v68 )
                      {
                        v115 = sub_140229550();
                        v70 = 1LL;
                        if ( v115 )
                          LODWORD(v151) = 1;
                      }
                      else
                      {
                        v70 = 1LL;
                      }
                      v71 = (__int64)(v160 + 1);
                      v160[1] = 0LL;
                      if ( (_DWORD)v151 != (_DWORD)v69 )
                      {
                        sub_1402294F0(v71, 0LL);
                        v69 = 0LL;
                      }
                      if ( (_DWORD)v150 != (_DWORD)v69 )
                      {
                        if ( (v170[1] & 0x200) != 0 )
                        {
                          BugCheckParameter2[2].m128i_i8[2] = BugCheckParameter2[2].m128i_i8[2] & 0xF8 | 5;
                          BugCheckParameter2[1].m128i_i64[1] = v70 | BugCheckParameter2[1].m128i_i64[1] & 0xC000000000000001uLL;
                          sub_140239060((__int64)v30);
                        }
                        else
                        {
                          dword_140C29CD0 += v70;
                          v72 = (unsigned __int8)sub_1402F2700(BugCheckParameter2);
                          BugCheckParameter2[2].m128i_i8[2] = BugCheckParameter2[2].m128i_i8[2] & 0xF8 | 5;
                          v45 = 1LL;
                          BugCheckParameter2[1].m128i_i64[1] = BugCheckParameter2[1].m128i_i64[1] & 0xC000000000000000uLL | 1;
                          _InterlockedAnd64(&BugCheckParameter2[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
                          if ( dword_140D06B08 )
                          {
                            if ( (dword_140D06B08 & 1) != 0 )
                            {
                              v116 = KeGetCurrentIrql();
                              if ( v116 <= 0xFu && (unsigned __int8)v72 <= 0xFu && v116 >= 2u )
                              {
                                v117 = KeGetCurrentPrcb();
                                v45 = -1LL << ((unsigned __int8)v72 + 1);
                                v118 = *((_QWORD *)v117 + 4375);
                                v119 = ~(unsigned __int16)v45;
                                v88 = (v119 & *(_DWORD *)(v118 + 20)) == 0;
                                *(_DWORD *)(v118 + 20) &= v119;
                                if ( v88 )
                                  sub_140418E4C(v117);
                              }
                            }
                          }
                          __writecr8(v72);
                          LOBYTE(v31) = 17;
                        }
                        v46 = v170[1];
                        goto LABEL_70;
                      }
                      if ( (v170[1] & 0x200) != 0 )
                      {
                        v114 = v156;
                        goto LABEL_290;
                      }
LABEL_291:
                      sub_1402E89B0((unsigned __int64 *)&v30[1]);
LABEL_354:
                      v20 = 0;
                      goto LABEL_355;
                    }
                    v161 = 0;
                    while ( _interlockedbittestandset64((volatile signed __int32 *)(v73 + 24), 0x3FuLL) )
                    {
                      do
                        sub_1402F32E0(&v161);
                      while ( *(__int64 *)(v73 + 24) < 0 );
                    }
                    if ( *(_WORD *)(v73 + 32) <= 2u )
                    {
                      sub_14033DBC0(v153, v33 & 0xFFFFFFFFFFFFFFBDuLL);
                      std::time_get<wchar_t,std::istreambuf_iterator<wchar_t>>::_Getint(v152, 0LL, 1LL);
                      v74 = sub_14033C2A0(v73);
                      _InterlockedAnd64((volatile signed __int64 *)(v73 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                      if ( v74 )
                        sub_1402E20D0(
                          *(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(v73 + 40) >> 43) & 0x3FFLL)),
                          v74,
                          1);
                      v162 = 0;
                      while ( _interlockedbittestandset64(&v30[1].m128i_i32[2], 0x3FuLL) )
                      {
                        do
                          sub_1402F32E0(&v162);
                        while ( v30[1].m128i_i64[1] < 0 );
                      }
                      sub_14033C2A0(v30);
                      _InterlockedAnd64(&v30[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
                      goto LABEL_177;
                    }
                    v69 = 1LL;
                    ++dword_140C29D28;
                    _InterlockedAnd64((volatile signed __int64 *)(v73 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                  }
                  v114 = v73;
LABEL_290:
                  LOBYTE(v69) = v145;
                  sub_140334790(v114, v69);
                  goto LABEL_291;
                }
              }
              v103 = v158;
            }
            else
            {
              v104 = 0;
            }
            v20 = 0;
            ++dword_140C29CFC;
            if ( v103 )
            {
              ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v103 + 232));
              if ( dword_140D06B08 )
              {
                if ( (dword_140D06B08 & 1) != 0 )
                {
                  v105 = KeGetCurrentIrql();
                  if ( v105 <= 0xFu && v104 <= 0xFu && v105 >= 2u )
                  {
                    v106 = KeGetCurrentPrcb();
                    v107 = *((_QWORD *)v106 + 4375);
                    v108 = ~(unsigned __int16)(-1LL << (v104 + 1));
                    v88 = (v108 & *(_DWORD *)(v107 + 20)) == 0;
                    *(_DWORD *)(v107 + 20) &= v108;
                    if ( v88 )
                      sub_140418E4C(v106);
                  }
                }
              }
              __writecr8(v104);
            }
            _InterlockedAnd64(&v30[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
            _InterlockedAnd64(&BugCheckParameter2[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
            if ( dword_140D06B08 )
            {
              if ( (dword_140D06B08 & 1) != 0 )
              {
                v109 = KeGetCurrentIrql();
                if ( v109 <= 0xFu && (unsigned __int8)v31 <= 0xFu && v109 >= 2u )
                {
                  v98 = v31 + 1;
LABEL_255:
                  v99 = KeGetCurrentPrcb();
                  v100 = ~(unsigned __int16)(-1LL << v98);
                  v101 = *((_QWORD *)v99 + 4375);
                  v88 = (v100 & *(_DWORD *)(v101 + 20)) == 0;
                  *(_DWORD *)(v101 + 20) &= v100;
                  if ( v88 )
                    sub_140418E4C(v99);
                  goto LABEL_257;
                }
              }
            }
            goto LABEL_257;
          }
        }
        v39 = v152;
        goto LABEL_43;
      }
      v20 = 1;
LABEL_88:
      v28 = v148;
      goto LABEL_89;
    }
    ++dword_140C29D1C;
    v20 = 0;
  }
  else
  {
    if ( (v23 & 0x20) != 0 || (BugCheckParameter2[2].m128i_i8[2] & 0x10) != 0 || v21 == 2 || (v23 & 8) != 0 )
    {
      ++dword_140C29D98;
      goto LABEL_88;
    }
    v80 = sub_140317A10(v9);
    v81 = BugCheckParameter2[2].m128i_i64[1] & 0xFFFFFFFFFFLL;
    if ( v81 == v17 )
    {
      ++dword_140C29D94;
      goto LABEL_88;
    }
    if ( (v80 & 0x42) != 0 )
    {
      ++dword_140C29D98;
      goto LABEL_88;
    }
    if ( (BugCheckParameter2[2].m128i_i8[3] & 8) != 0 )
      goto LABEL_88;
    v20 = 0;
    if ( (sub_14033A410(v81, (__int64)(v9 << 25) >> 16) & 0xF) == 8 )
      goto LABEL_88;
    memset(v172, 0, 0xB8uLL);
    LODWORD(v172[0]) = sub_140333AA0(v154);
    WORD2(v172[0]) = 4;
    v172[2] = 0LL;
    LODWORD(v172[1]) = 20;
    v172[3] = 0LL;
    if ( dword_140C52B68 )
      sub_140274D10(v82, (_BYTE *)v9);
    sub_1402CF280((__int64)v172, (__int64)(v9 << 25) >> 16, 1LL, 0);
    v28 = v148;
    if ( !sub_1402C1D70(v154, (__int64)v172, 0) )
      v20 = 2;
  }
LABEL_89:
  sub_1402EA5E4(v170);
  if ( v149 )
    sub_140268408((__int64)v149);
  sub_1402F2700(BugCheckParameter2);
  if ( v20 == 1 )
  {
    if ( v164 )
      *v164 = v28;
    ++dword_140C29CC4;
  }
  else
  {
    if ( (BugCheckParameter2[2].m128i_i8[2] & 7) == 6 )
    {
      if ( v20 != 2 )
        return v20;
    }
    else
    {
      v20 = 2;
    }
    if ( (BugCheckParameter2[1].m128i_i64[1] & 0x4000000000000000LL) != 0 )
      return 0;
    else
      ++dword_140C29CC8;
  }
  return v20;
}
