/*
 * XREFs of sub_140306100 @ 0x140306100
 * Callers:
 *     sub_140305BD0 @ 0x140305BD0 (sub_140305BD0.c)
 * Callees:
 *     KeIsSubsetAffinityEx @ 0x14020EF50 (KeIsSubsetAffinityEx.c)
 *     KeAcquireSpinLockAtDpcLevel @ 0x140211E00 (KeAcquireSpinLockAtDpcLevel.c)
 *     sub_140211E70 @ 0x140211E70 (sub_140211E70.c)
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_140224E64 @ 0x140224E64 (sub_140224E64.c)
 *     sub_14023B8E8 @ 0x14023B8E8 (sub_14023B8E8.c)
 *     HalRequestIpi @ 0x14023DD20 (HalRequestIpi.c)
 *     sub_14029394C @ 0x14029394C (sub_14029394C.c)
 *     KeAddProcessorAffinityEx @ 0x140294460 (KeAddProcessorAffinityEx.c)
 *     KeRemoveProcessorAffinityEx @ 0x1402F4410 (KeRemoveProcessorAffinityEx.c)
 *     sub_140303720 @ 0x140303720 (sub_140303720.c)
 *     sub_1403072A0 @ 0x1403072A0 (sub_1403072A0.c)
 *     sub_1403078A0 @ 0x1403078A0 (sub_1403078A0.c)
 *     sub_140308240 @ 0x140308240 (sub_140308240.c)
 *     KeCheckProcessorAffinityEx @ 0x140345D30 (KeCheckProcessorAffinityEx.c)
 *     sub_140348800 @ 0x140348800 (sub_140348800.c)
 *     sub_140353FB0 @ 0x140353FB0 (sub_140353FB0.c)
 *     sub_14035EDE4 @ 0x14035EDE4 (sub_14035EDE4.c)
 *     sub_1403A572C @ 0x1403A572C (sub_1403A572C.c)
 *     sub_1403B4940 @ 0x1403B4940 (sub_1403B4940.c)
 *     KeInterlockedClearProcessorAffinityEx @ 0x1403B49A0 (KeInterlockedClearProcessorAffinityEx.c)
 *     sub_1403D98F0 @ 0x1403D98F0 (sub_1403D98F0.c)
 *     KdPowerTransitionEx @ 0x1403DA590 (KdPowerTransitionEx.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_140420AD0 @ 0x140420AD0 (sub_140420AD0.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14045A310 @ 0x14045A310 (sub_14045A310.c)
 *     sub_14045ABA8 @ 0x14045ABA8 (sub_14045ABA8.c)
 *     sub_14045E960 @ 0x14045E960 (sub_14045E960.c)
 *     sub_140565198 @ 0x140565198 (sub_140565198.c)
 *     sub_14056839C @ 0x14056839C (sub_14056839C.c)
 *     sub_14056A60C @ 0x14056A60C (sub_14056A60C.c)
 *     sub_14056C984 @ 0x14056C984 (sub_14056C984.c)
 *     sub_14056CF48 @ 0x14056CF48 (sub_14056CF48.c)
 *     sub_14056E8CC @ 0x14056E8CC (sub_14056E8CC.c)
 *     sub_1405C74C8 @ 0x1405C74C8 (sub_1405C74C8.c)
 *     sub_1405C7D34 @ 0x1405C7D34 (sub_1405C7D34.c)
 *     sub_1405C84DC @ 0x1405C84DC (sub_1405C84DC.c)
 *     sub_1405C85B0 @ 0x1405C85B0 (sub_1405C85B0.c)
 *     sub_1405C8D78 @ 0x1405C8D78 (sub_1405C8D78.c)
 *     sub_1405C946C @ 0x1405C946C (sub_1405C946C.c)
 *     sub_1405CF520 @ 0x1405CF520 (sub_1405CF520.c)
 *     sub_1405D9844 @ 0x1405D9844 (sub_1405D9844.c)
 *     sub_1405DBF90 @ 0x1405DBF90 (sub_1405DBF90.c)
 */

