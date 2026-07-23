/*
 * XREFs of sub_140714E58 @ 0x140714E58
 * Callers:
 *     sub_140714980 @ 0x140714980 (sub_140714980.c)
 * Callees:
 *     SeFreePrivileges @ 0x140208AC0 (SeFreePrivileges.c)
 *     sub_1402A21B0 @ 0x1402A21B0 (sub_1402A21B0.c)
 *     sub_1402A2204 @ 0x1402A2204 (sub_1402A2204.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     InitializeListHead @ 0x1402AD320 (InitializeListHead.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_140346C60 @ 0x140346C60 (sub_140346C60.c)
 *     sub_140346D64 @ 0x140346D64 (sub_140346D64.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14067E9B8 @ 0x14067E9B8 (sub_14067E9B8.c)
 *     sub_14067EA18 @ 0x14067EA18 (sub_14067EA18.c)
 *     sub_14067EF3C @ 0x14067EF3C (sub_14067EF3C.c)
 *     sub_14067F480 @ 0x14067F480 (sub_14067F480.c)
 *     sub_1406BEFA0 @ 0x1406BEFA0 (sub_1406BEFA0.c)
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_1406C01F4 @ 0x1406C01F4 (sub_1406C01F4.c)
 *     sub_1406C8F10 @ 0x1406C8F10 (sub_1406C8F10.c)
 *     sub_1406E9124 @ 0x1406E9124 (sub_1406E9124.c)
 *     sub_140716D50 @ 0x140716D50 (sub_140716D50.c)
 *     sub_14071784C @ 0x14071784C (sub_14071784C.c)
 *     sub_140719010 @ 0x140719010 (sub_140719010.c)
 *     sub_14071C120 @ 0x14071C120 (sub_14071C120.c)
 *     sub_14071EE7C @ 0x14071EE7C (sub_14071EE7C.c)
 *     sub_14071F300 @ 0x14071F300 (sub_14071F300.c)
 *     sub_14071F6D0 @ 0x14071F6D0 (sub_14071F6D0.c)
 *     sub_140721878 @ 0x140721878 (sub_140721878.c)
 *     sub_140721BAC @ 0x140721BAC (sub_140721BAC.c)
 *     sub_140721CE0 @ 0x140721CE0 (sub_140721CE0.c)
 *     sub_1407221B0 @ 0x1407221B0 (sub_1407221B0.c)
 *     sub_140722534 @ 0x140722534 (sub_140722534.c)
 *     sub_14079B22C @ 0x14079B22C (sub_14079B22C.c)
 *     sub_14079BD98 @ 0x14079BD98 (sub_14079BD98.c)
 *     sub_14079CF44 @ 0x14079CF44 (sub_14079CF44.c)
 *     sub_1407C05F4 @ 0x1407C05F4 (sub_1407C05F4.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C97FC @ 0x1407C97FC (sub_1407C97FC.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 *     sub_140914BEC @ 0x140914BEC (sub_140914BEC.c)
 *     sub_140918BC4 @ 0x140918BC4 (sub_140918BC4.c)
 *     sub_14091BC64 @ 0x14091BC64 (sub_14091BC64.c)
 *     sub_14091ECE0 @ 0x14091ECE0 (sub_14091ECE0.c)
 *     sub_140921930 @ 0x140921930 (sub_140921930.c)
 *     sub_1409226E0 @ 0x1409226E0 (sub_1409226E0.c)
 *     sub_1409C6D8C @ 0x1409C6D8C (sub_1409C6D8C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     sub_140AB4248 @ 0x140AB4248 (sub_140AB4248.c)
 *     sub_140AB4260 @ 0x140AB4260 (sub_140AB4260.c)
 *     sub_140AB4370 @ 0x140AB4370 (sub_140AB4370.c)
 *     sub_140AB4550 @ 0x140AB4550 (sub_140AB4550.c)
 *     sub_140AB4580 @ 0x140AB4580 (sub_140AB4580.c)
 *     sub_140AB45A0 @ 0x140AB45A0 (sub_140AB45A0.c)
 */

