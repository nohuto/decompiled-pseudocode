/*
 * XREFs of sub_140719278 @ 0x140719278
 * Callers:
 *     sub_1407362A0 @ 0x1407362A0 (sub_1407362A0.c)
 *     sub_140916918 @ 0x140916918 (sub_140916918.c)
 * Callees:
 *     sub_1402A21B0 @ 0x1402A21B0 (sub_1402A21B0.c)
 *     sub_1402A2204 @ 0x1402A2204 (sub_1402A2204.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140657670 @ 0x140657670 (sub_140657670.c)
 *     sub_140657A88 @ 0x140657A88 (sub_140657A88.c)
 *     sub_140657ADC @ 0x140657ADC (sub_140657ADC.c)
 *     sub_14067E9B8 @ 0x14067E9B8 (sub_14067E9B8.c)
 *     sub_14067EA18 @ 0x14067EA18 (sub_14067EA18.c)
 *     sub_14067EF3C @ 0x14067EF3C (sub_14067EF3C.c)
 *     sub_14068038C @ 0x14068038C (sub_14068038C.c)
 *     sub_1406AD650 @ 0x1406AD650 (sub_1406AD650.c)
 *     sub_1406B67A0 @ 0x1406B67A0 (sub_1406B67A0.c)
 *     SeDeassignSecurity @ 0x1406BC2D0 (SeDeassignSecurity.c)
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_1406E9124 @ 0x1406E9124 (sub_1406E9124.c)
 *     sub_140715D90 @ 0x140715D90 (sub_140715D90.c)
 *     sub_1407164DC @ 0x1407164DC (sub_1407164DC.c)
 *     sub_140716758 @ 0x140716758 (sub_140716758.c)
 *     sub_14071784C @ 0x14071784C (sub_14071784C.c)
 *     sub_140718244 @ 0x140718244 (sub_140718244.c)
 *     SeAssignSecurity @ 0x140719100 (SeAssignSecurity.c)
 *     sub_14071B4A0 @ 0x14071B4A0 (sub_14071B4A0.c)
 *     sub_14071B5A0 @ 0x14071B5A0 (sub_14071B5A0.c)
 *     sub_14071B640 @ 0x14071B640 (sub_14071B640.c)
 *     sub_14071C120 @ 0x14071C120 (sub_14071C120.c)
 *     sub_14071F300 @ 0x14071F300 (sub_14071F300.c)
 *     sub_140720F74 @ 0x140720F74 (sub_140720F74.c)
 *     sub_140721878 @ 0x140721878 (sub_140721878.c)
 *     sub_140721BF0 @ 0x140721BF0 (sub_140721BF0.c)
 *     sub_140721CE0 @ 0x140721CE0 (sub_140721CE0.c)
 *     sub_140722534 @ 0x140722534 (sub_140722534.c)
 *     sub_14079B8C0 @ 0x14079B8C0 (sub_14079B8C0.c)
 *     sub_14079BD98 @ 0x14079BD98 (sub_14079BD98.c)
 *     sub_14079C8A4 @ 0x14079C8A4 (sub_14079C8A4.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 *     sub_14091CEA0 @ 0x14091CEA0 (sub_14091CEA0.c)
 *     sub_14091ECE0 @ 0x14091ECE0 (sub_14091ECE0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     sub_140AB4484 @ 0x140AB4484 (sub_140AB4484.c)
 *     sub_140AB4534 @ 0x140AB4534 (sub_140AB4534.c)
 *     sub_140AB4550 @ 0x140AB4550 (sub_140AB4550.c)
 */

