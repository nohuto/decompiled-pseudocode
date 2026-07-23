/*
 * XREFs of sub_14067E1BC @ 0x14067E1BC
 * Callers:
 *     sub_14067DE90 @ 0x14067DE90 (sub_14067DE90.c)
 * Callees:
 *     SeFreePrivileges @ 0x140208AC0 (SeFreePrivileges.c)
 *     sub_1402A21B0 @ 0x1402A21B0 (sub_1402A21B0.c)
 *     sub_1402A2204 @ 0x1402A2204 (sub_1402A2204.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     InitializeListHead @ 0x1402AD320 (InitializeListHead.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_140346C60 @ 0x140346C60 (sub_140346C60.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14053F5E8 @ 0x14053F5E8 (sub_14053F5E8.c)
 *     sub_14067E828 @ 0x14067E828 (sub_14067E828.c)
 *     sub_14067E8A8 @ 0x14067E8A8 (sub_14067E8A8.c)
 *     sub_14067E8E0 @ 0x14067E8E0 (sub_14067E8E0.c)
 *     sub_14067E974 @ 0x14067E974 (sub_14067E974.c)
 *     sub_14067E9B8 @ 0x14067E9B8 (sub_14067E9B8.c)
 *     sub_14067EA18 @ 0x14067EA18 (sub_14067EA18.c)
 *     sub_14067EB68 @ 0x14067EB68 (sub_14067EB68.c)
 *     sub_14067EDC0 @ 0x14067EDC0 (sub_14067EDC0.c)
 *     sub_14067EE40 @ 0x14067EE40 (sub_14067EE40.c)
 *     sub_14067EF3C @ 0x14067EF3C (sub_14067EF3C.c)
 *     sub_14067F480 @ 0x14067F480 (sub_14067F480.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_1406E93C0 @ 0x1406E93C0 (sub_1406E93C0.c)
 *     sub_1407164DC @ 0x1407164DC (sub_1407164DC.c)
 *     sub_14071784C @ 0x14071784C (sub_14071784C.c)
 *     sub_140719010 @ 0x140719010 (sub_140719010.c)
 *     sub_14071B5A0 @ 0x14071B5A0 (sub_14071B5A0.c)
 *     sub_14071B6EC @ 0x14071B6EC (sub_14071B6EC.c)
 *     sub_14071BB4C @ 0x14071BB4C (sub_14071BB4C.c)
 *     sub_14071C050 @ 0x14071C050 (sub_14071C050.c)
 *     sub_14071C120 @ 0x14071C120 (sub_14071C120.c)
 *     sub_14071F6D0 @ 0x14071F6D0 (sub_14071F6D0.c)
 *     sub_140721878 @ 0x140721878 (sub_140721878.c)
 *     sub_140721BAC @ 0x140721BAC (sub_140721BAC.c)
 *     sub_140721FD0 @ 0x140721FD0 (sub_140721FD0.c)
 *     sub_1407C05F4 @ 0x1407C05F4 (sub_1407C05F4.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C97FC @ 0x1407C97FC (sub_1407C97FC.c)
 *     sub_14091BC64 @ 0x14091BC64 (sub_14091BC64.c)
 *     sub_14091CB44 @ 0x14091CB44 (sub_14091CB44.c)
 *     sub_14091CF4C @ 0x14091CF4C (sub_14091CF4C.c)
 *     sub_14091ECE0 @ 0x14091ECE0 (sub_14091ECE0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     sub_140AB4248 @ 0x140AB4248 (sub_140AB4248.c)
 *     sub_140AB4260 @ 0x140AB4260 (sub_140AB4260.c)
 *     sub_140AB4370 @ 0x140AB4370 (sub_140AB4370.c)
 *     sub_140AB4550 @ 0x140AB4550 (sub_140AB4550.c)
 *     sub_140AB4580 @ 0x140AB4580 (sub_140AB4580.c)
 *     sub_140AB45A0 @ 0x140AB45A0 (sub_140AB45A0.c)
 */