__int64 __fastcall sub_140714E58(__int64 a1, _WORD *a2, __int64 a3, char a4)
{
  char v4; // r15
  __int64 v5; // r13
  ULONG_PTR v6; // rsi
  __int64 v7; // rbx
  int v8; // edi
  __int64 v9; // rdi
  char v10; // r14
  unsigned int v11; // r12d
  __int64 v12; // r13
  ULONG_PTR v13; // rcx
  __int64 v14; // r9
  unsigned int v15; // ebx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  PPRIVILEGE_SET v19; // rcx
  __int64 v20; // r8
  char v21; // al
  _QWORD *v22; // r12
  ULONG_PTR v23; // rdx
  __int64 v24; // rbx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  _QWORD *v30; // rax
  __int64 v31; // r8
  __int64 v32; // rdi
  __int16 v33; // r15
  __int16 v34; // r8
  __int64 v35; // r14
  int v36; // eax
  char v37; // al
  ULONG_PTR v38; // rdx
  int v39; // eax
  bool v40; // zf
  ULONG_PTR v41; // rcx
  int v42; // eax
  __int64 v43; // rcx
  int v44; // edx
  ULONG_PTR v45; // rcx
  __int64 v46; // rax
  __int64 v47; // r13
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // rcx
  __int64 v51; // r14
  ULONG_PTR v52; // rcx
  __int64 v53; // rax
  __int64 v54; // r8
  __int64 v55; // rcx
  ULONG_PTR v56; // rcx
  ULONG_PTR v57; // rdx
  ULONG_PTR v58; // rcx
  __int64 v59; // rax
  __int64 v60; // rcx
  __int64 v61; // r14
  int v62; // eax
  ULONG_PTR v63; // rcx
  __int64 v64; // rax
  _WORD *v65; // r12
  unsigned int v66; // eax
  int v67; // ecx
  __int64 v68; // rcx
  __int64 v69; // rbx
  _DWORD *v70; // rcx
  int v71; // eax
  __int64 v72; // rbx
  __int64 v73; // rcx
  char v74; // al
  __int64 v75; // [rsp+20h] [rbp-E0h]
  __int64 v76; // [rsp+28h] [rbp-D8h]
  __int64 v77; // [rsp+30h] [rbp-D0h]
  __int64 v78; // [rsp+38h] [rbp-C8h]
  __int64 v79; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v80; // [rsp+48h] [rbp-B8h]
  char v81; // [rsp+50h] [rbp-B0h]
  _DWORD BugCheckParameter4[3]; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v83; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v84[3]; // [rsp+64h] [rbp-9Ch] BYREF
  __int64 v85; // [rsp+70h] [rbp-90h]
  __int64 v86; // [rsp+78h] [rbp-88h] BYREF
  __int64 v87; // [rsp+80h] [rbp-80h] BYREF
  int v88; // [rsp+88h] [rbp-78h] BYREF
  __int64 v89; // [rsp+90h] [rbp-70h] BYREF
  __int128 v90; // [rsp+98h] [rbp-68h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+A8h] [rbp-58h]
  __int64 v92; // [rsp+B8h] [rbp-48h] BYREF
  PVOID P; // [rsp+C0h] [rbp-40h]
  _WORD *v94; // [rsp+C8h] [rbp-38h]
  void *v95; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD v96[2]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v97; // [rsp+F0h] [rbp-10h]
  _LIST_ENTRY ListHead; // [rsp+F8h] [rbp-8h] BYREF
  _OWORD v99[2]; // [rsp+108h] [rbp+8h] BYREF
  _OWORD v100[3]; // [rsp+128h] [rbp+28h] BYREF

  v4 = 0;
  v80 = a1;
  v81 = a4;
  v97 = a3;
  v96[1] = v96;
  v5 = a1;
  v94 = a2;
  v96[0] = v96;
  v83 = 0;
  v90 = 0LL;
  WORD1(v90) = -1;
  v6 = 0LL;
  v92 = 0LL;
  v86 = 0LL;
  v89 = 0LL;
  *(_QWORD *)&BugCheckParameter4[1] = 0LL;
  memset(v100, 0, sizeof(v100));
  P = 0LL;
  BYTE1(v79) = 0;
  v88 = 0;
  ListHead = 0LL;
  v87 = 0LL;
  *(_OWORD *)Privileges = 0LL;
  v85 = 0LL;
  sub_1407C97FC(&v86);
  sub_1407C97FC(&v89);
  *(_QWORD *)&v84[1] = 0LL;
  sub_1407C97FC(&BugCheckParameter4[1]);
  BugCheckParameter4[0] = -1;
  v84[0] = -1;
  InitializeListHead(&ListHead);
  v95 = 0LL;
  memset(v99, 0, sizeof(v99));
  sub_140AB4550(v100);
  if ( (unsigned __int8)sub_140AB4248() )
  {
LABEL_20:
    v8 = -1073741431;
    LOBYTE(v79) = 0;
LABEL_21:
    v10 = 0;
    goto LABEL_22;
  }
  while ( 1 )
  {
    v7 = MEMORY[0xFFFFF78000000014];
    sub_140AB4370();
    v6 = *(_QWORD *)(v5 + 8);
    LOBYTE(v79) = 1;
    if ( (*(_DWORD *)(*(_QWORD *)(v6 + 32) + 160LL) & 0x100000) != 0 )
    {
      v8 = -1073741790;
      goto LABEL_21;
    }
    v8 = sub_1407C05F4(&v90, v6);
    if ( v8 < 0 )
      goto LABEL_21;
    sub_14071F6D0(&v90);
    v9 = v80;
    v10 = 1;
    if ( *(_QWORD *)(v80 + 56) || *(_QWORD *)(v80 + 64) )
    {
      if ( (unsigned __int8)sub_140AB45A0(v80, 0LL) )
      {
        v74 = *(_BYTE *)(v9 + 48) & 1;
        goto LABEL_163;
      }
      v8 = sub_14067F480((_QWORD *)v9, &v87);
      if ( v8 < 0 )
        goto LABEL_138;
      if ( (*(_DWORD *)(*(_QWORD *)(v6 + 32) + 160LL) & 2) != 0 )
      {
        v8 = -1072103423;
        goto LABEL_138;
      }
      v9 = v80;
    }
    v11 = BugCheckParameter4[0];
LABEL_11:
    v12 = v87;
    if ( (unsigned __int8)sub_140AB45A0(v9, v87) )
    {
      v10 = 1;
      v74 = *(_BYTE *)(v9 + 48) & 1;
LABEL_163:
      v8 = v74 != 0 ? -1073740763 : -1073741444;
      goto LABEL_138;
    }
    if ( v12 )
      break;
    v13 = v6 + 248;
    if ( *(int *)(v6 + 248) >= 0 )
    {
      v13 = v6 + 264;
      if ( !*(_DWORD *)(v6 + 264) )
        goto LABEL_57;
    }
    v8 = sub_14091ECE0(v13, &v83, &v92);
    if ( v8 < 0 )
    {
      v10 = 1;
      goto LABEL_138;
    }
    v15 = v83;
    sub_1406E9124(v6, 0LL, 1u, v14, v83);
    sub_140721BAC(&v90);
    v19 = Privileges[1];
    v10 = 0;
    if ( Privileges[1] )
      SeFreePrivileges(Privileges[1]);
    v90 = 0LL;
    WORD1(v90) = -1;
    *(_OWORD *)Privileges = 0LL;
    sub_140AB4260(v19, v16, v17, v18);
    LOBYTE(v79) = 0;
    v8 = sub_14091BC64(v15, v92, v20, &v88);
    if ( v8 < 0 )
      goto LABEL_138;
    v21 = sub_140AB4248();
    v5 = v80;
    if ( v21 )
      goto LABEL_20;
  }
  v30 = sub_14067EA18();
  P = v30;
  v22 = v30;
  if ( v30 )
  {
    sub_1402A21B0(v30, v6);
    v8 = sub_1402A2204(v22, v12);
    if ( v8 < 0 )
    {
      v10 = 1;
      goto LABEL_158;
    }
    v10 = 1;
    if ( !sub_14067EF3C((unsigned int *)(v6 + 248), (__int64)v22, v31) || !sub_14067E9B8(v6 + 264, v22, 1LL) )
    {
      v8 = -1072103423;
LABEL_158:
      v5 = v80;
LABEL_23:
      sub_14071C120((ULONG_PTR)v22);
      ExFreePoolWithTag(v22, 0x77554D43u);
      goto LABEL_24;
    }
    ExAcquirePushLockSharedEx(*(_QWORD *)(v6 + 32) + 72LL, 0LL);
    v4 = 1;
    v8 = sub_1406C8F10(v6, v12, (_BYTE *)&v79 + 1);
    if ( v8 < 0 )
      goto LABEL_158;
    v32 = *(_QWORD *)(v6 + 32);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v32 + 72), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v32 + 72));
    sub_1402AFC00(v32 + 72);
    v11 = BugCheckParameter4[0];
    v12 = v87;
    v9 = v80;