__int64 __fastcall sub_140719278(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 *a4,
        __int64 a5,
        __int16 a6,
        int a7,
        char a8,
        __int64 a9)
{
  char v9; // si
  char *v10; // r13
  unsigned int v11; // edx
  unsigned int v12; // edx
  unsigned int v13; // edx
  __int64 v14; // r11
  __int64 v15; // rbx
  __int64 v16; // r8
  ULONG_PTR v17; // r15
  ULONG_PTR v18; // r14
  int v19; // r8d
  int v20; // ebx
  int v21; // edx
  _DWORD *v22; // rsi
  int v23; // edx
  int v24; // r8d
  int v25; // ecx
  int v26; // edx
  __int16 v27; // ax
  __int16 v28; // dx
  __int64 v29; // r11
  void *v30; // rbx
  __int64 v31; // rax
  NTSTATUS v32; // eax
  __int64 v33; // rax
  int v34; // ecx
  ULONG_PTR v35; // rdx
  char *v36; // rax
  int v37; // eax
  int v38; // eax
  int v39; // eax
  int v40; // eax
  int v41; // eax
  int v42; // edx
  char v43; // cl
  __int64 v44; // rbx
  __int64 v45; // rax
  __int64 v46; // rcx
  __int64 v47; // rax
  unsigned int v48; // eax
  __int64 v49; // rdx
  _QWORD *v50; // rax
  int v51; // eax
  _QWORD *v52; // rax
  int v53; // eax
  __int64 v54; // r8
  _QWORD *v55; // rbx
  int v56; // eax
  __int64 v57; // r9
  int v58; // eax
  __int64 v59; // r9
  int v60; // eax
  __int64 v61; // r9
  int v62; // eax
  __int64 v63; // r9
  int v64; // eax
  int v65; // edx
  int v66; // eax
  _BYTE *v67; // rbx
  __int16 v68; // ax
  __int64 v69; // rcx
  int v70; // eax
  unsigned __int16 v71; // ax
  __int16 v72; // cx
  int v73; // eax
  int v74; // edx
  char v75; // al
  __int64 v76; // rbx
  _DWORD *v77; // rcx
  _DWORD *v78; // rax
  __int64 v79; // rbx
  ULONG_PTR v80; // rcx
  __int64 v81; // rax
  __int64 v82; // r13
  __int64 v83; // rdx
  unsigned int v84; // eax
  PVOID v85; // r15
  PVOID v86; // r15
  PSECURITY_DESCRIPTOR v87; // r15
  __int64 v88; // rsi
  void *v89; // rcx
  __int64 v90; // rcx
  PSECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+20h] [rbp-F8h]
  PGENERIC_MAPPING GenericMapping; // [rsp+28h] [rbp-F0h]
  POOL_TYPE PoolType[2]; // [rsp+30h] [rbp-E8h]
  __int64 v95; // [rsp+38h] [rbp-E0h]
  __int64 v96; // [rsp+40h] [rbp-D8h]
  __int16 v97; // [rsp+48h] [rbp-D0h]
  unsigned int BugCheckParameter4; // [rsp+4Ch] [rbp-CCh] BYREF
  __int16 BugCheckParameter4_4; // [rsp+50h] [rbp-C8h]
  _DWORD BugCheckParameter3[3]; // [rsp+54h] [rbp-C4h] BYREF
  void *v101; // [rsp+60h] [rbp-B8h] BYREF
  __int64 v102; // [rsp+68h] [rbp-B0h] BYREF
  PVOID P; // [rsp+70h] [rbp-A8h]
  PVOID v104; // [rsp+78h] [rbp-A0h]
  __int64 v105; // [rsp+80h] [rbp-98h] BYREF
  int v106; // [rsp+88h] [rbp-90h]
  PSECURITY_DESCRIPTOR NewDescriptor; // [rsp+90h] [rbp-88h] BYREF
  __int64 v108; // [rsp+98h] [rbp-80h]
  void *v109; // [rsp+A0h] [rbp-78h] BYREF
  __int64 v110; // [rsp+A8h] [rbp-70h] BYREF
  unsigned int v111; // [rsp+B0h] [rbp-68h] BYREF
  unsigned int v112; // [rsp+B4h] [rbp-64h]
  _QWORD *v113; // [rsp+B8h] [rbp-60h]
  _QWORD *v114; // [rsp+C0h] [rbp-58h]
  ULONG_PTR v115; // [rsp+C8h] [rbp-50h]
  ULONG_PTR v116; // [rsp+D0h] [rbp-48h]
  int v119; // [rsp+128h] [rbp+10h]
  unsigned int v122; // [rsp+160h] [rbp+48h]

  BYTE4(v96) = 0;
  BYTE1(v96) = 0;
  BYTE2(v96) = 0;
  v9 = 0;
  BYTE5(v96) = 0;
  v10 = 0LL;
  v101 = 0LL;
  BugCheckParameter4 = -1;
  v110 = 0xFFFFFFFFLL;
  sub_140AB4534((char *)&v110 + 4);
  v109 = 0LL;
  BugCheckParameter3[0] = v11;
  v102 = v11;
  sub_140AB4534((char *)&v102 + 4);
  v108 = 0LL;
  v105 = v12;
  sub_140AB4534((char *)&v105 + 4);
  NewDescriptor = 0LL;
  v111 = v13;
  v104 = 0LL;
  v113 = 0LL;
  P = 0LL;
  v114 = 0LL;
  BYTE3(v96) = 0;
  v15 = sub_140721CE0(v14, *(unsigned __int16 *)(v14 + 2));
  *(_QWORD *)&BugCheckParameter3[1] = v15;
  v17 = sub_140721CE0(v16, *(unsigned __int16 *)(v16 + 2));
  v115 = v17;
  v18 = *(_QWORD *)(v17 + 32);
  v116 = v18;
  if ( !a9 || (*(_DWORD *)(v18 + 160) & 2) == 0 )
  {
    if ( (a7 & 0xFFFFFFFC) != 0 )
    {
      v20 = -1073741811;
      v19 = -1073741811;
      v21 = 262528;
      goto LABEL_4;
    }
    if ( (a7 & 1) != 0 || (*(_DWORD *)(v18 + 4112) & 0x20) != 0 )
    {
      v9 = 1;
      BYTE5(v96) = 1;
    }
    if ( (*(_DWORD *)(v15 + 8) & 0x80u) != 0 )
    {
      v23 = 262656;
LABEL_12:
      v24 = -1073741790;
      v22 = (_DWORD *)a5;
LABEL_13:
      v20 = v24;
LABEL_14:
      sub_14068038C((__int64)v22, v23, v24);
      goto LABEL_183;
    }
    if ( (*(_DWORD *)(*(_QWORD *)(v15 + 32) + 160LL) & 0x100000) != 0 )
    {
      v23 = 262912;
      goto LABEL_12;
    }
    if ( *(_BYTE *)(v15 + 65) == 1 )
    {
      v23 = 263168;
      goto LABEL_12;
    }
    if ( byte_140C097BD && (v25 = *(_DWORD *)(v15 + 184), (v25 & 0x1000000) != 0) )
    {
      v26 = 1;
    }
    else
    {
      v26 = 0;
      v25 = *(_DWORD *)(v15 + 184);
    }
    v27 = a6 | 0x100;
    if ( !v26 )
      v27 = a6;
    v28 = v27 | 0x200;
    if ( (v25 & 0x2000000) == 0 )
      v28 = v27;
    v97 = v28;
    if ( v9 && *(_QWORD *)(a3 + 64) )
    {
      v23 = 263424;
      goto LABEL_12;
    }
    v22 = (_DWORD *)a5;
    v106 = *(_DWORD *)(a5 + 24) & 1;
    if ( (unsigned int)sub_140657A88(v15, a9, 512LL) == 1 && !v106 )
    {
      v20 = -1073741439;
      v24 = -1073741439;
      v23 = 263680;
      goto LABEL_14;
    }
    if ( (*(_DWORD *)(a5 + 160) & 1) == 0 )
    {
      sub_140AB4550(a5 + 168);
      *(_DWORD *)(a5 + 160) |= 1u;
      v29 = a9;
    }
    BugCheckParameter4_4 = v97 & 2;
    if ( (v97 & 2) == 0 )
    {
      if ( BYTE5(v96) )
      {
        NewDescriptor = (PSECURITY_DESCRIPTOR)(sub_140721BF0(a1, v29, 0LL) + 32);
      }
      else
      {
        if ( (*(_DWORD *)(v17 + 184) & 0x2000000) == 0
          || (v10 = (char *)v101, sub_1406B67A0(*((_BYTE *)KeGetCurrentThread() + 562), 0LL, (int *)(a5 + 16))) )
        {
          v30 = *(void **)(a3 + 64);
        }
        else
        {
          v30 = 0LL;
        }
        v31 = sub_140721BF0(a1, a9, 0LL);
        v32 = SeAssignSecurity(
                (PSECURITY_DESCRIPTOR)(v31 + 32),
                v30,
                &NewDescriptor,
                1u,
                (PSECURITY_SUBJECT_CONTEXT)(a3 + 32),
                (PGENERIC_MAPPING)((char *)CmKeyObjectType + 76),
                *((POOL_TYPE *)CmKeyObjectType + 25));
        v20 = v32;
        if ( v32 < 0 )
        {
          v24 = v32;
          v23 = 264192;
          goto LABEL_14;
        }
        v15 = *(_QWORD *)&BugCheckParameter3[1];
      }
    }
    v33 = a9;
    if ( a9 )
    {
      if ( !(unsigned __int8)sub_140720F74(a2, 0LL) )
      {
        v20 = sub_140657ADC(v17, a9, NewDescriptor);
        if ( v20 >= 0 )
          goto LABEL_183;
        v20 = -1073741772;
        v24 = -1073741772;
        v23 = 263936;
        goto LABEL_14;
      }
      v33 = a9;
    }
    v34 = v106;
    if ( v33 )
      v34 = 1;
    v119 = v34;
    v35 = *(unsigned int *)(v17 + 40);
    if ( (_DWORD)v35 != -1 )
    {
      if ( v34 != (unsigned int)v35 >> 31 )
      {
        sub_14091CEA0(2LL);
        v35 = *(unsigned int *)(v17 + 40);
      }
      v122 = (unsigned int)v35 >> 31;
      if ( !a8 )
      {
        ExAcquirePushLockSharedEx(v18 + 72, 0LL);
        BYTE1(v96) = 1;
        BYTE2(v96) = 1;
        v35 = *(unsigned int *)(v17 + 40);
      }
      if ( (*(_BYTE *)(v18 + 140) & 1) != 0 )
        v36 = (char *)sub_1406BF400(v18, v35, &v110);
      else
        v36 = (char *)sub_1407C9820(v18);
      v10 = v36;
      v101 = v36;
      if ( (unsigned __int16)sub_1406AD650(a4) != *((_WORD *)v36 + 36) )
      {
        sub_14091CEA0(1LL);
        v20 = -1073741822;
        v24 = -1073741822;
        v23 = 264448;
        goto LABEL_14;
      }
      v37 = sub_140716758(v18, *(unsigned int *)(v17 + 40), 0);
      v20 = v37;
      if ( v37 < 0 )
      {
        v24 = v37;
        v23 = 264704;
        goto LABEL_14;
      }
      v38 = sub_14071F300(v18, *(unsigned int *)(*(_QWORD *)&BugCheckParameter3[1] + 40LL));
      v20 = v38;
      if ( v38 < 0 )
      {
        v24 = v38;
        v23 = 264960;
        goto LABEL_14;
      }
      v39 = *(unsigned __int16 *)(a5 + 4);
      if ( (_WORD)v39 )
      {
        v40 = sub_14079C8A4(v18, v39, v122, (unsigned int)BugCheckParameter3, (__int64)&v109, (__int64)&v102);
        v20 = v40;
        if ( v40 < 0 )
        {
          v24 = v40;
          v23 = 265216;
          goto LABEL_14;
        }
        memmove(v109, *(const void **)(a5 + 8), *(unsigned __int16 *)(a5 + 4));
        if ( (*(_BYTE *)(v18 + 140) & 1) != 0 )
          sub_1406BF450(v18, &v102);
        else
          sub_1407C97C0(v18, &v102);
        v109 = 0LL;
      }
      ExAcquirePushLockExclusiveEx(v18 + 1784, 0LL);
      LOBYTE(v96) = 1;
      v41 = sub_140657670(
              v18,
              *(_DWORD *)(v17 + 40),
              (__int64)v10,
              *(_DWORD *)(v17 + 40) >> 31,
              NewDescriptor,
              1,
              &v111);
      v20 = v41;
      if ( v41 < 0 )
      {
        v42 = 265728;
LABEL_75:
        sub_14068038C(a5, v42, v41);
        v43 = 1;
        goto LABEL_184;
      }
      sub_140715D90(v18, *(unsigned int *)(v17 + 40));
      *((_DWORD *)v10 + 11) = v111;
      sub_140AB4484(v18);
      *((_DWORD *)v10 + 12) = BugCheckParameter3[0];
      *((_WORD *)v10 + 37) = *(_WORD *)(a5 + 4);
      BugCheckParameter3[0] = -1;
      sub_14079B8C0(v10 + 76);
      v10[13] |= 3u;
      *((_WORD *)v10 + 1) = v97;
      if ( *((_WORD *)v10 + 36) < *a4 )
        *((_WORD *)v10 + 1) = v97 | 0x20;
      v44 = MEMORY[0xFFFFF78000000014];
      *(_QWORD *)(v10 + 4) = MEMORY[0xFFFFF78000000014];
      ++*(_QWORD *)(v17 + 304);
      sub_14071B4A0(v17);
      if ( (*(_BYTE *)(v18 + 140) & 1) != 0 )
        v45 = sub_1406BF400(v18, *(unsigned int *)(*(_QWORD *)&BugCheckParameter3[1] + 40LL), &v105);
      else
        v45 = sub_1407C9820(v18);
      v46 = v45;
      v108 = v45;
      *(_QWORD *)(v45 + 4) = v44;
      v47 = *(_QWORD *)&BugCheckParameter3[1];
      *(_QWORD *)(*(_QWORD *)&BugCheckParameter3[1] + 168LL) = v44;
      ++*(_QWORD *)(v47 + 304);
      v48 = *((unsigned __int16 *)v10 + 37);
      if ( *(_DWORD *)(v46 + 56) < v48 )
        *(_DWORD *)(v46 + 56) = v48;
      if ( BYTE1(v96) )
      {
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v18 + 72), 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)(v18 + 72));
        sub_1402AFC00(v18 + 72);
        BYTE1(v96) = 0;
      }
      v49 = 0LL;
      goto LABEL_181;
    }
    if ( !a8 )
    {
      ExAcquirePushLockSharedEx(v18 + 72, 0LL);
      BYTE1(v96) = 1;
      BYTE2(v96) = 1;
      v33 = a9;
    }
    if ( v33 )
    {
      v50 = sub_14067EA18();
      v104 = v50;
      v113 = v50;
      if ( !v50 )
      {
        v24 = -1073741670;
        v23 = 265984;
        goto LABEL_13;
      }
      sub_1402A21B0(v50, v15);
      v51 = sub_1402A2204(v104, a9);
      v20 = v51;
      if ( v51 < 0 )
      {
        v24 = v51;
        v23 = 266240;
        goto LABEL_14;
      }
      v52 = sub_14067EA18();
      P = v52;
      v114 = v52;
      if ( !v52 )
      {
        v24 = -1073741670;
        v23 = 266496;
        goto LABEL_13;
      }
      sub_1402A21B0(v52, v17);
      v53 = sub_1402A2204(P, a9);
      v20 = v53;
      if ( v53 < 0 )
      {
        v24 = v53;
        v23 = 266752;
        goto LABEL_14;
      }
      if ( !sub_14067EF3C((unsigned int *)(*(_QWORD *)&BugCheckParameter3[1] + 248LL), (__int64)v104, v54) )
      {
        v24 = -1072103423;
        v23 = 267008;
        goto LABEL_13;
      }
      v55 = P;
      if ( !sub_14067E9B8(v17 + 248, P, 0LL) )
      {
        v24 = -1072103423;
        v23 = 267264;
        goto LABEL_13;
      }
      if ( !sub_14067E9B8(v17 + 264, v55, 1LL) )
      {
        v24 = -1072103423;
        v23 = 267520;
        goto LABEL_13;
      }
    }
    else
    {
      if ( *(_QWORD *)(v15 + 240) )
      {
        if ( (a7 & 2) != 0 )
        {
          v24 = -1072103423;
          v23 = 267648;
        }
        else
        {
          v56 = sub_14091ECE0(v15 + 248, a5 + 120, a5 + 128);
          v20 = v56;
          if ( v56 < 0 )
          {
            v24 = v56;
            v23 = 267776;
            goto LABEL_14;
          }
          sub_1406E9124(*(__int64 *)&BugCheckParameter3[1], a4, 6u, v57, *(_DWORD *)(a5 + 120));
          *(_DWORD *)(a5 + 100) |= 4u;
          v24 = -1073741267;
          v23 = 268032;
        }
        goto LABEL_13;
      }
      if ( *(int *)(v15 + 248) < 0 )
      {
        if ( (a7 & 2) != 0 )
        {
          v24 = -1072103423;
          v23 = 268160;
        }
        else
        {
          v58 = sub_14091ECE0(v15 + 248, a5 + 120, a5 + 128);
          v20 = v58;
          if ( v58 < 0 )
          {
            v24 = v58;
            v23 = 268288;
            goto LABEL_14;
          }
          sub_1406E9124(*(__int64 *)&BugCheckParameter3[1], a4, 6u, v59, *(_DWORD *)(a5 + 120));
          *(_DWORD *)(a5 + 100) |= 4u;
          v24 = -1073741267;
          v23 = 268544;
        }
        goto LABEL_13;
      }
      if ( *(_DWORD *)(v17 + 248) )
      {
        if ( (a7 & 2) != 0 )
        {
          v24 = -1072103423;
          v23 = 268672;
        }
        else
        {
          v60 = sub_14091ECE0(v17 + 248, a5 + 120, a5 + 128);
          v20 = v60;
          if ( v60 < 0 )
          {
            v24 = v60;
            v23 = 268800;
            goto LABEL_14;
          }
          sub_1406E9124(*(__int64 *)&BugCheckParameter3[1], a4, 6u, v61, *(_DWORD *)(a5 + 120));
          *(_DWORD *)(a5 + 100) |= 4u;
          v24 = -1073741267;
          v23 = 269056;
        }
        goto LABEL_13;
      }
      if ( *(_DWORD *)(v17 + 264) )
      {
        if ( (a7 & 2) != 0 )
        {
          v24 = -1072103423;
          v23 = 269184;
        }
        else
        {
          v62 = sub_14091ECE0(v17 + 264, a5 + 120, a5 + 128);
          v20 = v62;
          if ( v62 < 0 )
          {
            v24 = v62;
            v23 = 269312;
            goto LABEL_14;
          }
          sub_1406E9124(*(__int64 *)&BugCheckParameter3[1], a4, 6u, v63, *(_DWORD *)(a5 + 120));
          *(_DWORD *)(a5 + 100) |= 4u;
          v24 = -1073741267;
          v23 = 269568;
        }
        goto LABEL_13;
      }
    }
    v112 = (unsigned __int16)sub_1406AD650(a4) + 76;
    v64 = sub_14079C8A4(v18, v112, v119, (unsigned int)&BugCheckParameter4, (__int64)&v101, (__int64)&v110);
    v20 = v64;
    if ( v64 < 0 )
    {
      v65 = 269824;
LABEL_131:
      sub_14068038C(a5, v65, v64);
LABEL_182:
      v10 = (char *)v101;
      goto LABEL_183;
    }
    v66 = *(unsigned __int16 *)(a5 + 4);
    if ( (_WORD)v66 )
    {
      v64 = sub_14079C8A4(v18, v66, v119, (unsigned int)BugCheckParameter3, (__int64)&v109, (__int64)&v102);
      v20 = v64;
      if ( v64 < 0 )
      {
        v65 = 270080;
        goto LABEL_131;
      }
      memmove(v109, *(const void **)(a5 + 8), *(unsigned __int16 *)(a5 + 4));
      if ( (*(_BYTE *)(v18 + 140) & 1) != 0 )
        sub_1406BF450(v18, &v102);
      else
        sub_1407C97C0(v18, &v102);
      v109 = 0LL;
    }
    v67 = v101;
    memset(v101, 0, v112);
    v68 = 27500;
    if ( !BugCheckParameter4_4 )
      v68 = 27502;
    *(_WORD *)v67 = v68;
    v67[12] = byte_140C097BC;
    v69 = *(_QWORD *)&BugCheckParameter3[1];
    if ( *(_BYTE *)(*(_QWORD *)&BugCheckParameter3[1] + 65LL) == 3 )
      v67[13] |= 3u;
    else
      v67[13] &= 0xFCu;
    *((_WORD *)v67 + 1) = v97;
    v10 = (char *)v101;
    *(_QWORD *)((char *)v101 + 4) = MEMORY[0xFFFFF78000000014];
    *((_DWORD *)v10 + 4) = *(_DWORD *)(v69 + 40);
    *((_DWORD *)v10 + 7) = -1;
    *((_DWORD *)v10 + 8) = -1;
    *((_DWORD *)v10 + 10) = -1;
    *((_DWORD *)v10 + 11) = -1;
    *((_DWORD *)v10 + 12) = BugCheckParameter3[0];
    *((_WORD *)v10 + 37) = *(_WORD *)(a5 + 4);
    BugCheckParameter3[0] = -1;
    v70 = *(_DWORD *)(v69 + 184);
    if ( (v70 & 0x80u) != 0 )
      *((_DWORD *)v10 + 13) ^= (*((_DWORD *)v10 + 13) ^ (v70 << 16)) & 0xF00000;
    v71 = sub_14079B8C0(v10 + 76);
    *((_WORD *)v10 + 36) = v71;
    if ( v71 < *a4 )
      *((_WORD *)v67 + 1) |= 0x20u;
    v72 = BugCheckParameter4_4;
    if ( BugCheckParameter4_4 )
    {
      *(_QWORD *)(v10 + 36) = *(_QWORD *)(a5 + 48);
      *((_DWORD *)v10 + 7) = *(_DWORD *)(a5 + 40);
    }
    BYTE4(v96) = 1;
    if ( !v72 )
    {
      ExAcquirePushLockExclusiveEx(v18 + 1784, 0LL);
      LOBYTE(v96) = 1;
      v41 = sub_140657670(
              v18,
              BugCheckParameter4,
              (__int64)v10,
              BugCheckParameter4 >> 31,
              NewDescriptor,
              0,
              (unsigned int *)v10 + 11);
      v20 = v41;
      if ( v41 < 0 )
      {
        v42 = 270592;
        goto LABEL_75;
      }
      sub_140AB4484(v18);
    }
    v73 = sub_14071F300(v18, *(unsigned int *)(*(_QWORD *)&BugCheckParameter3[1] + 40LL));
    v20 = v73;
    if ( v73 < 0 )
    {
      v74 = 270848;
LABEL_156:
      sub_14068038C(a5, v74, v73);
      v75 = BYTE3(v96);
      goto LABEL_186;
    }
    v76 = a9;
    if ( !a9 )
    {
      v73 = sub_140718244(v18, *(unsigned int *)(*(_QWORD *)&BugCheckParameter3[1] + 40LL), BugCheckParameter4, 0);
      v20 = v73;
      if ( v73 < 0 )
      {
        v74 = 271104;
        goto LABEL_156;
      }
      v76 = 0LL;
    }
    BYTE3(v96) = 1;
    *(_DWORD *)(v17 + 40) = BugCheckParameter4;
    BugCheckParameter4 = -1;
    *(_QWORD *)(v17 + 240) = v76;
    if ( (v97 & 0x40) == 0 )
    {
      *(_DWORD *)(v17 + 96) = *((_DWORD *)v10 + 9);
      *(_DWORD *)(v17 + 100) = *((_DWORD *)v10 + 10);
    }
    ++*(_QWORD *)(v17 + 304);
    sub_14071B4A0(v17);
    if ( !BugCheckParameter4_4 )
      sub_14071B640(v17, *((unsigned int *)v10 + 11), 0);
    if ( v76 )
    {
      v77 = P;
      *((_DWORD *)P + 17) = 0;
      v77[18] = v106;
      v78 = v104;
      *((_QWORD *)v77 + 10) = v104;
      v78[17] = 1;
      *((_QWORD *)v78 + 11) = v17;
      v73 = sub_14071784C((__int64)v77, 1u);
      v20 = v73;
      if ( v73 < 0 )
      {
        v74 = 271360;
        goto LABEL_156;
      }
      P = 0LL;
      v104 = 0LL;
    }
    v79 = *(_QWORD *)&BugCheckParameter3[1];
    v80 = *(_QWORD *)(*(_QWORD *)&BugCheckParameter3[1] + 32LL);
    if ( (*(_BYTE *)(v80 + 140) & 1) != 0 )
      v81 = sub_1406BF400(v80, *(unsigned int *)(*(_QWORD *)&BugCheckParameter3[1] + 40LL), &v105);
    else
      v81 = sub_1407C9820(v80);
    v82 = v81;
    v108 = v81;
    sub_140722534(*(_QWORD *)(v79 + 32), v81, *(unsigned int *)(v79 + 40));
    *(_QWORD *)(v82 + 4) = MEMORY[0xFFFFF78000000014];
    v83 = *a4;
    if ( (unsigned __int16)*(_DWORD *)(v82 + 52) < (unsigned int)v83 )
      *(_WORD *)(v82 + 52) = v83;
    v84 = *(unsigned __int16 *)(a5 + 4);
    if ( *(_DWORD *)(v82 + 56) < v84 )
      *(_DWORD *)(v82 + 56) = v84;
    ++*(_QWORD *)(v79 + 304);
    *(_WORD *)(v79 + 176) = *(_WORD *)(v82 + 52);
    *(_QWORD *)(v79 + 168) = *(_QWORD *)(v82 + 4);
    LOBYTE(v83) = 1;
    sub_14071B5A0(v79, v83);
    if ( BYTE1(v96) )
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v18 + 72), 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(v18 + 72));
      sub_1402AFC00(v18 + 72);
      BYTE1(v96) = 0;
    }
    v49 = a9;
