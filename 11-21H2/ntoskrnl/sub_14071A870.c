/*
 * XREFs of sub_14071A870 @ 0x14071A870
 * Callers:
 *     sub_14067CE4C @ 0x14067CE4C (sub_14067CE4C.c)
 * Callees:
 *     SeFreePrivileges @ 0x140208AC0 (SeFreePrivileges.c)
 *     sub_14020A890 @ 0x14020A890 (sub_14020A890.c)
 *     sub_14020A9C4 @ 0x14020A9C4 (sub_14020A9C4.c)
 *     sub_14020AABC @ 0x14020AABC (sub_14020AABC.c)
 *     Allocate @ 0x14024AC60 (Allocate.c)
 *     ExInitializeRundownProtection @ 0x1402A0840 (ExInitializeRundownProtection.c)
 *     sub_1402A1A20 @ 0x1402A1A20 (sub_1402A1A20.c)
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     sub_1402D6B0C @ 0x1402D6B0C (sub_1402D6B0C.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402F0990 (ExWaitForRundownProtectionRelease.c)
 *     sub_140347810 @ 0x140347810 (sub_140347810.c)
 *     ExBlockOnAddressPushLock @ 0x140369460 (ExBlockOnAddressPushLock.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14053EFBC @ 0x14053EFBC (sub_14053EFBC.c)
 *     sub_14068934C @ 0x14068934C (sub_14068934C.c)
 *     sub_140689388 @ 0x140689388 (sub_140689388.c)
 *     sub_1406893EC @ 0x1406893EC (sub_1406893EC.c)
 *     sub_1406A5F0C @ 0x1406A5F0C (sub_1406A5F0C.c)
 *     sub_1406A5F34 @ 0x1406A5F34 (sub_1406A5F34.c)
 *     sub_1406D5E2C @ 0x1406D5E2C (sub_1406D5E2C.c)
 *     sub_1406D5E5C @ 0x1406D5E5C (sub_1406D5E5C.c)
 *     sub_14070AAD0 @ 0x14070AAD0 (sub_14070AAD0.c)
 *     sub_140713F8C @ 0x140713F8C (sub_140713F8C.c)
 *     sub_14071A464 @ 0x14071A464 (sub_14071A464.c)
 *     sub_14071BA34 @ 0x14071BA34 (sub_14071BA34.c)
 *     sub_14071BC64 @ 0x14071BC64 (sub_14071BC64.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     sub_1407C05CC @ 0x1407C05CC (sub_1407C05CC.c)
 *     RtlEqualUnicodeString @ 0x1407CD6A0 (RtlEqualUnicodeString.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     sub_140AB4138 @ 0x140AB4138 (sub_140AB4138.c)
 *     sub_140AB4178 @ 0x140AB4178 (sub_140AB4178.c)
 *     sub_140AB4260 @ 0x140AB4260 (sub_140AB4260.c)
 *     sub_140AB4550 @ 0x140AB4550 (sub_140AB4550.c)
 *     sub_140AB4580 @ 0x140AB4580 (sub_140AB4580.c)
 */