LABEL_57:
    v33 = *(_WORD *)(v6 + 66);
    if ( v33 >= 0 )
    {
      while ( 1 )
      {
        v35 = sub_140721CE0(&v90, (unsigned __int16)v33);
        v36 = *(__int16 *)(v35 + 66);
        if ( v36 == *(unsigned __int16 *)(v9 + 4) )
        {
          v37 = *(_BYTE *)(v35 + 65);
          if ( !v37 )
            goto LABEL_64;
        }
        else
        {
          if ( !(_WORD)v36 )
            goto LABEL_64;
          v37 = *(_BYTE *)(v35 + 65);
        }
        if ( v37 == (_BYTE)v34 )
          goto LABEL_83;
LABEL_64:
        v38 = *(unsigned int *)(v35 + 40);
        if ( (_DWORD)v38 != -1 )
        {
          if ( v12 && *(_QWORD *)(v35 + 288) == v12 )
          {
            v39 = sub_1407221B0(*(_QWORD *)(v35 + 32), (__int64)v84, (__int64)BugCheckParameter4);
            v8 = v39;
            if ( v39 >= 0 )
              goto LABEL_88;
            v40 = v39 == -1073741772;
          }
          else
          {
            v41 = *(_QWORD *)(v35 + 32);
            if ( ((unsigned __int8)v34 & *(_BYTE *)(v41 + 140)) != 0 )
              sub_1406BF400(v41, v38, &v89);
            else
              sub_1407C9820(v41);
            v42 = sub_1407221B0(*(_QWORD *)(v35 + 32), (__int64)v84, (__int64)BugCheckParameter4);
            v43 = *(_QWORD *)(v35 + 32);
            v8 = v42;
            if ( (*(_BYTE *)(v43 + 140) & 1) != 0 )
              sub_1406BF450(v43, &v89);
            else
              sub_1407C97C0(v43, &v89);
            if ( v8 >= 0 )
            {
LABEL_88:
              v11 = BugCheckParameter4[0];
              *(_QWORD *)&v84[1] = v35;
              goto LABEL_85;
            }
            v40 = v8 == -1073741772;
          }
          if ( !v40 )
          {
            v10 = 1;
            v4 = 0;
            goto LABEL_138;
          }
          v9 = v80;
          v44 = *(__int16 *)(v35 + 66);
          if ( v44 == *(unsigned __int16 *)(v80 + 4) || (_WORD)v44 && *(_BYTE *)(v35 + 65) )
          {
LABEL_83:
            v11 = BugCheckParameter4[0];
            break;
          }
          v34 = 1;
        }
        v33 -= v34;
        if ( v33 < 0 )
          goto LABEL_83;
      }
    }
    v35 = *(_QWORD *)&v84[1];