__int64 __fastcall sub_14067E1BC(_QWORD *a1)
{
  char v1; // r12
  char v3; // di
  ULONG_PTR v4; // r15
  __int64 v5; // rbx
  ULONG_PTR v6; // r14
  ULONG_PTR v7; // rsi
  __int64 v8; // r12
  int v9; // edi
  char v10; // di
  char v11; // al
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rax
  __int64 v15; // rdx
  int *v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // rax
  __int64 v23; // rcx
  char v24; // bl
  __int64 v25; // rbx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  char v31; // al
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // rbx
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // r9
  PPRIVILEGE_SET v40; // rcx
  char v41; // al
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // r8
  __int64 v47; // rdx
  __int64 v48; // r8
  __int64 v49; // rax
  __int64 v50; // rcx
  __int64 v51; // [rsp+28h] [rbp-E0h]
  __int64 v52; // [rsp+30h] [rbp-D8h]
  __int64 v53; // [rsp+38h] [rbp-D0h]
  __int64 v54; // [rsp+40h] [rbp-C8h]
  __int64 v55; // [rsp+48h] [rbp-C0h]
  __int64 v56; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v57; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v58; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD ListHead[3]; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v60[2]; // [rsp+80h] [rbp-88h] BYREF
  __int64 v61; // [rsp+90h] [rbp-78h] BYREF
  __int64 v62; // [rsp+98h] [rbp-70h] BYREF
  __int128 v63; // [rsp+A0h] [rbp-68h] BYREF
  PPRIVILEGE_SET v64[2]; // [rsp+B0h] [rbp-58h]
  __int64 v65; // [rsp+C0h] [rbp-48h]
  __int128 v66; // [rsp+C8h] [rbp-40h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+D8h] [rbp-30h]
  __int64 v68; // [rsp+E8h] [rbp-20h] BYREF
  int v69; // [rsp+F0h] [rbp-18h]
  int v70; // [rsp+F4h] [rbp-14h]
  _QWORD v71[3]; // [rsp+F8h] [rbp-10h] BYREF
  _OWORD v72[3]; // [rsp+110h] [rbp+8h] BYREF

  v1 = 0;
  v60[1] = v60;
  memset(ListHead, 0, sizeof(ListHead));
  v60[0] = v60;
  v57 = 0LL;
  v70 = 0;
  memset(v72, 0, sizeof(v72));
  v58 = 0LL;
  v56 = 0LL;
  v3 = 0;
  BYTE4(v55) = 0;
  v4 = 0LL;
  v5 = MEMORY[0xFFFFF78000000014];
  v6 = 0LL;
  v63 = 0LL;
  WORD1(v63) = -1;
  v7 = 0LL;
  v66 = 0LL;
  WORD1(v66) = -1;
  BYTE1(v55) = 0;
  *(_OWORD *)v64 = 0LL;
  WORD1(v55) = 0;
  *(_OWORD *)Privileges = 0LL;
  v61 = 0LL;
  v65 = 0LL;
  sub_1407C97FC(ListHead);
  sub_1407C97FC(&v57);
  v68 = 0LL;
  v71[1] = v71;
  v70 = 0;
  v71[0] = v71;
  v69 = -1073741823;
  InitializeListHead((PLIST_ENTRY)&ListHead[1]);
  sub_140AB4550(v72);
  if ( (unsigned __int8)sub_140AB4248() )
    goto LABEL_97;
  v8 = v61;
  while ( 1 )
  {
    if ( v3 )
      sub_14071B6EC();
    else
      sub_140AB4370();
    v7 = a1[1];
    LOBYTE(v55) = 1;
    if ( (*(_DWORD *)(*(_QWORD *)(v7 + 32) + 160LL) & 0x100000) != 0 )
    {
      v9 = -1073741790;
      goto LABEL_114;
    }
    if ( !*(_QWORD *)(v7 + 72) )
    {
      v9 = -1073741535;
LABEL_117:
      v24 = 0;
      goto LABEL_35;
    }
    if ( *(_WORD *)(v7 + 66) )
    {
      v9 = sub_14053F5E8((__int64)a1, (__int64)v60, (_QWORD **)&ListHead[1]);
      goto LABEL_114;
    }
    v9 = sub_1407C05F4(&v66, v7);
    if ( v9 < 0 )
      goto LABEL_98;
    v9 = sub_1407C05F4(&v63, *(_QWORD *)(v7 + 72));
    if ( v9 < 0 )
      goto LABEL_117;
    v10 = BYTE4(v55);
    if ( !BYTE4(v55) )
    {
      sub_14071BB4C(v7);
      BYTE3(v55) = 1;
      sub_14071F6D0(&v63);
      sub_14067E974(&v66);
      BYTE2(v55) = 1;
    }
    v11 = sub_140AB45A0(a1, 0LL);
    v13 = 0LL;
    if ( v11 )
    {
LABEL_111:
      v9 = 0;
      goto LABEL_100;
    }
    if ( !a1[7] && !a1[8] )
      goto LABEL_15;
    v9 = sub_14067F480(a1, &v61);
    if ( v9 < 0 )
      goto LABEL_98;
    if ( (*(_DWORD *)(*(_QWORD *)(v7 + 32) + 160LL) & 2) != 0 )
    {
      v9 = -1072103423;
LABEL_114:
      v24 = 0;
      goto LABEL_35;
    }
    v8 = v61;
    v31 = sub_140AB45A0(a1, v61);
    v13 = 0LL;
    if ( v31 )
      goto LABEL_111;
    if ( v8 )
      goto LABEL_16;
    v10 = BYTE4(v55);
LABEL_15:
    v14 = *(_QWORD *)(v7 + 192);
    if ( v14 && *(_QWORD *)(v14 + 32) != v14 + 32 && !v10 )
    {
      v3 = 1;
      BYTE4(v55) = 1;
      sub_140721BAC(&v66);
      sub_140721BAC(&v63);
      BYTE2(v55) = 0;
      sub_14071C050(v7);
      BYTE3(v55) = 0;
      if ( Privileges[1] )
        SeFreePrivileges(Privileges[1]);
      v66 = 0LL;
      WORD1(v66) = -1;
      v40 = v64[1];
      *(_OWORD *)Privileges = 0LL;
      if ( v64[1] )
        SeFreePrivileges(v64[1]);
      v63 = 0LL;
      WORD1(v63) = -1;
      *(_OWORD *)v64 = 0LL;
      sub_140AB4260(v40, v37, v38, v39, v51, v52);
      goto LABEL_95;
    }
LABEL_16:
    v15 = *(_QWORD *)(v7 + 240);
    if ( v15 )
    {
      v41 = sub_140721FD0(v8, v15, 0LL);
      v13 = 0LL;
      if ( !v41 )
      {
        v9 = -1073741535;
        v24 = 0;
        goto LABEL_35;
      }
    }
    if ( v8 )
    {
      v4 = sub_14067EA18(v12, v15, 0LL);
      if ( !v4 || (v6 = sub_14067EA18(v33, v32, v34)) == 0 )
      {
        v9 = -1073741670;
        goto LABEL_100;
      }
      sub_1402A21B0((_QWORD *)v4, *(_QWORD *)(v7 + 72));
      v9 = sub_1402A2204((_QWORD *)v4, v8);
      if ( v9 < 0 || (sub_1402A21B0((_QWORD *)v6, v7), v9 = sub_1402A2204((_QWORD *)v6, v8), v9 < 0) )
      {
LABEL_100:
        v24 = 0;
        goto LABEL_35;
      }
      if ( !(unsigned __int8)sub_14067EF3C(*(_QWORD *)(v7 + 72) + 248LL, v4)
        || !(unsigned __int8)sub_14067E9B8(v7 + 248, v6, 0LL)
        || !(unsigned __int8)sub_14067E9B8(v7 + 264, v6, 1LL) )
      {
        v9 = -1072103423;
        goto LABEL_100;
      }
LABEL_21:
      if ( !BYTE4(v55) )
      {
        ExAcquirePushLockSharedEx(*(_QWORD *)(v7 + 32) + 72LL, 0LL);
        BYTE1(v55) = 1;
      }
      LOBYTE(v13) = 1;
      v65 = sub_14067E828(v7, ListHead, v13);
      v17 = v65;
      if ( (unsigned int)sub_14067E8E0(v7, v65, v8) || (*(_BYTE *)(v17 + 2) & 8) != 0 )
      {
        v9 = -1073741535;
      }
      else
      {
        v18 = *(_QWORD *)(v7 + 32);
        if ( (*(_BYTE *)(v18 + 140) & 1) != 0 )
          sub_1406BF450(v18, ListHead);
        else
          sub_1407C97C0(v18, ListHead);
        v65 = 0LL;
        if ( v8 )
        {
          *(_DWORD *)(v4 + 68) = 3;
          *(_QWORD *)(v4 + 88) = v7;
          *(_DWORD *)(v6 + 68) = 2;
          *(_QWORD *)(v6 + 80) = v4;
          v35 = *(_QWORD *)(v7 + 32);
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v35 + 72), 0LL, 17LL) != 17 )
            ExfReleasePushLockShared((signed __int64 *)(v35 + 72));
          sub_1402AFC00(v35 + 72);
          v24 = 0;
          v9 = sub_14071784C(v6, 1LL);
          if ( v9 >= 0 )
          {
            v6 = 0LL;
            v4 = 0LL;
            sub_140721878(&v63, v61, 1LL, v60, v51, v52, v53, v54, v55);
            v9 = 0;
          }
          goto LABEL_35;
        }
        v19 = *(_QWORD *)(v7 + 192);
        if ( !v19 || *(_QWORD *)(v19 + 32) == v19 + 32 )
        {
          sub_140721878(&v63, 0LL, 1LL, v60, v51, v52, v53, v54, v55);
          v9 = sub_1407164DC(*(_QWORD *)(v7 + 32), *(unsigned int *)(v7 + 40));
          if ( v9 >= 0 )
          {
            sub_14067EE40(v7, 8LL, &ListHead[1]);
            LOBYTE(v20) = 1;
            sub_14071B5A0(*(_QWORD *)(v7 + 72), v20);
            LOBYTE(v21) = 1;
            v22 = sub_14067E828(*(_QWORD *)(v7 + 72), &v57, v21);
            *(_WORD *)(*(_QWORD *)(v7 + 72) + 176LL) = *(_WORD *)(v22 + 52);
            ++*(_QWORD *)(*(_QWORD *)(v7 + 72) + 304LL);
            *(_QWORD *)(v22 + 4) = v5;
            *(_QWORD *)(*(_QWORD *)(v7 + 72) + 168LL) = v5;
            v23 = *(_QWORD *)(*(_QWORD *)(v7 + 72) + 32LL);
            if ( (*(_BYTE *)(v23 + 140) & 1) != 0 )
              sub_1406BF450(v23, &v57);
            else
              sub_1407C97C0(v23, &v57);
            sub_14067EDC0(v7, &ListHead[1]);
            sub_14067EB68(v7);
LABEL_33:
            v9 = 0;
          }
        }
        else
        {
          v9 = sub_14091CF4C(v7, &v68);
          if ( v9 >= 0 )
          {
            sub_140721878(&v63, 0LL, 1LL, v60, v51, v52, v53, v54, v55);
            v9 = sub_1407164DC(*(_QWORD *)(v7 + 32), *(unsigned int *)(v7 + 40));
            if ( v9 >= 0 )
            {
              v62 = 0x10100000008LL;
              sub_1406E93C0(
                v7,
                (unsigned int)sub_14091CDA0,
                (unsigned int)sub_14091CD70,
                (unsigned int)&ListHead[1],
                (__int64)&v62,
                1,
                1);
              sub_14067EE40(v7, 8LL, &ListHead[1]);
              LOBYTE(v47) = 1;
              sub_14071B5A0(*(_QWORD *)(v7 + 72), v47);
              LOBYTE(v48) = 1;
              v49 = sub_14067E828(*(_QWORD *)(v7 + 72), &v57, v48);
              *(_WORD *)(*(_QWORD *)(v7 + 72) + 176LL) = *(_WORD *)(v49 + 52);
              ++*(_QWORD *)(*(_QWORD *)(v7 + 72) + 304LL);
              *(_QWORD *)(v49 + 4) = v5;
              *(_QWORD *)(*(_QWORD *)(v7 + 72) + 168LL) = v5;
              v50 = *(_QWORD *)(*(_QWORD *)(v7 + 72) + 32LL);
              if ( (*(_BYTE *)(v50 + 140) & 1) != 0 )
                sub_1406BF450(v50, &v57);
              else
                sub_1407C97C0(v50, &v57);
              sub_14067EDC0(v7, &ListHead[1]);
              sub_14091CB44(v7);
              goto LABEL_33;
            }
          }
        }
      }
      v24 = BYTE1(v55);
