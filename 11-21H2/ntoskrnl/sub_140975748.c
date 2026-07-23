/*
 * XREFs of sub_140975748 @ 0x140975748
 * Callers:
 *     sub_140865400 @ 0x140865400 (sub_140865400.c)
 * Callees:
 *     sub_14024A9B0 @ 0x14024A9B0 (sub_14024A9B0.c)
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402D0930 @ 0x1402D0930 (sub_1402D0930.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     sub_14030D5C0 @ 0x14030D5C0 (sub_14030D5C0.c)
 *     sub_140347810 @ 0x140347810 (sub_140347810.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     PsGetProcessId @ 0x140361530 (PsGetProcessId.c)
 *     sub_1403699D0 @ 0x1403699D0 (sub_1403699D0.c)
 *     sub_1403747BC @ 0x1403747BC (sub_1403747BC.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1406F5AF0 @ 0x1406F5AF0 (sub_1406F5AF0.c)
 *     sub_1406F5B50 @ 0x1406F5B50 (sub_1406F5B50.c)
 *     sub_1407B6B90 @ 0x1407B6B90 (sub_1407B6B90.c)
 *     sub_1409734B8 @ 0x1409734B8 (sub_1409734B8.c)
 *     sub_140973FF0 @ 0x140973FF0 (sub_140973FF0.c)
 */