LABEL_85:
    if ( v11 == -1 )
    {
      v8 = -1073741772;
      v10 = 1;
      v4 = 0;
      goto LABEL_138;
    }
    v45 = *(_QWORD *)(v35 + 32);
    if ( (*(_BYTE *)(v45 + 140) & 1) != 0 )
      v46 = sub_1406BF400(v45, v11, &BugCheckParameter4[1]);
    else
      v46 = sub_1407C9820(v45);
    v47 = v46;
    v4 = 0;
    if ( sub_1406C01F4(*(_QWORD *)(v35 + 32), v46) )
    {
      v8 = -1073741772;
      goto LABEL_150;
    }
    if ( (*(_BYTE *)(v48 + 140) & 1) != 0 )
      sub_1406BF450(v48, &BugCheckParameter4[1]);
    else
      sub_1407C97C0(v48, &BugCheckParameter4[1]);
    v47 = 0LL;
    if ( *(_DWORD *)(v6 + 40) != -1 )
    {
      v50 = *(_QWORD *)(v6 + 32);
      ++*(_QWORD *)(v6 + 304);
      ExAcquirePushLockSharedEx(v50 + 72, 0LL);
      v51 = v87;
      v4 = 1;
      if ( !v87 )
      {
        v8 = sub_14071F300(*(_QWORD *)(v6 + 32), *(unsigned int *)(v6 + 40));
        v10 = 1;
        if ( v8 < 0 )
        {
LABEL_138:
          v5 = v80;
LABEL_22:
          v22 = P;
          if ( !P )
            goto LABEL_24;
          goto LABEL_23;
        }
        v51 = v87;
      }
      v52 = *(_QWORD *)(v6 + 32);
      if ( (*(_BYTE *)(v52 + 140) & 1) != 0 )
        v53 = sub_1406BF400(v52, *(unsigned int *)(v6 + 40), &v86);
      else
        v53 = sub_1407C9820(v52);
      v54 = *(unsigned int *)(v6 + 40);
      v55 = *(_QWORD *)(v6 + 32);
      v85 = v53;
      sub_140722534(v55, v53, v54);
      if ( !v81
        || (v8 = sub_140918BC4(&v90, v51, 843140419LL, &v95), v8 >= 0)
        && (v8 = sub_140921930(*(_QWORD *)(*(_QWORD *)&v84[1] + 32LL), v11), v8 >= 0) )
      {
        v56 = *(_QWORD *)(v6 + 32);
        if ( v51 )
        {
          v10 = 1;
          if ( (*(_BYTE *)(v56 + 140) & 1) != 0 )
            sub_1406BF450(v56, &v86);
          else
            sub_1407C97C0(v56, &v86);
          v69 = *(_QWORD *)(v6 + 32);
          v85 = 0LL;
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v69 + 72), 0LL, 17LL) != 17 )
            ExfReleasePushLockShared((signed __int64 *)(v69 + 72));
          sub_1402AFC00(v69 + 72);
          v70 = P;
          v71 = BugCheckParameter4[0];
          v4 = 0;
          *((_DWORD *)P + 17) = 6;
          v70[22] = v71;
          v8 = sub_14071784C(v70, 1LL);
          if ( v8 < 0 )
            goto LABEL_138;
          ExAcquirePushLockSharedEx(*(_QWORD *)(v6 + 32) + 72LL, 0LL);
          sub_1406BEFA0(*(_QWORD *)(v6 + 32), v84[0], (unsigned int *)(v6 + 280));
          goto LABEL_146;
        }
        v57 = *(unsigned int *)(v6 + 40);
        if ( *(_WORD *)(v6 + 66) )
        {
          v35 = *(_QWORD *)&v84[1];
          v62 = sub_14071F300(v56, v57);
          v8 = v62;
          if ( v6 == v35 )
          {
            if ( v62 >= 0 )
            {
              v8 = sub_14071F300(*(_QWORD *)(v6 + 32), v11);
              if ( v8 >= 0 )
              {
                v63 = *(_QWORD *)(v6 + 32);
                if ( (*(_BYTE *)(v63 + 140) & 1) != 0 )
                  v64 = sub_1406BF400(v63, v11, &BugCheckParameter4[1]);
                else
                  v64 = sub_1407C9820(v63);
                v47 = v64;
                v8 = sub_140716D50(*(_QWORD *)(v6 + 32));
                if ( v8 < 0 )
                  goto LABEL_150;
                sub_14079CF44(*(_QWORD *)(v6 + 32), *(unsigned int *)(v47 + 8));
                *(_DWORD *)(v47 + 8) = -1;
                *(_WORD *)(v47 + 16) |= 2u;
                v61 = v85;
                *(_DWORD *)(v47 + 12) = 0;
                *(_DWORD *)(v47 + 4) = 0;
                *(_QWORD *)(v61 + 4) = v7;
                *(_QWORD *)(v6 + 168) = v7;
                goto LABEL_134;
              }
            }
          }
          else if ( v62 >= 0 )
          {
            v61 = v85;
            v65 = v94;
            v8 = sub_140914BEC(
                   *(_QWORD *)(v6 + 32),
                   v85,
                   (_DWORD)v94,
                   *(_DWORD *)(v85 + 36),
                   *(_DWORD *)(v6 + 40) >> 31);
            if ( v8 >= 0 )
            {
              *(_QWORD *)(v61 + 4) = v7;
              *(_QWORD *)(v6 + 168) = v7;
              v66 = (unsigned __int16)*v65;
              if ( *(_DWORD *)(v61 + 60) < v66 )
              {
                *(_DWORD *)(v61 + 60) = v66;
                *(_WORD *)(v6 + 178) = *v65;
              }
              goto LABEL_134;
            }
          }
        }
        else
        {
          v8 = sub_14071F300(v56, v57);
          if ( v8 >= 0 )
          {
            v8 = sub_14071F300(*(_QWORD *)(v6 + 32), *(unsigned int *)(v6 + 100));
            if ( v8 >= 0 )
            {
              v8 = sub_14071F300(*(_QWORD *)(v6 + 32), v11);
              if ( v8 >= 0 )
              {
                v35 = *(_QWORD *)&v84[1];
                v58 = *(_QWORD *)(*(_QWORD *)&v84[1] + 32LL);
                if ( (*(_BYTE *)(v58 + 140) & 1) != 0 )
                  v59 = sub_1406BF400(v58, v11, &BugCheckParameter4[1]);
                else
                  v59 = sub_1407C9820(v58);
                v47 = v59;
                v8 = sub_140716D50(*(_QWORD *)(v35 + 32));
                if ( v8 < 0 )
                  goto LABEL_150;
                v60 = *(_QWORD *)(v35 + 32);
                if ( (*(_BYTE *)(v60 + 140) & 1) != 0 )
                  sub_1406BF450(v60, &BugCheckParameter4[1]);
                else
                  sub_1407C97C0(v60, &BugCheckParameter4[1]);
                v61 = v85;
                v47 = 0LL;
                sub_1406BEFA0(*(_QWORD *)(v6 + 32), v84[0], (unsigned int *)(v85 + 36));
                sub_14079B22C(*(_QWORD *)(v6 + 32), v11);
                *(_QWORD *)(v61 + 4) = v7;
                *(_QWORD *)(v6 + 168) = v7;
                if ( !*(_DWORD *)(v61 + 36) )
                {
                  *(_DWORD *)(v61 + 60) = 0;
                  *(_WORD *)(v6 + 178) = 0;
                  *(_DWORD *)(v61 + 64) = 0;
                  *(_DWORD *)(v6 + 180) = 0;
                }
LABEL_134:
                sub_14071EE7C(v6, &ListHead);
                v67 = *(_DWORD *)(v61 + 40);
                *(_DWORD *)(v6 + 96) = *(_DWORD *)(v61 + 36);
                *(_DWORD *)(v6 + 100) = v67;
LABEL_146:
                v72 = *(_QWORD *)(v6 + 32);
                if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v72 + 72), 0LL, 17LL) != 17 )
                  ExfReleasePushLockShared((signed __int64 *)(v72 + 72));
                sub_1402AFC00(v72 + 72);
                P = 0LL;
                BYTE1(v79) = 0;
                v4 = 0;
                sub_140721878(&v90, v87, 4LL, v96, v75, v76, v77, v78, v79);
                v35 = *(_QWORD *)&v84[1];
                v8 = 0;
LABEL_150:
                if ( v47 )
                {
                  v73 = *(_QWORD *)(v35 + 32);
                  if ( (*(_BYTE *)(v73 + 140) & 1) != 0 )
                    sub_1406BF450(v73, &BugCheckParameter4[1]);
                  else
                    sub_1407C97C0(v73, &BugCheckParameter4[1]);
                }
              }
            }
          }
        }
      }
      v10 = 1;
      if ( v85 )
      {
        v68 = *(_QWORD *)(v6 + 32);
        if ( (*(_BYTE *)(v68 + 140) & 1) != 0 )
          sub_1406BF450(v68, &v86);
        else
          sub_1407C97C0(v68, &v86);
      }
      goto LABEL_138;
    }
    sub_140721BAC(&v90);
    LOBYTE(v49) = 1;
    v10 = 0;
    v8 = sub_1409226E0(&v90, 0LL, v49);
    if ( v8 < 0 )
      goto LABEL_138;
    v9 = v80;
    goto LABEL_11;
  }
  v5 = v80;
  v8 = -1073741670;
  v10 = 1;