LABEL_181:
    sub_140721878(a1, v49, 1LL, 0LL, SubjectContext, GenericMapping, *(_QWORD *)PoolType, v95, v96);
    v20 = 0;
    goto LABEL_182;
  }
  v19 = -1072103423;
  v20 = -1072103423;
  v21 = 262400;
LABEL_4:
  v22 = (_DWORD *)a5;
  sub_14068038C(a5, v21, v19);
LABEL_183:
  v43 = 0;
LABEL_184:
  v75 = 0;
  if ( v43 )
  {
    sub_140AB4484(v18);
    v75 = 0;
  }
LABEL_186:
  if ( v75 )
  {
    BugCheckParameter4 = *(_DWORD *)(v17 + 40);
    *(_DWORD *)(v17 + 40) = -1;
    *(_DWORD *)(v17 + 96) = 0;
    *(_DWORD *)(v17 + 100) = -1;
    *(_WORD *)(v17 + 186) = 0;
    *(_DWORD *)(v17 + 112) = 0;
    *(_QWORD *)(v17 + 168) = 0LL;
    *(_QWORD *)(v17 + 176) = 0LL;
    *(_DWORD *)(v17 + 184) &= 0xFFFFFF00;
    *(_BYTE *)(v17 + 185) = 0;
    *(_QWORD *)(v17 + 240) = 0LL;
    *(_QWORD *)(v17 + 88) = 0LL;
  }
  v85 = P;
  if ( P )
  {
    sub_14071C120((ULONG_PTR)P);
    ExFreePoolWithTag(v85, 0x77554D43u);
  }
  v86 = v104;
  if ( v104 )
  {
    sub_14071C120((ULONG_PTR)v104);
    ExFreePoolWithTag(v86, 0x77554D43u);
  }
  v87 = NewDescriptor;
  if ( NewDescriptor && !BYTE5(v96) )
  {
    if ( (*v22 & 1) != 0 && (v22[6] & 4) != 0 )
    {
      SeDeassignSecurity(&NewDescriptor);
    }
    else
    {
      v88 = *(_QWORD *)(a3 + 72);
      v89 = *(void **)(v88 + 48);
      if ( v89 )
        ExFreePoolWithTag(v89, 0);
      *(_QWORD *)(v88 + 48) = v87;
    }
  }
  if ( v108 )
  {
    v90 = *(_QWORD *)(*(_QWORD *)&BugCheckParameter3[1] + 32LL);
    if ( (*(_BYTE *)(v90 + 140) & 1) != 0 )
      sub_1406BF450(v90, &v105);
    else
      sub_1407C97C0(v90, &v105);
  }
  if ( v109 )
  {
    if ( (*(_BYTE *)(v18 + 140) & 1) != 0 )
      sub_1406BF450(v18, &v102);
    else
      sub_1407C97C0(v18, &v102);
  }
  if ( BugCheckParameter3[0] != -1 )
    sub_14079BD98(v18, BugCheckParameter3[0]);
  if ( v10 )
  {
    if ( (*(_BYTE *)(v18 + 140) & 1) != 0 )
      sub_1406BF450(v18, &v110);
    else
      sub_1407C97C0(v18, &v110);
  }
  if ( BugCheckParameter4 != -1 )
  {
    if ( BYTE4(v96) )
      sub_1407164DC(v18, BugCheckParameter4, 0);
    else
      sub_14079BD98(v18, BugCheckParameter4);
  }
  if ( BYTE1(v96) )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v18 + 72), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v18 + 72));
    sub_1402AFC00(v18 + 72);
  }
  return (unsigned int)v20;
}