__int64 __fastcall sub_140306100(
        ULONG_PTR BugCheckParameter4,
        __int64 a2,
        unsigned int a3,
        unsigned __int64 a4,
        unsigned __int8 a5,
        unsigned __int64 a6,
        __int64 a7,
        char a8)
{
  __int64 v8; // rbp
  ULONG_PTR v9; // r15
  unsigned __int16 v10; // r14
  ULONG_PTR v11; // rsi
  unsigned __int64 v12; // rdx
  KSPIN_LOCK *v13; // rcx
  char v14; // r15
  char v15; // di
  char v16; // bl
  bool v17; // r12
  __int64 v18; // r13
  int v19; // eax
  unsigned __int8 v20; // r10
  __int64 v21; // rdx
  __int64 v22; // rdi
  unsigned __int64 v23; // rbx
  __int64 v24; // rdx
  signed __int64 v25; // rax
  __int64 v26; // r9
  char v27; // r12
  unsigned int v28; // edi
  signed __int64 v29; // r15
  int v30; // ebx
  unsigned __int64 *v31; // r8
  __int64 v32; // r11
  unsigned __int64 v33; // rdx
  unsigned __int64 v34; // rcx
  __int64 v35; // rcx
  int v36; // eax
  unsigned __int64 v37; // r8
  __int64 v38; // rcx
  unsigned __int8 v39; // r10
  signed __int64 v40; // r12
  unsigned __int64 v41; // rdi
  unsigned __int64 v42; // r15
  unsigned __int64 v43; // rbx
  unsigned __int64 v44; // rcx
  char *v45; // rdx
  unsigned int v46; // r15d
  int v47; // ebx
  __int64 v48; // rdi
  __int64 v49; // rbx
  __int16 v50; // bx
  __int64 v51; // rcx
  unsigned __int8 v52; // dl
  char v53; // r8
  struct _KPRCB *v54; // rbx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // rcx
  unsigned __int16 v58; // r8
  __int16 v59; // di
  unsigned int v60; // r15d
  int v61; // ebx
  __int64 v62; // r15
  __int64 v63; // rdi
  __int64 v64; // rax
  __int64 v65; // rdx
  __int64 v66; // rax
  __int64 v67; // r12
  signed __int64 v68; // rdx
  __int64 v69; // rcx
  unsigned __int64 v70; // r15
  unsigned __int64 v71; // rax
  unsigned __int64 v72; // rbx
  int v73; // ebx
  char v74; // r13
  int v75; // ebx
  __int64 v76; // rcx
  int *v77; // rcx
  __int64 v78; // rdx
  __int64 v79; // rcx
  char v80; // di
  char v81; // r15
  char v82; // r12
  char v83; // r8
  unsigned int v84; // ebx
  unsigned int v85; // r12d
  __int64 v86; // rbx
  __int64 j; // r9
  unsigned int LockArray_high; // r15d
  unsigned __int16 *v89; // rdx
  unsigned __int64 v90; // rdi
  unsigned __int16 v91; // bx
  unsigned int v92; // ecx
  int v93; // esi
  int v94; // r13d
  __int64 result; // rax
  __int64 v96; // rcx
  __int64 v97; // rbx
  signed __int16 v98; // tt
  unsigned __int16 v99; // ax
  signed __int16 v100; // tt
  __int16 v101; // ax
  unsigned __int16 *v102; // r12
  unsigned int v103; // ebx
  __int64 v104; // rax
  unsigned int v105; // edi
  unsigned __int64 v106; // rbx
  __int64 v107; // rcx
  __int64 v108; // rdx
  char v109; // al
  struct _KPRCB *v110; // rax
  __int64 v111; // rcx
  char v112; // bl
  unsigned int v113; // ecx
  unsigned __int64 v114; // rcx
  unsigned __int64 v115; // rbx
  __int64 v116; // r8
  int v117; // eax
  bool v118; // zf
  signed __int64 v119; // r15
  __int64 v120; // rdi
  __int64 v121; // rbx
  bool v122; // bl
  struct _KPRCB *CurrentPrcb; // rdi
  __int64 v124; // rcx
  unsigned __int64 v125; // rax
  __int64 v126; // rdx
  struct _KPRCB *v127; // rcx
  __int64 v128; // rdx
  KSPIN_LOCK *v129; // rcx
  unsigned __int64 v130; // rbx
  unsigned int v131; // eax
  struct _KPRCB *v132; // rdi
  __int64 v133; // rcx
  unsigned __int64 v134; // rax
  __int64 v135; // rdi
  struct _KPRCB *v136; // rcx
  int v137; // edx
  unsigned __int8 v138; // al
  unsigned int v139; // ecx
  unsigned __int64 *v140; // rax
  unsigned __int16 v141; // ax
  __int64 v142; // rcx
  __int64 v143; // rcx
  _BYTE *v144; // r15
  __int64 v145; // rcx
  __int64 v146; // rax
  unsigned __int64 v147; // rdx
  __int64 v148; // rdx
  __int64 v149; // rbx
  __int64 v150; // rdi
  unsigned __int64 v151; // rax
  int v152; // eax
  unsigned int v153; // eax
  unsigned int v154; // eax
  ULONG v155; // ecx
  unsigned __int64 v156; // rcx
  unsigned __int64 v157; // rbx
  int v158; // eax
  int v159; // eax
  int v160; // eax
  __int64 v161; // r9
  __int64 v162; // r15
  unsigned int v163; // edi
  struct _KPRCB *v164; // rbx
  int v165; // edi
  int v166; // eax
  int v167; // eax
  int v168; // eax
  __int64 v169; // r15
  __int64 v170; // rdx
  __int64 v171; // rdx
  int v172; // ecx
  __int64 v183; // rdx
  __int64 v184; // r8
  __int64 v185; // r9
  unsigned __int64 v186; // rax
  __int64 v187; // rcx
  unsigned __int64 v188; // rcx
  unsigned __int64 v189; // rax
  unsigned __int64 v190; // rax
  __int64 v191; // rax
  __int64 v192; // rdx
  __int64 v193; // rax
  __int64 v194; // r12
  signed __int64 v195; // rdx
  __int64 v196; // rbx
  __int64 v197; // rax
  __int64 v198; // rdx
  unsigned __int64 v199; // r10
  signed __int64 v200; // rax
  int v201; // r9d
  __int64 v202; // r8
  __int64 v203; // rcx
  unsigned __int64 v204; // r8
  __int64 v205; // rdx
  __int64 v206; // rbx
  __int64 v207; // rax
  __int64 v208; // rdx
  unsigned __int64 v209; // r10
  signed __int64 v210; // rax
  int v211; // r9d
  __int64 v212; // r8
  __int64 v213; // rcx
  __int64 v214; // rdx
  __int64 v215; // r8
  bool v216; // bl
  __int64 v217; // rdx
  __int64 v218; // r8
  __int64 *v219; // rdi
  __int64 v220; // rax
  __int64 v221; // rcx
  KSPIN_LOCK *v222; // rax
  int v223; // eax
  int v224; // eax
  int v225; // eax
  unsigned __int8 v226; // al
  int v227; // eax
  int v228; // ecx
  unsigned __int8 CurrentIrql; // di
  __int64 v230; // r8
  unsigned __int8 v231; // al
  struct _KPRCB *v232; // r9
  __int64 v233; // r8
  int v234; // eax
  unsigned int i; // r9d
  __int64 v236; // r10
  __int64 v237; // rdx
  unsigned int v238; // r13d
  __int64 v239; // rdx
  __int64 v240; // r8
  __int64 v241; // rcx
  int v242; // r10d
  int v243; // ecx
  int v244; // r9d
  __int64 v245; // rdx
  __int64 v246; // rax
  unsigned __int64 v247; // rdx
  __int64 v248; // r8
  __int64 v249; // rcx
  unsigned __int64 v250; // rdx
  unsigned int v251; // r12d
  __int64 v252; // rdx
  __int64 v253; // r8
  __int64 v254; // r13
  unsigned __int32 v255; // eax
  unsigned __int32 v256; // r9d
  signed __int32 v257; // ecx
  signed __int32 v258[8]; // [rsp+0h] [rbp-498h] BYREF
  ULONG_PTR BugCheckParameter4a; // [rsp+20h] [rbp-478h]
  __int64 v260; // [rsp+28h] [rbp-470h]
  __int64 v261; // [rsp+30h] [rbp-468h]
  unsigned __int8 v262; // [rsp+40h] [rbp-458h]
  char v263; // [rsp+41h] [rbp-457h]
  unsigned int v264; // [rsp+44h] [rbp-454h]
  char v265; // [rsp+48h] [rbp-450h]
  unsigned __int8 v266[3]; // [rsp+49h] [rbp-44Fh] BYREF
  int v267; // [rsp+4Ch] [rbp-44Ch]
  char v268; // [rsp+50h] [rbp-448h]
  char v269; // [rsp+51h] [rbp-447h]
  char v270; // [rsp+52h] [rbp-446h]
  int v271; // [rsp+54h] [rbp-444h]
  unsigned int v272; // [rsp+58h] [rbp-440h]
  unsigned int v273; // [rsp+5Ch] [rbp-43Ch]
  int v274; // [rsp+60h] [rbp-438h]
  int v275; // [rsp+68h] [rbp-430h] BYREF
  int v276; // [rsp+6Ch] [rbp-42Ch] BYREF
  int v277; // [rsp+70h] [rbp-428h]
  int v278; // [rsp+74h] [rbp-424h]
  __int64 v279; // [rsp+78h] [rbp-420h]
  unsigned __int64 v280; // [rsp+80h] [rbp-418h]
  int v281; // [rsp+88h] [rbp-410h] BYREF
  unsigned __int64 v282; // [rsp+90h] [rbp-408h] BYREF
  __int64 v283; // [rsp+98h] [rbp-400h]
  __int64 v284; // [rsp+A0h] [rbp-3F8h]
  signed __int64 v285; // [rsp+A8h] [rbp-3F0h]
  __int64 v286; // [rsp+B0h] [rbp-3E8h]
  __int64 v287; // [rsp+B8h] [rbp-3E0h]
  unsigned __int16 v288; // [rsp+C0h] [rbp-3D8h]
  int v289; // [rsp+C2h] [rbp-3D6h]
  __int16 v290; // [rsp+C6h] [rbp-3D2h]
  int v291; // [rsp+C8h] [rbp-3D0h]
  ULONG_PTR BugCheckParameter2; // [rsp+D0h] [rbp-3C8h]
  ULONG_PTR v293; // [rsp+D8h] [rbp-3C0h]
  _QWORD v294[2]; // [rsp+E0h] [rbp-3B8h] BYREF
  __int128 v295; // [rsp+F0h] [rbp-3A8h] BYREF
  __int64 v296; // [rsp+100h] [rbp-398h]
  __int128 v297; // [rsp+108h] [rbp-390h] BYREF
  __int128 v298; // [rsp+118h] [rbp-380h]
  __int128 v299; // [rsp+128h] [rbp-370h]
  __int128 v300; // [rsp+138h] [rbp-360h] BYREF
  _QWORD v301[2]; // [rsp+148h] [rbp-350h] BYREF
  _QWORD v302[3]; // [rsp+158h] [rbp-340h] BYREF
  _OWORD v303[8]; // [rsp+170h] [rbp-328h] BYREF
  __int64 v304; // [rsp+1F0h] [rbp-2A8h]
  _QWORD v305[34]; // [rsp+200h] [rbp-298h] BYREF
  _DWORD v306[68]; // [rsp+310h] [rbp-188h] BYREF
  __int64 v307; // [rsp+420h] [rbp-78h] BYREF
  int v308; // [rsp+428h] [rbp-70h]
  int v309; // [rsp+42Ch] [rbp-6Ch]
  unsigned int v310; // [rsp+490h] [rbp-8h]
  void *retaddr; // [rsp+498h] [rbp+0h]

  v8 = *(_QWORD *)(BugCheckParameter4 + 33600);
  v9 = BugCheckParameter4 + 33672;
  v304 = 0LL;
  v263 = 0;
  v10 = 0;
  v268 = 0;
  v11 = BugCheckParameter4;
  LOBYTE(v274) = 0;
  LOBYTE(v277) = 0;
  v269 = 0;
  v265 = 0;
  v271 = -1;
  v281 = -1;
  v284 = *(_QWORD *)(v8 + 680);
  BugCheckParameter2 = (unsigned int)a2;
  memset(v303, 0, sizeof(v303));
  v282 = a4;
  v264 = a3;
  v273 = a2;
  v293 = BugCheckParameter4;
  v280 = 0LL;
  v278 = 0;
  v275 = 7;
  v279 = v8 + 344LL * (unsigned int)a2;
  v270 = 0;
  v267 = 0;
  if ( !a8 || *(_BYTE *)(v8 + 731) || *(_BYTE *)(v8 + 344LL * (unsigned int)a2 + 1445) )
  {
    v262 = 0;
    v266[0] = 3;
  }
  else
  {
    v262 = 1;
    v266[0] = 4;
  }
  v272 = 3;
  if ( !*(_BYTE *)v8 )
  {
    if ( a8 )
    {
      LOBYTE(a2) = 1;
      sub_1405C84DC(BugCheckParameter4 + 33672, a2);
    }
    v102 = (unsigned __int16 *)(v8 + 336);
    *(_QWORD *)(v8 + 336) = 2097153LL;
    memset((void *)(v8 + 344), 0, 0x100uLL);
    v103 = *(_DWORD *)(v8 + 740);
    v104 = *(_QWORD *)(v8 + 744);
    v296 = 0LL;
    v294[1] = &v295;
    v105 = 0;
    v294[0] = 1LL;
    v295 = 0LL;
    LOBYTE(v295) = 1;
    BYTE2(v295) = 1;
    if ( v103 )
    {
      v144 = (_BYTE *)(v104 + 4);
      do
      {
        if ( *v144 != 0xFF )
        {
          v145 = *((unsigned int *)v144 - 1);
          DWORD1(v295) = (unsigned __int8)*v144;
          v146 = sub_140348800(v145);
          v267 = sub_1405C8D78(v146, v8 + 336, v294);
          if ( v267 < 0 )
          {
            v9 = v11 + 33672;
            goto LABEL_245;
          }
        }
        ++v105;
        v144 += 8;
      }
      while ( v105 < v103 );
      v9 = v11 + 33672;
    }
    v106 = *(_QWORD *)(v8 + 344);
    v297 = 0LL;
    v287 = v106;
    v298 = 0LL;
    v289 = 0;
    v290 = 0;
    v288 = 0;
    v286 = v8 + 336;
LABEL_138:
    v107 = v288;
    v291 = 0;
    v108 = v8 == -336 ? (unsigned int)v288 + 1 : *v102;
    if ( v106 )
    {
LABEL_241:
      _BitScanForward64(&v147, v106);
      v291 = v147;
      v287 = v106 & ~(1LL << v147);
      v149 = sub_140348800((unsigned int)dword_140D105E0[64 * (unsigned __int16)v107 + (unsigned __int8)v147]);
      v298 = (unsigned __int64)v149;
      v150 = *(_QWORD *)(v149 + 33600);
      *(_QWORD *)&v297 = 0LL;
      *((_QWORD *)&v297 + 1) = qword_140D06C58;
      BYTE12(v298) = 1;
      while ( 1 )
      {
        if ( (unsigned __int8)sub_14042A5E0(*(_QWORD *)(v150 + 680), v148) )
        {
          v106 = v287;
          goto LABEL_138;
        }
        if ( (*(_DWORD *)(v149 + 33672) & 0xFF000000) != 0x5000000 )
          break;
        sub_1405C85B0(&v297);
      }
      LODWORD(a4) = -1073741782;
    }
    else
    {
      while ( 1 )
      {
        LOWORD(v107) = v107 + 1;
        v288 = v107;
        if ( (unsigned __int16)v107 >= (unsigned int)v108 )
          break;
        v106 = *(_QWORD *)&v102[4 * (unsigned __int16)v107 + 4];
        v287 = v106;
        v107 = v288;
        if ( v106 )
          goto LABEL_241;
      }
      LODWORD(a4) = 0;
    }
    v267 = a4;
    if ( (a4 & 0x80000000) != 0LL )
    {
LABEL_245:
      if ( a8 )
        sub_1405C84DC(v9, 0LL);
      v272 = 1;
      goto LABEL_266;
    }
  }
  v12 = *(unsigned __int16 *)(v8 + 336);
  v13 = 0LL;
  if ( (_WORD)v12 )
  {
    while ( !*(_QWORD *)(v8 + 8LL * (unsigned __int16)v13 + 344) )
    {
      LOWORD(v13) = (_WORD)v13 + 1;
      if ( (unsigned __int16)v13 >= (unsigned __int16)v12 )
        goto LABEL_7;
    }
    *(_WORD *)(v8 + 48) |= 0x20u;
  }
LABEL_7:
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0LL;
  if ( byte_140D068E1 && dword_140D050C0 && *(_DWORD *)(v11 + 34112) != 5 )
  {
    v18 = *(_QWORD *)(v11 + 33976);
    if ( v18 && *(_BYTE *)(v18 + 125) )
    {
      v16 = 1;
      _disable();
      v17 = (v310 & 0x200) != 0;
      KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v18 + 128));
    }
    if ( (*(_BYTE *)(v11 + 34120) & 0x20) == 0 )
    {
      v12 = __rdtsc();
      v13 = (KSPIN_LOCK *)(v12 - *(_QWORD *)(v11 + 34096));
      v151 = *(_QWORD *)(v11 + 34104);
      if ( (unsigned __int64)v13 < v151 && !*(_BYTE *)(v11 + 34061) )
      {
        v152 = *(_DWORD *)(v11 + 236);
        v14 = 1;
        if ( (v152 & 0x300) == 0 )
        {
          v15 = 1;
          v153 = v152 & 0xFFFFFCFF | 0x100;
LABEL_262:
          *(_DWORD *)(v11 + 236) = v153;
          sub_14045ABA8(v11);
          goto LABEL_9;
        }
        goto LABEL_9;
      }
      *(_QWORD *)(v11 + 34096) = v12;
      *(_BYTE *)(v11 + 34061) = (unsigned __int64)v13 >= 2 * v151;
    }
    *(_DWORD *)(v11 + 34112) = 5;
    sub_14023B8E8(v11, 1u, 0);
    *(_BYTE *)(v11 + 236) = 5;
  }
  v19 = *(_DWORD *)(v11 + 236);
  if ( (v19 & 0x300) != 0 )
  {
    v153 = v19 & 0xFFFFFCFF;
    goto LABEL_262;
  }