LABEL_24:
  if ( BYTE1(v79) )
  {
    v23 = *(unsigned int *)(v6 + 284);
    if ( (_DWORD)v23 != -1 )
      sub_14079BD98(*(_QWORD *)(v6 + 32), v23);
    *(_DWORD *)(v6 + 284) = -1;
    *(_DWORD *)(v6 + 280) = 0;
    *(_QWORD *)(v6 + 288) = 0LL;
  }
  if ( v4 )
  {
    v24 = *(_QWORD *)(v6 + 32);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v24 + 72), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v24 + 72));
    sub_1402AFC00(v24 + 72);
  }
  if ( v10 )
    sub_140721BAC(&v90);
  sub_140346C60(&ListHead);
  if ( (_BYTE)v79 )
    sub_140AB4260(v26, v25, v27, v28);
  if ( (_QWORD *)v96[0] != v96 )
    sub_140719010(v96);
  sub_140AB4580(v100);
  if ( v8 >= 0 && v81 && v95 )
    sub_1409C6D8C(0, (_DWORD)v95, 0, (_DWORD)v94, v5, v97, (__int64)v99, 2);
  if ( *((_QWORD *)&v99[0] + 1) )
    sub_140346D64(*((void **)&v99[0] + 1), 0x34414D43u);
  if ( v95 )
    sub_140346D64(v95, 0x33414D43u);
  if ( Privileges[1] )
    SeFreePrivileges(Privileges[1]);
  return (unsigned int)v8;
}