LABEL_35:
      v1 = v55;
      goto LABEL_36;
    }
    v16 = (int *)(*(_QWORD *)(v7 + 72) + 248LL);
    if ( *v16 >= 0 )
    {
      v16 = (int *)(v7 + 248);
      if ( !*(_DWORD *)(v7 + 248) )
      {
        v16 = (int *)(v7 + 264);
        if ( !*(_DWORD *)(v7 + 264) )
          goto LABEL_21;
      }
    }
    v9 = sub_14091ECE0(v16, &v56, &v58);
    if ( v9 < 0 )
    {
LABEL_98:
      v24 = 0;
      goto LABEL_35;
    }
    if ( BYTE2(v55) )
    {
      sub_140721BAC(&v66);
      sub_140721BAC(&v63);
      BYTE2(v55) = 0;
    }
    if ( BYTE3(v55) )
    {
      sub_14071C050(v7);
      BYTE3(v55) = 0;
    }
    sub_140346C60((_QWORD **)&ListHead[1]);
    sub_140AB4260(v43, v42, v44, v45, v51, v52);
    v9 = sub_14091BC64((unsigned int)v56, v58, v46, (char *)&v56 + 4);
    if ( v9 < 0 )
      break;
    v3 = BYTE4(v55);
LABEL_95:
    if ( (unsigned __int8)sub_140AB4248() )
    {
      v1 = 0;
LABEL_97:
      v9 = -1073741431;
      v24 = 0;
      goto LABEL_36;
    }
  }
  v1 = 0;
  v24 = 0;
