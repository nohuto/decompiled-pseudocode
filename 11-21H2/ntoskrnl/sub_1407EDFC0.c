/*
 * XREFs of sub_1407EDFC0 @ 0x1407EDFC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14020A9C4 @ 0x14020A9C4 (sub_14020A9C4.c)
 *     IoCancelIrp @ 0x14022D160 (IoCancelIrp.c)
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     sub_1402D66A8 @ 0x1402D66A8 (sub_1402D66A8.c)
 *     sub_1402E2D20 @ 0x1402E2D20 (sub_1402E2D20.c)
 *     sub_1402F5718 @ 0x1402F5718 (sub_1402F5718.c)
 *     KeCancelTimer @ 0x140356EB0 (KeCancelTimer.c)
 *     sub_14036972C @ 0x14036972C (sub_14036972C.c)
 *     sub_1403699D0 @ 0x1403699D0 (sub_1403699D0.c)
 *     DbgPrintEx @ 0x140369B90 (DbgPrintEx.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ExfUnblockPushLock @ 0x14041AC40 (ExfUnblockPushLock.c)
 *     ZwQueryWnfStateData @ 0x14041E4C0 (ZwQueryWnfStateData.c)
 *     ZwUpdateWnfStateData @ 0x14041F2A0 (ZwUpdateWnfStateData.c)
 *     sub_1407525EC @ 0x1407525EC (sub_1407525EC.c)
 *     sub_1407EDF3C @ 0x1407EDF3C (sub_1407EDF3C.c)
 *     sub_1407EE90C @ 0x1407EE90C (sub_1407EE90C.c)
 *     sub_14085D010 @ 0x14085D010 (sub_14085D010.c)
 *     sub_140994398 @ 0x140994398 (sub_140994398.c)
 *     sub_140994C10 @ 0x140994C10 (sub_140994C10.c)
 *     sub_140994DA0 @ 0x140994DA0 (sub_140994DA0.c)
 *     sub_140994E28 @ 0x140994E28 (sub_140994E28.c)
 *     sub_140994FAC @ 0x140994FAC (sub_140994FAC.c)
 *     sub_1409952B8 @ 0x1409952B8 (sub_1409952B8.c)
 *     sub_140995414 @ 0x140995414 (sub_140995414.c)
 *     sub_140995484 @ 0x140995484 (sub_140995484.c)
 *     sub_140A47CF8 @ 0x140A47CF8 (sub_140A47CF8.c)
 *     sub_140A48330 @ 0x140A48330 (sub_140A48330.c)
 */

