/*
 * XREFs of sub_14090C34C @ 0x14090C34C
 * Callers:
 *     sub_14090F750 @ 0x14090F750 (sub_14090F750.c)
 * Callees:
 *     InitializeListHead @ 0x1402AD320 (InitializeListHead.c)
 *     sub_140346C60 @ 0x140346C60 (sub_140346C60.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14065A7E0 @ 0x14065A7E0 (sub_14065A7E0.c)
 *     sub_14067C50C @ 0x14067C50C (sub_14067C50C.c)
 *     sub_14067C528 @ 0x14067C528 (sub_14067C528.c)
 *     sub_140681834 @ 0x140681834 (sub_140681834.c)
 *     sub_140689388 @ 0x140689388 (sub_140689388.c)
 *     sub_14068A7FC @ 0x14068A7FC (sub_14068A7FC.c)
 *     sub_14069E21C @ 0x14069E21C (sub_14069E21C.c)
 *     sub_14069E26C @ 0x14069E26C (sub_14069E26C.c)
 *     sub_14069EF78 @ 0x14069EF78 (sub_14069EF78.c)
 *     sub_14069F770 @ 0x14069F770 (sub_14069F770.c)
 *     sub_14069FC64 @ 0x14069FC64 (sub_14069FC64.c)
 *     sub_1406A0010 @ 0x1406A0010 (sub_1406A0010.c)
 *     sub_1406A0070 @ 0x1406A0070 (sub_1406A0070.c)
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_1406D3BF0 @ 0x1406D3BF0 (sub_1406D3BF0.c)
 *     sub_1406E93C0 @ 0x1406E93C0 (sub_1406E93C0.c)
 *     sub_1407164DC @ 0x1407164DC (sub_1407164DC.c)
 *     sub_140719010 @ 0x140719010 (sub_140719010.c)
 *     sub_14071B5A0 @ 0x14071B5A0 (sub_14071B5A0.c)
 *     sub_14071B640 @ 0x14071B640 (sub_14071B640.c)
 *     sub_14071EE7C @ 0x14071EE7C (sub_14071EE7C.c)
 *     sub_14079BA7C @ 0x14079BA7C (sub_14079BA7C.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 *     sub_14087D6D0 @ 0x14087D6D0 (sub_14087D6D0.c)
 *     sub_14090D4E8 @ 0x14090D4E8 (sub_14090D4E8.c)
 *     sub_14090D9E8 @ 0x14090D9E8 (sub_14090D9E8.c)
 *     sub_140910DB8 @ 0x140910DB8 (sub_140910DB8.c)
 *     sub_140910ECC @ 0x140910ECC (sub_140910ECC.c)
 *     sub_140918174 @ 0x140918174 (sub_140918174.c)
 *     sub_14091BC2C @ 0x14091BC2C (sub_14091BC2C.c)
 *     sub_14091CDE8 @ 0x14091CDE8 (sub_14091CDE8.c)
 *     sub_14091CEA0 @ 0x14091CEA0 (sub_14091CEA0.c)
 *     sub_14091D070 @ 0x14091D070 (sub_14091D070.c)
 *     sub_14091EE14 @ 0x14091EE14 (sub_14091EE14.c)
 *     sub_1409222C0 @ 0x1409222C0 (sub_1409222C0.c)
 *     sub_140AB4248 @ 0x140AB4248 (sub_140AB4248.c)
 *     sub_140AB4260 @ 0x140AB4260 (sub_140AB4260.c)
 *     sub_140AB42D0 @ 0x140AB42D0 (sub_140AB42D0.c)
 *     sub_140AB4300 @ 0x140AB4300 (sub_140AB4300.c)
 *     sub_140AB45A0 @ 0x140AB45A0 (sub_140AB45A0.c)
 *     sub_140AB4A4C @ 0x140AB4A4C (sub_140AB4A4C.c)
 */

