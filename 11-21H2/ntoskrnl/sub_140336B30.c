/*
 * XREFs of sub_140336B30 @ 0x140336B30
 * Callers:
 *     sub_140336B30 @ 0x140336B30 (sub_140336B30.c)
 *     sub_1406B79C8 @ 0x1406B79C8 (sub_1406B79C8.c)
 *     sub_1406CAF3C @ 0x1406CAF3C (sub_1406CAF3C.c)
 *     sub_1406F4FB8 @ 0x1406F4FB8 (sub_1406F4FB8.c)
 *     sub_1407074F0 @ 0x1407074F0 (sub_1407074F0.c)
 *     sub_1407614BC @ 0x1407614BC (sub_1407614BC.c)
 *     sub_1408601A8 @ 0x1408601A8 (sub_1408601A8.c)
 * Callees:
 *     sub_1402302B0 @ 0x1402302B0 (sub_1402302B0.c)
 *     sub_14023B354 @ 0x14023B354 (sub_14023B354.c)
 *     sub_14023F658 @ 0x14023F658 (sub_14023F658.c)
 *     sub_140256DF8 @ 0x140256DF8 (sub_140256DF8.c)
 *     sub_14026845C @ 0x14026845C (sub_14026845C.c)
 *     sub_14026C744 @ 0x14026C744 (sub_14026C744.c)
 *     sub_140273AF0 @ 0x140273AF0 (sub_140273AF0.c)
 *     sub_14027449C @ 0x14027449C (sub_14027449C.c)
 *     sub_140276D2C @ 0x140276D2C (sub_140276D2C.c)
 *     sub_140277C50 @ 0x140277C50 (sub_140277C50.c)
 *     sub_14027FEF8 @ 0x14027FEF8 (sub_14027FEF8.c)
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     KeDelayExecutionThread @ 0x1402B90A0 (KeDelayExecutionThread.c)
 *     sub_1402C1550 @ 0x1402C1550 (sub_1402C1550.c)
 *     sub_1402C3100 @ 0x1402C3100 (sub_1402C3100.c)
 *     sub_1402DAEB0 @ 0x1402DAEB0 (sub_1402DAEB0.c)
 *     sub_1402E20D0 @ 0x1402E20D0 (sub_1402E20D0.c)
 *     sub_1402E48A0 @ 0x1402E48A0 (sub_1402E48A0.c)
 *     sub_1402E670C @ 0x1402E670C (sub_1402E670C.c)
 *     sub_1402E76C0 @ 0x1402E76C0 (sub_1402E76C0.c)
 *     sub_1402E7704 @ 0x1402E7704 (sub_1402E7704.c)
 *     sub_1402E8990 @ 0x1402E8990 (sub_1402E8990.c)
 *     sub_1402E89B0 @ 0x1402E89B0 (sub_1402E89B0.c)
 *     sub_1402EB440 @ 0x1402EB440 (sub_1402EB440.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     sub_1402F2700 @ 0x1402F2700 (sub_1402F2700.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140313D20 @ 0x140313D20 (sub_140313D20.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_14031C860 @ 0x14031C860 (sub_14031C860.c)
 *     sub_140326870 @ 0x140326870 (sub_140326870.c)
 *     sub_1403342D0 @ 0x1403342D0 (sub_1403342D0.c)
 *     sub_140334790 @ 0x140334790 (sub_140334790.c)
 *     sub_140336B30 @ 0x140336B30 (sub_140336B30.c)
 *     sub_1403377E0 @ 0x1403377E0 (sub_1403377E0.c)
 *     sub_140337B00 @ 0x140337B00 (sub_140337B00.c)
 *     sub_140337EA0 @ 0x140337EA0 (sub_140337EA0.c)
 *     sub_140337F60 @ 0x140337F60 (sub_140337F60.c)
 *     sub_140338500 @ 0x140338500 (sub_140338500.c)
 *     sub_140339C20 @ 0x140339C20 (sub_140339C20.c)
 *     sub_14033C2A0 @ 0x14033C2A0 (sub_14033C2A0.c)
 *     sub_14033C3A0 @ 0x14033C3A0 (sub_14033C3A0.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     sub_1403941B0 @ 0x1403941B0 (sub_1403941B0.c)
 *     sub_1403B1DEC @ 0x1403B1DEC (sub_1403B1DEC.c)
 *     sub_1403B2AB0 @ 0x1403B2AB0 (sub_1403B2AB0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14054DCCC @ 0x14054DCCC (sub_14054DCCC.c)
 *     sub_1405905CC @ 0x1405905CC (sub_1405905CC.c)
 *     sub_14059A31C @ 0x14059A31C (sub_14059A31C.c)
 *     sub_1405A0B10 @ 0x1405A0B10 (sub_1405A0B10.c)
 *     sub_1405B239C @ 0x1405B239C (sub_1405B239C.c)
 *     sub_1405B7574 @ 0x1405B7574 (sub_1405B7574.c)
 *     sub_1405B7E7C @ 0x1405B7E7C (sub_1405B7E7C.c)
 *     sub_1406B85C8 @ 0x1406B85C8 (sub_1406B85C8.c)
 *     sub_1406DDAE0 @ 0x1406DDAE0 (sub_1406DDAE0.c)
 *     sub_1406DDE9C @ 0x1406DDE9C (sub_1406DDE9C.c)
 *     sub_1406F3408 @ 0x1406F3408 (sub_1406F3408.c)
 *     sub_1406F3800 @ 0x1406F3800 (sub_1406F3800.c)
 *     sub_1407BF070 @ 0x1407BF070 (sub_1407BF070.c)
 *     sub_14097F0F0 @ 0x14097F0F0 (sub_14097F0F0.c)
 *     sub_14097FD38 @ 0x14097FD38 (sub_14097FD38.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140336B30(ULONG_PTR a1, unsigned __int64 a2, unsigned int a3, unsigned int a4)
{
  char v4; // si
  __int64 v7; // r12
  __int64 v8; // rcx
  __int64 v9; // r10
  __int64 v10; // r11
  unsigned int v11; // edi
  __int64 v12; // rcx
  char v13; // al
  bool v14; // zf
  struct _KTHREAD *CurrentThread; // r9
  __int64 *v16; // rcx
  unsigned __int64 v17; // r8
  unsigned int v18; // r14d
  __int64 v19; // r10
  unsigned __int64 v20; // r13
  __int64 v21; // rdx
  __int64 v22; // r15
  unsigned __int64 v23; // r14
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rbx
  unsigned __int64 v26; // rax
  __int64 v27; // rbx
  __int64 *v28; // r13
  __int64 *v29; // r12
  __int64 result; // rax
  unsigned __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // r14
  unsigned __int64 v34; // r15
  unsigned __int64 v35; // rbx
  __int64 v36; // r15
  __int64 v37; // rdx
  int v38; // esi
  unsigned int v39; // edi
  __int64 v40; // r8
  __int64 v41; // r9
  unsigned int v42; // edi
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // r9
  unsigned __int8 v46; // bl
  unsigned int v47; // ebx
  __int64 v48; // rdx
  unsigned int v49; // r12d
  unsigned __int64 v50; // rcx
  ULONG_PTR v51; // rbx
  int v52; // eax
  __int64 v53; // r12
  unsigned __int64 v54; // rbx
  unsigned __int8 v55; // si
  __int64 v56; // rax
  __int64 v57; // rax
  unsigned __int64 v58; // r8
  __int64 v59; // rax
  unsigned __int64 v60; // rcx
  __int64 v61; // rax
  unsigned int v62; // ecx
  __int64 v63; // rbx
  _DWORD *v64; // rax
  volatile signed __int64 *v65; // rbx
  __int64 v66; // rax
  __int64 v67; // rsi
  __int64 v68; // rcx
  __int64 v69; // rcx
  __int64 v70; // rdx
  __int64 v71; // rax
  unsigned __int64 v72; // rax
  BOOL v73; // eax
  unsigned __int64 v74; // rdx
  unsigned __int64 v75; // rax
  unsigned __int8 v76; // al
  struct _KPRCB *v77; // r10
  int v78; // eax
  __int64 v79; // rdx
  __int64 v80; // rax
  int v81; // eax
  int v82; // eax
  int v83; // esi
  int v84; // ebx
  int v85; // eax
  char v86; // r9
  __int64 v87; // rcx
  __int64 v88; // rcx
  unsigned __int8 v89; // al
  struct _KPRCB *v90; // r10
  int v91; // eax
  BOOL v92; // eax
  unsigned __int8 v93; // al
  struct _KPRCB *v94; // r10
  int v95; // eax
  unsigned int v96; // eax
  int v97; // edx
  unsigned int v98; // r8d
  unsigned __int64 v99; // rax
  __int64 v100; // rax
  __int64 v101; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v104; // r9
  int v105; // eax
  volatile signed __int64 *v106; // rbx
  __int64 v107; // rcx
  unsigned __int8 v108; // al
  unsigned __int8 v109; // bl
  struct _KPRCB *v110; // r10
  int v111; // eax
  __int64 v112; // rcx
  __int64 v113; // rbx
  unsigned __int8 v114; // al
  unsigned __int8 v115; // bl
  struct _KPRCB *v116; // r9
  __int64 v117; // r8
  int v118; // eax
  char BugCheckParameter4; // [rsp+20h] [rbp-288h]
  int v120; // [rsp+28h] [rbp-280h]
  unsigned __int8 v121[4]; // [rsp+40h] [rbp-268h] BYREF
  int v122; // [rsp+44h] [rbp-264h]
  unsigned int v123; // [rsp+48h] [rbp-260h]
  __int64 v124; // [rsp+50h] [rbp-258h]
  __int64 v125; // [rsp+58h] [rbp-250h]
  struct _KTHREAD *v126; // [rsp+60h] [rbp-248h]
  __int64 *v127; // [rsp+68h] [rbp-240h]
  int v128; // [rsp+70h] [rbp-238h]
  ULONG_PTR v129; // [rsp+78h] [rbp-230h]
  PVOID P; // [rsp+80h] [rbp-228h]
  int v131; // [rsp+88h] [rbp-220h]
  unsigned int v132; // [rsp+8Ch] [rbp-21Ch]
  unsigned __int64 v133; // [rsp+90h] [rbp-218h]
  __int64 v134; // [rsp+98h] [rbp-210h]
  unsigned __int64 v135; // [rsp+A0h] [rbp-208h]
  unsigned int v136; // [rsp+A8h] [rbp-200h] BYREF
  __int64 v137; // [rsp+B0h] [rbp-1F8h]
  __int64 v138; // [rsp+B8h] [rbp-1F0h]
  unsigned __int64 v139; // [rsp+C0h] [rbp-1E8h]
  int v140; // [rsp+C8h] [rbp-1E0h] BYREF
  int v141; // [rsp+CCh] [rbp-1DCh]
  int v142; // [rsp+D0h] [rbp-1D8h]
  __int64 v143; // [rsp+D8h] [rbp-1D0h] BYREF
  __int64 v144; // [rsp+E0h] [rbp-1C8h]
  unsigned __int64 v145; // [rsp+E8h] [rbp-1C0h]
  __int64 v146; // [rsp+F0h] [rbp-1B8h]
  unsigned __int64 v147; // [rsp+F8h] [rbp-1B0h]
  PSLIST_ENTRY ListEntry; // [rsp+100h] [rbp-1A8h]
  int v149; // [rsp+108h] [rbp-1A0h] BYREF
  int v150; // [rsp+10Ch] [rbp-19Ch] BYREF
  int v151; // [rsp+110h] [rbp-198h] BYREF
  unsigned __int64 v152; // [rsp+118h] [rbp-190h]
  __int64 v153; // [rsp+120h] [rbp-188h] BYREF
  __int64 v154; // [rsp+128h] [rbp-180h]
  __int128 v155; // [rsp+130h] [rbp-178h] BYREF
  __int64 v156; // [rsp+140h] [rbp-168h] BYREF
  unsigned int v157; // [rsp+148h] [rbp-160h]
  _DWORD v158[32]; // [rsp+14Ch] [rbp-15Ch] BYREF
  unsigned __int64 v159[18]; // [rsp+1D0h] [rbp-D8h] BYREF

  v4 = a3;
  v123 = a3;
  v147 = a2;
  v129 = a1;
  v7 = 0LL;
  v132 = a4;
  v140 = 0;
  v143 = 0LL;
  v155 = 0LL;
  memset(v158, 0, sizeof(v158));
  v8 = *(_WORD *)(a1 + 60) & 0x3FF;
  v9 = *(_QWORD *)(a1 + 96);
  v10 = *(_QWORD *)a1;
  v11 = 0;
  v144 = v9;
  v12 = *(_QWORD *)(qword_140C51F48 + 8 * v8);
  v13 = *(_BYTE *)(a1 + 62) & 0xC;
  v134 = v10;
  v146 = v12;
  v128 = v4 & 8;
  if ( v13 == 4 && (v4 & 8) == 0 )
    goto LABEL_193;
  v14 = (*(_DWORD *)(a1 + 56) & 0x800) == 0;
  v128 = v4 & 8;
  if ( !v14 )
  {
    v128 = v4 & 8;
LABEL_193:
    v11 = 2;
  }
  CurrentThread = KeGetCurrentThread();
  v126 = CurrentThread;
  v145 = 0LL;
  v131 = v4 & 0x20;
  P = &v156;
  v157 = 16;
  v156 = 2LL;
  if ( (v4 & 0x20) != 0 )
  {
    LODWORD(v156) = 1;
    v11 = 0;
  }
  else if ( (v4 & 8) != 0 )
  {
    sub_140339C20(v12 + 17216, (*(_DWORD *)(a1 + 56) >> 20) & 0x7F, &v155);
    CurrentThread = v126;
    LODWORD(v156) = 0;
  }
  v16 = (__int64 *)(a1 + 128);
  v17 = *(_QWORD *)(a1 + 136);
  v18 = 0;
  v127 = (__int64 *)(a1 + 128);
  v154 = *((_QWORD *)KeGetCurrentThread() + 23);
  v133 = v17;
  v121[0] = 17;
  v136 = 0;
  v122 = 0;
  v124 = 0LL;
  ListEntry = 0LL;
  v138 = -1LL;
  if ( (dword_140D06880 & 0x2000) != 0 && (*(_DWORD *)(a1 + 92) & 0xC0000) != 0 && !*(_QWORD *)(v9 + 56) )
  {
    result = sub_14097F0F0(v9, 0LL, v17, CurrentThread);
    v122 = result;
    v18 = result;
    if ( (int)result < 0 )
      return result;
    v16 = v127;
    v17 = v133;
    CurrentThread = v126;
    v10 = v134;
  }
  v19 = 0LL;
  v142 = 0;
  if ( (v4 & 8) != 0 )
  {
    v61 = sub_14097FD38(a2, 0LL, v17, CurrentThread);
    v16 = v127;
    v145 = v61;
  }
  if ( (_DWORD)v156 != 2 )
  {
    v62 = *(_DWORD *)(v10 + 8);
    v63 = 511LL;
    if ( v62 < 0x1FF )
      v63 = v62;
    if ( (unsigned int)v63 > v157 )
    {
      v64 = sub_1402828F0(66, 8 * v63 + 16, 0x6C68694Du);
      v17 = v133;
      v19 = 0LL;
      CurrentThread = v126;
      v10 = v134;
      P = v64;
      if ( v64 )
      {
        *(_QWORD *)v64 = v156;
        v64[2] = v63;
      }
      else
      {
        P = &v156;
      }
    }
    if ( (v4 & 0x28) != 0x28 )
    {
      v11 |= 0x20u;
      --*((_WORD *)CurrentThread + 243);
      ExAcquirePushLockSharedEx((ULONG_PTR)&qword_140C55040, 0LL);
      v17 = v133;
      v19 = 0LL;
      CurrentThread = v126;
      v10 = v134;
    }
    v16 = v127;
  }
  while ( 1 )
  {
    v20 = v16[1];
    v21 = v16[2];
    v137 = v21;
    v22 = (__int64)(v20 - v17) >> 3;
    v14 = (*((_BYTE *)v16 + 34) & 2) == 0;
    v125 = v22;
    if ( !v14 )
    {
      if ( (v4 & 1) != 0 )
        goto LABEL_28;
      if ( (*(_DWORD *)(v129 + 56) & 0x8000000) != 0 )
      {
        if ( (v4 & 0x2A) != 0 )
          goto LABEL_28;
        --*((_WORD *)CurrentThread + 243);
        v65 = (volatile signed __int64 *)(v10 + 40);
        ExAcquirePushLockSharedEx(v10 + 40, 0LL);
        v28 = v127;
        if ( !v127[3] )
        {
          if ( _InterlockedCompareExchange64(v65, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared(v65);
          sub_1402AFC00((ULONG_PTR)v65);
          CurrentThread = v126;
          v14 = (*((_WORD *)v126 + 243))++ == 0xFFFF;
          if ( v14 && *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
          {
            KiCheckForKernelApcDelivery();
            goto LABEL_213;
          }
          goto LABEL_215;
        }
        v66 = sub_140256DF8(v129, v132, (__int64)v127);
        v67 = v66;
        if ( !v66 )
        {
          if ( _InterlockedCompareExchange64(v65, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared(v65);
          sub_1402AFC00((ULONG_PTR)v65);
          CurrentThread = v126;
          v14 = (*((_WORD *)v126 + 243))++ == 0xFFFF;
          if ( !v14 || *((struct _KTHREAD **)CurrentThread + 19) == (struct _KTHREAD *)((char *)CurrentThread + 152) )
          {
            v4 = v123;
          }
          else
          {
            KiCheckForKernelApcDelivery();
            v4 = v123;
LABEL_213:
            CurrentThread = v126;
          }
LABEL_215:
          v17 = v133;
          v19 = 0LL;
          v21 = v137;
          v10 = v134;
          goto LABEL_29;
        }
        ++*(_DWORD *)(v66 + 80);
        if ( _InterlockedCompareExchange64(v65, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v65);
        sub_1402AFC00((ULONG_PTR)v65);
        v68 = (__int64)v126;
        v14 = (*((_WORD *)v126 + 243))++ == 0xFFFF;
        if ( v14 && *(_QWORD *)(v68 + 152) != v68 + 152 )
          KiCheckForKernelApcDelivery();
        v20 = *(_QWORD *)(v67 + 72);
        v11 |= 8u;
        v4 = v123;
        v16 = v127;
      }
    }
    v23 = sub_1403342D0((__int64)v16, v20, v132);
    v135 = v23;
    v24 = v20 + 8LL * *((unsigned int *)v127 + 11);
    v152 = v24;
    if ( v145 )
    {
      if ( v145 >= v24 )
        goto LABEL_189;
      v69 = v145 - v20;
      v20 = v145;
      v69 >>= 3;
      v22 = (unsigned int)(v69 + v22);
      v23 += v69 << 12;
      v125 = v22;
      v135 = v23;
    }
    v19 = 0LL;
    v139 = 0LL;
    if ( v20 < v24 )
      break;
LABEL_24:
    if ( v7 )
    {
      sub_140334790(v7, v121[0], v17, (__int64)CurrentThread);
      v19 = 0LL;
      v7 = 0LL;
      v124 = 0LL;
    }
    if ( v138 == -1 )
      goto LABEL_27;
    v101 = 48 * v138 - 0x220000000000LL;
    v121[0] = sub_1402F2700(v101);
    sub_14023B354(v101);
    _InterlockedAnd64((volatile signed __int64 *)(v101 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && v121[0] <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v104 = *((_QWORD *)CurrentPrcb + 4375);
          v105 = ~(unsigned __int16)(-1LL << (v121[0] + 1));
          v14 = (v105 & *(_DWORD *)(v104 + 20)) == 0;
          *(_DWORD *)(v104 + 20) &= v105;
          if ( v14 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(v121[0]);
    v138 = -1LL;
LABEL_189:
    v19 = 0LL;
LABEL_27:
    v10 = v134;
    CurrentThread = v126;
    v17 = v133;
    v21 = v137;
    v18 = v122;
LABEL_28:
    v28 = v127;
LABEL_29:
    if ( (v11 & 8) != 0 )
    {
      --*((_WORD *)CurrentThread + 243);
      v153 = v19;
      v106 = (volatile signed __int64 *)(v10 + 40);
      ExAcquirePushLockSharedEx(v10 + 40, 0LL);
      sub_1406DDAE0(v28, v132, &v153);
      if ( _InterlockedCompareExchange64(v106, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v106);
      sub_1402AFC00((ULONG_PTR)v106);
      v107 = (__int64)v126;
      v14 = (*((_WORD *)v126 + 243))++ == 0xFFFF;
      if ( v14 && *(_QWORD *)(v107 + 152) != v107 + 152 )
        KiCheckForKernelApcDelivery();
      sub_1406DDE9C(&v153);
      v21 = v137;
      v11 &= ~8u;
      v17 = v133;
      v19 = 0LL;
      CurrentThread = v126;
      v10 = v134;
    }
    v127 = (__int64 *)v21;
    v16 = (__int64 *)v21;
    if ( !v21 )
      goto LABEL_31;
  }
  while ( 1 )
  {
    if ( (v20 & 0xFFF) != 0 )
    {
      if ( v7 )
        break;
    }
    else if ( v7 )
    {
      sub_140334790(v7, v121[0], v17, (__int64)CurrentThread);
    }
    v59 = (v11 & 2) != 0 ? sub_140273AF0(v20, (__int64)v121) : sub_140337B00(v20);
    v124 = v59;
    v7 = v59;
    if ( v59 )
      break;
    if ( (v11 & 2) != 0 )
    {
      sub_14031C860(2uLL, v20, 0, 0LL);
    }
    else
    {
      v60 = (unsigned __int64)(4096 - (unsigned int)(v20 & 0xFFF)) >> 3;
      v23 += v60 << 12;
      v22 = (unsigned int)(v60 + v22);
      v20 += 8 * v60;
LABEL_22:
      v135 = v23;
      v125 = v22;
    }
LABEL_23:
    v19 = 0LL;
    v7 = v124;
    if ( v20 >= v152 )
      goto LABEL_24;
  }
  while ( 2 )
  {
    while ( 2 )
    {
      while ( 2 )
      {
        while ( 1 )
        {
          v25 = *(_QWORD *)v20;
          v26 = *(_QWORD *)v20;
          if ( (*(_QWORD *)v20 & 1) != 0 )
            break;
          if ( (*(_QWORD *)v20 & 0xC00LL) != 0x800 )
            goto LABEL_17;
          if ( !v25 || !qword_140C50780 || (v25 & qword_140C50780) != 0 )
          {
            v26 = *(_QWORD *)v20;
            if ( qword_140C50780 && (v25 & 0x10) == 0 )
              v26 = v25 & ~qword_140C50780;
            break;
          }
        }
        v31 = (v26 >> 12) & 0xFFFFFFFFFFLL;
        if ( v31 > qword_140C50840 )
          continue;
        break;
      }
      v32 = 6 * v31;
      if ( !_bittest64((const signed __int64 *)(48 * v31 - 0x21FFFFFFFFD8LL), 0x36u) )
        continue;
      break;
    }
    v33 = 48 * v31 - 0x220000000000LL;
    v149 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v33 + 24), 0x3FuLL) )
    {
      do
        sub_1402F32E0(&v149, v32, v17, (__int64)CurrentThread);
      while ( *(__int64 *)(v33 + 24) < 0 );
    }
    if ( *(_QWORD *)v20 != v25 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v33 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      continue;
    }
    break;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(v33 + 40) >> 43) & 0x3FFLL)) + 4LL) & 0x100) != 0 )
    v33 = sub_14059A31C(v33, 0LL);
  if ( !v33 )
  {
LABEL_17:
    if ( v128 )
    {
      dword_140C4F3D0 = 121;
      sub_140334790(v7, v121[0], v17, (__int64)CurrentThread);
      v18 = -1073740023;
    }
    else
    {
      if ( (v11 & 2) == 0 )
        goto LABEL_19;
      v143 = sub_140317A10(v20);
      if ( (v143 & 0x400) != 0 || !(unsigned int)sub_1402E76C0((__int64)&v143) )
        goto LABEL_19;
      sub_140334790(v7, v121[0], v17, (__int64)CurrentThread);
      v27 = 0LL;
      v124 = 0LL;
      if ( (v4 & 2) == 0 || (unsigned int)sub_1406F3800(v144, (unsigned int)v22, 1LL) )
      {
        v96 = sub_1402E670C((__int64)v126);
        if ( v96 > 5 )
          v96 = 5;
        if ( v20 == v139 )
        {
          v98 = 4096;
        }
        else
        {
          v139 = v20;
          v98 = (unsigned int)((__int64)(v152 - v20) >> 3) << 12;
        }
        if ( (int)sub_1406B85C8(v129, v97, v98, v96, 2, v132) < 0 )
          KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&stru_1400156D0);
        v122 = 0;
        v23 = v135;
        goto LABEL_23;
      }
LABEL_20:
      if ( !v145 )
      {
        v20 += 8LL;
        v22 = (unsigned int)(v22 + 1);
        v23 = v135 + 4096;
        goto LABEL_22;
      }
      v99 = sub_14097FD38(v147, (unsigned int)++v142, v17, CurrentThread);
      v145 = v99;
      v21 = v99;
      if ( v99 )
      {
        if ( v99 < v152 )
        {
          v100 = (__int64)(v99 - v20) >> 3;
          v22 = (unsigned int)(v100 + v22);
          v23 = (v100 << 12) + v135;
          v125 = v22;
          v135 = v23;
          if ( v27 && ((v21 ^ v20) & 0xFFFFFFFFFFFFF000uLL) != 0 )
          {
            sub_140334790(v27, v121[0], v17, (__int64)CurrentThread);
            v124 = 0LL;
            v21 = v145;
          }
          v20 = v21;
          goto LABEL_23;
        }
        v7 = v124;
        v19 = 0LL;
        goto LABEL_24;
      }
      if ( v27 )
        sub_140334790(v27, v121[0], v17, (__int64)CurrentThread);
      v18 = v122;
    }
LABEL_31:
    v29 = (__int64 *)P;
    goto LABEL_32;
  }
  v34 = *(_QWORD *)v20;
  if ( v20 >= 0xFFFFF6FB7DBED000uLL
    && v20 <= 0xFFFFF6FB7DBED7F8uLL
    && (dword_140D06880 & 0xC00000) != 0
    && *(_BYTE *)(*((_QWORD *)KeGetCurrentThread() + 23) + 912LL) != 1
    && (v34 & 1) != 0
    && ((v34 & 0x20) == 0 || (v34 & 0x42) == 0) )
  {
    v70 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1928LL);
    if ( v70 )
    {
      v71 = *(_QWORD *)(v70 + 8 * ((v20 >> 3) & 0x1FF));
      if ( (v71 & 0x20) != 0 )
        v34 |= 0x20uLL;
      if ( (v71 & 0x42) != 0 )
        v34 |= 0x42uLL;
    }
  }
  v143 = v34;
  v35 = v34 & 1;
  if ( (v34 & 1) != 0 )
  {
    v34 = sub_140317A10((unsigned __int64)&v143);
  }
  else if ( qword_140C50780 && (v34 & 0x10) == 0 )
  {
    v34 &= ~qword_140C50780;
  }
  v36 = (v34 >> 12) & 0xFFFFFFFFFFLL;
  if ( (v4 & 4) != 0 )
  {
    if ( (unsigned int)sub_1403B2AB0(v33) )
    {
      sub_1405905CC();
      *(_BYTE *)(v33 + 35) &= ~0x20u;
    }
    goto LABEL_163;
  }
  if ( (v4 & 1) != 0 && ((*(_QWORD *)(v33 + 40) >> 60) & 7) == 3
    || (v17 = *(_QWORD *)(v33 + 16), (v17 & 0x400) == 0 && (v4 & 0x20) == 0 && (v11 & 2) == 0) )
  {
LABEL_163:
    _InterlockedAnd64((volatile signed __int64 *)(v33 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    goto LABEL_128;
  }
  v37 = *(unsigned __int8 *)(v33 + 35);
  if ( (v37 & 0x40) != 0 && v128 )
  {
    dword_140C4F3D0 = 122;
LABEL_244:
    _InterlockedAnd64((volatile signed __int64 *)(v33 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    sub_140334790(v7, v121[0], v17, (__int64)CurrentThread);
    v18 = -1073740023;
    goto LABEL_31;
  }
  if ( (v37 & 0x10) != 0 )
  {
    if ( v128 )
    {
      dword_140C4F3D0 = 123;
      goto LABEL_244;
    }
    goto LABEL_163;
  }
  if ( !v35 && (*(_BYTE *)(v33 + 34) & 0x20) != 0 )
  {
    memset(v159, 0, 0x88uLL);
    if ( !v131 )
    {
      if ( (v4 & 2) != 0 && (*(_DWORD *)(v129 + 56) & 2) == 0 )
      {
        LOBYTE(v17) = 17;
        sub_1402C3100(v20, v33, v17, 1);
        goto LABEL_128;
      }
      sub_14026C744(0LL, 0LL, 0, 0LL, (__int64)v159);
      v140 = 1;
      sub_14027449C(v7, 1);
      sub_14027FEF8(v159, v33, v7, v121[0], &v140);
      LODWORD(v22) = v125;
      v23 = v135;
      v124 = 0LL;
      v122 = 0;
      goto LABEL_23;
    }
    goto LABEL_163;
  }
  if ( v131 )
  {
    if ( v35 )
      goto LABEL_163;
    v72 = v17 >> 11;
    if ( (v17 & 0x400) == 0 )
      v72 = v17 >> 3;
    if ( (v72 & 1) == 0 )
      goto LABEL_163;
  }
  v38 = 8;
  v141 = 8;
  if ( !v35 )
  {
    if ( (v37 & 8) != 0 )
    {
      v38 = v37 & 7;
      v141 = v38;
    }
    if ( (sub_140326870(v33, 0) & 3) == 0 )
    {
      *(_QWORD *)(v33 + 24) &= 0xC000000000000000uLL;
      goto LABEL_74;
    }
    sub_1403941B0(v33, 0LL);
    _InterlockedAnd64((volatile signed __int64 *)(v33 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v4 = v123;
    LODWORD(v22) = v125;
    if ( (v11 & 2) != 0 )
    {
      v23 = v135;
      goto LABEL_23;
    }
LABEL_19:
    v27 = v124;
    goto LABEL_20;
  }
LABEL_74:
  if ( (v123 & 0x21) != 1
    || *(char *)(v33 + 35) < 0
    || !(unsigned int)sub_140313D20(v146, v127, *(_QWORD *)(v33 + 16), (int *)&v136)
    || (v37 = v136, v136 > 3)
    || (v73 = sub_140277C50(v33), v73 && (unsigned int)sub_1403B1DEC(v33, v37)) )
  {
    v39 = v11 & 0xFFFFFFEF;
  }
  else
  {
    v39 = v11 | 0x10;
  }
  if ( !(unsigned int)sub_140337EA0(v33, v37, v17, CurrentThread) || (unsigned int)sub_140337F60(v33, 1LL) )
    ++*(_WORD *)(v33 + 32);
  if ( v131 )
  {
    v42 = v39 & 0xFFFFFF3F | 0x40;
  }
  else
  {
    if ( (v39 & 0x100) != 0 || (dword_140D0689C & 0x200000) == 0 )
      goto LABEL_82;
    v74 = *(_QWORD *)(v33 + 16);
    v75 = v74 >> 11;
    if ( (v74 & 0x400) == 0 )
      v75 = v74 >> 3;
    if ( (v75 & 1) != 0 )
      v42 = v39 | 0x40;
    else
LABEL_82:
      v42 = v39 & 0xFFFFFFBF;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v33 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v43 = 0LL;
  v150 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
  {
    do
      sub_1402F32E0(&v150, v43, v40, v41);
    while ( *(__int64 *)(v7 + 24) < 0 );
  }
  *(_BYTE *)(v7 + 34) &= ~0x20u;
  if ( (unsigned int)sub_1403377E0(v7) )
    sub_140338500(v7, 0xAAAAAAAAAAAAAAABuLL * ((v7 + 0x220000000000LL) >> 4));
  _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v46 = v121[0];
  if ( v121[0] != 17 )
  {
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v76 = KeGetCurrentIrql();
        if ( v76 <= 0xFu && v121[0] <= 0xFu && v76 >= 2u )
        {
          v77 = KeGetCurrentPrcb();
          v45 = *((_QWORD *)v77 + 4375);
          v46 = v121[0];
          v78 = ~(unsigned __int16)(-1LL << (v121[0] + 1));
          v14 = (v78 & *(_DWORD *)(v45 + 20)) == 0;
          v44 = (unsigned int)v78 & *(_DWORD *)(v45 + 20);
          *(_DWORD *)(v45 + 20) = v44;
          if ( v14 )
            sub_140418E4C(v77);
        }
      }
    }
    __writecr8(v46);
  }
  v47 = v123;
  v48 = 0LL;
  v49 = v125;
  v124 = 0LL;
  if ( (v42 & 0x40) != 0 )
  {
    if ( (unsigned int)sub_1405B239C(v144, (unsigned int)v125, v123) )
    {
      if ( v131 )
      {
        if ( (unsigned int)sub_1405B7574(P, v36, 3LL) )
          sub_1405B7E7C(P, v79, v44, v45);
        v42 |= 0x80u;
      }
      else
      {
        sub_140336B30(v129, v147, v47 | 0x20, v132);
        v42 |= 0x100u;
      }
    }
    v48 = 0LL;
  }
  v50 = *(_QWORD *)(v33 + 40);
  if ( (v50 & 0x20000000000000LL) != 0 )
    v11 = v42 | 1;
  else
    v11 = v42 & 0xFFFFFFFE;
  if ( v131 )
  {
    v122 = 0;
    goto LABEL_280;
  }
  if ( v128 )
  {
    if ( (unsigned int)sub_1406F3800(v144, v49, 1LL) )
    {
      v29 = (__int64 *)P;
      v80 = sub_1405A0B10(v127, &v155, v36, P);
      if ( v80 == -1 )
      {
        dword_140C4F3D0 = 120;
        v121[0] = sub_1402F2700(v33);
        if ( (unsigned int)sub_1403377E0(v33) )
          sub_140338500(v33, v36);
        _InterlockedAnd64((volatile signed __int64 *)(v33 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && (v108 = KeGetCurrentIrql(), v108 <= 0xFu) )
        {
          v109 = v121[0];
          if ( v121[0] <= 0xFu && v108 >= 2u )
          {
            v110 = KeGetCurrentPrcb();
            CurrentThread = (struct _KTHREAD *)*((_QWORD *)v110 + 4375);
            v109 = v121[0];
            v21 = -1LL << (v121[0] + 1);
            v111 = ~(unsigned __int16)v21;
            v14 = (v111 & *((_DWORD *)CurrentThread + 5)) == 0;
            v17 = (unsigned int)v111 & *((_DWORD *)CurrentThread + 5);
            *((_DWORD *)CurrentThread + 5) = v17;
            if ( v14 )
              sub_140418E4C(v110);
          }
        }
        else
        {
          v109 = v121[0];
        }
        __writecr8(v109);
        v18 = -1073740023;
        goto LABEL_32;
      }
      v33 = 48 * v80 - 0x220000000000LL;
      v36 = v80;
    }
LABEL_280:
    v51 = v129;
    goto LABEL_99;
  }
  if ( (v47 & 2) != 0 )
  {
    v51 = v129;
    if ( (dword_140D06880 & 0x2000) != 0 && (*(_DWORD *)(v129 + 92) & 0xC0000) != 0 && ((v50 >> 60) & 7) == 3 )
    {
      v81 = sub_14054DCCC(*(_QWORD *)(v144 + 56), v49, v36);
      v122 = v81;
      if ( v81 < 0 )
        KeBugCheckEx(0x1Au, 0xD8A18uLL, v81, v36, v51);
      goto LABEL_99;
    }
    v52 = sub_1407BF070(v129, 0LL, v120, 65);
    v122 = v52;
    if ( !v52 )
    {
      v11 |= 4u;
      goto LABEL_99;
    }
LABEL_97:
    if ( v52 == 1 )
    {
      v48 = 0LL;
      v122 = 0;
    }
  }
  else
  {
    v14 = (v47 & 0x10) == 0;
    v51 = v129;
    if ( v14 )
    {
      v122 = sub_1406F3408(
               v129,
               v135,
               v154,
               v49,
               BugCheckParameter4,
               (*((unsigned __int16 *)v127 + 16) >> 1) & 0x1F,
               v36,
               0x4000000);
      goto LABEL_99;
    }
    if ( (dword_140D06880 & 0x2000) == 0 || (*(_DWORD *)(v129 + 92) & 0xC0000) == 0 || ((v50 >> 60) & 7) != 3 )
    {
      v52 = sub_1402DAEB0(v129, v147, v49, v36);
      v122 = v52;
      if ( !v52 )
      {
        v11 |= 4u;
        goto LABEL_99;
      }
      goto LABEL_97;
    }
    v82 = sub_14054DCCC(*(_QWORD *)(v144 + 56), v49, v36);
    v122 = v82;
    if ( v82 < 0 )
      KeBugCheckEx(0x1Au, 0xD9A18uLL, v82, v36, v51);
  }
LABEL_99:
  if ( v38 != 8 && !ListEntry && (v11 & 1) == 0 )
    ListEntry = sub_1402E48A0();
  if ( (v11 & 0x10) != 0 && v138 == -1 )
  {
    v83 = *(_DWORD *)(v51 + 56);
    v84 = *((_DWORD *)sub_1402C1550(0xAAAAAAAAAAAAAAABuLL * ((v33 + 0x220000000000LL) >> 4)) + 2);
    v85 = sub_1402E8990(v33);
    v86 = 2;
    if ( (v83 & 0x7F00000) != 0 )
      v86 = 0;
    v138 = sub_1402EB440(
             v146,
             v136,
             (v85 << byte_140C506CD) | (v84 << byte_140C506CC) | (unsigned int)v36 & dword_140C50738,
             v86,
             (_QWORD *)0xFFFFFFFFFFFFFFFFLL,
             0);
    if ( v138 == -1 )
      v11 &= ~0x10u;
  }
  v53 = 0LL;
  v54 = 0LL;
  v55 = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && v55 <= 0xFu )
  {
    v45 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    v48 = (-1LL << (v55 + 1)) & 4;
    v44 = (unsigned int)v48 | *(_DWORD *)(v45 + 20);
    *(_DWORD *)(v45 + 20) = v44;
  }
  v151 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v33 + 24), 0x3FuLL) )
  {
    do
      sub_1402F32E0(&v151, v48, v44, v45);
    while ( *(__int64 *)(v33 + 24) < 0 );
  }
  v56 = *(_QWORD *)(v33 + 24) >> 62;
  v121[0] = v55;
  if ( (v56 & 1) != 0 )
  {
    if ( (v11 & 0x10) != 0 )
      v11 &= ~0x10u;
  }
  else if ( (v11 & 0x80u) != 0 )
  {
    sub_14033C3A0(v33 + 16, 0LL);
  }
  if ( *(char *)(v33 + 35) < 0 )
    v11 &= ~0x10u;
  if ( (v123 & 0x10) != 0 || (v123 & 0x22) == 2 )
  {
    v57 = *(_QWORD *)(v33 + 16);
    v58 = v33 + 16;
    if ( (unsigned __int64)(v33 + 16) >= 0xFFFFF6FB7DBED000uLL
      && v58 <= 0xFFFFF6FB7DBED7F8uLL
      && (dword_140D06880 & 0xC00000) != 0
      && *(_BYTE *)(*((_QWORD *)KeGetCurrentThread() + 23) + 912LL) != 1
      && (v57 & 1) != 0
      && ((v57 & 0x20) == 0 || (v57 & 0x42) == 0) )
    {
      v87 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1928LL);
      if ( v87 )
      {
        v88 = *(_QWORD *)(v87 + 8 * ((v58 >> 3) & 0x1FF));
        if ( (v88 & 0x20) != 0 )
          v57 |= 0x20uLL;
        if ( (v88 & 0x42) != 0 )
          v57 |= 0x42uLL;
      }
    }
    v143 = v57;
    if ( (v57 & 0x400) == 0 )
    {
      v54 = sub_14033C2A0(v33);
      v53 = *(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(v33 + 40) >> 43) & 0x3FFLL));
    }
  }
  if ( (v11 & 0x10) != 0 && (*(_BYTE *)(v33 + 34) & 7) == 6 )
  {
    sub_14023F658(v33, v55, 0);
    if ( (*(_QWORD *)(v33 + 24) & 0x4000000000000000LL) != 0 )
      v11 &= ~0x10u;
  }
  if ( (unsigned int)sub_1403377E0(v33) )
  {
    if ( (v11 & 1) == 0
      && v141 != 8
      && (!_bittest64((const signed __int64 *)(v33 + 24), 0x3Eu) & (unsigned __int8)~(*(_BYTE *)(v33 + 34) >> 4)) != 0
      && (v11 & 0x10) == 0 )
    {
      if ( ListEntry )
        sub_140276D2C((__int64)ListEntry, v33);
      else
        sub_140338500(v33, v36);
      _InterlockedAnd64((volatile signed __int64 *)(v33 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v89 = KeGetCurrentIrql();
          if ( v89 <= 0xFu && v55 <= 0xFu && v89 >= 2u )
          {
            v90 = KeGetCurrentPrcb();
            v21 = -1LL << (v55 + 1);
            CurrentThread = (struct _KTHREAD *)*((_QWORD *)v90 + 4375);
            v91 = ~(unsigned __int16)v21;
            v14 = (v91 & *((_DWORD *)CurrentThread + 5)) == 0;
            v17 = (unsigned int)v91 & *((_DWORD *)CurrentThread + 5);
            *((_DWORD *)CurrentThread + 5) = v17;
            if ( v14 )
              sub_140418E4C(v90);
          }
        }
      }
      __writecr8(v55);
      v121[0] = 17;
      goto LABEL_119;
    }
    sub_140338500(v33, v36);
  }
  if ( (v11 & 0x10) != 0
    && (unsigned __int8)((*(_BYTE *)(v33 + 34) & 7) - 2) <= 1u
    && !*(_WORD *)(v33 + 32)
    && *(char *)(v33 + 35) >= 0 )
  {
    v92 = sub_140277C50(v33);
    sub_1402E7704(v33, 48 * v138 - 0x220000000000LL, v92, 0LL);
    *(_QWORD *)(v33 + 16) = 0LL;
    v138 = -1LL;
    sub_1402E89B0((unsigned __int64 *)(v33 + 16));
    sub_14026845C(v33, 0LL);
  }
LABEL_119:
  if ( v121[0] != 17 )
    _InterlockedAnd64((volatile signed __int64 *)(v33 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v54 )
    sub_1402E20D0(v53, v54, 1);
  if ( v121[0] != 17 )
  {
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v93 = KeGetCurrentIrql();
        if ( v93 <= 0xFu && v121[0] <= 0xFu && v93 >= 2u )
        {
          v94 = KeGetCurrentPrcb();
          CurrentThread = (struct _KTHREAD *)*((_QWORD *)v94 + 4375);
          v21 = -1LL << (v121[0] + 1);
          v95 = ~(unsigned __int16)v21;
          v14 = (v95 & *((_DWORD *)CurrentThread + 5)) == 0;
          v17 = (unsigned int)v95 & *((_DWORD *)CurrentThread + 5);
          *((_DWORD *)CurrentThread + 5) = v17;
          if ( v14 )
            sub_140418E4C(v94);
        }
      }
    }
    __writecr8(v121[0]);
    v121[0] = 17;
  }
  v18 = v122;
  if ( v122 >= 0 )
  {
    v4 = v123;
LABEL_128:
    LODWORD(v22) = v125;
    goto LABEL_19;
  }
  v29 = (__int64 *)P;
  dword_140C4F3D0 = (v122 != -1073741670) + 113;
LABEL_32:
  if ( ListEntry )
    sub_1402302B0(ListEntry);
  if ( *((_DWORD *)v29 + 1) )
    sub_1405B7E7C(v29, v21, v17, CurrentThread);
  if ( (v11 & 0x20) != 0 )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C55040, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(&qword_140C55040);
    sub_1402AFC00((ULONG_PTR)&qword_140C55040);
    v112 = (__int64)v126;
    v14 = (*((_WORD *)v126 + 243))++ == 0xFFFF;
    if ( v14 && *(_QWORD *)(v112 + 152) != v112 + 152 )
      KiCheckForKernelApcDelivery();
  }
  if ( v29 != &v156 )
    ExFreePoolWithTag(v29, 0);
  if ( v138 != -1 )
  {
    v113 = 48 * v138 - 0x220000000000LL;
    v121[0] = sub_1402F2700(v113);
    sub_14023B354(v113);
    _InterlockedAnd64((volatile signed __int64 *)(v113 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && (v114 = KeGetCurrentIrql(), v114 <= 0xFu) )
    {
      v115 = v121[0];
      if ( v121[0] <= 0xFu && v114 >= 2u )
      {
        v116 = KeGetCurrentPrcb();
        v117 = *((_QWORD *)v116 + 4375);
        v115 = v121[0];
        v118 = ~(unsigned __int16)(-1LL << (v121[0] + 1));
        v14 = (v118 & *(_DWORD *)(v117 + 20)) == 0;
        *(_DWORD *)(v117 + 20) &= v118;
        if ( v14 )
          sub_140418E4C(v116);
      }
    }
    else
    {
      v115 = v121[0];
    }
    __writecr8(v115);
  }
  return v18;
}