LABEL_9:
  if ( v16 )
  {
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v18 + 128));
    if ( v17 )
      _enable();
  }
  if ( !v15 )
  {
    v20 = v262;
    v21 = v273;
    v22 = v279;
    *(_BYTE *)(v11 + 33656) = v262;
    *(_DWORD *)(v11 + 33660) = v21;
    if ( a8 )
    {
      LOBYTE(v21) = 2;
      *(_BYTE *)(v11 + 33657) = *(_BYTE *)(v22 + 1442) == 0;
      sub_1405C84DC(v11 + 33672, v21);
    }
    if ( v14 || *(_BYTE *)(v8 + 6) || *(_BYTE *)(v8 + 7) )
    {
      v115 = -1LL;
      v269 = 1;
      if ( *(_BYTE *)(v8 + 6) )
      {
        if ( byte_140D06889 && (v154 = *(_DWORD *)(v8 + 32), v154 > 1) )
        {
          v155 = *(_DWORD *)(344LL * (v154 - 1) + v8 + 1388);
          if ( v155 && v155 <= DesiredTime )
          {
            v156 = (unsigned int)sub_14056839C(v11, DesiredTime / v155 - 1);
          }
          else
          {
            v156 = *(_QWORD *)(v8 + 712);
            if ( v156 <= DesiredTime )
              v156 = DesiredTime;
          }
          v116 = a7;
          v115 = a7 + v156;
        }
        else
        {
          v157 = *(_QWORD *)(v8 + 712);
          v116 = a7;
          if ( v157 <= DesiredTime )
            v157 = DesiredTime;
          v115 = a7 + DesiredTime + v157;
        }
      }
      else
      {
        v116 = a7;
      }
      if ( *(_BYTE *)(v8 + 7) )
      {
        v117 = off_140C03040[534 * dword_140C232CC + 24];
        if ( v115 >= v116 + (unsigned __int64)(unsigned int)(10 * v117) )
          v115 = v116 + (unsigned int)(10 * v117);
      }
      if ( v14 && v115 >= v116 + qword_140D06D98 )
        v115 = v116 + qword_140D06D98;
      v118 = byte_140D06889 == 0;
      *(_QWORD *)(v11 + 33648) = v115;
      if ( v118 )
      {
        _interlockedbittestandset64(
          (volatile signed __int32 *)(*(_QWORD *)(v11 + 192) + 72LL),
          *(unsigned __int8 *)(v11 + 209));
      }
      else
      {
        sub_14056CF48(v11, v115, 0, 5, 0, *(_BYTE *)(v8 + 732) == 0);
        v20 = v262;
      }
    }
    v283 = 2LL;
    if ( *(_BYTE *)(v22 + 1441) || v14 )
    {
LABEL_34:
      v40 = *(_QWORD *)(v11 + 34040);
      v285 = v40;
      if ( v40 )
      {
        _disable();
        v122 = (v310 & 0x200) != 0;
        if ( (BYTE6(xmmword_140D06900) & 0x21) != 0 )
        {
          sub_14045A310(v40);
        }
        else
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v124 = *((_QWORD *)CurrentPrcb + 4375);
          if ( v124 )
          {
            if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
            {
              v166 = *(_DWORD *)(v124 + 24);
              *(_DWORD *)(v124 + 24) = v166 + 1;
              if ( v166 == -1 )
                sub_140418E4C(CurrentPrcb);
            }
          }
          if ( _interlockedbittestandset64((volatile signed __int32 *)v40, 0LL) )
          {
            v142 = *((_QWORD *)CurrentPrcb + 4375);
            if ( v142 )
            {
              if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
              {
                v167 = *(_DWORD *)(v142 + 24) - 1;
                *(_DWORD *)(v142 + 24) = v167;
                if ( !v167 )
                  sub_140418E4C(CurrentPrcb);
              }
            }
            sub_140211E70((volatile signed __int32 *)v40);
          }
        }
        v125 = *(_QWORD *)(v40 + 16);
        v126 = *(unsigned int *)(v40 + 12);
        if ( a6 > v125 )
        {
          *(_QWORD *)(v40 + 16) = a6;
          *(_QWORD *)(v40 + 24) += a6 - v125;
          *(_QWORD *)(v40 + 8 * v126 + 328) += a6 - v125;
        }
        *(_DWORD *)(v40 + 12) = v126 - 1;
        if ( (BYTE6(xmmword_140D06900) & 1) != 0 )
          sub_14056E8CC(v40, retaddr);
        else
          _InterlockedAnd64((volatile signed __int64 *)v40, 0LL);
        v127 = KeGetCurrentPrcb();
        v128 = *((_QWORD *)v127 + 4375);
        if ( v128 )
        {
          if ( *((_BYTE *)v127 + 32) <= 1u )
          {
            v168 = *(_DWORD *)(v128 + 24) - 1;
            *(_DWORD *)(v128 + 24) = v168;
            if ( !v168 )
              sub_140418E4C(v127);
          }
        }
        if ( v122 )
          _enable();
        v129 = *(KSPIN_LOCK **)(v11 + 34048);
        if ( v129 )
          sub_1403D98F0(v129);
      }
      *(_DWORD *)(v8 + 20) = v273;
      v41 = __rdtsc();
      if ( (*(_QWORD *)(v11 + 35232) & 0x8000000000LL) != 0 )
        v42 = __readmsr(0xDB2u);
      else
        v42 = 0LL;
      v43 = a6 - *(_QWORD *)(v11 + 33720);
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v11 + 33736), v43);
      if ( (*(_QWORD *)(v11 + 35232) & 0x8000000000LL) != 0 )
        *(_QWORD *)(v11 + 33808) += sub_14029394C(v43, v41 - *(_QWORD *)(v11 + 33688), v42 - *(_QWORD *)(v11 + 33800));
      v44 = *(_QWORD *)(v11 + 33688);
      *(_QWORD *)(v11 + 33720) = a6;
      if ( v41 > v44 )
        *(_QWORD *)(v11 + 33696) += v41 - v44;
      *(_QWORD *)(v11 + 33688) = v41;
      if ( (*(_QWORD *)(v11 + 35232) & 0x8000000000LL) != 0 )
        *(_QWORD *)(v11 + 33800) = v42;
      LOBYTE(a4) = 1;
      sub_1403072A0(v11, 0, 0, a4, 0LL);
      if ( qword_140C24530 )
        sub_14042A5E0(*(unsigned int *)(v11 + 36), 0LL);
      *(_QWORD *)(v11 + 33640) = a6;
      _InterlockedIncrement64((volatile signed __int64 *)(v11 + 33632));
      v46 = v264;
      if ( *(_QWORD *)(v8 + 608) )
      {
        BugCheckParameter4a = *(_QWORD *)(v8 + 1096);
        v47 = sub_14042A5E0(v284, v273);
        v267 = v47;
      }
      else
      {
        v47 = v267;
      }
      if ( v47 >= 0 )
      {
        v48 = *(_QWORD *)(v8 + 1096);
        LODWORD(v49) = *(_DWORD *)(v8 + 1084);
        v265 = 1;
        if ( v264 != -1 )
        {
          v169 = qword_140D068A8 + 448LL * v264;
          sub_1405D9844(v264);
          if ( !qword_140C54280 && v264 == dword_140C542C0 )
            _InterlockedCompareExchange64(&qword_140C54280, MEMORY[0xFFFFF78000000008], 0LL);
          if ( a5 )
          {
            *(_BYTE *)(qword_140D068A8 + 56) = 1;
            ++*(_DWORD *)(*(_QWORD *)(qword_140D068A8 + 48) + 8LL);
          }
          if ( *(_BYTE *)(v169 + 120) )
          {
            LOBYTE(v170) = 1;
            KdPowerTransitionEx(2147483652LL, v170);
            sub_140565198(4LL);
          }
          v46 = v264;
        }
        if ( (_DWORD)v49 )
        {
          if ( (WORD4(xmmword_140D06900) & 0x8000) != 0 )
          {
            v307 = v48;
            v308 = 4 * v49;
            v309 = 0;
            sub_14035EDE4((unsigned int)&v307, 1, 1073774592, 4671, 1538);
          }
          do
          {
            v49 = (unsigned int)(v49 - 1);
            v171 = qword_140D068A8 + 448LL * *(unsigned int *)(v48 + 4 * v49);
            *(_QWORD *)(v171 + 424) = a6;
            v172 = *(_DWORD *)(v171 + 416);
            if ( !*(_DWORD *)(qword_140D068A8 + 4) )
              v172 ^= ((unsigned __int16)v172 ^ (unsigned __int16)HIDWORD(KeGetPcr()[1].LockArray)) & 0xFFF;
            *(_DWORD *)(v171 + 416) = v172 & 0xF8FFFFFF | 0x4000000;
          }
          while ( (_DWORD)v49 );
        }
        if ( v46 != -1 )
          *(_WORD *)(v8 + 48) |= 0x10u;
        v50 = *(_WORD *)(v8 + 48);
        v51 = *(_QWORD *)(v8 + 704);
        v52 = *(_BYTE *)(v8 + 733);
        v300 = 0LL;
        if ( (WORD4(xmmword_140D06900) & 0x8000) != 0 )
        {
          LODWORD(v300) = v273;
          WORD3(v300) = v52;
          *((_QWORD *)&v300 + 1) = v51;
          v301[0] = &v300;
          WORD2(v300) = v50;
          v301[1] = 16LL;
          sub_14035EDE4((unsigned int)v301, 1, 1073774592, 4665, 1538);
        }
        if ( a8 )
          sub_1405C84DC(v11 + 33672, v266[0]);
        if ( v268 )
        {
          v263 = 0;
          if ( *(_BYTE *)(v279 + 1440) >= 2u && (dword_140D0689C & 4) == 0 )
          {
            v53 = byte_140C0B230;
            v299 = 0LL;
            if ( byte_140C0B230 == -1 )
            {
              _RAX = 1LL;
              __asm { cpuid }
              v53 = 0;
              *(_QWORD *)&v299 = __PAIR64__(_RBX, _RAX);
              *((_QWORD *)&v299 + 1) = __PAIR64__(_RDX, _RCX);
              if ( (int)_RCX < 0 )
              {
                _RAX = 1073741825LL;
                __asm { cpuid }
                *(_QWORD *)&v299 = __PAIR64__(_RBX, _RAX);
                v53 = (_DWORD)_RAX == 1986945624;
                *((_QWORD *)&v299 + 1) = __PAIR64__(_RDX, _RCX);
              }
              byte_140C0B230 = v53;
            }
            if ( !v53 )
            {
              v54 = KeGetCurrentPrcb();
              if ( *((_BYTE *)v54 + 141) == 1 )
              {
                v263 = 0;
              }
              else
              {
                v55 = *((unsigned int *)v54 + 9);
                *((_BYTE *)v54 + 33114) = 1;
                LODWORD(v55) = dword_140D0E5E0[v55];
                v56 = v55 & 0x3F;
                v57 = (unsigned int)v55 >> 6;
                if ( (unsigned __int16)word_140C2AF62 > (unsigned int)v57 )
                  _InterlockedOr64((volatile signed __int64 *)&byte_140C2AF60[8 * v57 + 8], 1LL << v56);
                if ( !*((_BYTE *)v54 + 33114) )
                {
                  KeInterlockedClearProcessorAffinityEx(byte_140C2AF60, *((unsigned int *)v54 + 9), v56);
                  if ( byte_140D0688A )
                  {
                    v186 = __readcr3();
                    __writecr3(v186);
                    v187 = *((_QWORD *)KeGetCurrentThread() + 23);
                    if ( !*(_BYTE *)(v187 + 912) )
                      sub_140420AD0(v187, v183, v184, v185);
                  }
                  else
                  {
                    v188 = __readcr4();
                    if ( (v188 & 0x20080) != 0 )
                    {
                      __writecr4(v188 ^ 0x80);
                      __writecr4(v188);
                    }
                    else
                    {
                      v189 = __readcr3();
                      __writecr3(v189);
                    }
                  }
                }
                v263 = *((_BYTE *)v54 + 33114);
              }
            }
          }
        }
        if ( (*(_BYTE *)(v11 + 1762) & 1) != 0 && (v99 = *(_WORD *)(v11 + 1764)) != 0 )
        {
          *(_WORD *)(v11 + 1760) |= 1u;
          v58 = v99;
        }
        else
        {
          v58 = 0;
        }
        _m_prefetchw((const void *)(v11 + 1772));
        v59 = *(_WORD *)(v11 + 1772) & 4;
        if ( v59 )
        {
          if ( (*(_BYTE *)(v11 + 1760) & 1) != 0 )
          {
            v141 = *(_WORD *)(v11 + 1764);
            if ( (v141 & 3) == 0 )
            {
              v58 |= 2u;
              *(_WORD *)(v11 + 1764) = v141 | 2;
              __writemsr(0x48u, v141 | 2u);
            }
          }
          _InterlockedOr16((volatile signed __int16 *)(v11 + 1772), 2u);
          v97 = *(_QWORD *)(v11 + 11696);
          _m_prefetchw((const void *)(v97 + 1772));
          do
            v98 = *(_WORD *)(v97 + 1772);
          while ( v98 != _InterlockedCompareExchange16((volatile signed __int16 *)(v97 + 1772), v98 & 0xFFE4 | 0xA, v98) );
        }
        v60 = v273;
        v261 = *(_QWORD *)(v8 + 1096);
        LODWORD(v260) = *(_DWORD *)(v8 + 1084);
        LODWORD(BugCheckParameter4a) = v58;
        v267 = sub_14042A5E0(v284, v282);
        v61 = v267;
        if ( v59 )
        {
          v45 = *(char **)(v11 + 11696);
          _m_prefetchw(v45 + 1772);
          do
            v100 = *((_WORD *)v45 + 886);
          while ( v100 != _InterlockedCompareExchange16((volatile signed __int16 *)v45 + 886, v100 & 0xFFF5 | 2, v100) );
          if ( (*(_WORD *)(v11 + 1772) & 0x10) == 0 )
          {
            v101 = *(_WORD *)(v11 + 1764);
            if ( (v101 & 2) != 0 )
            {
              *(_WORD *)(v11 + 1764) = v101 & 0xFFFD;
              v45 = 0LL;
              __writemsr(0x48u, v101 & 0xFFFD);
            }
          }
        }
        *(_WORD *)(v11 + 1760) &= ~1u;
        if ( v263 )
        {
          v109 = *(_BYTE *)(v11 + 33114);
          v263 = 0;
          if ( v109 )
          {
            v110 = KeGetCurrentPrcb();
            v111 = *((unsigned int *)v110 + 9);
            *((_BYTE *)v110 + 33114) = 0;
            LODWORD(v111) = dword_140D0E5E0[v111];
            v112 = v111 & 0x3F;
            v113 = (unsigned int)v111 >> 6;
            if ( (unsigned __int16)word_140C2AF62 > v113 )
            {
              v45 = &byte_140C2AF60[8 * v113];
              _InterlockedAnd64((volatile signed __int64 *)v45 + 1, ~(1LL << v112));
            }
            v114 = __readcr4();
            v61 = v267;
            if ( (v114 & 0x20080) != 0 )
            {
              __writecr4(v114 ^ 0x80);
              __writecr4(v114);
            }
            else
            {
              v190 = __readcr3();
              __writecr3(v190);
            }
          }
        }
        if ( *(int *)(v8 + 64) < 0 )
        {
          if ( v61 >= 0 )
            v61 = *(_DWORD *)(v8 + 64);
          v267 = v61;
        }
        v282 = 0LL;
        if ( (WORD4(xmmword_140D06900) & 0x8000) != 0 )
        {
          v282 = __PAIR64__(v61, v60);
          v302[0] = &v282;
          v302[1] = 8LL;
          sub_14035EDE4((unsigned int)v302, 1, 1073774592, 4666, 1538);
        }
      }
      v62 = qword_140C4E390;
      if ( *(_DWORD *)(qword_140C4E390 + 228) == 5 )
      {
        v63 = 10000000LL;
        if ( Address )
        {
          if ( (*(_DWORD *)(qword_140C4E390 + 224) & 0x10000) != 0 )
            v96 = *(_QWORD *)(qword_140C4E390 + 72)
                + (unsigned int)(HIDWORD(KeGetPcr()[1].LockArray) * *(_DWORD *)(qword_140C4E390 + 80));
          else
            v96 = *(_QWORD *)(qword_140C4E390 + 72);
          v69 = MEMORY[0xFFFFF780000003B8]
              + (((unsigned __int64)sub_14042A5E0(v96, v45) * (unsigned __int128)*((unsigned __int64 *)Address + 1)) >> 64);
          goto LABEL_79;
        }
        if ( *(_DWORD *)(qword_140C4E390 + 220) == 64 )
        {
          v191 = sub_140303720(qword_140C4E390);
          v193 = sub_14042A5E0(v191, v192);
          v194 = *(_QWORD *)(v62 + 208);
          v195 = v193;
        }
        else
        {
          do
          {
            v194 = *(_QWORD *)(v62 + 208);
            do
            {
              v196 = *(_QWORD *)(v62 + 200);
              v197 = sub_140303720(v62);
              v199 = sub_14042A5E0(v197, v198);
              _InterlockedOr(v258, 0);
              v200 = *(_QWORD *)(v62 + 200);
            }
            while ( v196 != v200 );
          }
          while ( v194 != *(_QWORD *)(v62 + 208) );
          v201 = *(_DWORD *)(v62 + 220);
          if ( ((v196 ^ v199) & (1LL << ((unsigned __int8)v201 - 1))) != 0 )
          {
            if ( v201 == 64 )
              v202 = -1LL;
            else
              v202 = (1LL << v201) - 1;
            v203 = 0LL;
            if ( v201 != 64 )
              v203 = 1LL << v201;
            v204 = v196 & v202;
            v195 = v199 | v196 ^ v204;
            if ( v199 < v204 )
              v195 += v203;
            _InterlockedCompareExchange64((volatile signed __int64 *)(v62 + 200), v195, v200);
          }
          else
          {
            if ( v201 == 64 )
              v205 = -1LL;
            else
              v205 = (1LL << v201) - 1;
            v195 = v199 | v196 & ~v205;
          }
        }
        v69 = sub_1403A572C(v194 + v195, *(_QWORD *)(v62 + 192), 10000000LL);
      }
      else
      {
        v63 = *(_QWORD *)(qword_140C4E390 + 192);
        if ( *(_DWORD *)(qword_140C4E390 + 220) == 64 )
        {
          v64 = sub_140303720(qword_140C4E390);
          v66 = sub_14042A5E0(v64, v65);
          v67 = *(_QWORD *)(v62 + 208);
          v68 = v66;
        }
        else
        {
          do
          {
            v67 = *(_QWORD *)(v62 + 208);
            do
            {
              v206 = *(_QWORD *)(v62 + 200);
              v207 = sub_140303720(v62);
              v209 = sub_14042A5E0(v207, v208);
              _InterlockedOr(v258, 0);
              v210 = *(_QWORD *)(v62 + 200);
            }
            while ( v206 != v210 );
          }
          while ( v67 != *(_QWORD *)(v62 + 208) );
          v211 = *(_DWORD *)(v62 + 220);
          if ( ((v206 ^ v209) & (1LL << ((unsigned __int8)v211 - 1))) != 0 )
          {
            if ( v211 == 64 )
              v212 = -1LL;
            else
              v212 = (1LL << v211) - 1;
            v213 = 0LL;
            if ( v211 != 64 )
              v213 = 1LL << v211;
            v37 = v206 & v212;
            v68 = v209 | v206 ^ v37;
            if ( v209 < v37 )
              v68 += v213;
            _InterlockedCompareExchange64((volatile signed __int64 *)(v62 + 200), v68, v210);
          }
          else
          {
            if ( v211 == 64 )
              v214 = -1LL;
            else
              v214 = (1LL << v211) - 1;
            v68 = v209 | v206 & ~v214;
          }
        }
        v69 = v67 + v68;
      }
      v40 = v285;