__int64 __fastcall sub_14090C34C(_QWORD *a1, ULONG_PTR a2, unsigned int a3)
{
  __int64 v6; // r15
  char v7; // si
  ULONG_PTR v8; // r14
  ULONG_PTR v9; // rdi
  int v10; // ebx
  int v11; // eax
  unsigned int v12; // ebx
  char v13; // r15
  __int64 v14; // rax
  unsigned int v15; // edx
  __int64 v16; // rax
  __int64 v17; // r15
  int v18; // ebx
  size_t v19; // r8
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  unsigned int v25; // r15d
  __int64 v26; // rdx
  __int64 v27; // r8
  int v28; // r9d
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  char v33; // si
  int v34; // eax
  int v35; // r9d
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  unsigned int v40; // r12d
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  unsigned int v45; // r15d
  __int64 v46; // rax
  unsigned int v47; // r12d
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 *v50; // rdx
  unsigned int v51; // r13d
  __int64 v52; // rax
  bool v53; // zf
  unsigned int v54; // esi
  _WORD *v55; // rax
  unsigned int *v56; // r15
  __int64 v57; // rax
  ULONG_PTR v58; // rdx
  __int64 v59; // rax
  _WORD *v60; // rsi
  unsigned int v61; // edx
  __int64 v62; // rax
  _DWORD *v63; // rcx
  _DWORD *v64; // rcx
  __int64 v65; // rsi
  __int64 v66; // rax
  unsigned int v67; // eax
  ULONG_PTR v68; // rcx
  ULONG_PTR v69; // rdx
  __int64 v70; // rax
  __int64 v71; // rsi
  int v72; // eax
  __int64 v73; // rcx
  unsigned int v74; // esi
  ULONG_PTR v75; // rdx
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // r8
  __int64 v79; // r9
  ULONG_PTR v81; // [rsp+28h] [rbp-D8h]
  char v82; // [rsp+61h] [rbp-9Fh]
  unsigned int BugCheckParameter4; // [rsp+64h] [rbp-9Ch] BYREF
  unsigned int BugCheckParameter4_4; // [rsp+68h] [rbp-98h]
  __int64 v85; // [rsp+70h] [rbp-90h] BYREF
  __int64 v86; // [rsp+78h] [rbp-88h] BYREF
  __int64 v87; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v88; // [rsp+88h] [rbp-78h]
  __int64 v89; // [rsp+90h] [rbp-70h] BYREF
  __int64 v90; // [rsp+98h] [rbp-68h] BYREF
  unsigned int v91; // [rsp+A0h] [rbp-60h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v93; // [rsp+B0h] [rbp-50h]
  __int64 v94; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v95; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v96; // [rsp+C8h] [rbp-38h] BYREF
  int v97; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v98; // [rsp+E0h] [rbp-20h] BYREF
  _WORD *v99; // [rsp+E8h] [rbp-18h]
  _LIST_ENTRY ListHead; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v101; // [rsp+100h] [rbp+0h] BYREF
  ULONG_PTR v102[4]; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v103[432]; // [rsp+130h] [rbp+30h] BYREF

  v95 = 0xFFFFFFFFLL;
  v99 = 0LL;
  v93 = 0LL;
  v98 = 0LL;
  v90 = 0xFFFFFFFFLL;
  v86 = 0LL;
  v85 = 0xFFFFFFFFLL;
  v6 = 0LL;
  v87 = 0xFFFFFFFFLL;
  BugCheckParameter3 = 0LL;
  v89 = 0xFFFFFFFFLL;
  memset(v102, 0, sizeof(v102));
  v101 = 0LL;
  memset(v103, 0, sizeof(v103));
  v97 = 0;
  ListHead = 0LL;
  v96 = 0LL;
  InitializeListHead(&ListHead);
  LODWORD(v94) = -1;
  v7 = 0;
  BugCheckParameter4 = -1;
  v8 = a1[1];
  v9 = *(_QWORD *)(v8 + 32);
  if ( (*(_DWORD *)(v9 + 160) & 0x100000) != 0 )
  {
    v10 = -1073741790;
    goto LABEL_74;
  }
  sub_140910DB8(a2, a3);
  if ( (a3 & 0xFFFFFFFD) != 0 && (a3 & 2) != 0 || a1[7] || a1[8] )
  {
    v10 = -1073741811;
    goto LABEL_74;
  }
  if ( (a3 & 1) != 0 )
  {
    v11 = sub_14090D4E8(a1, a2);
LABEL_9:
    v10 = v11;
    goto LABEL_74;
  }
  if ( (a3 & 2) != 0 )
  {
    v11 = sub_14090D9E8(a1);
    goto LABEL_9;
  }
  *((_QWORD *)&v101 + 1) = &v101;
  v102[0] = a2;
  *(_QWORD *)&v101 = &v101;
  memset(&v102[1], 0, 24);
  v10 = sub_14068A7FC(&BugCheckParameter3, 2u, 0x8000, 0, 0LL, v102, 0LL, 17367041, 0LL, 0LL, 0LL, (__int64)v103);
  if ( v10 < 0 )
    goto LABEL_74;
  sub_140689388(0);
  v7 = 1;
  sub_140AB42D0(v8);
  v12 = *(_DWORD *)(v8 + 40);
  v13 = 1;
  BugCheckParameter4_4 = v12;
  if ( *(_WORD *)(v8 + 66) )
  {
    sub_14091CEA0(17LL);
    v10 = -1073741822;
    goto LABEL_72;
  }
  if ( (unsigned __int8)sub_140AB45A0(a1, 0LL) )
  {
    v10 = -1073741535;
    goto LABEL_72;
  }
  if ( *(_BYTE *)(v8 + 65) == 1 || v9 == qword_140D3CA28 )
  {
    v10 = -1073741790;
    goto LABEL_72;
  }
  if ( *(_BYTE *)(v9 + 2944) == 1 )
  {
    v10 = -1073741431;
    goto LABEL_72;
  }
  sub_14067C50C(v9);
  v82 = 1;
  if ( (*(_BYTE *)(v9 + 140) & 1) != 0 )
    v14 = sub_1406BF400(v9, v12, &v85);
  else
    v14 = sub_1407C9820(v9, v12, (unsigned int *)&v85);
  v86 = v14;
  if ( !v14 )
  {
    v10 = -1073741670;
    goto LABEL_70;
  }
  if ( (*(_BYTE *)(v14 + 2) & 4) != 0 )
    v15 = -1;
  else
    v15 = *(_DWORD *)(v14 + 16);
  v16 = *(_QWORD *)(BugCheckParameter3 + 64);
  v88 = v15;
  v91 = v12 >> 31;
  v10 = sub_1406D3BF0(BugCheckParameter3, *(unsigned int *)(v16 + 36), v9, v15, 6, v81, v12 >> 31, &BugCheckParameter4);
  if ( v10 < 0 )
    goto LABEL_70;
  v17 = v86;
  v10 = sub_14079BA7C(
          v9,
          BugCheckParameter4,
          (unsigned int)*(unsigned __int16 *)(v86 + 72) + 76,
          1,
          (int *)&v94,
          &v98,
          (__int64)&v90);
  v93 = v98;
  if ( v10 < 0 )
    goto LABEL_67;
  v18 = v94;
  v19 = *(unsigned __int16 *)(v17 + 72);
  BugCheckParameter4 = v94;
  memmove((void *)(v98 + 76), (const void *)(v17 + 76), v19);
  v20 = v93;
  *(_WORD *)(v93 + 72) = *(_WORD *)(v17 + 72);
  if ( (*(_BYTE *)(v17 + 2) & 0x20) != 0 )
    *(_WORD *)(v20 + 2) |= 0x20u;
  else
    *(_WORD *)(v20 + 2) &= ~0x20u;
  v10 = sub_14091EE14(BugCheckParameter3, *(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 36LL), v9, v18, 2, 0);
  if ( v10 < 0 )
  {
LABEL_67:
    v40 = BugCheckParameter4;
    v13 = v82;
    if ( (unsigned __int8)sub_1409222C0(v9, BugCheckParameter4) )
      sub_1407164DC(v9, v40, 0);
    if ( !v82 )
    {
LABEL_71:
      if ( !v13 )
      {
LABEL_73:
        v6 = v86;
        goto LABEL_74;
      }
LABEL_72:
      sub_140AB4300(v8);
      goto LABEL_73;
    }
LABEL_70:
    sub_14067C528(v9);
    goto LABEL_71;
  }
  sub_14067C528(v9);
  v82 = 0;
  sub_140AB4300(v8);
  sub_140AB4260(v22, v21, v23, v24);
  if ( (*(_BYTE *)(v9 + 140) & 1) != 0 )
    sub_1406BF450(v9, &v85);
  else
    sub_1407C97C0(v9, (unsigned int *)&v85);
  v86 = 0LL;
  if ( (*(_BYTE *)(v9 + 140) & 1) != 0 )
    sub_1406BF450(v9, &v90);
  else
    sub_1407C97C0(v9, (unsigned int *)&v90);
  v93 = 0LL;
  sub_140689388(1);
  if ( (unsigned __int8)sub_140AB4248() )
  {
LABEL_65:
    v10 = -1073741431;
LABEL_66:
    v7 = 1;
    goto LABEL_67;
  }
  v25 = v88;
  while ( 1 )
  {
    if ( (unsigned __int8)sub_140AB45A0(a1, 0LL) )
      goto LABEL_179;
    if ( BugCheckParameter4_4 != *(_DWORD *)(v8 + 40) )
    {
      v10 = -1073741444;
      goto LABEL_66;
    }
    if ( (*(_DWORD *)(v8 + 8) & 0x40000) != 0 )
    {
      v10 = -1073740763;
      goto LABEL_66;
    }
    if ( *(_BYTE *)(v9 + 2944) == 1 )
      goto LABEL_65;
    if ( v25 != -1 )
    {
      v10 = sub_140918174(v9, 1);
      if ( v10 < 0 )
        goto LABEL_66;
    }
    v10 = sub_140918174(v9, 1);
    if ( v10 < 0 )
      goto LABEL_66;
    LOBYTE(v26) = 1;
    v10 = sub_14069FC64(v8, v26, v27, (__int64)&v96);
    if ( v10 == -1073741267 )
    {
      sub_1406A0070(v8, 7, &v96, v28);
      sub_140AB4260(v30, v29, v31, v32);
      v10 = sub_1406A0010((__int64)&v96, 0LL);
      if ( v10 < 0 )
      {
        sub_140689388(1);
        goto LABEL_66;
      }
      goto LABEL_64;
    }
    if ( v10 < 0 )
      goto LABEL_66;
    v33 = 0;
    v10 = sub_140AB4A4C(v9, 2);
    if ( v10 < 0 )
      goto LABEL_66;
    if ( (a3 & 8) == 0 )
      break;
    v10 = sub_14091D070(v8, 0LL, &v96);
    if ( v10 == -1073741267 )
    {
      v33 = 1;
    }
    else if ( v10 < 0 )
    {
      goto LABEL_66;
    }
    v34 = sub_14069E26C(v8, 0, (__int64)&v96);
    v10 = v34;
    if ( v34 != -1073741267 )
    {
      if ( v34 < 0 )
        goto LABEL_66;
      if ( !v33 )
      {
        sub_14091CDE8(v8, 1LL, 0LL, &ListHead);
        sub_14069E21C(v8, 1LL, 0, (__int64)&ListHead, 0LL);
        sub_140346C60(&ListHead);
        goto LABEL_85;
      }
    }
    sub_1406A0070(v8, 7, &v96, v35);
    sub_140AB4260(v37, v36, v38, v39);
    v7 = 0;
    v10 = sub_1406A0010((__int64)&v96, 0LL);
    if ( v10 < 0 )
    {
      sub_140689388(1);
      goto LABEL_67;
    }
LABEL_64:
    sub_140681834((__int64)&v96);
    v96 = 0LL;
    sub_14091BC2C(&v97);
    sub_140689388(1);
    if ( (unsigned __int8)sub_140AB4248() )
      goto LABEL_65;
  }
  sub_1406E93C0(v8, (__int64)sub_1407F4D50, (__int64)sub_14091CA90, 0LL, 0LL, 1, 1);
  if ( sub_14069F770(v8) || *(_QWORD *)v8 != 1LL )
  {
LABEL_179:
    v10 = -1073741535;
    goto LABEL_66;
  }
LABEL_85:
  v45 = BugCheckParameter4;
  v10 = sub_14087D6D0(v9, BugCheckParameter4, 0);
  v7 = 1;
  if ( v10 < 0 )
    goto LABEL_67;
  if ( (*(_BYTE *)(v9 + 140) & 1) != 0 )
    v46 = sub_1406BF400(v9, BugCheckParameter4_4, &v90);
  else
    v46 = sub_1407C9820(v9, BugCheckParameter4_4, (unsigned int *)&v90);
  v93 = v46;
  if ( !v46 )
    goto LABEL_90;
  v47 = *(_DWORD *)(v46 + 16);
  if ( (*(_BYTE *)(v46 + 2) & 4) != 0 )
  {
    if ( (*(_BYTE *)(qword_140D3CA28 + 140) & 1) != 0 )
      v48 = sub_1406BF400(qword_140D3CA28, v47, &v87);
    else
      v48 = sub_1407C9820(qword_140D3CA28, v47, (unsigned int *)&v87);
    if ( v48 )
    {
      *(_DWORD *)(v48 + 28) = v45;
      if ( (*(_BYTE *)(qword_140D3CA28 + 140) & 1) != 0 )
        sub_1406BF450(qword_140D3CA28, &v87);
      else
        sub_1407C97C0(qword_140D3CA28, (unsigned int *)&v87);
      v49 = (*(_BYTE *)(v9 + 140) & 1) != 0
          ? sub_1406BF400(v9, v45, &v85)
          : sub_1407C9820(v9, v45, (unsigned int *)&v85);
      v86 = v49;
      if ( v49 )
      {
        *(_DWORD *)(v49 + 16) = v47;
        v50 = &v85;
        *(_DWORD *)(*(_QWORD *)(v9 + 64) + 36LL) = v45;
        goto LABEL_158;
      }
    }
LABEL_90:
    v10 = -1073741670;
    goto LABEL_66;
  }
  v51 = 0;
  v10 = sub_14087D6D0(v9, v47, 0);
  v7 = 1;
  if ( v10 < 0 )
    goto LABEL_67;
  if ( (*(_BYTE *)(v9 + 140) & 1) != 0 )
    v52 = sub_1406BF400(v9, v47, &v87);
  else
    v52 = sub_1407C9820(v9, v47, (unsigned int *)&v87);
  if ( !v52 )
  {
    v10 = -1073741670;
    goto LABEL_67;
  }
  v53 = (*(_BYTE *)(v9 + 140) & 1) == 0;
  v54 = *(_DWORD *)(v52 + 4LL * v91 + 28);
  v91 = v54;
  if ( v53 )
    sub_1407C97C0(v9, (unsigned int *)&v87);
  else
    sub_1406BF450(v9, &v87);
  if ( (*(_BYTE *)(v9 + 140) & 1) != 0 )
    v55 = (_WORD *)sub_1406BF400(v9, v54, &v95);
  else
    v55 = (_WORD *)sub_1407C9820(v9, v54, (unsigned int *)&v95);
  v99 = v55;
  if ( !v55 )
    goto LABEL_90;
  if ( *v55 != 26994 )
  {
    v88 = 1;
    v56 = &v91;
    while ( 1 )
    {
LABEL_123:
      v58 = *v56;
      if ( (*(_BYTE *)(v9 + 140) & 1) != 0 )
        v59 = sub_1406BF400(v9, v58, &v89);
      else
        v59 = sub_1407C9820(v9, v58, (unsigned int *)&v89);
      v60 = (_WORD *)v59;
      if ( !v59 )
        goto LABEL_90;
      v10 = sub_14087D6D0(v9, *v56, 0);
      if ( v10 < 0 )
        break;
      v61 = (unsigned __int16)v60[1];
      v62 = 0LL;
      if ( ((*v60 - 26220) & 0xFDFF) != 0 )
      {
        if ( v60[1] )
        {
          v63 = v60 + 2;
          while ( *v63 != BugCheckParameter4_4 )
          {
            v62 = (unsigned int)(v62 + 1);
            ++v63;
            if ( (unsigned int)v62 >= v61 )
              goto LABEL_138;
          }
          v45 = BugCheckParameter4;
          *(_DWORD *)&v60[2 * v62 + 2] = BugCheckParameter4;
LABEL_146:
          if ( (*(_BYTE *)(v9 + 140) & 1) != 0 )
            sub_1406BF450(v9, &v89);
          else
            sub_1407C97C0(v9, (unsigned int *)&v89);
          goto LABEL_120;
        }
      }
      else if ( v60[1] )
      {
        v64 = v60 + 2;
        while ( *v64 != BugCheckParameter4_4 )
        {
          v62 = (unsigned int)(v62 + 1);
          v64 += 2;
          if ( (unsigned int)v62 >= v61 )
            goto LABEL_138;
        }
        v45 = BugCheckParameter4;
        *(_DWORD *)&v60[4 * v62 + 2] = BugCheckParameter4;
        goto LABEL_146;
      }
LABEL_138:
      if ( (*(_BYTE *)(v9 + 140) & 1) != 0 )
        sub_1406BF450(v9, &v89);
      else
        sub_1407C97C0(v9, (unsigned int *)&v89);
      ++v51;
      ++v56;
      if ( v51 >= v88 )
        goto LABEL_119;
    }
    if ( (*(_BYTE *)(v9 + 140) & 1) != 0 )
      sub_1406BF450(v9, &v89);
    else
      sub_1407C97C0(v9, (unsigned int *)&v89);
    goto LABEL_66;
  }
  v56 = (unsigned int *)(v55 + 2);
  v88 = (unsigned __int16)v55[1];
  if ( v88 )
    goto LABEL_123;
LABEL_119:
  v45 = BugCheckParameter4;
LABEL_120:
  if ( (*(_BYTE *)(v9 + 140) & 1) != 0 )
    v57 = sub_1406BF400(v9, v47, &v87);
  else
    v57 = sub_1407C9820(v9, v47, (unsigned int *)&v87);
  v65 = v57;
  if ( (*(_BYTE *)(v9 + 140) & 1) != 0 )
    v66 = sub_1406BF400(v9, v45, &v85);
  else
    v66 = sub_1407C9820(v9, v45, (unsigned int *)&v85);
  v67 = *(unsigned __int16 *)(v66 + 74);
  if ( *(_DWORD *)(v65 + 56) < v67 )
    *(_DWORD *)(v65 + 56) = v67;
  if ( (*(_BYTE *)(v9 + 140) & 1) != 0 )
    sub_1406BF450(v9, &v85);
  else
    sub_1407C97C0(v9, (unsigned int *)&v85);
  v50 = &v87;
LABEL_158:
  if ( (*(_BYTE *)(v9 + 140) & 1) != 0 )
    sub_1406BF450(v9, v50);
  else
    sub_1407C97C0(v9, (unsigned int *)v50);
  *(_DWORD *)(v8 + 40) = v45;
  sub_14071EE7C(v8);
  v68 = *(_QWORD *)(v8 + 32);
  v86 = 0xFFFFFFFFLL;
  v69 = *(unsigned int *)(v8 + 40);
  if ( (*(_BYTE *)(v68 + 140) & 1) != 0 )
    v70 = sub_1406BF400(v68, v69, &v86);
  else
    v70 = sub_1407C9820(v68, v69, (unsigned int *)&v86);
  v6 = 0LL;
  v71 = v70;
  if ( !v70 )
  {
    v10 = -1073741670;
    v86 = 0LL;
    goto LABEL_66;
  }
  v72 = *(_DWORD *)(v70 + 36);
  *(_DWORD *)(v8 + 100) = *(_DWORD *)(v71 + 40);
  *(_DWORD *)(v8 + 96) = v72;
  *(_WORD *)(v8 + 186) = *(_WORD *)(v71 + 2);
  sub_14071B640(v8, *(unsigned int *)(v71 + 44), 0LL, 0, 0);
  sub_14071B5A0(v8, 1);
  ++*(_QWORD *)(v8 + 304);
  *(_QWORD *)(v8 + 168) = *(_QWORD *)(v71 + 4);
  *(_WORD *)(v8 + 176) = *(_WORD *)(v71 + 52);
  *(_WORD *)(v8 + 178) = *(_WORD *)(v71 + 60);
  *(_DWORD *)(v8 + 180) = *(_DWORD *)(v71 + 64);
  *(_DWORD *)(v8 + 184) ^= (*(_DWORD *)(v8 + 184) ^ *(unsigned __int16 *)(v71 + 54)) & 0xF;
  *(_DWORD *)(v8 + 184) ^= ((unsigned __int8)*(_DWORD *)(v8 + 184) ^ (unsigned __int8)*(_WORD *)(v71 + 54)) & 0xF0;
  v73 = *(_QWORD *)(v8 + 32);
  *(_BYTE *)(v8 + 185) = *(_BYTE *)(v71 + 55);
  if ( (*(_BYTE *)(v73 + 140) & 1) != 0 )
    sub_1406BF450(v73, &v86);
  else
    sub_1407C97C0(v73, (unsigned int *)&v86);
  v74 = BugCheckParameter4_4;
  v75 = BugCheckParameter4_4;
  *(_WORD *)(v8 + 8) = 64;
  if ( (unsigned __int8)sub_1409222C0(v9, v75) )
    sub_1407164DC(v9, v74, 0);
  sub_14069EF78(v8, 0LL, 1u, (__int64)&v101);
  if ( !byte_140D3CA02 )
  {
    qword_140D3B200 = qword_140D3B068;
    byte_140D3CA02 = 1;
  }
  sub_140346C60(&ListHead);
  sub_140AB4260(v77, v76, v78, v79);
  v7 = 0;
  sub_14065A7E0(BugCheckParameter3);
  BugCheckParameter3 = 0LL;
  sub_140719010((_QWORD **)&v101);
LABEL_74:
  sub_140346C60(&ListHead);
  if ( v7 )
    sub_140AB4260(v42, v41, v43, v44);
  if ( BugCheckParameter3 )
  {
    sub_14065A7E0(BugCheckParameter3);
    BugCheckParameter3 = 0LL;
  }
  if ( v99 )
  {
    if ( (*(_BYTE *)(v9 + 140) & 1) != 0 )
      sub_1406BF450(v9, &v95);
    else
      sub_1407C97C0(v9, (unsigned int *)&v95);
  }
  if ( v6 )
  {
    if ( (*(_BYTE *)(v9 + 140) & 1) != 0 )
      sub_1406BF450(v9, &v85);
    else
      sub_1407C97C0(v9, (unsigned int *)&v85);
  }
  if ( v93 )
  {
    if ( (*(_BYTE *)(v9 + 140) & 1) != 0 )
      sub_1406BF450(v9, &v90);
    else
      sub_1407C97C0(v9, (unsigned int *)&v90);
  }
  sub_140681834((__int64)&v96);
  sub_140910ECC((unsigned int)v10);
  return (unsigned int)v10;
}