void sub_1407EDFC0()
{
  __int64 v0; // r13
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v2; // eax
  __int64 v3; // rdx
  int v4; // ecx
  int v5; // r15d
  __int64 *v6; // rbx
  __int64 *i; // rbx
  int v8; // r12d
  char v9; // r14
  bool v10; // di
  __int64 v11; // rax
  __int64 j; // rbx
  __int64 *v13; // rsi
  const void *v14; // r11
  char v15; // al
  __int64 v16; // rcx
  unsigned int v17; // r9d
  __int64 v18; // r8
  int v19; // r10d
  unsigned __int8 v20; // r12
  unsigned int v21; // r14d
  int v22; // ebx
  char v23; // si
  int v24; // ecx
  int v25; // ebx
  __int64 *k; // rbx
  unsigned __int8 v27; // al
  unsigned int v28; // ebx
  const CHAR *v29; // rdi
  const CHAR *v30; // r12
  const CHAR *v31; // r13
  const CHAR *v32; // rdx
  char v33; // r8
  const CHAR *v34; // rdx
  unsigned __int8 v35; // r8
  unsigned __int8 v36; // r11
  const CHAR *v37; // rdx
  char v38; // r8
  const CHAR *v39; // rdx
  char v40; // r8
  const CHAR *v41; // rdx
  char v42; // r8
  const CHAR *v43; // rdx
  char v44; // r8
  const CHAR *v45; // rdx
  const CHAR *v46; // r8
  const CHAR *v47; // rdx
  int v48; // r9d
  unsigned int v49; // r10d
  __int64 v50; // r11
  unsigned int v51; // eax
  unsigned __int64 v52; // rax
  char v53; // bl
  __int64 v54; // rcx
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 *v57; // rbx
  __int64 v58; // rsi
  __int64 **v59; // rcx
  __int64 *v60; // rbx
  int v61; // edx
  int v62; // eax
  int v63; // ecx
  int v64; // eax
  __int64 v65; // r11
  int v66; // esi
  int v67; // eax
  bool v68; // di
  int v69; // eax
  int v70; // edi
  int v71; // eax
  int v72; // eax
  unsigned int v73; // eax
  int v74; // eax
  __int64 v75; // rcx
  unsigned int v76; // esi
  __int64 *v77; // rdi
  int v78; // eax
  unsigned int v79; // ecx
  NTSTATUS updated; // edi
  int v81; // r9d
  const CHAR *v82; // rdx
  const CHAR *v83; // r9
  const CHAR *v84; // rdx
  const CHAR *v85; // r9
  unsigned __int8 v86; // r8
  const CHAR *v87; // rdx
  const CHAR *v88; // r9
  const CHAR *v89; // rdx
  char *v90; // rdx
  char v91; // r8
  unsigned __int8 v92; // r8
  unsigned __int8 v93; // r11
  char v94; // r8
  const CHAR *v95; // rdx
  char v96; // r8
  const CHAR *v97; // rdx
  char v98; // r8
  const CHAR *v99; // rdx
  char v100; // r8
  const CHAR *v101; // rdx
  const CHAR *v102; // rdx
  unsigned int v103; // r10d
  __int64 v104; // r11
  unsigned int v105; // eax
  unsigned __int64 v106; // rax
  const CHAR *v107; // rdx
  int v108; // r9d
  __int64 v109; // r11
  NTSTATUS v110; // eax
  signed __int32 v111[8]; // [rsp+8h] [rbp-100h] BYREF
  PVOID Buffer; // [rsp+28h] [rbp-E0h]
  PULONG BufferSize; // [rsp+30h] [rbp-D8h]
  __int64 CheckStamp; // [rsp+38h] [rbp-D0h]
  __int64 v115; // [rsp+40h] [rbp-C8h]
  __int64 v116; // [rsp+48h] [rbp-C0h]
  char v117; // [rsp+58h] [rbp-B0h]
  bool v118[7]; // [rsp+59h] [rbp-AFh] BYREF
  char v119[8]; // [rsp+60h] [rbp-A8h] BYREF
  bool v120; // [rsp+68h] [rbp-A0h] BYREF
  char v121; // [rsp+70h] [rbp-98h] BYREF
  char v122; // [rsp+78h] [rbp-90h] BYREF
  char v123; // [rsp+80h] [rbp-88h] BYREF
  char v124; // [rsp+88h] [rbp-80h] BYREF
  int v125; // [rsp+90h] [rbp-78h]
  int v126; // [rsp+94h] [rbp-74h]
  __int64 v127; // [rsp+98h] [rbp-70h] BYREF
  int v128; // [rsp+A0h] [rbp-68h] BYREF
  unsigned int v129; // [rsp+A4h] [rbp-64h] BYREF
  int v130; // [rsp+A8h] [rbp-60h] BYREF
  int v131; // [rsp+ACh] [rbp-5Ch] BYREF
  unsigned int v132; // [rsp+B0h] [rbp-58h] BYREF
  int v133; // [rsp+B4h] [rbp-54h] BYREF
  int v134; // [rsp+B8h] [rbp-50h] BYREF
  int v135; // [rsp+BCh] [rbp-4Ch] BYREF
  int v136; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v137; // [rsp+C4h] [rbp-44h]
  unsigned int v138; // [rsp+CCh] [rbp-3Ch]
  ULONG v139; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v140; // [rsp+D8h] [rbp-30h] BYREF
  ULONG ChangeStamp; // [rsp+E0h] [rbp-28h] BYREF
  BOOL v142; // [rsp+E4h] [rbp-24h] BYREF
  NTSTATUS v143; // [rsp+E8h] [rbp-20h] BYREF
  int v144; // [rsp+ECh] [rbp-1Ch] BYREF
  __int64 v145; // [rsp+F0h] [rbp-18h] BYREF
  __int64 v146; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v147; // [rsp+100h] [rbp-8h] BYREF
  __int64 v148; // [rsp+108h] [rbp+0h] BYREF
  __int64 v149; // [rsp+110h] [rbp+8h] BYREF
  __int64 v150; // [rsp+118h] [rbp+10h] BYREF
  __int64 v151; // [rsp+120h] [rbp+18h] BYREF
  __int128 v152; // [rsp+128h] [rbp+20h]
  __int128 v153; // [rsp+138h] [rbp+30h] BYREF
  __int128 v154; // [rsp+148h] [rbp+40h]
  _BYTE v155[24]; // [rsp+158h] [rbp+50h] BYREF
  int v156; // [rsp+170h] [rbp+68h]
  struct _EVENT_DATA_DESCRIPTOR v157; // [rsp+178h] [rbp+70h] BYREF
  int *v158; // [rsp+198h] [rbp+90h]
  __int64 v159; // [rsp+1A0h] [rbp+98h]
  char v160[16]; // [rsp+1A8h] [rbp+A0h] BYREF
  char v161[16]; // [rsp+1B8h] [rbp+B0h] BYREF
  char v162[16]; // [rsp+1C8h] [rbp+C0h] BYREF
  char v163[16]; // [rsp+1D8h] [rbp+D0h] BYREF
  char v164[16]; // [rsp+1E8h] [rbp+E0h] BYREF
  char v165[16]; // [rsp+1F8h] [rbp+F0h] BYREF
  char v166[16]; // [rsp+208h] [rbp+100h] BYREF
  char v167[16]; // [rsp+218h] [rbp+110h] BYREF
  unsigned int *v168; // [rsp+228h] [rbp+120h]
  __int64 v169; // [rsp+230h] [rbp+128h]
  int *v170; // [rsp+238h] [rbp+130h]
  __int64 v171; // [rsp+240h] [rbp+138h]
  int *v172; // [rsp+248h] [rbp+140h]
  __int64 v173; // [rsp+250h] [rbp+148h]
  int *v174; // [rsp+258h] [rbp+150h]
  __int64 v175; // [rsp+260h] [rbp+158h]
  __int64 *v176; // [rsp+268h] [rbp+160h]
  __int64 v177; // [rsp+270h] [rbp+168h]
  char *v178; // [rsp+278h] [rbp+170h]
  __int64 v179; // [rsp+280h] [rbp+178h]
  int *v180; // [rsp+288h] [rbp+180h]
  __int64 v181; // [rsp+290h] [rbp+188h]
  __int64 *v182; // [rsp+298h] [rbp+190h]
  __int64 v183; // [rsp+2A0h] [rbp+198h]
  unsigned int *v184; // [rsp+2A8h] [rbp+1A0h]
  __int64 v185; // [rsp+2B0h] [rbp+1A8h]
  int *v186; // [rsp+2B8h] [rbp+1B0h]
  __int64 v187; // [rsp+2C0h] [rbp+1B8h]
  __int64 *v188; // [rsp+2C8h] [rbp+1C0h]
  __int64 v189; // [rsp+2D0h] [rbp+1C8h]
  struct _EVENT_DATA_DESCRIPTOR v190; // [rsp+2D8h] [rbp+1D0h] BYREF
  int *v191; // [rsp+2F8h] [rbp+1F0h]
  __int64 v192; // [rsp+300h] [rbp+1F8h]
  char v193[16]; // [rsp+308h] [rbp+200h] BYREF
  char v194[16]; // [rsp+318h] [rbp+210h] BYREF
  char v195[16]; // [rsp+328h] [rbp+220h] BYREF
  char v196[16]; // [rsp+338h] [rbp+230h] BYREF
  char v197[16]; // [rsp+348h] [rbp+240h] BYREF
  char v198[16]; // [rsp+358h] [rbp+250h] BYREF
  char v199[16]; // [rsp+368h] [rbp+260h] BYREF
  char v200[16]; // [rsp+378h] [rbp+270h] BYREF
  unsigned int *v201; // [rsp+388h] [rbp+280h]
  __int64 v202; // [rsp+390h] [rbp+288h]
  int *v203; // [rsp+398h] [rbp+290h]
  __int64 v204; // [rsp+3A0h] [rbp+298h]
  char *v205; // [rsp+3A8h] [rbp+2A0h]
  __int64 v206; // [rsp+3B0h] [rbp+2A8h]
  __int64 *v207; // [rsp+3B8h] [rbp+2B0h]
  __int64 v208; // [rsp+3C0h] [rbp+2B8h]
  int *v209; // [rsp+3C8h] [rbp+2C0h]
  __int64 v210; // [rsp+3D0h] [rbp+2C8h]
  int *v211; // [rsp+3D8h] [rbp+2D0h]
  __int64 v212; // [rsp+3E0h] [rbp+2D8h]
  int *v213; // [rsp+3E8h] [rbp+2E0h]
  __int64 v214; // [rsp+3F0h] [rbp+2E8h]
  unsigned int *v215; // [rsp+3F8h] [rbp+2F0h]
  __int64 v216; // [rsp+400h] [rbp+2F8h]
  char v217[16]; // [rsp+408h] [rbp+300h] BYREF
  int *v218; // [rsp+418h] [rbp+310h]
  __int64 v219; // [rsp+420h] [rbp+318h]
  __int64 *v220; // [rsp+428h] [rbp+320h]
  __int64 v221; // [rsp+430h] [rbp+328h]
  struct _EVENT_DATA_DESCRIPTOR v222; // [rsp+438h] [rbp+330h] BYREF
  bool *v223; // [rsp+458h] [rbp+350h]
  __int64 v224; // [rsp+460h] [rbp+358h]
  NTSTATUS *v225; // [rsp+468h] [rbp+360h]
  __int64 v226; // [rsp+470h] [rbp+368h]
  int *v227; // [rsp+478h] [rbp+370h]
  __int64 v228; // [rsp+480h] [rbp+378h]
  char v229[16]; // [rsp+488h] [rbp+380h] BYREF
  char v230[16]; // [rsp+498h] [rbp+390h] BYREF
  char v231[16]; // [rsp+4A8h] [rbp+3A0h] BYREF
  char v232[16]; // [rsp+4B8h] [rbp+3B0h] BYREF
  __int64 *v233; // [rsp+4C8h] [rbp+3C0h]
  __int64 v234; // [rsp+4D0h] [rbp+3C8h]
  struct _EVENT_DATA_DESCRIPTOR v235; // [rsp+4D8h] [rbp+3D0h] BYREF
  __int64 *v236; // [rsp+4F8h] [rbp+3F0h]
  __int64 v237; // [rsp+500h] [rbp+3F8h]

  v145 = 0LL;
  v147 = 0LL;
  v0 = -1LL;
  v149 = 0LL;
  v118[0] = 0;
  v153 = 0LL;
  v154 = 0LL;
  v156 = 0;
  memset(v155, 0, sizeof(v155));
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockSharedEx((ULONG_PTR)&qword_140C222D0, 0LL);
  sub_1402D66A8((ULONG_PTR)&qword_140C229A0);
  v146 = 0LL;
  ChangeStamp = 0;
  v139 = 8;
  v2 = ZwQueryWnfStateData(&stru_1400110B0, 0LL, 0LL, &ChangeStamp, &v146, &v139);
  v4 = 1;
  if ( v2 == -1073741670 || v2 == -1073741431 )
  {
    v5 = 0;
  }
  else if ( !v2 && v139 == 8 )
  {
    v5 = (v146 != 0) + 2;
  }
  else
  {
    v5 = 1;
  }
  v6 = (__int64 *)qword_140C229D0;
  v125 = v5;
  while ( v6 != &qword_140C229D0 )
  {
    IoCancelIrp((PIRP)*(v6 - 1));
    v6 = (__int64 *)*v6;
  }
  for ( i = (__int64 *)qword_140C229D0; i != &qword_140C229D0; i = (__int64 *)*i )
    KeWaitForSingleObject(i + 2, Executive, 0, 0, 0LL);
  LOBYTE(v8) = 0;
  v117 = 0;
  while ( 1 )
  {
    v8 = (unsigned __int8)v8;
    v9 = _InterlockedExchange(&dword_140C21D80, 0x80000000);
    v10 = (v9 & 2) != 0;
    if ( (v9 & 8) != 0 )
      v8 = 1;
    v126 = v8;
    if ( (v9 & 0x10) != 0 )
    {
      sub_140A48330(v4);
      LOBYTE(v54) = 0x80;
      sub_14085D010(v54);
      sub_140A47CF8(v56, v55);
    }
    if ( (v9 & 0x40) != 0 )
    {
      sub_1402D66A8((ULONG_PTR)&xmmword_140C22B48);
      v119[0] = byte_140C22B44;
      ZwUpdateWnfStateData(&stru_1400148B8, v119, 1u, 0LL, 0LL, 0, 0);
      sub_1402935D0((ULONG_PTR)&xmmword_140C22B48);
    }
    v11 = qword_140C229D0;
    if ( (__int64 *)qword_140C229D0 != &qword_140C229D0 )
    {
      do
      {
        v57 = *(__int64 **)v11;
        v58 = v11 - 64;
        if ( *(_DWORD *)(v11 - 64 + 104) == 2 )
        {
          if ( v57[1] != v11 || (v59 = *(__int64 ***)(v11 + 8), *v59 != (__int64 *)v11) )
            __fastfail(3u);
          *v59 = v57;
          v57[1] = (__int64)v59;
          *(_QWORD *)v11 = 0LL;
          --dword_140C229B4;
          ++dword_140C22A18;
          byte_140C229B8 = 1;
          if ( (int)sub_140994FAC(v11 - 64) < 0 )
            sub_140995414(v58);
          v10 = 1;
        }
        v11 = (__int64)v57;
      }
      while ( v57 != &qword_140C229D0 );
    }
    for ( j = qword_140C229C0; (__int64 *)j != &qword_140C229C0; j = *(_QWORD *)j )
    {
      if ( *(_DWORD *)(j + 104) == 1 )
      {
        KeWaitForSingleObject((PVOID)(j + 80), Executive, 0, 0, 0LL);
        if ( (int)sub_140994C10(j) < 0 )
          sub_140995414(j);
        else
          v10 = 1;
      }
    }
    v13 = (__int64 *)qword_140C229D0;
    if ( (__int64 *)qword_140C229D0 != &qword_140C229D0 )
    {
      do
      {
        v60 = v13 - 8;
        LOBYTE(v3) = 1;
        v152 = *(_OWORD *)((char *)v13 + 84);
        if ( (int)sub_140994E28(v13 - 8, v3) >= 0 )
        {
          sub_140994398(v13 - 8);
          v61 = *((_DWORD *)v60 + 37);
          if ( (((unsigned __int8)v152 ^ *((_BYTE *)v60 + 148)) & 7) != 0 )
          {
            v117 = 1;
          }
          else if ( DWORD1(v152) != *((_DWORD *)v60 + 38) || HIDWORD(v152) != *((_DWORD *)v60 + 40) )
          {
            LOBYTE(v126) = 1;
          }
          v62 = -1;
          if ( (v61 & 2) != 0 )
          {
            v62 = sub_140994DA0(v13 - 8, 0LL);
            v61 = *((_DWORD *)v60 + 37);
          }
          v63 = 0;
          *((_DWORD *)v60 + 41) = v62;
          if ( v62 != -1 )
            v63 = v62;
          v64 = *((_DWORD *)v60 + 40);
          LODWORD(v116) = v63;
          LODWORD(v115) = v64;
          LODWORD(CheckStamp) = *((_DWORD *)v60 + 39);
          LODWORD(BufferSize) = *((_DWORD *)v60 + 38);
          LODWORD(Buffer) = v61;
          DbgPrintEx(
            0x92u,
            3u,
            "\n"
            "Battery Status [%p]\n"
            "|-- PowerState = 0x%08x\n"
            "|-- Capacity   = %u\n"
            "|-- Voltage    = %u\n"
            "|-- Rate       = %d\n"
            "|-- Est Time   = %u\n",
            v13 - 8,
            Buffer,
            BufferSize,
            CheckStamp,
            v115,
            v116);
        }
        else
        {
          *((_DWORD *)v60 + 26) = 2;
          sub_14036972C(1u);
        }
        v13 = (__int64 *)*v13;
      }
      while ( v13 != &qword_140C229D0 );
      v5 = v125;
    }
    v14 = 0LL;
    if ( v10 )
    {
      sub_1409952B8();
      v15 = 1;
      v14 = 0LL;
      v117 = 1;
      qword_140D048A0 = 0LL;
    }
    else
    {
      v15 = v117;
    }
    if ( (v9 & 4) != 0 || v15 )
    {
      if ( dword_140CF7080 )
      {
        qword_140C095E8 = -1LL;
        KeCancelTimer(&stru_140C21DE0);
      }
      else
      {
        qword_140C095E8 = MEMORY[0xFFFFF78000000008] + 300000000LL;
        sub_1402E2D20((unsigned __int64)&stru_140C21DE0, -300000000LL, 0, 0, (__int64)&dword_140C21DA0);
      }
      v14 = 0LL;
    }
    v16 = 0xFFFFFFFFLL;
    v145 = -1LL;
    v136 = 0;
    v17 = 0x80000000;
    v138 = 0x80000000;
    v18 = 0xFFFFFFFFLL;
    v137 = -1LL;
    v19 = -1;
    v20 = 0;
    v21 = -1;
    if ( !dword_140C229B4 )
    {
      LOBYTE(v22) = 1;
      v136 = 1;
      if ( v5 == 3 && (unsigned __int64)sub_1402F5718() >= 0x11E1A300 )
      {
        v5 = 1;
        v125 = 1;
      }
      goto LABEL_27;
    }
    v65 = qword_140C229D0;
    v22 = v136;
    if ( (__int64 *)qword_140C229D0 != &qword_140C229D0 )
    {
      do
      {
        v3 = *(unsigned int *)(v65 + 84);
        v66 = *(_DWORD *)(v65 + 84) & 0x67 | 8;
        v67 = *(_DWORD *)(v65 + 84);
        if ( (v67 & 0xA) != 0xA )
          v66 = *(_DWORD *)(v65 + 84) & 0x67;
        v68 = (v67 & 0x11) == 17;
        v69 = *(_DWORD *)(v65 + 84) & 0x10;
        v70 = 16 * ((v136 & 0x10) == 0 && v68);
        if ( (v3 & 1) != 0 )
          v71 = v69 != 0 ? 2 : 8;
        else
          v71 = v69 != 0 ? 1 : 4;
        v20 |= v71;
        v72 = *(_DWORD *)(v65 + 88);
        v22 = v66 | v70 ^ v22;
        v136 = v22;
        if ( v72 != -1 )
        {
          if ( v19 == -1 )
            v19 = 0;
          v19 += v72;
          LODWORD(v137) = v19;
        }
        v73 = *(_DWORD *)(v65 + 92);
        if ( v73 != -1 )
        {
          if ( (_DWORD)v18 == -1 )
            v18 = 0LL;
          if ( v73 > (unsigned int)v18 )
            v18 = v73;
          HIDWORD(v137) = v18;
        }
        v74 = *(_DWORD *)(v65 + 96);
        v16 = 0x80000000LL;
        if ( v74 != 0x80000000 )
        {
          if ( v17 == 0x80000000 )
            v17 = 0;
          v17 += v74;
          v138 = v17;
        }
        v65 = *(_QWORD *)v65;
      }
      while ( (__int64 *)v65 != &qword_140C229D0 );
      v5 = v125;
      v0 = -1LL;
    }
    if ( (v22 & 2) != 0 )
    {
      v22 &= ~4u;
      v136 = v22;
    }
    if ( (v22 & 1) != 0 )
    {
      if ( (v22 & 4) != 0 )
        v145 = sub_140995484(v16, v3, v18);
      goto LABEL_147;
    }
    v75 = qword_140C229D0;
    v14 = 0LL;
    v76 = 0;
    if ( (__int64 *)qword_140C229D0 != &qword_140C229D0 )
    {
      do
      {
        v18 = *(unsigned int *)(v75 + 100);
        if ( (unsigned int)(v18 - 1) <= 0xFFFFFFFD )
          v76 -= 3600 * *(_DWORD *)(v75 + 88) / (unsigned int)v18;
        v75 = *(_QWORD *)v75;
      }
      while ( (__int64 *)v75 != &qword_140C229D0 );
      if ( v76 )
      {
        v77 = (__int64 *)qword_140C229D0;
        do
        {
          v78 = sub_140994DA0(v77 - 8, v76);
          if ( v78 != -1 )
          {
            v79 = 0;
            if ( v21 != -1 )
              v79 = v21;
            v21 = v78 + v79;
          }
          v77 = (__int64 *)*v77;
        }
        while ( v77 != &qword_140C229D0 );
        v5 = v125;
        v0 = -1LL;
LABEL_147:
        v14 = 0LL;
      }
    }
LABEL_27:
    v23 = v136 & 1;
    if ( v5 == 2 && !v23 || v5 == 3 && v23 )
    {
      v5 = 1;
      v125 = 1;
    }
    v24 = v22 & 0x10;
    if ( (xmmword_140C229E0 & 0x10) != v24 )
    {
      v118[0] = v24 != 0;
      v142 = v24 != 0;
      updated = ZwUpdateWnfStateData(&stru_140037880, v118, 1u, 0LL, v14, (WNF_CHANGE_STAMP)v14, (LOGICAL)v14);
      sub_1407525EC(&stru_14003C148, 4u, &v142);
      if ( (unsigned int)dword_140C03A00 > 5 )
      {
        if ( sub_1402A2000((__int64)&dword_140C03A00, 0x400000000000LL) )
        {
          v223 = &v120;
          v82 = "DC + BCL";
          v143 = updated;
          v225 = &v143;
          v144 = v81;
          v120 = v118[0];
          v227 = &v144;
          v224 = 1LL;
          if ( (v20 & 1) == 0 )
            v82 = (const CHAR *)qword_14086D650;
          v226 = 4LL;
          v228 = 4LL;
          sub_1403699D0((__int64)v229, v82);
          v84 = "AC + BCL";
          if ( (v20 & 2) == 0 )
            v84 = v83;
          sub_1403699D0((__int64)v230, v84);
          v87 = "DC + !BCL";
          if ( (v20 & v86) == 0 )
            v87 = v85;
          sub_1403699D0((__int64)v231, v87);
          v89 = "AC + !BCL";
          if ( (v20 & 8) == 0 )
            v89 = v88;
          sub_1403699D0((__int64)v232, v89);
          v150 = 0x1000000LL;
          v233 = &v150;
          v234 = 8LL;
          sub_14020A9C4((__int64)&dword_140C03A00, (unsigned __int8 *)byte_140030E55, 0LL, 0LL, 0xAu, &v222);
        }
      }
    }
    if ( (v22 & 0x20) != 0 )
      v25 = ((v22 & 0x40) != 0) + 1;
    else
      v25 = 0;
    if ( dword_140C22B40 != v25 )
    {
      sub_1402D66A8((ULONG_PTR)&xmmword_140C22B48);
      if ( v25 )
      {
        if ( v25 != 1 )
        {
          if ( v25 == 2 && dword_140C22B40 == 1 )
          {
            v121 = 0;
            v90 = &v121;
            goto LABEL_176;
          }
LABEL_177:
          sub_1402935D0((ULONG_PTR)&xmmword_140C22B48);
          dword_140C22B40 = v25;
          goto LABEL_33;
        }
        if ( byte_140C22B44 )
          goto LABEL_177;
        v122 = 1;
        v90 = &v122;
      }
      else if ( byte_140C22B44 )
      {
        if ( dword_140C22B40 != 2 )
          goto LABEL_177;
        v124 = 1;
        v90 = &v124;
      }
      else
      {
        if ( dword_140C22B40 != 1 )
          goto LABEL_177;
        v123 = 0;
        v90 = &v123;
      }
LABEL_176:
      ZwUpdateWnfStateData(&stru_1400148B8, v90, 1u, 0LL, 0LL, 0, 0);
      goto LABEL_177;
    }
LABEL_33:
    sub_1407EE90C(&v136, v21, v18);
    _InterlockedAnd(&dword_140C21D80, 0xFFFFFFDF);
    qword_140C22B60 = MEMORY[0xFFFFF78000000008];
    _InterlockedOr(v111, 0);
    if ( qword_140C22B68 )
      ExfUnblockPushLock(&qword_140C22B68, 0LL);
    if ( _InterlockedCompareExchange(&dword_140C21D80, 0, 0x80000000) == 0x80000000 )
      break;
    LOBYTE(v8) = v126;
  }
  for ( k = (__int64 *)qword_140C229D0; k != &qword_140C229D0; k = (__int64 *)*k )
    sub_140994E28(k - 8, 0LL);
  if ( !dword_140D01428 )
    ZwUpdateWnfStateData(&stru_1400110B8, &v145, 8u, 0LL, 0LL, 0, 0);
  v27 = sub_1407EDF3C();
  v28 = v27;
  if ( !dword_140D0142C )
  {
    if ( v21 != -1 && !v27 )
      v0 = v21;
    v147 = v0;
    ZwUpdateWnfStateData(&stru_1400110C0, &v147, 8u, 0LL, 0LL, 0, 0);
  }
  v29 = "AC Power";
  v30 = "Battery Discharging";
  v31 = "Battery Charging";
  if ( (unsigned int)dword_140C03A00 > 5 && sub_1402A2000((__int64)&dword_140C03A00, 0x400000000000LL) )
  {
    v131 = dword_140C229B4;
    v159 = 4LL;
    v158 = &v131;
    v32 = "AC Power";
    if ( (xmmword_140C229E0 & 1) == 0 )
      v32 = "DC Power";
    sub_1403699D0((__int64)v160, v32);
    v34 = "Battery Discharging";
    if ( (v33 & 2) == 0 )
      v34 = (const CHAR *)qword_14086D650;
    sub_1403699D0((__int64)v161, v34);
    v37 = "Battery Charging";
    if ( (v35 & v36) == 0 )
      v37 = (const CHAR *)qword_14086D650;
    sub_1403699D0((__int64)v162, v37);
    v39 = "Battery Critical";
    if ( (v38 & 8) == 0 )
      v39 = (const CHAR *)qword_14086D650;
    sub_1403699D0((__int64)v163, v39);
    v41 = "Battery charge limiting mode";
    if ( (v40 & 0x10) == 0 )
      v41 = (const CHAR *)qword_14086D650;
    sub_1403699D0((__int64)v164, v41);
    v43 = "Battery charging state power supply present";
    if ( (v42 & 0x20) == 0 )
      v43 = (const CHAR *)qword_14086D650;
    sub_1403699D0((__int64)v165, v43);
    v45 = "Battery charging state adequate";
    if ( (v44 & 0x40) == 0 )
      v45 = (const CHAR *)qword_14086D650;
    sub_1403699D0((__int64)v166, v45);
    v47 = "Platform BCL Enabled";
    if ( (byte_140C22BB0 & 1) == 0 )
      v47 = v46;
    sub_1403699D0((__int64)v167, v47);
    if ( (_DWORD)xmmword_140C22A04 )
      v51 = (((unsigned int)xmmword_140C22A04 >> 1) + 100 * DWORD1(xmmword_140C229E0)) / (unsigned int)xmmword_140C22A04;
    else
      v51 = v49;
    v132 = v51;
    v168 = &v132;
    v169 = v50;
    if ( (_DWORD)xmmword_140C22A04 )
      v52 = 100000 * (unsigned __int64)DWORD1(xmmword_140C229E0) / (unsigned int)xmmword_140C22A04;
    else
      LODWORD(v52) = v49;
    v133 = v52;
    v135 = xmmword_140C22A04;
    v170 = &v133;
    v134 = DWORD1(xmmword_140C229E0);
    v172 = &v134;
    v174 = &v135;
    v127 = *((_QWORD *)&xmmword_140C229E0 + 1);
    v176 = &v127;
    v178 = (char *)&v127 + 4;
    v128 = dword_140D0142C;
    v180 = &v128;
    v140 = v21;
    v182 = &v140;
    v184 = &v129;
    v186 = &v130;
    v188 = &v151;
    v130 = v48;
    v171 = v50;
    v173 = v50;
    v175 = v50;
    v177 = v50;
    v179 = v50;
    v181 = v50;
    v183 = 8LL;
    v129 = v28;
    v185 = v50;
    v187 = v50;
    v151 = 0x1000000LL;
    v189 = 8LL;
    sub_14020A9C4((__int64)&dword_140C03A00, (unsigned __int8 *)&dword_140031134, 0LL, 0LL, 0x16u, &v157);
  }
  v53 = v117;
  LOBYTE(v126) = v117 | v126;
  if ( (_BYTE)v126 )
  {
    *(_DWORD *)v155 = dword_140C22A14;
    v153 = xmmword_140C229F4;
    v156 = dword_140C229B0;
    *(_OWORD *)&v155[4] = xmmword_140C229E0;
    *(_DWORD *)&v155[20] = dword_140C229B4;
    v154 = xmmword_140C22A04;
    ZwUpdateWnfStateData(&stru_140037778, &v153, 0x3Cu, 0LL, 0LL, 0, 0);
    if ( (unsigned int)dword_140C03A00 > 5 && sub_1402A2000((__int64)&dword_140C03A00, 0x400000000000LL) )
    {
      v191 = &v130;
      v130 = dword_140C229B4;
      if ( (xmmword_140C229E0 & 1) == 0 )
        v29 = "DC Power";
      v192 = 4LL;
      sub_1403699D0((__int64)v193, v29);
      if ( (v91 & 2) == 0 )
        v30 = (const CHAR *)qword_14086D650;
      sub_1403699D0((__int64)v194, v30);
      if ( (v92 & v93) == 0 )
        v31 = (const CHAR *)qword_14086D650;
      sub_1403699D0((__int64)v195, v31);
      v95 = "Battery Critical";
      if ( (v94 & 8) == 0 )
        v95 = (const CHAR *)qword_14086D650;
      sub_1403699D0((__int64)v196, v95);
      v97 = "Battery charge limiting mode";
      if ( (v96 & 0x10) == 0 )
        v97 = (const CHAR *)qword_14086D650;
      sub_1403699D0((__int64)v197, v97);
      v99 = "Battery charging state power supply present";
      if ( (v98 & 0x20) == 0 )
        v99 = (const CHAR *)qword_14086D650;
      sub_1403699D0((__int64)v198, v99);
      v101 = "Battery charging state adequate";
      if ( (v100 & 0x40) == 0 )
        v101 = (const CHAR *)qword_14086D650;
      sub_1403699D0((__int64)v199, v101);
      v102 = "Platform BCL Enabled";
      if ( (byte_140C22BB0 & 1) == 0 )
        v102 = (const CHAR *)qword_14086D650;
      sub_1403699D0((__int64)v200, v102);
      if ( (_DWORD)xmmword_140C22A04 )
        v105 = (((unsigned int)xmmword_140C22A04 >> 1) + 100 * DWORD1(xmmword_140C229E0))
             / (unsigned int)xmmword_140C22A04;
      else
        v105 = 0;
      v129 = v105;
      v201 = &v129;
      v202 = v104;
      if ( (_DWORD)xmmword_140C22A04 )
        v106 = 100000 * (unsigned __int64)DWORD1(xmmword_140C229E0) / (unsigned int)xmmword_140C22A04;
      else
        LODWORD(v106) = 0;
      v107 = "Relative Capacity Unit";
      v128 = v106;
      v204 = v104;
      v203 = &v128;
      HIDWORD(v127) = DWORD1(xmmword_140C229E0);
      v205 = (char *)&v127 + 4;
      v207 = &v127;
      v135 = DWORD2(xmmword_140C229E0);
      v209 = &v135;
      v134 = HIDWORD(xmmword_140C229E0);
      v211 = &v134;
      v133 = dword_140C229B0;
      v213 = &v133;
      v215 = &v132;
      if ( (xmmword_140C229F4 & 0x40000000) == 0 )
        v107 = "mWh Unit";
      v206 = v104;
      LODWORD(v127) = xmmword_140C22A04;
      v208 = v104;
      v210 = v104;
      v212 = v104;
      v214 = v104;
      v132 = v103;
      v216 = v104;
      sub_1403699D0((__int64)v217, v107);
      v218 = &v131;
      v131 = HIDWORD(xmmword_140C229F4);
      v220 = &v140;
      LODWORD(v140) = v108;
      v219 = v109;
      v221 = v109;
      sub_14020A9C4((__int64)&dword_140C03A00, (unsigned __int8 *)&dword_140030F04, 0LL, 0LL, 0x16u, &v190);
    }
    if ( v5 == 1 )
    {
      if ( v23 )
        v148 = 0LL;
      else
        v148 = MEMORY[0xFFFFF78000000014];
      ZwUpdateWnfStateData(&stru_1400110B0, &v148, 8u, 0LL, 0LL, 0, 0);
    }
    if ( v53 )
    {
      HIDWORD(v149) = -1;
      v110 = ZwUpdateWnfStateData(&stru_1400376F0, &v149, 8u, 0LL, 0LL, 0, 0);
      if ( (unsigned int)dword_140C03A00 > 5 )
      {
        LODWORD(v140) = v110;
        v237 = 4LL;
        v236 = &v140;
        sub_14020A9C4((__int64)&dword_140C03A00, (unsigned __int8 *)byte_140031100, 0LL, 0LL, 3u, &v235);
      }
    }
  }
  sub_1402935D0((ULONG_PTR)&qword_140C229A0);
  sub_1402935D0((ULONG_PTR)&qword_140C222D0);
}