struct _EX_RUNDOWN_REF *sub_140975748()
{
  struct _EX_RUNDOWN_REF *result; // rax
  struct _KTHREAD *CurrentThread; // rsi
  _QWORD *v2; // rax
  unsigned __int64 i; // rbx
  __int64 v4; // r8
  __int64 v5; // r10
  _QWORD **v6; // rax
  unsigned __int64 v7; // rcx
  _QWORD *v8; // rcx
  _QWORD *v9; // rax
  unsigned __int64 k; // rdi
  _QWORD *v11; // rax
  unsigned __int64 j; // rbx
  __int64 v13; // r8
  __int64 v14; // r10
  int v15; // eax
  _QWORD **v16; // rax
  unsigned __int64 v17; // rcx
  _QWORD *v18; // rcx
  _QWORD **v19; // rax
  unsigned __int64 v20; // rcx
  _QWORD *v21; // rcx
  bool v22; // zf
  _QWORD *v23; // rax
  unsigned __int64 m; // rbx
  __int64 v25; // r8
  __int64 v26; // r10
  _QWORD **v27; // rax
  unsigned __int64 v28; // rcx
  _QWORD *v29; // rcx
  PVOID *n; // rbx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // r10
  struct _KPROCESS *ii; // rcx
  struct _EX_RUNDOWN_REF *v35; // r13
  __int64 v36; // r9
  _QWORD *v37; // r15
  _QWORD *v38; // rdi
  __int64 v39; // r12
  int v40; // ecx
  __int64 v41; // r8
  struct _KPROCESS *v42; // rbx
  int v43; // [rsp+28h] [rbp-E0h]
  int v44; // [rsp+30h] [rbp-D8h]
  int v45; // [rsp+48h] [rbp-C0h] BYREF
  int v46; // [rsp+4Ch] [rbp-BCh] BYREF
  int v47; // [rsp+50h] [rbp-B8h] BYREF
  int v48; // [rsp+54h] [rbp-B4h] BYREF
  int v49; // [rsp+58h] [rbp-B0h] BYREF
  int v50; // [rsp+5Ch] [rbp-ACh] BYREF
  int v51; // [rsp+60h] [rbp-A8h] BYREF
  int v52; // [rsp+64h] [rbp-A4h] BYREF
  int v53; // [rsp+68h] [rbp-A0h] BYREF
  int v54; // [rsp+6Ch] [rbp-9Ch] BYREF
  int v55; // [rsp+70h] [rbp-98h] BYREF
  int v56; // [rsp+74h] [rbp-94h] BYREF
  int v57; // [rsp+78h] [rbp-90h] BYREF
  int v58; // [rsp+7Ch] [rbp-8Ch] BYREF
  unsigned int ProcessId; // [rsp+80h] [rbp-88h] BYREF
  int v60; // [rsp+84h] [rbp-84h] BYREF
  int v61; // [rsp+88h] [rbp-80h] BYREF
  int v62; // [rsp+8Ch] [rbp-7Ch] BYREF
  int v63; // [rsp+90h] [rbp-78h] BYREF
  int v64; // [rsp+94h] [rbp-74h] BYREF
  int v65; // [rsp+98h] [rbp-70h] BYREF
  const CHAR *v66; // [rsp+A0h] [rbp-68h] BYREF
  int v67[4]; // [rsp+A8h] [rbp-60h] BYREF
  _OWORD v68[3]; // [rsp+B8h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v69; // [rsp+E8h] [rbp-20h] BYREF
  int *v70; // [rsp+108h] [rbp+0h]
  __int64 v71; // [rsp+110h] [rbp+8h]
  int *v72; // [rsp+118h] [rbp+10h]
  __int64 v73; // [rsp+120h] [rbp+18h]
  int *v74; // [rsp+128h] [rbp+20h]
  __int64 v75; // [rsp+130h] [rbp+28h]
  int *v76; // [rsp+138h] [rbp+30h]
  __int64 v77; // [rsp+140h] [rbp+38h]
  int *v78; // [rsp+148h] [rbp+40h]
  __int64 v79; // [rsp+150h] [rbp+48h]
  _DWORD *v80; // [rsp+158h] [rbp+50h]
  __int64 v81; // [rsp+160h] [rbp+58h]
  __int64 v82; // [rsp+168h] [rbp+60h]
  _DWORD v83[2]; // [rsp+170h] [rbp+68h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v84; // [rsp+178h] [rbp+70h] BYREF
  int *v85; // [rsp+198h] [rbp+90h]
  __int64 v86; // [rsp+1A0h] [rbp+98h]
  int *v87; // [rsp+1A8h] [rbp+A0h]
  __int64 v88; // [rsp+1B0h] [rbp+A8h]
  int *v89; // [rsp+1B8h] [rbp+B0h]
  __int64 v90; // [rsp+1C0h] [rbp+B8h]
  int *v91; // [rsp+1C8h] [rbp+C0h]
  __int64 v92; // [rsp+1D0h] [rbp+C8h]
  int *v93; // [rsp+1D8h] [rbp+D0h]
  __int64 v94; // [rsp+1E0h] [rbp+D8h]
  _DWORD *v95; // [rsp+1E8h] [rbp+E0h]
  __int64 v96; // [rsp+1F0h] [rbp+E8h]
  PVOID v97; // [rsp+1F8h] [rbp+F0h]
  _DWORD v98[2]; // [rsp+200h] [rbp+F8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v99; // [rsp+208h] [rbp+100h] BYREF
  unsigned int *p_ProcessId; // [rsp+228h] [rbp+120h]
  __int64 v101; // [rsp+230h] [rbp+128h]
  char v102[16]; // [rsp+238h] [rbp+130h] BYREF
  int *v103; // [rsp+248h] [rbp+140h]
  __int64 v104; // [rsp+250h] [rbp+148h]
  int *v105; // [rsp+258h] [rbp+150h]
  __int64 v106; // [rsp+260h] [rbp+158h]
  int *v107; // [rsp+268h] [rbp+160h]
  __int64 v108; // [rsp+270h] [rbp+168h]
  int *v109; // [rsp+278h] [rbp+170h]
  __int64 v110; // [rsp+280h] [rbp+178h]
  int *v111; // [rsp+288h] [rbp+180h]
  __int64 v112; // [rsp+290h] [rbp+188h]
  _DWORD *v113; // [rsp+298h] [rbp+190h]
  __int64 v114; // [rsp+2A0h] [rbp+198h]
  __int64 v115; // [rsp+2A8h] [rbp+1A0h]
  _DWORD v116[2]; // [rsp+2B0h] [rbp+1A8h] BYREF
  int *v117; // [rsp+2B8h] [rbp+1B0h]
  __int64 v118; // [rsp+2C0h] [rbp+1B8h]
  struct _EVENT_DATA_DESCRIPTOR v119; // [rsp+2C8h] [rbp+1C0h] BYREF
  int *v120; // [rsp+2E8h] [rbp+1E0h]
  __int64 v121; // [rsp+2F0h] [rbp+1E8h]
  int *v122; // [rsp+2F8h] [rbp+1F0h]
  __int64 v123; // [rsp+300h] [rbp+1F8h]
  _DWORD *v124; // [rsp+308h] [rbp+200h]
  __int64 v125; // [rsp+310h] [rbp+208h]
  __int64 v126; // [rsp+318h] [rbp+210h]
  _DWORD v127[2]; // [rsp+320h] [rbp+218h] BYREF
  unsigned __int64 v128; // [rsp+328h] [rbp+220h]
  int v129; // [rsp+330h] [rbp+228h]
  int v130; // [rsp+334h] [rbp+22Ch]
  struct _EVENT_DATA_DESCRIPTOR v131; // [rsp+338h] [rbp+230h] BYREF
  int *v132; // [rsp+358h] [rbp+250h]
  __int64 v133; // [rsp+360h] [rbp+258h]
  int *v134; // [rsp+368h] [rbp+260h]
  __int64 v135; // [rsp+370h] [rbp+268h]
  _DWORD *v136; // [rsp+378h] [rbp+270h]
  __int64 v137; // [rsp+380h] [rbp+278h]
  __int64 v138; // [rsp+388h] [rbp+280h]
  _DWORD v139[2]; // [rsp+390h] [rbp+288h] BYREF
  _UNKNOWN *retaddr; // [rsp+3D0h] [rbp+2C8h] BYREF