LABEL_79:
      v280 = v69;
      if ( v62 == qword_140C4E388 || !qword_140C4E388 )
      {
        v70 = v280;
      }
      else
      {
        v215 = *(_QWORD *)(qword_140C4E388 + 192);
        if ( *(_DWORD *)(qword_140C4E388 + 228) == 5 )
          v215 = 10000000LL;
        v70 = sub_1403A572C(v69, v63, v215);
        v280 = v70;
      }
      _InterlockedIncrement64((volatile signed __int64 *)(v11 + 33632));
      *(_QWORD *)(v11 + 33640) = 0LL;
      if ( *(_BYTE *)(v11 + 33817) )
      {
        _disable();
        v216 = (v310 & 0x200) != 0;
        KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v11 + 33680));
        v219 = (__int64 *)(v11 + 33704);
        v220 = 2LL;
        do
        {
          v221 = *v219;
          if ( *v219 && *(_BYTE *)(v221 + 34) )
          {
            sub_1405CF520(v221, v217, v218);
            v220 = v283;
          }
          ++v219;
          v283 = --v220;
        }
        while ( v220 );
        KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v11 + 33680));
        if ( v216 )
          _enable();
      }
      v71 = __rdtsc();
      v12 = (unsigned __int64)HIDWORD(v71) << 32;
      v72 = v71;
      if ( _bittest64((const signed __int64 *)(v11 + 35232), 0x27u) )
      {
        v222 = (KSPIN_LOCK *)__readmsr(0xDB2u);
        v12 = (unsigned __int64)HIDWORD(v222) << 32;
        v13 = v222;
      }
      else
      {
        v13 = 0LL;
      }
      *(_QWORD *)(v11 + 33720) = v70;
      *(_QWORD *)(v11 + 33688) = v72;
      if ( _bittest64((const signed __int64 *)(v11 + 35232), 0x27u) )
        *(_QWORD *)(v11 + 33800) = v13;
      if ( v40 )
      {
        v130 = 0LL;
        _disable();
        v131 = v310 >> 9;
        LOBYTE(v131) = (v310 & 0x200) != 0;
        v310 = v131;
        if ( (BYTE6(xmmword_140D06900) & 0x21) != 0 )
        {
          sub_14045A310(v40);
        }
        else
        {
          v132 = KeGetCurrentPrcb();
          v133 = *((_QWORD *)v132 + 4375);
          if ( v133 )
          {
            if ( *((_BYTE *)v132 + 32) <= 1u )
            {
              v223 = *(_DWORD *)(v133 + 24);
              *(_DWORD *)(v133 + 24) = v223 + 1;
              if ( v223 == -1 )
                sub_140418E4C(v132);
            }
          }
          if ( _interlockedbittestandset64((volatile signed __int32 *)v40, 0LL) )
          {
            v143 = *((_QWORD *)v132 + 4375);
            if ( v143 )
            {
              if ( *((_BYTE *)v132 + 32) <= 1u )
              {
                v224 = *(_DWORD *)(v143 + 24) - 1;
                *(_DWORD *)(v143 + 24) = v224;
                if ( !v224 )
                  sub_140418E4C(v132);
              }
            }
            sub_140211E70((volatile signed __int32 *)v40);
          }
        }
        v134 = *(_QWORD *)(v40 + 16);
        v135 = *(unsigned int *)(v40 + 12);
        if ( v70 > v134 )
        {
          *(_QWORD *)(v40 + 16) = v70;
          v130 = v70 - v134;
          *(_QWORD *)(v40 + 24) += v70 - v134;
          *(_QWORD *)(v40 + 8 * v135 + 328) += v70 - v134;
        }
        *(_DWORD *)(v40 + 12) = v135 + 1;
        if ( (BYTE6(xmmword_140D06900) & 1) != 0 )
          sub_14056E8CC(v40, retaddr);
        else
          _InterlockedAnd64((volatile signed __int64 *)v40, 0LL);
        v136 = KeGetCurrentPrcb();
        v12 = *((_QWORD *)v136 + 4375);
        if ( v12 )
        {
          if ( *((_BYTE *)v136 + 32) <= 1u )
          {
            v225 = *(_DWORD *)(v12 + 24) - 1;
            *(_DWORD *)(v12 + 24) = v225;
            if ( !v225 )
              sub_140418E4C(v136);
          }
        }
        if ( (_BYTE)v310 )
          _enable();
        if ( !(_DWORD)v135 && v130 )
        {
          v139 = 0;
          v140 = (unsigned __int64 *)&unk_140D05C40;
          while ( 1 )
          {
            if ( v130 < *v140 )
              goto LABEL_197;
            if ( v130 < v140[3] )
            {
              ++v139;
LABEL_197:
              _InterlockedExchangeAdd64((volatile signed __int64 *)(v40 + 8LL * v139 + 32), v130);
              goto LABEL_189;
            }
            if ( v130 < v140[6] )
            {
              _InterlockedExchangeAdd64((volatile signed __int64 *)(v40 + 8LL * (v139 + 2) + 32), v130);
              goto LABEL_189;
            }
            if ( v130 < v140[9] )
            {
              _InterlockedExchangeAdd64((volatile signed __int64 *)(v40 + 8LL * (v139 + 3) + 32), v130);
              goto LABEL_189;
            }
            if ( v130 < v140[12] )
            {
              _InterlockedExchangeAdd64((volatile signed __int64 *)(v40 + 8LL * (v139 + 4) + 32), v130);
              goto LABEL_189;
            }
            if ( v130 < v140[15] )
              break;
            v140 += 18;
            v139 += 6;
            if ( v139 >= 0x24 )
              goto LABEL_197;
          }
          _InterlockedExchangeAdd64((volatile signed __int64 *)(v40 + 8LL * (v139 + 5) + 32), v130);
        }
LABEL_189:
        v13 = *(KSPIN_LOCK **)(v11 + 34048);
        if ( v13 )
          sub_1403D98F0(v13);
      }
      *(_QWORD *)(v11 + 33616) = v70 - a6;
      if ( a8 )
      {
        v226 = sub_1405C84DC(v11 + 33672, 0LL);
        v73 = v267;
        if ( v267 >= 0 && v226 != 8 && v262 )
          KeBugCheckEx(0xA0u, 0x702uLL, BugCheckParameter2, v226, v11);
        *(_BYTE *)(v11 + 33657) = 0;
      }
      else
      {
        v73 = v267;
      }
      v74 = v265;
      if ( !v268 )
      {
        v75 = 3;
        goto LABEL_98;
      }
      if ( v265
        && v73 >= 0
        && (v12 = qword_140D068A8) != 0
        && *(_BYTE *)(qword_140D068A8 + 56)
        && dword_140C0C5EC != -1
        && *(_DWORD *)(448LL * (unsigned int)dword_140C0C5EC + qword_140D068A8 + 416) )
      {
        v227 = sub_14056A60C(&v275, v303);
        v228 = v275;
        v75 = 3;
        if ( v227 < 0 )
          v228 = 3;
        v275 = v228;
      }
      else
      {
        v75 = 3;
      }
      goto LABEL_94;
    }
    v23 = *(_QWORD *)(v11 + 200);
    v24 = *(_QWORD *)(v11 + 192);
    v268 = 1;
    _m_prefetchw((const void *)(v24 + 64));
    v25 = _InterlockedOr64((volatile signed __int64 *)(v24 + 64), v23);
    v26 = *(_QWORD *)(v11 + 33600);
    v27 = 0;
    v28 = v264;
    v29 = v25;
    v285 = v25;
    v278 = 0;
    if ( v20 )
    {
      v278 = 1;
    }
    else if ( v264 == -1 )
    {
      v30 = 0;
      if ( *(_WORD *)(v26 + 336) )
      {
        v31 = (unsigned __int64 *)(v26 + 344);
        v32 = *(unsigned __int16 *)(v26 + 336);
        do
        {
          v33 = *v31++;
          v34 = v33 - ((v33 >> 1) & 0x5555555555555555LL);
          v24 = v34 & 0x3333333333333333LL;
          v30 += (unsigned int)((0x101010101010101LL
                               * (((v34 & 0x3333333333333333LL)
                                 + ((v34 >> 2) & 0x3333333333333333LL)
                                 + (((v34 & 0x3333333333333333LL) + ((v34 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24;
          --v32;
        }
        while ( v32 );
        v11 = v293;
        v29 = v285;
        v27 = 0;
        v28 = v264;
      }
      if ( v30 != (_DWORD)dword_140D06884 - 1 )
        goto LABEL_25;
      v20 = v262;
      v278 = 2;
    }
    v158 = *(_DWORD *)(v26 + 12);
    if ( v158 && (v159 = v158 - 1, (*(_DWORD *)(v26 + 12) = v159) != 0)
      || (v160 = sub_140224E64(), (*(_DWORD *)(v161 + 12) = v160) == 0) )
    {
      v27 = 0;
      if ( v20 )
      {
LABEL_226:
        v35 = 0LL;
LABEL_26:
        v36 = sub_14042A5E0(v35, v24);
        v38 = *(unsigned int *)(v11 + 13144);
        v267 = v36;
        if ( (_DWORD)v38 )
        {
          v267 = -2147483631;
          goto LABEL_205;
        }
        if ( v36 < 0 )
        {
LABEL_205:
          if ( a8 )
            sub_1405C84DC(v11 + 33672, 0LL);
          v75 = 0;
          v74 = 0;
          v272 = 0;
LABEL_94:
          v76 = *(_QWORD *)(v11 + 192);
          _interlockedbittestandreset64((volatile signed __int32 *)(v76 + 64), *(unsigned __int8 *)(v11 + 209));
          if ( v263 && *(_BYTE *)(v11 + 33114) )
            sub_1403B4940(v76, v12, v37);
          if ( (_BYTE)v277 && v267 >= 0 )
            v77 = &v281;
          else
            v77 = 0LL;
          sub_140308240(v77);
          sub_14042A5E0(v79, v78);
          sub_1403078A0(v11, *(_DWORD *)(v11 + 13248), MEMORY[0xFFFFF78000000320], 0, 0);
          goto LABEL_98;
        }
        if ( *(_BYTE *)v8 != 1 )
        {
LABEL_29:
          if ( v27 )
            *(_WORD *)(v8 + 48) |= 0x200u;
          v39 = v262;
          if ( v262 )
          {
            v270 = 1;
            _InterlockedIncrement(&dword_140CE204C);
            v164 = KeGetCurrentPrcb();
            v165 = dword_140C2B1C0;
            if ( (*((_BYTE *)v164 + 34) & 1) != 0 )
            {
              sub_14042A5E0(v38, v12);
              *((_BYTE *)v164 + 34) &= ~1u;
              v39 = v262;
              *((_BYTE *)v164 + 37128) = 0;
            }
            if ( *((_DWORD *)v164 + 9) == v165 )
              ++dword_140C2B148;
            v28 = v264;
            if ( *((_BYTE *)v164 + 33) )
              *((_BYTE *)v164 + 33) = 0;
          }
          if ( *(_BYTE *)(v8 + 732) )
          {
            LOBYTE(v137) = v277;
            if ( v27 )
            {
              v137 = (unsigned __int8)v277;
              if ( !v39 )
                v137 = 1;
              v277 = v137;
            }
            v138 = v274;
            if ( a5 && v28 != -1 && dword_140C0C5EC != -1 && *(_BYTE *)v8 == 1 )
              v138 = 1;
            sub_140353FB0(a5, v138, *(_QWORD *)(v8 + 712), (unsigned __int8)v137);
          }
          else if ( byte_140D06889 && (_DWORD)dword_140C2B1C0 != *(_DWORD *)(v11 + 36) )
          {
            sub_14056C984();
          }
          goto LABEL_34;
        }
        v119 = *(_QWORD *)(v11 + 200) | v29;
        v120 = *(unsigned __int8 *)(v11 + 208);
        memset(v305, 0, 0x108uLL);
        v121 = qword_140D068A8;
        if ( !qword_140D068A8 )
        {
LABEL_163:
          v28 = v264;
          goto LABEL_29;
        }
        LODWORD(v305[0]) = 2097153;
        memset((char *)v305 + 4, 0, 0x104uLL);
        if ( (_WORD)v120 )
        {
          if ( WORD1(v305[0]) <= (unsigned __int16)v120 )
          {
LABEL_292:
            v162 = *(_QWORD *)(v8 + 1040);
            v163 = 0;
            if ( !*(_DWORD *)(v162 + 4) )
              goto LABEL_163;
            while ( *(_DWORD *)(v162 + 4LL * v163 + 8) != -1
                 || !(unsigned int)KeIsSubsetAffinityEx(
                                     v121 + 448LL * *(unsigned int *)(*(_QWORD *)(v8 + 1072) + 24LL * v163 + 4) + 128,
                                     (__int64)v305) )
            {
              if ( ++v163 >= *(_DWORD *)(v162 + 4) )
                goto LABEL_163;
            }
            v267 = -1073741802;
            goto LABEL_205;
          }
          LOWORD(v305[0]) = v120 + 1;
        }
        v305[v120 + 1] |= v119;
        goto LABEL_292;
      }
    }
    else
    {
      v27 = 1;
      *(_BYTE *)(v161 + 3) = 1;
      if ( v20 )
      {
        *(_QWORD *)(v161 + 56) = -1LL;
        goto LABEL_226;
      }
    }
LABEL_25:
    v35 = 1LL;
    goto LABEL_26;
  }
  v75 = 0;
  v267 = -1073741802;
  v272 = 0;
  if ( a8 )
  {
    sub_1405C84DC(v11 + 33672, 0LL);
LABEL_266:
    LOBYTE(v107) = 1;
    sub_14042A5E0(v107, v108);
    v74 = 0;
LABEL_208:
    v80 = 1;
    v81 = 1;
    v82 = 1;
    v83 = 1;
    goto LABEL_101;
  }
  v74 = 0;
LABEL_98:
  LOBYTE(v13) = 1;
  sub_14042A5E0(v13, v12);
  if ( v269 )
  {
    if ( byte_140D06889 )
    {
      if ( *(_BYTE *)(v279 + 1441) )
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(0xFuLL);
        if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
        {
          v230 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
          *(_DWORD *)(v230 + 20) |= (-1 << (CurrentIrql + 1)) & 0xFFFC;
          v75 = v272;
        }
        *(_BYTE *)(v11 + 37108) &= ~1u;
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            v231 = KeGetCurrentIrql();
            if ( v231 <= 0xFu && CurrentIrql <= 0xFu && v231 >= 2u )
            {
              v232 = KeGetCurrentPrcb();
              v233 = *((_QWORD *)v232 + 4375);
              v234 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
              v118 = (v234 & *(_DWORD *)(v233 + 20)) == 0;
              *(_DWORD *)(v233 + 20) &= v234;
              if ( v118 )
                sub_140418E4C(v232);
              v75 = v272;
            }
          }
        }
        __writecr8(CurrentIrql);
      }
      else
      {
        *(_BYTE *)(v11 + 37108) &= ~1u;
      }
    }
    else
    {
      _interlockedbittestandreset64(
        (volatile signed __int32 *)(*(_QWORD *)(v11 + 192) + 72LL),
        *(unsigned __int8 *)(v11 + 209));
    }
    *(_QWORD *)(v11 + 33648) = -1LL;
  }
  if ( v75 != 3 )
    goto LABEL_208;
  v80 = 0;
  v81 = 0;
  v82 = 0;
  v83 = 0;
LABEL_101:
  v84 = 0;
  v266[0] = 0;
  v276 = -1;
  if ( qword_140D068A8 )
  {
    if ( !v74 )
    {
      for ( i = 0; i < *(_DWORD *)(v8 + 1084); ++i )
      {
        v236 = *(unsigned int *)(*(_QWORD *)(v8 + 1096) + 4LL * i);
        v237 = qword_140D068A8 + 448 * v236;
        if ( (*(_DWORD *)(v237 + 416) & 0x3000000) == 0x1000000 )
          *(_DWORD *)(v237 + 416) = *(_DWORD *)(v237 + 416) & 0xFE000FFF | ((*(_DWORD *)(v237 + 416) & 0xFFF | 0x2000) << 12);
        if ( v83 )
          ++*(_DWORD *)(1008 * v236 + *(_QWORD *)(qword_140D068A8 + 48) + 24);
      }
    }
    v238 = *(_DWORD *)qword_140D068A8;
    while ( v238 )
    {
      v239 = *(unsigned int *)(v11 + 36);
      --v238;
      LOBYTE(v264) = 0;
      v279 = 448LL * v238 + qword_140D068A8 + 64;
      if ( (unsigned int)KeCheckProcessorAffinityEx(v279 + 64, v239) && (unsigned __int8)sub_1405C74C8(v279 + 352, v266) )
      {
        v240 = v279;
        v241 = v84++;
        *(_DWORD *)(*(_QWORD *)(v8 + 1096) + 4 * v241) = v238;
        if ( v84 == 1 && *(_BYTE *)(v240 + 57) )
        {
          v242 = v238;
          v271 = v238;
          if ( v265 )
          {
            v243 = v267;
            if ( v267 < 0 || v82 )
            {
              LOBYTE(v244) = v264;
            }
            else
            {
              LOBYTE(v244) = v264;
              if ( v238 == dword_140C0C5EC && *(_BYTE *)(qword_140D068A8 + 56) )
              {
                v244 = (unsigned __int8)v264;
                if ( v275 != 7 )
                  v244 = 1;
                v264 = v244;
              }
            }
            if ( *(_BYTE *)(v240 + 56) )
            {
              sub_140565198(1LL);
              LOBYTE(v245) = 1;
              KdPowerTransitionEx(2147483649LL, v245);
              v240 = v279;
              v242 = v238;
              LOBYTE(v244) = v264;
              v243 = v267;
            }
            if ( (dword_140C22278 & 0x100) != 0 && v243 >= 0 && !v81 && a5 && v238 == dword_140C0C5EC )
              KeBugCheckEx(0xA0u, 0x599uLL, v238, 0LL, 0LL);
          }
          else
          {
            LOBYTE(v244) = v264;
          }
          *(_BYTE *)(qword_140D068A8 + 56) = 0;
        }
        else
        {
          v242 = v271;
          LOBYTE(v244) = v264;
        }
        if ( !v80 )
        {
          v246 = 1008LL * v238 + *(_QWORD *)(qword_140D068A8 + 48) + 24LL;
          v247 = *(_QWORD *)(v240 + 360);
          v248 = v280;
          BugCheckParameter2 = v246;
          if ( v280 >= v247 )
          {
            v249 = v280 - v247;
            *(_QWORD *)(v246 + 32) += v280 - v247;
          }
          else
          {
            v249 = 0LL;
          }
          v283 = v249;
          if ( (_BYTE)v244 )
          {
            sub_1405DBF90(v242, v275, (unsigned int)v303, v247, v248, (__int64)&v276);
            v246 = BugCheckParameter2;
            v249 = v283;
          }
          if ( v267 < 0 && v266[0] )
          {
            ++*(_DWORD *)(v246 + 4);
          }
          else
          {
            ++*(_DWORD *)(v246 + 8);
            sub_1405C946C(v246, v249);
          }
        }
      }
    }
    if ( v265 )
      sub_14045E960(0LL, v84, *(_QWORD *)(v8 + 1096), &v276, BugCheckParameter4a, v260, v261);
  }
  v85 = v272;
  *(_DWORD *)(v8 + 1084) = v84;
  if ( v85 == 3 )
  {
    BugCheckParameter4a = *(_QWORD *)(v8 + 1096);
    sub_14042A5E0(v284, v273);
  }
  else if ( !*(_BYTE *)v8 )
  {
    sub_14042A5E0(v284, v85);
  }
  LODWORD(v86) = *(_DWORD *)(v8 + 1084);
  for ( j = *(_QWORD *)(v8 + 1096);
        (_DWORD)v86;
        *(_DWORD *)(448LL * *(unsigned int *)(j + 4 * v86) + qword_140D068A8 + 416) = 0 )
  {
    v86 = (unsigned int)(v86 - 1);
  }
  if ( v270 )
    _InterlockedDecrement(&dword_140CE204C);
  v306[0] = 2097153;
  memset(&v306[1], 0, 0x104uLL);
  LockArray_high = HIDWORD(KeGetPcr()[1].LockArray);
  v89 = (unsigned __int16 *)(v8 + 336);
  v90 = *(_QWORD *)(v8 + 344);
  v91 = 0;
  while ( 1 )
  {
    v274 = 0;
    v92 = v89 ? *v89 : v91 + 1;
    if ( !v90 )
      break;
LABEL_491:
    _BitScanForward64(&v250, v90);
    v90 &= ~(1LL << v250);
    v274 = v250;
    v251 = dword_140D105E0[64 * v91 + (unsigned __int8)v250];
    v252 = sub_140348800(v251);
    v254 = *(_QWORD *)(v252 + 33600);
    _m_prefetchw((const void *)(v252 + 33672));
    v255 = *(_DWORD *)(v252 + 33672);
    do
    {
      v256 = v255;
      v257 = v255 ^ (v255 ^ (v255 - 1)) & 0xFFFFFF;
      if ( (v257 & 0xFFFFFF) == 0 )
      {
        v253 = HIBYTE(v255);
        if ( (_DWORD)v253 == 5 )
        {
          v257 = v257 & 0xFFFFFF | 0x4000000;
        }
        else if ( (_DWORD)v253 == 7 )
        {
          v257 = v257 & 0xFFFFFF | 0x6000000;
        }
      }
      v255 = _InterlockedCompareExchange((volatile signed __int32 *)(v252 + 33672), v257, v255);
    }
    while ( v255 != v256 );
    if ( HIBYTE(v257) == 6 )
      KeAddProcessorAffinityEx((unsigned __int16 *)v306, v251);
    KeInterlockedClearProcessorAffinityEx(v254 + 72, LockArray_high, v253);
    KeRemoveProcessorAffinityEx((unsigned __int16 *)(v8 + 336), v251);
    v89 = (unsigned __int16 *)(v8 + 336);
  }
  while ( ++v91 < v92 )
  {
    v90 = *(_QWORD *)&v89[4 * v91 + 4];
    if ( v90 )
      goto LABEL_491;
  }
  v93 = v293;
  if ( LOWORD(v306[0]) )
  {
    while ( !*(_QWORD *)&v306[2 * v10 + 2] )
    {
      if ( ++v10 >= LOWORD(v306[0]) )
        goto LABEL_115;
    }
    HalRequestIpi(0, (__int64)v306);
  }
LABEL_115:
  v94 = v267;
  if ( *(_BYTE *)(v8 + 3) )
    sub_1405C7D34(v93, v267, v262, v280, v281, v278, v273, v271);
  result = v272;
  *(_DWORD *)(v8 + 68) = v272;
  *(_DWORD *)(v8 + 64) = v94;
  return result;
}