__int64 __fastcall sub_14071A870(
        _QWORD *a1,
        const UNICODE_STRING *a2,
        int a3,
        __int64 a4,
        struct _KEVENT *a5,
        void *a6,
        char a7,
        __int64 *a8,
        ULONG_PTR *a9)
{
  unsigned __int16 *v11; // rax
  char v12; // r15
  volatile signed __int32 *v13; // r14
  unsigned int v14; // ecx
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // r8
  PVOID v18; // rax
  int v19; // edx
  int v20; // ecx
  int v21; // edx
  signed int v22; // eax
  signed int v23; // ebx
  NTSTATUS v24; // eax
  _QWORD *v25; // rdi
  __int64 v26; // rax
  __int64 i; // rbx
  void *v28; // rdi
  signed int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rcx
  void *v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rdi
  __int64 v38; // rcx
  void *v39; // rdx
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rcx
  int v44; // eax
  __int64 v45; // rax
  __int64 *v46; // rbx
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  ULONG_PTR *v51; // rcx
  __int64 v52; // rdx
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // rcx
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // r8
  unsigned int v59; // r9d
  int v60; // r11d
  int v61; // r9d
  int v62; // r10d
  __int64 v63; // r15
  __int64 v65; // rdx
  _QWORD *v66; // rcx
  _QWORD *v67; // rax
  _QWORD *v68; // rax
  __int64 v69; // rbx
  struct _EX_RUNDOWN_REF *v70; // rbx
  NTSTATUS v71; // eax
  unsigned int v72; // r9d
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // r8
  __int64 v76; // r9
  __int64 v77; // r8
  int v78; // r8d
  int v79; // r9d
  unsigned int Object; // [rsp+20h] [rbp-E0h]
  char v81[4]; // [rsp+60h] [rbp-A0h] BYREF
  _WORD v82[2]; // [rsp+64h] [rbp-9Ch] BYREF
  __int64 v83; // [rsp+68h] [rbp-98h] BYREF
  int v84; // [rsp+70h] [rbp-90h] BYREF
  PVOID v85; // [rsp+78h] [rbp-88h]
  PVOID v86; // [rsp+80h] [rbp-80h] BYREF
  __int64 v87; // [rsp+88h] [rbp-78h] BYREF
  __int64 v88; // [rsp+90h] [rbp-70h] BYREF
  HANDLE Handle; // [rsp+98h] [rbp-68h] BYREF
  __int64 v90; // [rsp+A0h] [rbp-60h]
  int v91; // [rsp+A8h] [rbp-58h] BYREF
  int v92; // [rsp+ACh] [rbp-54h]
  int v93; // [rsp+B0h] [rbp-50h]
  int v94; // [rsp+B4h] [rbp-4Ch]
  PVOID P; // [rsp+B8h] [rbp-48h] BYREF
  int v96; // [rsp+C0h] [rbp-40h]
  _BYTE v97[80]; // [rsp+D0h] [rbp-30h] BYREF
  ULONG_PTR *v98; // [rsp+120h] [rbp+20h]
  __int64 *v99; // [rsp+128h] [rbp+28h]
  struct _EVENT_DATA_DESCRIPTOR v100[3]; // [rsp+130h] [rbp+30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v101; // [rsp+160h] [rbp+60h] BYREF
  __int64 *v102; // [rsp+180h] [rbp+80h]
  __int64 v103; // [rsp+188h] [rbp+88h]
  int *v104; // [rsp+190h] [rbp+90h]
  __int64 v105; // [rsp+198h] [rbp+98h]
  __int64 *v106; // [rsp+1A0h] [rbp+A0h]
  __int64 v107; // [rsp+1A8h] [rbp+A8h]
  __int64 *v108; // [rsp+1B0h] [rbp+B0h]
  __int64 v109; // [rsp+1B8h] [rbp+B8h]
  __int64 v110; // [rsp+1C0h] [rbp+C0h]
  __int64 v111; // [rsp+1C8h] [rbp+C8h]
  __int64 v112; // [rsp+1D0h] [rbp+D0h]
  int v113; // [rsp+1D8h] [rbp+D8h]
  int v114; // [rsp+1DCh] [rbp+DCh]
  __int64 v115; // [rsp+1E0h] [rbp+E0h]
  __int64 v116; // [rsp+1E8h] [rbp+E8h]
  __int64 v117; // [rsp+1F0h] [rbp+F0h]
  int v118; // [rsp+1F8h] [rbp+F8h]
  int v119; // [rsp+1FCh] [rbp+FCh]
  __int64 v120; // [rsp+200h] [rbp+100h]
  __int64 v121; // [rsp+208h] [rbp+108h]
  __int64 v122; // [rsp+210h] [rbp+110h]
  int v123; // [rsp+218h] [rbp+118h]
  int v124; // [rsp+21Ch] [rbp+11Ch]
  struct _EVENT_DATA_DESCRIPTOR v125; // [rsp+220h] [rbp+120h] BYREF
  __int64 *v126; // [rsp+240h] [rbp+140h]
  __int64 v127; // [rsp+248h] [rbp+148h]
  int *v128; // [rsp+250h] [rbp+150h]
  __int64 v129; // [rsp+258h] [rbp+158h]
  _WORD *v130; // [rsp+260h] [rbp+160h]
  __int64 v131; // [rsp+268h] [rbp+168h]
  char *v132; // [rsp+270h] [rbp+170h]
  __int64 v133; // [rsp+278h] [rbp+178h]
  __int64 *v134; // [rsp+280h] [rbp+180h]
  __int64 v135; // [rsp+288h] [rbp+188h]
  __int64 v136; // [rsp+290h] [rbp+190h]
  __int64 v137; // [rsp+298h] [rbp+198h]
  __int64 v138; // [rsp+2A0h] [rbp+1A0h]
  int v139; // [rsp+2A8h] [rbp+1A8h]
  int v140; // [rsp+2ACh] [rbp+1ACh]
  __int64 v141; // [rsp+2B0h] [rbp+1B0h]
  __int64 v142; // [rsp+2B8h] [rbp+1B8h]
  __int64 v143; // [rsp+2C0h] [rbp+1C0h]
  int v144; // [rsp+2C8h] [rbp+1C8h]
  int v145; // [rsp+2CCh] [rbp+1CCh]
  __int64 v146; // [rsp+2D0h] [rbp+1D0h]
  __int64 v147; // [rsp+2D8h] [rbp+1D8h]
  __int64 v148; // [rsp+2E0h] [rbp+1E0h]
  int v149; // [rsp+2E8h] [rbp+1E8h]
  int v150; // [rsp+2ECh] [rbp+1ECh]
  __int64 *v151; // [rsp+2F0h] [rbp+1F0h]
  __int64 v152; // [rsp+2F8h] [rbp+1F8h]

  v87 = (__int64)a5;
  v99 = a8;
  v94 = a3;
  v98 = a9;
  v88 = a4;
  v90 = (__int64)a6;
  v91 = 0;
  Handle = 0LL;
  memset(v97, 0, sizeof(v97));
  v11 = (unsigned __int16 *)a1[2];
  v81[0] = 0;
  memset(v100, 0, sizeof(v100));
  BYTE4(v83) = 0;
  v12 = 0;
  LOBYTE(v82[0]) = 0;
  v13 = 0LL;
  v14 = *v11;
  v15 = 0LL;
  P = 0LL;
  v85 = 0LL;
  if ( (unsigned __int16)v14 >= 2u )
  {
    LODWORD(v16) = v14 >> 1;
    if ( v14 >> 1 )
    {
      do
      {
        v17 = a1[2];
        v16 = (unsigned int)(v16 - 1);
        if ( *(_WORD *)(*(_QWORD *)(v17 + 8) + 2 * v16) != 92 )
          break;
        *(_WORD *)v17 -= 2;
      }
      while ( (_DWORD)v16 );
    }
  }
  if ( *(_WORD *)a1[2] < 2u )
  {
    v23 = -1073741811;
    goto LABEL_113;
  }
  v18 = Allocate(PagedPool, 0x1B0uLL, 0x33394D43u, (PLOOKASIDE_LIST_EX)2);
  v15 = (__int64)v18;
  if ( !v18 )
  {
    v23 = -1073741670;
    goto LABEL_113;
  }
  memset(v18, 0, 0x1B0uLL);
  if ( !(unsigned __int8)sub_140AB4138() )
  {
    v23 = -1073741431;
    goto LABEL_57;
  }
  v96 = v94 & 0x20;
  v19 = (v96 != 0 ? 118030337 : 50921473) | 0x8000000;
  if ( (v94 & 0x80u) == 0 )
    v19 = v96 != 0 ? 118030337 : 50921473;
  v20 = v19 | 0x10000000;
  if ( (v94 & 0x200) == 0 )
    v20 = v19;
  v93 = v20;
  v84 = v94 & 0x2000;
  v21 = (v84 != 0) | 0x20;
  if ( (v94 & 0x8000) == 0 )
    v21 = (v94 & 0x2000) != 0;
  v92 = v21;
  v22 = sub_140713F8C(a2, 0, &Handle, &v91, 8u, a6, 0LL, 0LL, (__int64)&P, v15);
  v23 = v22;
  if ( v22 == -1073741772 )
  {
    BYTE4(v83) = 1;
    *(_QWORD *)&v97[32] = a2;
    v97[40] = 1;
  }
  else
  {
    if ( v22 < 0 )
    {
      sub_14020A890(v15, 0, 32, v22, 0x10u);
      goto LABEL_51;
    }
    v86 = 0LL;
    v24 = ObReferenceObjectByHandle(Handle, 0, *(POBJECT_TYPE *)qword_140C49878, 0, &v86, 0LL);
    v25 = v86;
    v23 = v24;
    v85 = v86;
    ZwClose(Handle);
    if ( v23 < 0 )
    {
      sub_14020A890(v15, 0, 32, v23, 0x20u);
      goto LABEL_49;
    }
    v26 = v25[5];
    v97[40] = 0;
    *(_QWORD *)&v97[32] = v26;
  }
  KeInitializeEvent((PRKEVENT)&v97[48], NotificationEvent, 0);
  ExInitializeRundownProtection((PEX_RUNDOWN_REF)&v97[72]);
  *(_QWORD *)&v97[24] = &v97[16];
  *(_QWORD *)&v97[16] = &v97[16];
  sub_1406D5E2C();
  for ( i = qword_140C49400; (__int64 *)i != &qword_140C49400; i = *(_QWORD *)i )
  {
    if ( *(_BYTE *)(i + 40) )
    {
      if ( RtlEqualUnicodeString(*(PCUNICODE_STRING *)(i + 32), a2, 1u) )
      {
LABEL_77:
        v68 = *(_QWORD **)(i + 24);
        v69 = i + 16;
        if ( *v68 == v69 )
        {
          *(_QWORD *)&v97[24] = v68;
          *(_QWORD *)&v97[16] = v69;
          *v68 = &v97[16];
          *(_QWORD *)(v69 + 8) = &v97[16];
          v70 = *(struct _EX_RUNDOWN_REF **)&v97[24];
          sub_140347810((struct _EX_RUNDOWN_REF *)(*(_QWORD *)&v97[24] + 56LL));
          sub_1406D5E5C();
          KeWaitForSingleObject(&v70[4], Executive, 0, 0, 0LL);
          sub_1402AD030(v70 + 7);
          goto LABEL_21;
        }
LABEL_116:
        __fastfail(3u);
      }
    }
    else if ( *(_QWORD *)(i + 32) == *(_QWORD *)&v97[32] )
    {
      goto LABEL_77;
    }
  }
  if ( *(__int64 **)qword_140C49408 != &qword_140C49400 )
    goto LABEL_116;
  *(_QWORD *)v97 = &qword_140C49400;
  *(_QWORD *)&v97[8] = qword_140C49408;
  *(_QWORD *)qword_140C49408 = v97;
  qword_140C49408 = (__int64)v97;
  sub_1406D5E5C();
LABEL_21:
  v28 = (void *)v90;
  v86 = 0LL;
  LOBYTE(v83) = 1;
  v29 = sub_14070AAD0((int)a2, 1, (int)&v83, (__int64)&v86, v93, v92, v90, (__int64)v81, (void *)v15);
  while ( 1 )
  {
    v23 = v29;
    if ( !v29 )
    {
      v23 = sub_14020AABC((ULONG_PTR)v86, a1, v94, v88, 0LL, (struct _KEVENT *)v87, a7, v98, v83, v81[0], v15);
      goto LABEL_43;
    }
    if ( v29 != -1073741757 || v96 || v12 )
    {
      Object = 48;
      goto LABEL_105;
    }
    if ( BYTE4(v83) )
    {
      v23 = sub_140713F8C(a2, 0, &Handle, &v91, 8u, v28, 0LL, 0LL, (__int64)&P, v15);
      if ( v23 < 0 )
      {
        Object = 64;
        if ( v23 == -1073741772 )
          v23 = -1073741757;
LABEL_105:
        v72 = v23;
LABEL_107:
        sub_14020A890(v15, 0, 32, v72, Object);
        goto LABEL_43;
      }
      v86 = 0LL;
      v71 = ObReferenceObjectByHandle(Handle, 0, *(POBJECT_TYPE *)qword_140C49878, 0, &v86, 0LL);
      v25 = v86;
      v23 = v71;
      v85 = v86;
      ZwClose(Handle);
      if ( v23 < 0 )
      {
        sub_14020A890(v15, 0, 32, v23, 0x50u);
        goto LABEL_44;
      }
      v28 = (void *)v90;
    }
    sub_1406893EC();
    sub_140689388(1);
    v13 = (volatile signed __int32 *)sub_1406A5F34();
    if ( v13 )
      break;
LABEL_99:
    sub_140AB4260(v31, v30, v32, v33);
    sub_14068934C();
    LOBYTE(v83) = 1;
    v81[0] = 0;
    v86 = 0LL;
    v29 = sub_14070AAD0((int)a2, 1, (int)&v83, (__int64)&v86, v93, v92, (__int64)v28, (__int64)v81, (void *)v15);
    v12 = 1;
  }
LABEL_28:
  v34 = (unsigned int)dword_140C49410;
  LODWORD(v83) = dword_140C49410;
  while ( (_DWORD)v83 )
  {
    sub_140AB4260(v34, v30, v32, v33);
    sub_14068934C();
    ExBlockOnAddressPushLock((__int64)&qword_140C49418, &dword_140C49410, &v83, 4uLL, 0LL);
    sub_1406893EC();
    sub_140689388(1);
    LODWORD(v83) = dword_140C49410;
  }
  v35 = 0LL;
  while ( 1 )
  {
    v36 = sub_14071BA34(v35);
    v37 = v36;
    if ( !v36 )
      goto LABEL_98;
    v38 = *(unsigned int *)(v36 + 4768);
    LODWORD(v83) = v38;
    if ( (_DWORD)v38 )
    {
      sub_140AB4260(v38, v30, v32, v33);
      sub_14068934C();
      ExBlockOnAddressPushLock(v37 + 4776, (_QWORD *)(v37 + 4768), &v83, 4uLL, 0LL);
      sub_1406893EC();
      sub_140689388(1);
      sub_1406A5F0C((volatile signed __int32 *)v37);
      if ( (volatile signed __int32 *)v37 != v13 )
        goto LABEL_28;
      goto LABEL_98;
    }
    v39 = *(void **)(v36 + 1544);
    if ( v39 )
    {
      if ( sub_14071A464((__int64)v85, v39) )
        break;
    }
    v35 = (void *)v37;
    if ( (volatile signed __int32 *)v37 == v13 )
    {
      sub_1406A5F0C((volatile signed __int32 *)v37);
LABEL_98:
      v28 = (void *)v90;
      goto LABEL_99;
    }
  }
  v43 = *(unsigned int *)(v37 + 4112);
  v44 = *(_DWORD *)(v37 + 160) & 0x8000;
  if ( (v43 & 0x20) == 0 || (v43 & 0x40) != 0 )
  {
    sub_140AB4260(v43, v40, v41, v42);
    sub_14068934C();
    sub_1406A5F0C((volatile signed __int32 *)v37);
    v72 = -1073741757;
    Object = 96;
    v23 = -1073741757;
    goto LABEL_107;
  }
  if ( v84 )
  {
    if ( !v44 && !sub_14053EFBC(P) )
    {
      sub_140AB4260(v74, v73, v75, v76);
      sub_14068934C();
      sub_1406A5F0C((volatile signed __int32 *)v37);
      v23 = -1073741790;
      sub_14020A890(v15, 0, 32, 0xC0000022, 0x80u);
      goto LABEL_43;
    }
  }
  else if ( v44 )
  {
    sub_140AB4260(v43, v40, v41, v42);
    sub_14068934C();
    sub_1406A5F0C((volatile signed __int32 *)v37);
    v23 = -1073741757;
    sub_14020A890(v15, 0, 32, 0xC0000043, 0x70u);
    goto LABEL_43;
  }
  sub_140AB4550(v100);
  v45 = sub_1407C05CC(*(_QWORD *)(v37 + 2936));
  v46 = v99;
  *v99 = v45;
  sub_140AB4580(v100);
  if ( *v46 )
  {
    sub_14071BC64(*(_QWORD *)(v37 + 2936));
    v51 = v98;
    *v98 = *(_QWORD *)(v37 + 2936);
    sub_140AB4260(v51, v52, v53, v54);
    sub_14068934C();
    sub_1406A5F0C((volatile signed __int32 *)v37);
    LOBYTE(v82[0]) = 1;
    v23 = 0;
  }
  else
  {
    sub_140AB4260(v48, v47, v49, v50);
    sub_14068934C();
    v23 = -1073741670;
    sub_1406A5F0C((volatile signed __int32 *)v37);
  }
LABEL_43:
  v25 = v85;
LABEL_44:
  sub_1406D5E2C();
  v55 = *(_QWORD *)v97;
  v56 = *(_QWORD *)&v97[8];
  if ( *(_BYTE **)(*(_QWORD *)v97 + 8LL) != v97 || **(_BYTE ***)&v97[8] != v97 )
    goto LABEL_116;
  **(_QWORD **)&v97[8] = *(_QWORD *)v97;
  *(_QWORD *)(v55 + 8) = v56;
  v57 = *(_QWORD *)&v97[16];
  if ( *(_BYTE **)&v97[16] != &v97[16] )
  {
    v65 = *(_QWORD *)&v97[24];
    v66 = (_QWORD *)(*(_QWORD *)&v97[16] - 16LL);
    if ( *(_BYTE **)(*(_QWORD *)&v97[16] + 8LL) == &v97[16] && **(_BYTE ***)&v97[24] == &v97[16] )
    {
      **(_QWORD **)&v97[24] = *(_QWORD *)&v97[16];
      *(_QWORD *)(v57 + 8) = v65;
      v67 = (_QWORD *)qword_140C49408;
      if ( *(__int64 **)qword_140C49408 == &qword_140C49400 )
      {
        *v66 = &qword_140C49400;
        v66[1] = v67;
        *v67 = v66;
        qword_140C49408 = (__int64)v66;
        goto LABEL_47;
      }
    }
    goto LABEL_116;
  }
LABEL_47:
  sub_1406D5E5C();
  KeSetEvent((PRKEVENT)&v97[48], 0, 0);
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)&v97[72]);
  if ( v13 )
    sub_1406A5F0C(v13);
