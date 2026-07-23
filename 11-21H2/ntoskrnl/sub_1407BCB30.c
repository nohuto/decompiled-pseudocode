/*
 * XREFs of sub_1407BCB30 @ 0x1407BCB30
 * Callers:
 *     sub_1406B85C8 @ 0x1406B85C8 (sub_1406B85C8.c)
 *     sub_1406FA590 @ 0x1406FA590 (sub_1406FA590.c)
 * Callees:
 *     sub_14022B0E0 @ 0x14022B0E0 (sub_14022B0E0.c)
 *     sub_14023502C @ 0x14023502C (sub_14023502C.c)
 *     sub_14024AA58 @ 0x14024AA58 (sub_14024AA58.c)
 *     sub_14024C7C4 @ 0x14024C7C4 (sub_14024C7C4.c)
 *     sub_140256DF8 @ 0x140256DF8 (sub_140256DF8.c)
 *     sub_14027D890 @ 0x14027D890 (sub_14027D890.c)
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     sub_140283DF0 @ 0x140283DF0 (sub_140283DF0.c)
 *     sub_140286F90 @ 0x140286F90 (sub_140286F90.c)
 *     sub_140287070 @ 0x140287070 (sub_140287070.c)
 *     sub_1402EB3DC @ 0x1402EB3DC (sub_1402EB3DC.c)
 *     sub_1402EB440 @ 0x1402EB440 (sub_1402EB440.c)
 *     sub_14030EC14 @ 0x14030EC14 (sub_14030EC14.c)
 *     sub_140311CC0 @ 0x140311CC0 (sub_140311CC0.c)
 *     sub_140313C70 @ 0x140313C70 (sub_140313C70.c)
 *     sub_140313CA0 @ 0x140313CA0 (sub_140313CA0.c)
 *     sub_140313D14 @ 0x140313D14 (sub_140313D14.c)
 *     sub_140313D20 @ 0x140313D20 (sub_140313D20.c)
 *     sub_140316E90 @ 0x140316E90 (sub_140316E90.c)
 *     sub_140323D70 @ 0x140323D70 (sub_140323D70.c)
 *     sub_140329630 @ 0x140329630 (sub_140329630.c)
 *     sub_1403342D0 @ 0x1403342D0 (sub_1403342D0.c)
 *     sub_140339C20 @ 0x140339C20 (sub_140339C20.c)
 *     sub_14033D7D0 @ 0x14033D7D0 (sub_14033D7D0.c)
 *     sub_14033DFC0 @ 0x14033DFC0 (sub_14033DFC0.c)
 *     sub_14033FD38 @ 0x14033FD38 (sub_14033FD38.c)
 *     sub_1405A0A20 @ 0x1405A0A20 (sub_1405A0A20.c)
 *     sub_1405B7E7C @ 0x1405B7E7C (sub_1405B7E7C.c)
 *     sub_1406F4A80 @ 0x1406F4A80 (sub_1406F4A80.c)
 *     sub_1406FACF8 @ 0x1406FACF8 (sub_1406FACF8.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1407BCB30(
        __int64 a1,
        __int64 a2,
        signed __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned int a6,
        unsigned int a7,
        __int64 *a8)
{
  bool v11; // zf
  __int64 v12; // r15
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // rbp
  unsigned __int64 v16; // rsi
  _QWORD *v17; // rax
  __int64 v18; // r13
  _QWORD *v19; // rax
  int v20; // eax
  __int64 *v21; // r8
  unsigned __int64 v22; // rbx
  __int64 *v23; // r14
  unsigned __int64 v24; // rsi
  int v25; // edi
  char *v26; // rax
  __int64 v27; // r9
  __int64 v28; // r10
  _QWORD *v29; // r11
  unsigned int *v30; // rdx
  unsigned int v31; // r12d
  __int64 v32; // rbx
  _QWORD *v33; // rcx
  _QWORD *v34; // rax
  unsigned int *v35; // r9
  unsigned __int64 v36; // r8
  _QWORD *v37; // rbp
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rbx
  int v41; // ecx
  unsigned int v42; // ebx
  __int64 result; // rax
  _QWORD *v44; // rbx
  _QWORD *v45; // rcx
  unsigned __int64 v46; // r15
  _QWORD *v47; // rax
  unsigned __int64 v48; // rbx
  __int64 v49; // rax
  unsigned __int64 v50; // rax
  __int64 v51; // r14
  _QWORD *v52; // r15
  __int64 v53; // rbp
  unsigned int v54; // eax
  int v55; // r8d
  int v56; // r9d
  __int64 v57; // rax
  __int64 v58; // rbx
  _QWORD *v59; // rdi
  __int64 v60; // rax
  __int64 v61; // rbx
  __int64 v62; // rcx
  __int64 v63; // r8
  unsigned int v64; // edx
  __int64 v65; // r15
  __int64 v66; // rbx
  _QWORD *v67; // rax
  unsigned int *v68; // rax
  __int64 v69; // rax
  __int64 v70; // r9
  __int16 v71; // ax
  int v72; // ecx
  unsigned int v73; // eax
  char v74; // r9
  __int64 v75; // rax
  __int64 v76; // rcx
  int v77; // eax
  int v78; // eax
  unsigned __int64 v79; // rbx
  unsigned int v80; // [rsp+40h] [rbp-F8h]
  unsigned int *BugCheckParameter2; // [rsp+48h] [rbp-F0h]
  _QWORD *v82; // [rsp+50h] [rbp-E8h]
  __int64 v83; // [rsp+58h] [rbp-E0h]
  ULONG_PTR *v84; // [rsp+60h] [rbp-D8h]
  unsigned __int64 v85; // [rsp+68h] [rbp-D0h]
  struct _KTHREAD *CurrentThread; // [rsp+70h] [rbp-C8h]
  unsigned __int64 v87; // [rsp+78h] [rbp-C0h]
  unsigned int *v88; // [rsp+80h] [rbp-B8h]
  unsigned int *P; // [rsp+88h] [rbp-B0h]
  unsigned int v90; // [rsp+90h] [rbp-A8h] BYREF
  unsigned __int64 v91; // [rsp+98h] [rbp-A0h]
  _QWORD *v92; // [rsp+A0h] [rbp-98h]
  _QWORD *v93; // [rsp+A8h] [rbp-90h]
  unsigned __int64 v94; // [rsp+B0h] [rbp-88h] BYREF
  unsigned int v95; // [rsp+B8h] [rbp-80h]
  unsigned __int64 v96; // [rsp+C0h] [rbp-78h]
  __int64 *v97; // [rsp+C8h] [rbp-70h]
  unsigned __int64 v98; // [rsp+D0h] [rbp-68h]
  __int64 *v99; // [rsp+D8h] [rbp-60h]
  __int64 v100; // [rsp+E0h] [rbp-58h]
  char *v101; // [rsp+E8h] [rbp-50h]
  _OWORD v102[4]; // [rsp+F0h] [rbp-48h] BYREF
  __int64 v104; // [rsp+148h] [rbp+10h] BYREF
  __int64 v105; // [rsp+158h] [rbp+20h]

  v105 = a4;
  v104 = a2;
  v102[0] = 0LL;
  v11 = (*(_DWORD *)(a2 + 56) & 0x400) == 0;
  v12 = a2;
  CurrentThread = KeGetCurrentThread();
  P = 0LL;
  *a8 = 0LL;
  if ( !v11 || !*(_QWORD *)(a2 + 64) )
    return 3221225711LL;
  v13 = sub_140287070(a2);
  v14 = a5;
  if ( a5 )
  {
    v15 = a5 >> 12;
    v98 = a5 >> 12;
    if ( a5 >> 12 >= 0x100000000LL || (unsigned int)v15 > v13 )
      return 3221225713LL;
  }
  else
  {
    if ( v13 >= 0x100000000LL )
      return 3221225713LL;
    LODWORD(v15) = v13;
    v98 = (unsigned int)v13;
  }
  v16 = (unsigned int)v15;
  if ( a4 && (unsigned int)v15 + ((a3 >> 12) & 0x3FuLL) > 0x40 )
    return 3221225713LL;
  v17 = sub_1402828F0(64, 8LL * (unsigned int)(v15 - 1) + 144, 0x6C526D4Du);
  v18 = (__int64)v17;
  if ( !v17 )
    return 3221225626LL;
  v17[1] = v12;
  v19 = v17 + 15;
  v19[1] = v19;
  *v19 = v19;
  *(_QWORD *)(v18 + 32) = v18 + 24;
  *(_QWORD *)(v18 + 24) = v18 + 24;
  if ( (dword_140D0689C & 0x200000) != 0 )
  {
    v15 = 511LL;
    if ( v16 <= 0x1FF )
      v15 = v16;
    v68 = (unsigned int *)sub_1402828F0(66, 8 * v15 + 16, 0x6C68694Du);
    P = v68;
    if ( !v68 )
    {
      v80 = -1073741670;
      goto LABEL_81;
    }
    *(_QWORD *)v68 = 1LL;
    v68[2] = v15;
    sub_14023502C((__int64)&StartContext, (__int64)CurrentThread);
    LODWORD(v15) = v98;
  }
  v20 = (*(unsigned __int16 *)(v12 + 160) >> 1) & 0x1F;
  v94 = 0LL;
  v83 = 0LL;
  v85 = 0LL;
  v82 = 0LL;
  v99 = 0LL;
  BugCheckParameter2 = (unsigned int *)(v12 + 128);
  v95 = v20;
  if ( v14 )
    BugCheckParameter2 = sub_140286F90(v12, a3, &v94);
  v84 = (ULONG_PTR *)sub_14030EC14(v12);
  v100 = sub_14024C7C4((__int64)v84);
  v22 = (unsigned __int64)v21;
  v87 = (unsigned __int64)v21;
  v23 = v21;
  v97 = v21;
  v96 = (unsigned __int64)v21;
  if ( a1 )
  {
    v67 = *(_QWORD **)(a1 + 32);
    v91 = __PAIR64__(HIDWORD(v21), *(_DWORD *)(a1 + 12) & 0x1FF | 0x200u);
    v24 = v91;
    v92 = v67;
  }
  else
  {
    v92 = v21;
    v24 = (unsigned __int64)v21;
  }
  *(_DWORD *)(v18 + 80) = a6;
  *(_DWORD *)(v18 + 84) = 5;
  *(_DWORD *)(v18 + 88) = 7;
  v25 = (*(_DWORD *)(v12 + 56) >> 20) & 0x7F;
  v90 = (unsigned int)v21;
  v26 = (char *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1664LL);
  v93 = (_QWORD *)(v18 + 136);
  v101 = v26;
  sub_140339C20(v26, v25, (__int64)v102);
  v80 = 0;
  v30 = 0LL;
  v88 = 0LL;
  v31 = 0;
  if ( !(_DWORD)v15 )
  {
    v51 = (__int64)v84;
    v40 = 0LL;
    v53 = 0LL;
    v52 = 0LL;
    goto LABEL_59;
  }
  while ( 1 )
  {
    if ( (unsigned __int64)v23 < v22 )
      goto LABEL_15;
    if ( v23 )
    {
      v28 = *(_QWORD *)(v28 + 16);
      BugCheckParameter2 = (unsigned int *)v28;
      if ( !v28 )
      {
LABEL_57:
        v40 = v85;
        v51 = (__int64)v84;
        v52 = v82;
        goto LABEL_58;
      }
      v94 = 0LL;
    }
    v41 = *(_DWORD *)(v12 + 56);
    if ( (v41 & 0x20) == 0 )
      break;
    v46 = *(_QWORD *)(v28 + 8);
    if ( (*(_BYTE *)(v28 + 34) & 2) == 0 || (v41 & 0x8000000) == 0 )
      goto LABEL_52;
    v12 = v104;
    if ( *(_QWORD *)(v28 + 24) )
    {
      v69 = sub_140256DF8(v104, a7, v28);
      v28 = (__int64)BugCheckParameter2;
      if ( v69 )
      {
        v46 = *(_QWORD *)(v69 + 72);
LABEL_52:
        v23 = (__int64 *)(v46 + 8 * v94);
        v87 = v46 + 8LL * *(unsigned int *)(v28 + 44);
        v48 = sub_1403342D0(v28, v46, a7);
        v49 = sub_14033DFC0(BugCheckParameter2);
        if ( (((_WORD)v49 - (_WORD)v48) & 0xFFF) != 0 )
          v50 = v46 + 8 * (((v49 - v48 + 4095) >> 12) - 1);
        else
          v50 = 0LL;
        v29 = v93;
        v30 = v88;
        v97 = (__int64 *)v50;
        if ( v92 )
        {
          v91 = v48;
          v96 = v46;
          LODWORD(v91) = v48 & 0xFFFFFE00 | *(_DWORD *)(a1 + 12) & 0x1FF | 0x200;
          v24 = v91;
        }
        v12 = v104;
LABEL_15:
        v32 = *v23;
        if ( (unsigned __int64)v23 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v23 <= 0xFFFFF6FB7DBED7F8uLL )
        {
          v71 = sub_14027D890((unsigned __int64)v23, *v23);
          v30 = v88;
          LOWORD(v32) = v71;
        }
        if ( (v32 & 1) == 0 )
        {
          if ( (v32 & 0x400) != 0 )
          {
            if ( (*(_BYTE *)(v12 + 62) & 0xC) == 4 )
            {
              if ( P )
              {
                sub_1405B7E7C(P);
                sub_14022B0E0((__int64)&StartContext, (__int64)CurrentThread);
                v80 = sub_1405A0A20((__int64 *)BugCheckParameter2, (__int64)v23, a7);
                sub_14023502C((__int64)&StartContext, (__int64)CurrentThread);
                v72 = v80;
              }
              else
              {
                v72 = sub_1405A0A20((__int64 *)BugCheckParameter2, (__int64)v23, a7);
                v80 = v72;
              }
              if ( v72 < 0 )
              {
                v53 = v83;
                v40 = v85;
                v51 = (__int64)v84;
                v52 = v82;
                if ( !v83 )
                  v80 = -1073741670;
LABEL_59:
                if ( a1 )
                  *(_QWORD *)(a1 + 24) = v92;
                if ( v53 )
                {
                  if ( !v40 )
                    goto LABEL_70;
                  v104 = v40;
                  v54 = sub_14033D7D0(v95);
                  v57 = sub_140323D70(v51, (__int64)v101, 0LL, v56, v54, v55, -1LL, (unsigned __int64 *)&v104);
                  v58 = v104;
                  v59 = (_QWORD *)v57;
                  if ( v104 != v85 )
                  {
                    sub_14024AA58(v51, v85 - v104, 1);
                    v78 = v80;
                    v79 = v58 - v85;
                    v11 = v79 + v53 == 0;
                    v53 += v79;
                    v83 = v53;
                    if ( v11 )
                      v78 = -1073741801;
                    v80 = v78;
                  }
                  if ( v59 )
                  {
                    do
                    {
                      v60 = v59[3] & 0xFFFFFFFFFFLL;
                      if ( v60 == 0x3FFFFFFFFFLL )
                        v61 = 0LL;
                      else
                        v61 = 48 * v60 - 0x220000000000LL;
                      sub_140313D14(v59, *(_QWORD *)(v18 + 40));
                      *(_QWORD *)(v18 + 40) = v59;
                      sub_140313CA0(v62, 0LL, 0);
                      v59 = (_QWORD *)v61;
                    }
                    while ( v61 );
                    v53 = v83;
                    v52 = v82;
                  }
                  if ( v53 )
                  {
LABEL_70:
                    v63 = v105;
                    v64 = a7;
                    *(_DWORD *)(v18 + 92) = ((__int64)v93 - v18 - 136) >> 3;
                    *(_QWORD *)(v18 + 96) = v52;
                    v65 = (__int64)CurrentThread;
                    v80 = sub_1406F4A80(v18, v64, v63);
                    if ( *(_QWORD *)(v18 + 120) != v18 + 120 )
                    {
                      *a8 = v18;
                      result = 0LL;
                      v18 = 0LL;
                      v80 = 0;
                      goto LABEL_72;
                    }
                    goto LABEL_80;
                  }
                }
LABEL_79:
                v65 = (__int64)CurrentThread;
LABEL_80:
                result = v80;
                goto LABEL_72;
              }
            }
            else
            {
              v33 = v92;
              if ( v92 )
              {
                v24 += (__int64)((__int64)v23 - v96) >> 3 << 12;
                v96 = (unsigned __int64)v23;
                *v92 = v24;
                v92 = v33 + 1;
              }
LABEL_23:
              v34 = v29;
              v35 = BugCheckParameter2;
              *v29 = v23;
              v36 = (unsigned __int64)v23;
              if ( v82 )
                v34 = v82;
              v82 = v34;
              v37 = v34;
              if ( v30 != BugCheckParameter2
                || (sub_140313C70((unsigned __int64)v99), v38 = sub_140313C70((unsigned __int64)v23), v39 != v38) )
              {
                v36 |= 2uLL;
                v88 = v35;
                *v29 = v36;
              }
              v99 = v23;
              if ( v23 == v97 )
                *v29 = v36 | 1;
              v93 = v29 + 1;
              if ( !sub_140329630(v84, 1uLL, 1) )
              {
                v77 = v80;
                v53 = v83;
                v52 = v82;
                v51 = (__int64)v84;
                if ( !v83 )
                  v77 = -1073741670;
                v40 = v85;
                v80 = v77;
                goto LABEL_59;
              }
              if ( (unsigned int)sub_140313D20((__int64)v84, (__int64 *)BugCheckParameter2, v32, (int *)&v90)
                && (v66 = v90, v90 <= 3) )
              {
                v73 = sub_1402EB3DC((__int64)v102);
                v74 = 2;
                if ( v25 )
                  v74 = 0;
                v75 = sub_1402EB440((__int64)v84, v66, v73, v74, (_QWORD *)0xFFFFFFFFFFFFFFFFLL, 0x20000u);
                if ( v75 == -1 )
                {
                  v40 = v85;
LABEL_129:
                  v51 = (__int64)v84;
                  sub_14024AA58((__int64)v84, 1uLL, 1);
                  v82 = v37;
                  v52 = v37;
                  if ( !v83 )
                  {
                    v80 = -1073741801;
                    v82 = v37;
                  }
LABEL_58:
                  v53 = v83;
                  goto LABEL_59;
                }
                sub_140313D14((_QWORD *)(48 * v75 - 0x220000000000LL), *(_QWORD *)(v18 + 8 * v66 + 48));
                *(_QWORD *)(v18 + 8 * v66 + 48) = v76;
              }
              else
              {
                v40 = v85;
                if ( v85 > v100 + 160 )
                  goto LABEL_129;
                ++v85;
              }
              ++v83;
              LODWORD(v15) = v98;
            }
LABEL_34:
            v22 = v87;
            v28 = (__int64)BugCheckParameter2;
            goto LABEL_35;
          }
          if ( (v32 & 0x800) == 0 )
          {
            if ( sub_14033FD38(v32) )
              goto LABEL_23;
            goto LABEL_34;
          }
        }
        sub_140316E90((unsigned __int64)v23, a6, (__int64)P);
        goto LABEL_34;
      }
      v23 = (__int64 *)(v22 - 8);
    }
    else
    {
      v23 = (__int64 *)(v22 - 8);
    }
LABEL_35:
    ++v31;
    ++v23;
    if ( v31 >= (unsigned int)v15 )
      goto LABEL_57;
    v29 = v93;
    v30 = v88;
  }
  v42 = 4;
  if ( P )
    v42 = 2052;
  result = sub_140311CC0((__int64 *)v28, *(unsigned int *)(v28 + 44), v42, v27);
  v80 = result;
  if ( (int)result >= 0 )
  {
LABEL_45:
    v28 = (__int64)BugCheckParameter2;
    v44 = (_QWORD *)(v18 + 24);
    v45 = *(_QWORD **)(v18 + 32);
    v46 = *((_QWORD *)BugCheckParameter2 + 1);
    if ( (_QWORD *)*v44 == v44 || *((_DWORD *)v45 + 4) == 5 )
    {
      v45 = sub_1402828F0(256, 0x40uLL, 0x6C536D4Du);
      if ( !v45 )
      {
        sub_140283DF0((__int64 *)BugCheckParameter2);
        v80 = -1073741670;
        goto LABEL_79;
      }
      v47 = *(_QWORD **)(v18 + 32);
      if ( (_QWORD *)*v47 != v44 )
        __fastfail(3u);
      v28 = (__int64)BugCheckParameter2;
      *v45 = v44;
      v45[1] = v47;
      *v47 = v45;
      *(_QWORD *)(v18 + 32) = v45;
    }
    if ( !*(_QWORD *)(v18 + 16) )
      *(_QWORD *)(v18 + 16) = v28;
    v45[(unsigned int)(*((_DWORD *)v45 + 4))++ + 3] = v28;
    goto LABEL_52;
  }
  if ( (v42 & 0x800) != 0 && (_DWORD)result == -1073741078 )
  {
    sub_1405B7E7C(P);
    v65 = (__int64)CurrentThread;
    sub_14022B0E0((__int64)&StartContext, (__int64)CurrentThread);
    v80 = sub_140311CC0((__int64 *)BugCheckParameter2, BugCheckParameter2[11], v42 & 0xFFFFF7FF, v70);
    sub_14023502C((__int64)&StartContext, (__int64)CurrentThread);
    if ( (v80 & 0x80000000) != 0 )
    {
      result = v80;
      goto LABEL_124;
    }
    goto LABEL_45;
  }
  v65 = (__int64)CurrentThread;
LABEL_124:
  if ( v85 )
  {
    sub_14024AA58((__int64)v84, v85, 1);
    goto LABEL_80;
  }
LABEL_72:
  if ( P )
  {
    if ( P[1] )
      sub_1405B7E7C(P);
    sub_14022B0E0((__int64)&StartContext, v65);
    ExFreePoolWithTag(P, 0);
    result = v80;
  }
  if ( v18 )
  {
LABEL_81:
    sub_1406FACF8(v18);
    ExFreePoolWithTag((PVOID)v18, 0);
    return v80;
  }
  return result;
}