LABEL_36:
  sub_14067E8A8(&v68, &ListHead[1]);
  if ( v65 )
  {
    v36 = *(_QWORD *)(v7 + 32);
    if ( (*(_BYTE *)(v36 + 140) & 1) != 0 )
      sub_1406BF450(v36, ListHead);
    else
      sub_1407C97C0(v36, ListHead);
  }
  if ( v24 )
  {
    v25 = *(_QWORD *)(v7 + 32);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v25 + 72), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v25 + 72));
    sub_1402AFC00(v25 + 72);
  }
  if ( v6 )
  {
    sub_14071C120(v6);
    ExFreePoolWithTag((PVOID)v6, 0x77554D43u);
  }
  if ( v4 )
  {
    sub_14071C120(v4);
    ExFreePoolWithTag((PVOID)v4, 0x77554D43u);
  }
  if ( BYTE2(v55) )
  {
    sub_140721BAC(&v66);
    sub_140721BAC(&v63);
  }
  if ( BYTE3(v55) )
    sub_14071C050(v7);
  if ( Privileges[1] )
    SeFreePrivileges(Privileges[1]);
  if ( v64[1] )
    SeFreePrivileges(v64[1]);
  sub_140346C60((_QWORD **)&ListHead[1]);
  if ( v1 )
    sub_140AB4260(v27, v26, v28, v29, v51, v52);
  sub_140AB4580(v72);
  if ( (_QWORD *)v60[0] != v60 )
    sub_140719010(v60);
  return (unsigned int)v9;
}