LABEL_49:
  if ( v25 )
    ObfDereferenceObject(v25);
LABEL_51:
  if ( P )
    ExFreePoolWithTag(P, 0);
  sub_140AB4178();
  if ( v23 >= 0 )
  {
    if ( (unsigned int)dword_140C03868 > 5 && sub_1402A2000((__int64)&dword_140C03868, 0x400000000008LL) )
    {
      v103 = 8LL;
      v88 = 1LL;
      v102 = &v88;
      v107 = 1LL;
      v104 = &v84;
      v106 = (__int64 *)v82;
      v108 = &v87;
      v84 = v23;
      v105 = 4LL;
      v87 = 0x1000000LL;
      v109 = 8LL;
      sub_1402A1A20((__int64)&dword_140C03868, (unsigned __int8 *)&byte_1400293C1, v58, 6u, &v101);
    }
    goto LABEL_67;
  }
LABEL_57:
  if ( *(_WORD *)(v15 + 8) || *(_WORD *)(v15 + 10) || *(_BYTE *)(v15 + 394) )
  {
    if ( (unsigned int)dword_140C03868 > 5 )
    {
      if ( sub_1402A2000((__int64)&dword_140C03868, 0x400000000008LL) )
      {
        v88 = 1LL;
        v61 = *(unsigned __int16 *)(v15 + 10);
        v62 = *(unsigned __int8 *)(v15 + 394);
        v126 = &v88;
        v63 = v15 + 12;
        LOWORD(v83) = v62;
        v128 = &v84;
        v130 = v82;
        v132 = (char *)&v83 + 4;
        v134 = &v83;
        v143 = v15 + 108;
        v144 = 12 * v61;
        v148 = v15 + 396;
        v151 = &v87;
        WORD2(v83) = v61;
        v139 = 12 * v60;
        v141 = v15 + 10;
        v127 = 8LL;
        v84 = v23;
        v129 = 4LL;
        v82[0] = v60;
        v131 = 2LL;
        v133 = 2LL;
        v135 = 2LL;
        v136 = v15 + 8;
        v137 = 2LL;
        v138 = v15 + 12;
        v140 = 0;
        v142 = 2LL;
        v145 = 0;
        v146 = v15 + 394;
        v147 = 2LL;
        v149 = 8 * v62;
        v150 = 0;
        v87 = 0x1000000LL;
        v152 = 8LL;
        sub_1402A1A20((__int64)&dword_140C03868, (unsigned __int8 *)&byte_14002942B, v15 + 394, 0xEu, &v125);
        v59 = dword_140C03868;
      }
      else
      {
        v63 = v15 + 12;
      }
      if ( v59 > 5 && sub_1402A2000((__int64)&dword_140C03868, 8LL) )
      {
        v84 = v23;
        v102 = (__int64 *)&v84;
        v82[0] = *(_WORD *)(v15 + 8);
        v104 = (int *)v82;
        v78 = *(unsigned __int16 *)(v15 + 10);
        v106 = (__int64 *)((char *)&v83 + 4);
        v79 = *(unsigned __int8 *)(v15 + 394);
        v113 = 12 * v82[0];
        v117 = v15 + 108;
        v118 = 12 * v78;
        LOWORD(v83) = v79;
        v122 = v15 + 396;
        WORD2(v83) = v78;
        v115 = v15 + 10;
        v120 = v15 + 394;
        v123 = 8 * v79;
        v103 = 4LL;
        v105 = 2LL;
        v107 = 2LL;
        v108 = &v83;
        v109 = 2LL;
        v110 = v15 + 8;
        v111 = 2LL;
        v112 = v63;
        v114 = 0;
        v116 = 2LL;
        v119 = 0;
        v121 = 2LL;
        v124 = 0;
        sub_14020A9C4((__int64)&dword_140C03868, (unsigned __int8 *)byte_140029285, 0LL, 0LL, 0xCu, &v101);
      }
    }
  }
  else
  {
LABEL_113:
    if ( (unsigned int)dword_140C03868 > 5 && sub_1402A2000((__int64)&dword_140C03868, 0x400000000008LL) )
    {
      v88 = 1LL;
      v102 = &v88;
      v103 = 8LL;
      v104 = &v84;
      v84 = v23;
      v106 = &v87;
      v105 = 4LL;
      v87 = 0x1000000LL;
      v107 = 8LL;
      sub_1402A1A20((__int64)&dword_140C03868, (unsigned __int8 *)&word_14002958E, v77, 5u, &v101);
    }
  }
  if ( v23 == -1073741790 )
    sub_1402D6B0C((__int64)&unk_140D010F8, 0x1C1EA01u, 0, 0, (__int64)&qword_14003ABC8, 0);
  if ( v15 )
LABEL_67:
    SeFreePrivileges((PPRIVILEGE_SET)v15);
  return (unsigned int)v23;
}