  result = (struct _EX_RUNDOWN_REF *)&retaddr;
  memset(v68, 0, sizeof(v68));
  v66 = 0LL;
  if ( *(_QWORD *)&qword_140C53448 && dword_140C4F478 )
  {
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 243);
    ExAcquirePushLockSharedEx((ULONG_PTR)&qword_140C533C0, 0LL);
    v2 = *(_QWORD **)&qword_140C533B0;
    i = 0LL;
    while ( v2 )
    {
      i = (unsigned __int64)v2;
      v2 = (_QWORD *)*v2;
    }
    while ( i )
    {
      if ( **(_DWORD **)&qword_140C53448 > 5u && sub_1402A2000(*(__int64 *)&qword_140C53448, 32LL) )
      {
        v45 = *(_DWORD *)(i + 24);
        v133 = 4LL;
        v132 = &v45;
        v46 = *(_DWORD *)(i + 28);
        v134 = &v46;
        v136 = v139;
        v138 = *(_QWORD *)(i + 40);
        v139[0] = *(unsigned __int16 *)(i + 32);
        v135 = 4LL;
        v137 = 2LL;
        v139[1] = 0;
        sub_14024A9B0(v5, (unsigned __int8 *)&dword_14002D1A4, v4, 1u, v43, v44, 6u, &v131);
      }
      v6 = *(_QWORD ***)(i + 8);
      v7 = i;
      if ( v6 )
      {
        v8 = *v6;
        for ( i = *(_QWORD *)(i + 8); v8; v8 = (_QWORD *)*v8 )
          i = (unsigned __int64)v8;
      }
      else
      {
        while ( 1 )
        {
          i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !i || *(_QWORD *)i == v7 )
            break;
          v7 = i;
        }
      }
    }
    v9 = (_QWORD *)qword_140C533A8;
    k = 0LL;
    while ( v9 )
    {
      k = (unsigned __int64)v9;
      v9 = (_QWORD *)*v9;
    }
    while ( k )
    {
      v11 = *(_QWORD **)(k + 24);
      j = 0LL;
      while ( v11 )
      {
        j = (unsigned __int64)v11;
        v11 = (_QWORD *)*v11;
      }
      while ( j )
      {
        if ( **(_DWORD **)&qword_140C53448 > 5u && sub_1402A2000(*(__int64 *)&qword_140C53448, 32LL) )
        {
          v47 = *(_DWORD *)(j + 24);
          v121 = 4LL;
          v120 = &v47;
          v48 = *(_DWORD *)(j + 28);
          v122 = &v48;
          v124 = v127;
          v126 = *(_QWORD *)(j + 40);
          v127[0] = *(unsigned __int16 *)(j + 32);
          v128 = k + 40;
          v15 = *(unsigned __int8 *)(k + 41);
          v123 = 4LL;
          v125 = 2LL;
          v127[1] = 0;
          v130 = 0;
          v129 = 4 * v15 + 8;
          sub_14024A9B0(v14, (unsigned __int8 *)&unk_14002D000, v13, 1u, v43, v44, 7u, &v119);
        }
        v16 = *(_QWORD ***)(j + 8);
        v17 = j;
        if ( v16 )
        {
          v18 = *v16;
          for ( j = *(_QWORD *)(j + 8); v18; v18 = (_QWORD *)*v18 )
            j = (unsigned __int64)v18;
        }
        else
        {
          while ( 1 )
          {
            j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL;
            if ( !j || *(_QWORD *)j == v17 )
              break;
            v17 = j;
          }
        }
      }
      v19 = *(_QWORD ***)(k + 8);
      v20 = k;
      if ( v19 )
      {
        v21 = *v19;
        for ( k = *(_QWORD *)(k + 8); v21; v21 = (_QWORD *)*v21 )
          k = (unsigned __int64)v21;
      }
      else
      {
        while ( 1 )
        {
          k = *(_QWORD *)(k + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !k || *(_QWORD *)k == v20 )
            break;
          v20 = k;
        }
      }
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C533C0, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&qword_140C533C0);
    sub_1402AFC00((ULONG_PTR)&qword_140C533C0);
    v22 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
    if ( v22 && *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
      KiCheckForKernelApcDelivery();
    sub_1406F5B50();
    v23 = (_QWORD *)qword_140C533B8;
    m = 0LL;
    while ( v23 )
    {
      m = (unsigned __int64)v23;
      v23 = (_QWORD *)*v23;
    }
    while ( m )
    {
      if ( **(_DWORD **)&qword_140C53448 > 5u && sub_1402A2000(*(__int64 *)&qword_140C53448, 32LL) )
      {
        v49 = *(_DWORD *)(m + 24);
        v71 = 4LL;
        v70 = &v49;
        v50 = *(_DWORD *)(m + 28);
        v72 = &v50;
        v51 = *(_DWORD *)(m + 32);
        v74 = &v51;
        v52 = *(_DWORD *)(m + 36);
        v76 = &v52;
        v53 = *(_DWORD *)(m + 40);
        v78 = &v53;
        v80 = v83;
        v82 = *(_QWORD *)(m + 56);
        v83[0] = *(unsigned __int16 *)(m + 48);
        v73 = 4LL;
        v75 = 4LL;
        v77 = 4LL;
        v79 = 4LL;
        v81 = 2LL;
        v83[1] = 0;
        sub_14024A9B0(v26, (unsigned __int8 *)&byte_14002D063, v25, 1u, v43, v44, 9u, &v69);
      }
      v27 = *(_QWORD ***)(m + 8);
      v28 = m;
      if ( v27 )
      {
        v29 = *v27;
        for ( m = *(_QWORD *)(m + 8); v29; v29 = (_QWORD *)*v29 )
          m = (unsigned __int64)v29;
      }
      else
      {
        while ( 1 )
        {
          m = *(_QWORD *)(m + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !m || *(_QWORD *)m == v28 )
            break;
          v28 = m;
        }
      }
    }
    for ( n = (PVOID *)PsLoadedModuleList; n != &PsLoadedModuleList; n = (PVOID *)*n )
    {
      if ( sub_140973FF0((__int64)n)
        && **(_DWORD **)&qword_140C53448 > 5u
        && sub_1402A2000(*(__int64 *)&qword_140C53448, 32LL) )
      {
        v54 = *(_DWORD *)(v32 + 120);
        v86 = 4LL;
        v85 = &v54;
        v55 = *(_DWORD *)(v32 + 156);
        v87 = &v55;
        v56 = *((_DWORD *)n + 30);
        v89 = &v56;
        v57 = *((_DWORD *)n + 39);
        v91 = &v57;
        v58 = *((_DWORD *)n + 78);
        v93 = &v58;
        v95 = v98;
        v97 = n[10];
        v98[0] = *((unsigned __int16 *)n + 36);
        v88 = 4LL;
        v90 = 4LL;
        v92 = 4LL;
        v94 = 4LL;
        v96 = 2LL;
        v98[1] = 0;
        sub_14024A9B0(v33, (unsigned __int8 *)&byte_14002D1F7, v31, 1u, v43, v44, 9u, &v84);
      }
    }
    sub_1406F5AF0((__int64)CurrentThread);
    for ( ii = 0LL; ; ii = v42 )
    {
      result = (struct _EX_RUNDOWN_REF *)sub_1407B6B90(ii);
      v42 = (struct _KPROCESS *)result;
      if ( !result )
        break;
      v35 = result + 139;
      if ( sub_140347810(result + 139) )
      {
        sub_14030D5C0((ULONG_PTR)v42, 0LL, (__int64)v68, v36);
        v37 = sub_1409734B8((__int64)v42, 0);
        if ( v37 )
        {
          sub_1403747BC((__int64)v42 + 1664, v67, &v66);
          --*((_WORD *)CurrentThread + 243);
          ExAcquirePushLockSharedEx((ULONG_PTR)(v37 + 2), 0LL);
          v38 = (_QWORD *)*v37;
          if ( (_QWORD *)*v37 != v37 )
          {
            do
            {
              v39 = *(_QWORD *)&qword_140C53448;
              if ( **(_DWORD **)&qword_140C53448 > 5u && sub_1402A2000(*(__int64 *)&qword_140C53448, 32LL) )
              {
                ProcessId = (unsigned int)PsGetProcessId(v42);
                p_ProcessId = &ProcessId;
                v101 = 4LL;
                sub_1403699D0((__int64)v102, v66);
                v40 = *((_DWORD *)v38 + 8);
                v103 = &v60;
                v61 = *((_DWORD *)v38 + 9);
                v105 = &v61;
                v62 = *((_DWORD *)v38 + 14);
                v107 = &v62;
                v63 = *((_DWORD *)v38 + 15);
                v109 = &v63;
                v64 = *((_DWORD *)v38 + 16);
                v111 = &v64;
                v113 = v116;
                v115 = v38[6];
                v116[0] = *((unsigned __int16 *)v38 + 20);
                v65 = *((_DWORD *)v38 + 4);
                v117 = &v65;
                v60 = v40;
                v104 = 4LL;
                v106 = 4LL;
                v108 = 4LL;
                v110 = 4LL;
                v112 = 4LL;
                v114 = 2LL;
                v116[1] = 0;
                v118 = 4LL;
                sub_14024A9B0(v39, (unsigned __int8 *)&dword_14002D284, v41, 1u, v43, v44, 0xCu, &v99);
              }
              v38 = (_QWORD *)*v38;
            }
            while ( v38 != v37 );
            v35 = (struct _EX_RUNDOWN_REF *)((char *)v42 + 1112);
          }
          if ( _InterlockedCompareExchange64(v37 + 2, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared(v37 + 2);
          sub_1402AFC00((ULONG_PTR)(v37 + 2));
          v22 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
          if ( v22 && *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
            KiCheckForKernelApcDelivery();
        }
        sub_1402D0930((__int64)v68, 0LL);
        sub_1402AD030(v35);
      }
    }
  }
  return result;
}
