/*
 * XREFs of sub_1407B4D70 @ 0x1407B4D70
 * Callers:
 *     NtTraceEvent @ 0x1402FE320 (NtTraceEvent.c)
 * Callees:
 *     sub_14022A6DC @ 0x14022A6DC (sub_14022A6DC.c)
 *     sub_14023DD00 @ 0x14023DD00 (sub_14023DD00.c)
 *     PsGetProcessStartKey @ 0x14023FCD0 (PsGetProcessStartKey.c)
 *     sub_14024187C @ 0x14024187C (sub_14024187C.c)
 *     PsGetCurrentProcessSessionId @ 0x140287F00 (PsGetCurrentProcessSessionId.c)
 *     IoGetStackLimits @ 0x1402AB940 (IoGetStackLimits.c)
 *     sub_1402ABBF0 @ 0x1402ABBF0 (sub_1402ABBF0.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x1402F69F0 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1402FE2A0 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     sub_1402FEBE0 @ 0x1402FEBE0 (sub_1402FEBE0.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     sub_140347DB0 @ 0x140347DB0 (sub_140347DB0.c)
 *     sub_1403884A4 @ 0x1403884A4 (sub_1403884A4.c)
 *     sub_1403B3C40 @ 0x1403B3C40 (sub_1403B3C40.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14041A410 @ 0x14041A410 (sub_14041A410.c)
 *     sub_14041A808 @ 0x14041A808 (sub_14041A808.c)
 *     sub_14041A870 @ 0x14041A870 (sub_14041A870.c)
 *     ExpInterlockedPushEntrySList @ 0x1404298C0 (ExpInterlockedPushEntrySList.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140460740 @ 0x140460740 (sub_140460740.c)
 *     sub_14046087A @ 0x14046087A (sub_14046087A.c)
 *     sub_140461038 @ 0x140461038 (sub_140461038.c)
 *     sub_14046148C @ 0x14046148C (sub_14046148C.c)
 *     sub_14062CE84 @ 0x14062CE84 (sub_14062CE84.c)
 *     sub_14063130C @ 0x14063130C (sub_14063130C.c)
 *     sub_140632EEC @ 0x140632EEC (sub_140632EEC.c)
 *     sub_140633B20 @ 0x140633B20 (sub_140633B20.c)
 *     sub_14066A21C @ 0x14066A21C (sub_14066A21C.c)
 *     sub_1406E3610 @ 0x1406E3610 (sub_1406E3610.c)
 *     sub_1409E4114 @ 0x1409E4114 (sub_1409E4114.c)
 *     sub_1409F4F8C @ 0x1409F4F8C (sub_1409F4F8C.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall sub_1407B4D70(
        __int64 a1,
        char a2,
        unsigned __int16 a3,
        char a4,
        int a5,
        __int64 a6,
        _OWORD *a7,
        char a8,
        __int64 a9,
        unsigned int a10,
        unsigned __int64 a11,
        __int64 a12,
        __int64 a13,
        __int16 a14,
        void *a15,
        unsigned __int64 *a16)
{
  __int64 v18; // r12
  __int64 v19; // rsi
  __int64 v20; // r14
  unsigned int v21; // r13d
  __int64 v23; // rsi
  unsigned int v24; // r11d
  __int64 v25; // r10
  __int64 v26; // rdi
  unsigned __int8 v27; // r8
  __int64 v28; // r9
  bool v29; // zf
  __int64 v30; // rdx
  __int64 v31; // r12
  char v32; // si
  __int64 v33; // r13
  __int64 v34; // r15
  int v35; // ecx
  unsigned __int8 v36; // al
  int v37; // edx
  __int64 v38; // rcx
  __int64 v39; // rcx
  int v40; // ecx
  unsigned int v41; // edi
  unsigned __int8 v42; // r8
  __int64 v43; // r9
  unsigned int v44; // r11d
  __int64 v45; // r14
  int v46; // ecx
  int v47; // ebx
  unsigned int v48; // r14d
  int v49; // ecx
  __int64 v50; // rsi
  __int64 v51; // rcx
  int v52; // ecx
  ULONG v53; // esi
  void *v54; // rsp
  _SLIST_ENTRY *v55; // rdi
  void *v56; // rsp
  _OWORD *v57; // rdi
  unsigned int v58; // r15d
  __int64 v59; // rax
  unsigned int v60; // r9d
  unsigned int v61; // r10d
  unsigned int v62; // r8d
  char v63; // al
  __int64 v64; // r12
  PSLIST_ENTRY v65; // r13
  __int64 v66; // r15
  unsigned int v67; // edi
  __int64 v68; // rsi
  int v69; // ebx
  BOOLEAN v70; // al
  BOOLEAN v71; // al
  int v72; // ecx
  __int64 v73; // rsi
  unsigned __int16 *v74; // r15
  _OWORD *v75; // rax
  __int128 v76; // xmm0
  __int64 v77; // rcx
  __int16 v78; // si
  unsigned __int16 v79; // si
  __int64 v80; // rcx
  int v81; // edi
  int v82; // ecx
  int v83; // edi
  __int64 v84; // rsi
  unsigned int v85; // ecx
  __int16 v86; // r11
  __int64 v87; // r8
  unsigned __int64 ProcessStartKey; // rax
  unsigned __int16 *v89; // r8
  int v90; // edx
  __int64 v91; // r9
  unsigned __int64 v92; // rax
  unsigned __int16 *v93; // rdi
  unsigned int v94; // ecx
  __int64 v95; // rdx
  unsigned __int16 *v96; // rbx
  unsigned __int16 *v97; // rdi
  unsigned int v98; // eax
  unsigned __int16 *v99; // r13
  unsigned __int16 v100; // si
  unsigned __int16 v101; // si
  __int64 v102; // rbx
  unsigned __int16 *v103; // rbx
  __int64 v104; // rax
  unsigned __int16 v105; // dx
  char *v106; // rdi
  unsigned int v107; // r15d
  size_t v108; // r8
  __int64 *v109; // rdx
  unsigned __int8 v110; // cl
  int v111; // ecx
  size_t v112; // rcx
  unsigned __int64 v113; // rbx
  void *v114; // r9
  unsigned int v115; // eax
  struct _KTHREAD *v116; // r8
  __int64 v117; // r15
  __int64 v118; // r8
  signed __int64 *v119; // rdx
  signed __int64 v120; // rax
  signed __int64 v121; // rtt
  BOOL v122; // ecx
  __int16 *v123; // rax
  struct _KTHREAD *v124; // rcx
  char v125; // [rsp+220h] [rbp-610h] BYREF
  _BYTE v126[432]; // [rsp+650h] [rbp-1E0h] BYREF
  char v127; // [rsp+830h] [rbp+0h]
  unsigned __int8 v128; // [rsp+838h] [rbp+8h]
  int v129; // [rsp+840h] [rbp+10h]
  unsigned int v130; // [rsp+844h] [rbp+14h]
  int v131; // [rsp+848h] [rbp+18h]
  unsigned int i; // [rsp+84Ch] [rbp+1Ch]
  unsigned __int16 v133; // [rsp+850h] [rbp+20h]
  __int64 v134; // [rsp+858h] [rbp+28h]
  __int64 v135; // [rsp+860h] [rbp+30h]
  int v136; // [rsp+868h] [rbp+38h]
  unsigned __int16 v137; // [rsp+86Ch] [rbp+3Ch] BYREF
  __int16 v138; // [rsp+870h] [rbp+40h]
  unsigned __int64 v139; // [rsp+878h] [rbp+48h]
  unsigned __int16 v140; // [rsp+880h] [rbp+50h]
  unsigned int v141; // [rsp+884h] [rbp+54h]
  void *v142; // [rsp+888h] [rbp+58h] BYREF
  unsigned __int16 *v143; // [rsp+890h] [rbp+60h]
  __int64 v144; // [rsp+898h] [rbp+68h]
  char v146; // [rsp+8A1h] [rbp+71h]
  unsigned int v147; // [rsp+8A4h] [rbp+74h]
  __int64 v148; // [rsp+8A8h] [rbp+78h]
  __int64 v149; // [rsp+8B0h] [rbp+80h] BYREF
  PSLIST_ENTRY ListEntry; // [rsp+8B8h] [rbp+88h] BYREF
  unsigned int v151; // [rsp+8C0h] [rbp+90h]
  unsigned int v152; // [rsp+8C4h] [rbp+94h]
  __int64 v153; // [rsp+8C8h] [rbp+98h]
  unsigned __int16 *v154; // [rsp+8D0h] [rbp+A0h]
  unsigned __int64 v155; // [rsp+8D8h] [rbp+A8h] BYREF
  __int64 v156; // [rsp+8E0h] [rbp+B0h]
  __int64 v157; // [rsp+8E8h] [rbp+B8h]
  void *v158; // [rsp+8F0h] [rbp+C0h]
  struct _KTHREAD *CurrentThread; // [rsp+8F8h] [rbp+C8h]
  unsigned __int64 HighLimit; // [rsp+900h] [rbp+D0h] BYREF
  unsigned __int64 LowLimit; // [rsp+908h] [rbp+D8h] BYREF
  unsigned __int64 v162; // [rsp+910h] [rbp+E0h] BYREF
  unsigned __int64 v163; // [rsp+918h] [rbp+E8h] BYREF
  unsigned __int16 *v164; // [rsp+920h] [rbp+F0h] BYREF
  void *v165; // [rsp+928h] [rbp+F8h]
  char *v166; // [rsp+930h] [rbp+100h]
  __int64 v167; // [rsp+938h] [rbp+108h]
  __int64 v168; // [rsp+940h] [rbp+110h]
  __int64 v169; // [rsp+948h] [rbp+118h]
  __int128 v170; // [rsp+950h] [rbp+120h] BYREF
  __int64 v171; // [rsp+960h] [rbp+130h]
  unsigned __int64 *v172; // [rsp+968h] [rbp+138h]
  __int64 v173; // [rsp+970h] [rbp+140h]
  __int64 v174; // [rsp+978h] [rbp+148h]
  _OWORD v175[25]; // [rsp+980h] [rbp+150h] BYREF
  _OWORD Src[5]; // [rsp+B10h] [rbp+2E0h] BYREF

  v140 = a3;
  v18 = a1;
  v134 = a1;
  v19 = a13;
  v168 = a1;
  v153 = a6;
  v174 = a6;
  v20 = a11;
  v139 = a11;
  v169 = a11;
  v156 = a12;
  v165 = a15;
  v172 = a16;
  v21 = 0;
  v131 = 0;
  memset(v175, 0, 0x188uLL);
  i = 0;
  memset(Src, 0, sizeof(Src));
  v142 = 0LL;
  v158 = 0LL;
  v137 = 0;
  v164 = 0LL;
  v155 = 0LL;
  v157 = *((_QWORD *)sub_140347DB0() + 108);
  v138 = a14 & 0x200;
  if ( a11 )
  {
    if ( a10 )
      goto LABEL_5;
    return 3221225485LL;
  }
  if ( a10 )
    return 3221225485LL;
LABEL_5:
  if ( a10 > 0x80 )
    return 3221225485LL;
  if ( !a13 )
    v19 = v18;
  v144 = v19;
  v127 = 0;
  v23 = *(_QWORD *)(v18 + 392);
  v135 = v23;
  v167 = v23;
  if ( a16 && *a16 )
  {
    v155 = *a16;
    v127 = 16;
  }
  sub_1402FEBE0((unsigned __int16 *)v165, (a14 & 0x400) != 0, &v137, &v164);
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  v128 = a2 & ~a4;
  v25 = v144;
LABEL_13:
  v26 = v156;
LABEL_14:
  v27 = a8;
  v28 = a9;
  while ( 1 )
  {
    v29 = !_BitScanForward((unsigned int *)&v30, v128);
    i = v30;
    if ( v29 )
      break;
    v31 = 1LL;
    v148 = 1LL;
    v170 = 0LL;
    v171 = 0LL;
    ListEntry = 0LL;
    v149 = 0LL;
    v129 = 80;
    v147 = 0;
    v32 = 0;
    v133 = 0;
    v136 = 0;
    v154 = 0LL;
    v166 = 0LL;
    v128 &= v128 - 1;
    v33 = (unsigned int)v30;
    v34 = v25 + 32 * (v30 + 4);
    if ( v26
      && (v35 = *(_DWORD *)(v26 + 4LL * (*(unsigned __int16 *)(v34 + 6) >> 5)),
          _bittest(&v35, *(_WORD *)(v34 + 6) & 0x1F))
      || !*(_DWORD *)v34
      || (v36 = *(_BYTE *)(v34 + 4), v27 > v36) && v36
      || ((v37 = *(_DWORD *)(v34 + 8), (v37 & 0x40) == 0) || v28)
      && ((v28 & *(_QWORD *)(v34 + 16)) == 0 || (v28 & *(_QWORD *)(v34 + 24)) != *(_QWORD *)(v34 + 24))
      || ((v38 = *((_QWORD *)KeGetCurrentThread() + 23), (a5 & 2) != 0) || *(int *)(v38 + 1120) < 0)
      && (v37 & 0x200) != 0 )
    {
      v21 = 0;
      v23 = v135;
      v18 = v134;
    }
    else
    {
      v39 = *(_QWORD *)(v25 + 384);
      if ( v39
        && ((v40 = *(_DWORD *)(104 * v33 + v39), (v40 & 0x80000200) == 0x80000200) || (v40 & 0x80000100) == 0x80000100) )
      {
        v41 = i;
        if ( !sub_1406E3610(v25, i, v140, v153, v24, v20) )
          goto LABEL_47;
        v25 = v144;
        v28 = a9;
        v27 = a8;
      }
      else
      {
        v41 = i;
      }
      if ( v138 && sub_14023DD00(v25, v41, v27, v28, 0) && !sub_140461038(v144, v41, v44, v20, 1, 0, v42, v43, 0) )
        goto LABEL_47;
      v45 = *(unsigned __int16 *)(v34 + 6);
      v141 = *(unsigned __int16 *)(v34 + 6);
      if ( ExAcquireRundownProtectionCacheAwareEx(
             *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v135 + 448) + 8 * v45),
             1u) )
      {
        if ( (unsigned int)v45 >= *(_DWORD *)(v135 + 16) )
        {
          v31 = 1LL;
        }
        else
        {
          _mm_lfence();
          v31 = *(_QWORD *)(8 * v45 + *(_QWORD *)(v135 + 456));
          v41 = i;
        }
        v148 = v31;
        v32 = 1;
      }
      if ( (v31 & 1) != 0 )
      {
        v29 = v32 == 0;
        v23 = v135;
        if ( !v29 )
          ExReleaseRundownProtectionCacheAwareEx(
            *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v135 + 448) + 8 * v45),
            1u);
        v29 = (_DWORD)v45 == 3;
        v20 = v139;
        if ( !v29 )
        {
LABEL_47:
          v21 = 0;
          v23 = v135;
          v24 = a10;
          v25 = v144;
          v18 = v134;
          goto LABEL_13;
        }
        v46 = -1073741058;
        if ( !*(_DWORD *)(v23 + 4068) )
          v46 = -1073741816;
        v131 = v46;
        v21 = 0;
        v18 = v134;
        break;
      }
      v47 = 0;
      if ( a7 )
      {
        v48 = 104;
        v129 = 104;
        v47 = 16;
      }
      else
      {
        v48 = v129;
      }
      v49 = *(_DWORD *)(v34 + 8);
      if ( (v49 & 0xFFFFFF9F) != 0 )
      {
        if ( (v49 & 0x800) != 0 && v157 && v157 != qword_140D05008 )
        {
          v47 |= 0x100u;
          v48 += (*(unsigned __int16 *)(v157 + 4224) + 15) & 0xFFFFFFF8;
          v129 = v48;
        }
        if ( (v49 & 1) != 0 )
        {
          if ( (v127 & 2) == 0 )
          {
            sub_14066A21C((__int64)Src);
            v127 |= 2u;
            v49 = *(_DWORD *)(v34 + 8);
          }
          v47 |= 2u;
          v48 += LOWORD(Src[0]);
          v129 = v48;
        }
        if ( (v49 & 2) != 0 )
        {
          v47 |= 1u;
          v48 += 16;
          v129 = v48;
        }
        if ( (v49 & 0x80u) != 0 )
        {
          v47 |= 0x40u;
          v48 += 16;
          v129 = v48;
        }
        if ( (v49 & 0x100) != 0 )
        {
          v47 |= 0x80u;
          v48 += 16;
          v129 = v48;
        }
        if ( (v49 & 4) != 0 )
        {
          if ( (v50 = v144, (v51 = *(_QWORD *)(v144 + 384)) == 0)
            || (v52 = *(_DWORD *)(104 * v33 + v51), (v52 & 0x80001000) != 0x80001000)
            && (v52 & 0x80002000) != 0x80002000
            && (v52 & 0x80004000) != 0x80004000
            || sub_14046148C(v144, v41, a8, a9, 1)
            && (unsigned __int8)sub_1409F4F8C(v153, v50, v41)
            && sub_140461038(v50, v41, a10, v139, 1, 0, a8, a9, 1) )
          {
            if ( (v127 & 1) == 0 )
            {
              v53 = 256;
              v142 = sub_140460740();
              if ( v142 )
              {
                v127 |= 8u;
              }
              else
              {
                HighLimit = 0LL;
                LowLimit = 0LL;
                IoGetStackLimits(&LowLimit, &HighLimit);
                if ( (unsigned __int64)&HighLimit - LowLimit > 0x1440 )
                {
                  v54 = alloca(1552LL);
                  v142 = &v125;
                  v53 = 192;
                }
              }
              v55 = (_SLIST_ENTRY *)v142;
              if ( v142 && !sub_14063130C(CurrentThread, 0, v53, (__int64)&v142, 0, v126[424]) )
              {
                if ( (v127 & 8) != 0 )
                {
                  ExpInterlockedPushEntrySList(&stru_140C5A6B0, v55 - 1);
                  v127 &= ~8u;
                }
                v142 = 0LL;
              }
              v127 |= 1u;
            }
            if ( v142 )
            {
              if ( (*(_DWORD *)(v31 + 820) & 1) != 0 && sub_140633B20(v31, (__int64)v142, &ListEntry) )
              {
                v47 |= 8u;
                v48 += 24;
              }
              else
              {
                v47 |= 4u;
                v48 += *(unsigned __int16 *)v142;
              }
              v129 = v48;
            }
          }
        }
        if ( (*(_DWORD *)(v34 + 8) & 8) != 0 )
        {
          if ( (v127 & 4) == 0 )
          {
            v162 = 0LL;
            v163 = 0LL;
            IoGetStackLimits(&v163, &v162);
            if ( (unsigned __int64)&v162 - v163 > 0x1E0 )
            {
              v56 = alloca(480LL);
              v158 = v126;
              sub_1409E4114();
            }
            v127 |= 4u;
          }
          if ( v158 )
          {
            v47 |= 0x20u;
            v48 += *(unsigned __int16 *)v158;
            v129 = v48;
          }
        }
      }
      v57 = &v175[3 * LODWORD(v175[24])];
      v58 = a10;
      if ( a10 )
      {
        v21 = 0;
        v151 = 0;
        if ( *((_BYTE *)KeGetCurrentThread() + 562) )
        {
          v59 = 16LL * a10;
          if ( v59 )
          {
            if ( (v139 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            if ( v139 + v59 > 0x7FFFFFFF0000LL || v139 + v59 < v139 )
              MEMORY[0x7FFFFFFF0000] = 0;
          }
        }
        v60 = 0;
        v151 = 0;
        v48 = v129;
        while ( 1 )
        {
          if ( v60 >= a10 )
            goto LABEL_127;
          v61 = v48;
          v147 = *(_DWORD *)(v139 + 16LL * v60 + 8);
          v62 = v147;
          if ( v147 > 0xFFFF )
            break;
          if ( v138 )
          {
            v63 = *(_BYTE *)(v139 + 16LL * v60 + 12);
            v62 = v147;
          }
          else
          {
            v63 = 0;
          }
          if ( v63 )
          {
            if ( v63 == 1 )
            {
              v133 += v62;
              ++v136;
            }
            v48 = v129;
          }
          else
          {
            v48 = v62 + v129;
            v129 += v62;
          }
          if ( v48 < v61 )
          {
            v131 = -2147483643;
            v128 |= 1 << i;
            if ( ListEntry )
              sub_14046087A(ListEntry, *(unsigned int ***)(v31 + 1008));
            goto LABEL_113;
          }
          v151 = ++v60;
        }
        v131 = -2147483643;
        v128 |= 1 << i;
        if ( ListEntry )
          sub_14046087A(ListEntry, *(unsigned int ***)(v31 + 1008));
LABEL_113:
        v23 = v135;
        ExReleaseRundownProtectionCacheAwareEx(
          *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v135 + 448) + 8LL * v141),
          1u);
        v20 = v139;
        v18 = v134;
        goto LABEL_244;
      }
LABEL_127:
      if ( v136 )
      {
        v48 += (v133 + 15) & 0xFFFFFFF8;
        v129 = v48;
      }
      if ( v137 )
      {
        v48 += (v137 + 15) & 0xFFFFFFF8;
        v129 = v48;
      }
      *((_DWORD *)v57 + 10) = v48;
      v64 = sub_1402ABBF0(v31, v48, (__int64)&v170, &v149, 0);
      v173 = v64;
      v65 = ListEntry;
      v66 = v148;
      if ( ListEntry )
        sub_14046087A(ListEntry, *(unsigned int ***)(v148 + 1008));
      if ( !v64 )
      {
        v21 = 0;
        v67 = 0;
        v68 = 0LL;
        v69 = sub_1403884A4(v66, v48);
        v20 = v139;
        if ( v136 )
        {
          v67 = a10;
          v68 = v139;
        }
        if ( (unsigned int)sub_14041A808() )
        {
          v71 = EtwEventEnabled(qword_140C15FA8, &stru_14000E990);
          v18 = v134;
          if ( v71 )
            sub_14062CE84(
              (_QWORD *)(v134 + 40),
              (__int16 *)(v153 + 40),
              (unsigned __int16 *)(v66 + 136),
              a5,
              v69,
              v67,
              v68,
              1,
              1);
        }
        else
        {
          v70 = EtwEventEnabled(qword_140C15FA8, &stru_14000E990);
          v18 = v134;
          if ( v70 )
            sub_14041A410(
              (_QWORD *)(v134 + 40),
              (__int16 *)(v153 + 40),
              (unsigned __int16 *)(v66 + 136),
              v69,
              v67,
              v68,
              1,
              1);
        }
        v72 = v131;
        if ( v131 >= 0 )
        {
          if ( (*(_DWORD *)(v66 + 12) & 0x8000000) == 0 )
            v72 = v69;
          v131 = v72;
        }
        v23 = v135;
        ExReleaseRundownProtectionCacheAwareEx(
          *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v135 + 448) + 8LL * v141),
          1u);
        v24 = a10;
        v25 = v144;
        v26 = v156;
        if ( v69 == -1073741675 )
        {
          v131 = -1073741675;
          v58 = a10;
          goto LABEL_244;
        }
        goto LABEL_14;
      }
      *(_QWORD *)v57 = v66;
      *((_QWORD *)v57 + 1) = v64;
      v57[1] = v170;
      *((_QWORD *)v57 + 4) = v171;
      ++LODWORD(v175[24]);
      v152 = 0;
      v73 = 80LL;
      v130 = 80;
      v74 = 0LL;
      v143 = 0LL;
      v75 = (_OWORD *)v153;
      *(_OWORD *)v64 = *(_OWORD *)v153;
      *(_OWORD *)(v64 + 16) = v75[1];
      *(_OWORD *)(v64 + 32) = v75[2];
      *(_OWORD *)(v64 + 48) = v75[3];
      *(_OWORD *)(v64 + 64) = v75[4];
      if ( v164 )
      {
        v76 = *(_OWORD *)v164;
        *(_WORD *)(v64 + 4) |= 0x80u;
      }
      else
      {
        v76 = *(_OWORD *)(v134 + 40);
      }
      *(_OWORD *)(v64 + 24) = v76;
      *(_DWORD *)v64 = v48 | *((_DWORD *)qword_14001C130 + v140);
      if ( v47 )
      {
        if ( (v47 & 0x100) != 0 )
        {
          v74 = (unsigned __int16 *)(v64 + 80);
          v77 = v157;
          v78 = (*(_WORD *)(v157 + 4224) + 15) & 0xFFF8;
          *(_WORD *)(v64 + 80) = v78;
          *(_WORD *)(v64 + 82) = 16;
          *(_WORD *)(v64 + 86) = *(_WORD *)(v77 + 4224);
          *(_WORD *)(v64 + 84) &= ~1u;
          *(_WORD *)(v64 + 84) = 0;
          v79 = v78 - *(_WORD *)(v77 + 4224) - 8;
          memmove((void *)(v64 + 88), *(const void **)(v77 + 4216), *(unsigned __int16 *)(v77 + 4224));
          memset((void *)(v64 + 88 + *(unsigned __int16 *)(v157 + 4224)), 0, v79);
          *(_WORD *)(v64 + 4) |= 1u;
          v73 = (unsigned int)*(unsigned __int16 *)(v64 + 80) + 80;
          v130 = *(unsigned __int16 *)(v64 + 80) + 80;
          v143 = (unsigned __int16 *)(v64 + 80);
        }
        if ( (v47 & 0x10) != 0 )
        {
          v80 = v73 + v64;
          *(_DWORD *)v80 = 65560;
          *(_WORD *)(v80 + 6) = 16;
          *(_WORD *)(v80 + 4) &= ~1u;
          *(_WORD *)(v80 + 4) = 0;
          *(_OWORD *)(v80 + 8) = *a7;
          *(_WORD *)(v64 + 4) |= 1u;
          v73 = (unsigned int)(v73 + 24);
          v130 = v73;
          if ( v74 )
            v74[2] |= 1u;
          v74 = (unsigned __int16 *)v80;
          v143 = (unsigned __int16 *)v80;
        }
        if ( (v47 & 2) != 0 )
        {
          v73 += v64;
          v81 = LOWORD(Src[0]);
          memmove((void *)v73, Src, LOWORD(Src[0]));
          *(_WORD *)(v64 + 4) |= 1u;
          v82 = v81 + v130;
          v130 += v81;
          if ( v74 )
            v74[2] |= 1u;
          v74 = (unsigned __int16 *)v73;
          v143 = (unsigned __int16 *)v73;
          LODWORD(v73) = v82;
        }
        if ( (v47 & 1) != 0 )
        {
          v83 = v73;
          v84 = (unsigned int)v73 + v64;
          *(_DWORD *)v84 = 196624;
          *(_WORD *)(v84 + 6) = 4;
          *(_WORD *)(v84 + 4) &= ~1u;
          *(_WORD *)(v84 + 4) = 0;
          *(_DWORD *)(v84 + 8) = PsGetCurrentProcessSessionId();
          *(_WORD *)(v64 + 4) |= 1u;
          v85 = v83 + 16;
          v130 = v83 + 16;
          if ( v74 )
            v74[2] |= 1u;
          v74 = (unsigned __int16 *)v84;
          v143 = (unsigned __int16 *)v84;
        }
        else
        {
          v85 = v130;
        }
        v86 = 0;
        if ( (v47 & 0x40) != 0 )
        {
          v87 = v85 + v64;
          *(_DWORD *)v87 = 851984;
          *(_WORD *)(v87 + 6) = 8;
          *(_WORD *)(v87 + 4) &= ~1u;
          *(_WORD *)(v87 + 4) = 0;
          ProcessStartKey = PsGetProcessStartKey(*((_QWORD *)KeGetCurrentThread() + 23));
          *((_QWORD *)v89 + 1) = ProcessStartKey;
          *(_WORD *)(v64 + 4) |= 1u;
          v73 = (unsigned int)(v90 + 16);
          v130 = v90 + 16;
          if ( v74 )
            v74[2] |= 1u;
          v74 = v89;
          v143 = v89;
          v65 = ListEntry;
          v48 = v129;
        }
        else
        {
          v73 = v130;
        }
        if ( (v47 & 0x80u) != 0 )
        {
          v91 = v73 + v64;
          *(_DWORD *)v91 = 655376;
          *(_WORD *)(v91 + 6) = 8;
          *(_WORD *)(v91 + 4) &= ~1u;
          *(_WORD *)(v91 + 4) = v86;
          if ( (v127 & 0x10) != 0 || (sub_14024187C(&v155), v127 |= 0x10u, !v172) )
          {
            v92 = v155;
          }
          else
          {
            v92 = v155;
            *v172 = v155;
          }
          *(_QWORD *)(v91 + 8) = v92;
          *(_WORD *)(v64 + 4) |= 1u;
          v73 = (unsigned int)(v73 + 16);
          v130 = v73;
          if ( v74 )
            v74[2] |= 1u;
          v74 = (unsigned __int16 *)v91;
          v143 = (unsigned __int16 *)v91;
        }
        if ( (v47 & 4) != 0 )
        {
          v73 += v64;
          v93 = (unsigned __int16 *)v142;
          memmove((void *)v73, v142, *(unsigned __int16 *)v142);
          *(_WORD *)(v64 + 4) |= 1u;
          v94 = *v93 + v130;
          v130 = v94;
          if ( v74 )
            v74[2] |= 1u;
          v74 = (unsigned __int16 *)v73;
          v143 = (unsigned __int16 *)v73;
          LODWORD(v73) = v94;
        }
        if ( (v47 & 8) != 0 )
        {
          v95 = v64 + (unsigned int)v73;
          *(_DWORD *)v95 = 1179672;
          *(_WORD *)(v95 + 6) = 16;
          *(_WORD *)(v95 + 4) &= ~1u;
          *(_WORD *)(v95 + 4) = 0;
          *(_QWORD *)(v95 + 16) = v65;
          *(_QWORD *)(v95 + 8) = *((_QWORD *)v142 + 1);
          *(_WORD *)(v64 + 4) |= 1u;
          LODWORD(v73) = v73 + 24;
          v130 = v73;
          if ( v74 )
            v74[2] |= 1u;
          v74 = (unsigned __int16 *)v95;
          v143 = (unsigned __int16 *)v95;
        }
        if ( (v47 & 0x20) != 0 )
        {
          v96 = (unsigned __int16 *)(v64 + (unsigned int)v73);
          v97 = (unsigned __int16 *)v158;
          memmove(v96, v158, *(unsigned __int16 *)v158);
          *(_WORD *)(v64 + 4) |= 1u;
          LODWORD(v73) = *v97 + (_DWORD)v73;
          v130 = v73;
          if ( v74 )
            v74[2] |= 1u;
          v74 = v96;
          v143 = v96;
        }
      }
      v98 = v137;
      if ( v137 )
      {
        v99 = (unsigned __int16 *)(v64 + (unsigned int)v73);
        v100 = (v137 + 15) & 0xFFF8;
        *v99 = v100;
        v99[1] = 12;
        v99[3] = v98;
        v99[2] &= ~1u;
        v99[2] = 0;
        v101 = v100 - v98 - 8;
        v102 = v98;
        memmove(v99 + 4, v165, v98);
        memset((char *)v99 + v102 + 8, 0, v101);
        *(_WORD *)(v64 + 4) |= 1u;
        LODWORD(v73) = *v99 + v130;
        v130 = v73;
        if ( v74 )
          v74[2] |= 1u;
        v74 = v99;
        v143 = v99;
      }
      v21 = 0;
      if ( v136 )
      {
        v103 = (unsigned __int16 *)(v64 + (unsigned int)v73);
        v104 = v133;
        v105 = (v133 + 15) & 0xFFF8;
        *v103 = v105;
        v103[1] = 11;
        v103[3] = v104;
        v103[2] &= ~1u;
        v103[2] = 0;
        v106 = (char *)(v103 + 4);
        v154 = v103 + 4;
        v166 = (char *)v103 + v104 + 8;
        memset(v166, 0, (unsigned __int16)(v105 - v104 - 8));
        *(_WORD *)(v64 + 4) |= 1u;
        LODWORD(v73) = *v103 + (_DWORD)v73;
        v130 = v73;
        if ( v74 )
          v74[2] |= 1u;
      }
      else
      {
        v106 = (char *)v154;
      }
      v107 = 0;
      v152 = 0;
      v24 = a10;
      while ( v107 < v24 )
      {
        v108 = *(unsigned int *)(v139 + 16LL * v107 + 8);
        v109 = *(__int64 **)(v139 + 16LL * v107);
        if ( v138 )
        {
          v110 = *(_BYTE *)(v139 + 16LL * v107 + 12);
          v48 = v129;
          v106 = (char *)v154;
        }
        else
        {
          v110 = 0;
        }
        if ( v110 )
        {
          v111 = v110 - 1;
          if ( v111 )
          {
            if ( v111 == 2 )
            {
              if ( (_DWORD)v108 == 8 )
              {
                if ( (unsigned __int64)(v109 + 1) > 0x7FFFFFFF0000LL || v109 + 1 < v109 )
                  MEMORY[0x7FFFFFFF0000] = 0;
                v149 = *v109;
              }
              v152 = ++v107;
            }
            else
            {
              v152 = ++v107;
            }
          }
          else
          {
            if ( !v106 )
              goto LABEL_233;
            v112 = *(unsigned int *)(v139 + 16LL * v107 + 8);
            v113 = (unsigned __int64)&v106[v108];
            if ( &v106[v108] < v106 || v113 > (unsigned __int64)v166 || !v136 )
              goto LABEL_233;
            if ( (_DWORD)v108
              && ((unsigned __int64)v109 + v108 > 0x7FFFFFFF0000LL || (__int64 *)((char *)v109 + v108) < v109) )
            {
              MEMORY[0x7FFFFFFF0000] = 0;
            }
            memmove(v106, v109, v112);
            v106 = (char *)v113;
            v154 = (unsigned __int16 *)v113;
            --v136;
            v24 = a10;
            v152 = ++v107;
          }
        }
        else
        {
          v114 = (void *)(v64 + (unsigned int)v73);
          v115 = v108 + v73;
          if ( (int)v108 + (int)v73 < (unsigned int)v73 )
          {
            v130 = -1;
LABEL_233:
            v131 = -1073741820;
            *(_DWORD *)v64 = v48 | 0xC00D0000;
            *(_QWORD *)(v64 + 16) = v149;
            v23 = v135;
            v58 = a10;
            v20 = v139;
            v18 = v134;
            goto LABEL_244;
          }
          LODWORD(v73) = v108 + v73;
          v130 = v115;
          if ( v115 > v48 )
            goto LABEL_233;
          v146 = *((_BYTE *)KeGetCurrentThread() + 562);
          if ( v146
            && (_DWORD)v108
            && ((unsigned __int64)v109 + v108 > 0x7FFFFFFF0000LL || (__int64 *)((char *)v109 + v108) < v109) )
          {
            MEMORY[0x7FFFFFFF0000] = 0;
          }
          memmove(v114, v109, v108);
          v48 = v129;
          v106 = (char *)v154;
          v24 = a10;
          v152 = ++v107;
        }
      }
      v26 = v156;
      if ( v156 )
        *(_DWORD *)(v156 + 4LL * (v141 >> 5)) |= 1 << (v141 & 0x1F);
      *(_QWORD *)(v64 + 16) = v149;
      v116 = CurrentThread;
      *(_DWORD *)(v64 + 56) = *((_DWORD *)CurrentThread + 163);
      *(_DWORD *)(v64 + 60) = *((_DWORD *)v116 + 183);
      *(_DWORD *)(v64 + 8) = *((_DWORD *)v116 + 308);
      *(_DWORD *)(v64 + 12) = *((_DWORD *)v116 + 306);
      v117 = v148;
      if ( (*(_DWORD *)(v148 + 12) & 0x80000) != 0
        && (!(_BYTE)KdDebuggerNotPresent && !byte_140C09804 || byte_140C40504) )
      {
        sub_1403B3C40(v148, (__int64)&v170);
        v24 = a10;
      }
      v23 = v135;
      v20 = v139;
      v25 = v144;
      v28 = a9;
      v18 = v134;
      v27 = a8;
      if ( *(_QWORD *)(v117 + 1288) )
      {
        sub_140632EEC(v117, (__int64)&v170);
        v24 = a10;
        v25 = v144;
        goto LABEL_14;
      }
    }
  }
  v58 = a10;
LABEL_244:
  if ( (v127 & 8) != 0 )
    ExpInterlockedPushEntrySList(&stru_140C5A6B0, (PSLIST_ENTRY)v142 - 1);
  if ( v131 < 0 )
  {
    v122 = sub_14041A808() != 0;
    v123 = (__int16 *)(v174 + 40);
    if ( v122 )
      sub_14022A6DC(a8, a9, v18, (__int64)v175, v128, 0, v131, (__int64)v123, 1, v58, v20, 1);
    else
      sub_14041A870(a8, a9, v18, (__int64)v175, v128, v131, v123, 1, v58, v20, 1);
  }
  else
  {
    for ( i = 0; i < LODWORD(v175[24]); v21 = i )
    {
      v118 = *(_QWORD *)&v175[3 * v21 + 1];
      v119 = (signed __int64 *)*((_QWORD *)&v175[3 * v21 + 1] + 1);
      _m_prefetchw(v119);
      v120 = *v119;
      if ( (v118 ^ (unsigned __int64)*v119) >= 0xF )
      {
LABEL_251:
        _InterlockedDecrement((volatile signed __int32 *)(v118 + 12));
      }
      else
      {
        while ( 1 )
        {
          v121 = v120;
          v120 = _InterlockedCompareExchange64(v119, v120 + 1, v120);
          if ( v121 == v120 )
            break;
          if ( (v118 ^ (unsigned __int64)v120) >= 0xF )
            goto LABEL_251;
        }
      }
      ExReleaseRundownProtectionCacheAwareEx(
        *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v23 + 448) + 8LL * **(unsigned int **)&v175[3 * v21]),
        1u);
      ++i;
    }
  }
  v124 = CurrentThread;
  v29 = (*((_WORD *)CurrentThread + 242))++ == 0xFFFF;
  if ( v29 && *((struct _KTHREAD **)v124 + 19) != (struct _KTHREAD *)((char *)v124 + 152) && !*((_WORD *)v124 + 243) )
    KiCheckForKernelApcDelivery();
  return (unsigned int)v131;
}
