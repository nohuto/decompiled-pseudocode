/*
 * XREFs of sub_1406FCA10 @ 0x1406FCA10
 * Callers:
 *     NtMapViewOfSection @ 0x1406FB000 (NtMapViewOfSection.c)
 *     sub_140756C90 @ 0x140756C90 (sub_140756C90.c)
 *     MmMapViewOfSection @ 0x140785150 (MmMapViewOfSection.c)
 *     sub_1407A6574 @ 0x1407A6574 (sub_1407A6574.c)
 * Callees:
 *     sub_140287970 @ 0x140287970 (sub_140287970.c)
 *     sub_1402D0930 @ 0x1402D0930 (sub_1402D0930.c)
 *     sub_14030D5C0 @ 0x14030D5C0 (sub_14030D5C0.c)
 *     sub_14032BCC0 @ 0x14032BCC0 (sub_14032BCC0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1406F8D30 @ 0x1406F8D30 (sub_1406F8D30.c)
 *     sub_1406F9990 @ 0x1406F9990 (sub_1406F9990.c)
 *     sub_1406FB4D0 @ 0x1406FB4D0 (sub_1406FB4D0.c)
 *     sub_1406FCF80 @ 0x1406FCF80 (sub_1406FCF80.c)
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 *     sub_14079EC14 @ 0x14079EC14 (sub_14079EC14.c)
 *     sub_140852834 @ 0x140852834 (sub_140852834.c)
 */

__int64 __fastcall sub_1406FCA10(
        __int64 a1,
        __int64 a2,
        void **a3,
        unsigned __int64 a4,
        unsigned int *a5,
        int a6,
        int a7)
{
  ULONG_PTR v10; // r14
  _WORD *v11; // r8
  unsigned int *v12; // r11
  unsigned __int64 v13; // r12
  __int64 v14; // rsi
  int v15; // r9d
  int v16; // r8d
  int v17; // ecx
  int v18; // r9d
  int v19; // r8d
  __int64 v20; // rcx
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // r8
  unsigned __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rdx
  unsigned __int64 v26; // rcx
  __int64 v27; // rdx
  unsigned __int64 v28; // r9
  int v29; // r10d
  unsigned __int64 *v30; // rax
  unsigned __int64 v31; // rdx
  int v32; // r8d
  __int16 v33; // ax
  unsigned int v34; // ecx
  unsigned int v35; // esi
  int v36; // r8d
  __int64 v37; // r9
  struct _KTHREAD *CurrentThread; // rdx
  __int64 v39; // rcx
  __int64 v40; // rcx
  int v41; // edi
  unsigned int *v42; // r11
  int v43; // eax
  int v44; // eax
  size_t v46; // r14
  int v47; // eax
  unsigned __int64 v48; // rax
  BOOLEAN v49; // al
  int v50; // eax
  void *v51; // [rsp+48h] [rbp-E0h] BYREF
  void *Src; // [rsp+50h] [rbp-D8h] BYREF
  int v53; // [rsp+58h] [rbp-D0h]
  unsigned __int64 v54; // [rsp+60h] [rbp-C8h]
  ULONG_PTR BugCheckParameter1; // [rsp+68h] [rbp-C0h]
  __int64 v56; // [rsp+70h] [rbp-B8h]
  void **v57; // [rsp+78h] [rbp-B0h]
  __int64 v58; // [rsp+80h] [rbp-A8h]
  unsigned __int64 v59; // [rsp+88h] [rbp-A0h]
  size_t v60; // [rsp+90h] [rbp-98h]
  ULONG_PTR v61; // [rsp+98h] [rbp-90h]
  __int64 v62; // [rsp+A0h] [rbp-88h]
  void **v63; // [rsp+B0h] [rbp-78h]
  _OWORD v64[3]; // [rsp+B8h] [rbp-70h] BYREF

  v54 = a4;
  v57 = a3;
  v62 = a2;
  v63 = a3;
  memset(v64, 0, sizeof(v64));
  v51 = 0LL;
  Src = 0LL;
  v10 = *(_QWORD *)(a2 + 88);
  BugCheckParameter1 = v10;
  v61 = v10;
  v53 = 0;
  v58 = a1;
  v13 = sub_140287970(a1);
  v59 = v13;
  v14 = *(_QWORD *)v13;
  v56 = *(_QWORD *)(a2 + 24);
  if ( !a7 )
  {
    if ( (unsigned int)(a6 - 1) > 1 )
      return 3221225485LL;
    if ( (*(_DWORD *)(v13 + 56) & 0x400) == 0 && *(_QWORD *)(a2 + 16) >= 0x10000uLL && (*v11 || *(_WORD *)v12) )
      return 3221226016LL;
  }
  if ( !a7 && (*(_DWORD *)(a2 + 40) & 0x9F2BDFFF) != 0 )
    return 3221225485LL;
  v15 = *(_DWORD *)(a2 + 40);
  if ( (v15 & 0x40000000) != 0 && !a7 && !*(_QWORD *)(v10 + 2240) )
    return 3221225485LL;
  v16 = *(_DWORD *)(a2 + 44);
  if ( (v16 & 0xF0) != 0 || (*(_DWORD *)(a1 + 56) & 0x20) != 0 )
    *(_DWORD *)(a2 + 60) |= 8u;
  if ( (v16 & 0x40000000) != 0 )
  {
    if ( (v16 & 0xF0) == 0 || (*(_DWORD *)(a1 + 56) & 0x20) != 0 )
      return 3221225485LL;
    v16 &= ~0x40000000u;
    *(_DWORD *)(a2 + 44) = v16;
    *(_DWORD *)(a2 + 120) |= 2u;
  }
  if ( (*(_DWORD *)(a2 + 120) & 8) != 0 && ((v16 & 0xF0) == 0 || (*(_DWORD *)(a1 + 56) & 0x20) != 0) )
    return 3221225485LL;
  if ( (*(_DWORD *)(a1 + 56) & 0x20) == 0 )
  {
    v17 = dword_140015E20[sub_14032BCC0(*(_DWORD *)(a1 + 60) & 0xFFF) & 7] | 0x700;
    if ( (v17 | v19) != v17 )
      return 3221225550LL;
    if ( (v18 & 0x840000) == 0
      && !*(_WORD *)(a2 + 58)
      && ((v18 & 0x20002000) == 0 || (*(_DWORD *)(v13 + 56) & 0x400) == 0) )
    {
      goto LABEL_19;
    }
    return 3221225485LL;
  }
  if ( *(_QWORD *)(a2 + 72) && (*(_DWORD *)(a2 + 64) & 0x2000000) == 0 || (v15 & 0x2000) != 0 )
    return 3221225485LL;
  if ( (v15 & 0x20000000) != 0 )
  {
    if ( *(_QWORD *)v12
      || (dword_140D06880 & 0x20000) != 0
      || (*(_DWORD *)(v13 + 56) & 0x20000) != 0
      || (v49 = SeSinglePrivilegeCheck(stru_140D3CA80, *(_BYTE *)(a2 + 57)), v12 = a5, !v49) )
    {
      *(_DWORD *)(a2 + 40) &= ~0x20000000u;
    }
  }
LABEL_19:
  v20 = *(_QWORD *)(a2 + 24);
  v21 = v20 + *(_QWORD *)v12;
  if ( v21 < *(_QWORD *)v12 )
    return 3221225503LL;
  v22 = *(_QWORD *)(a1 + 48);
  if ( v21 > v22 && (*(_DWORD *)(a2 + 40) & 0x2000) == 0 )
    return 3221225503LL;
  if ( !v20 )
    *(_QWORD *)(a2 + 24) = v22 - *(_QWORD *)v12;
  if ( (*(_DWORD *)(v13 + 56) & 0x400) != 0 )
  {
    if ( (*v12 & 0xFFF) != 0 )
    {
      if ( (*(_DWORD *)(a2 + 60) & 2) != 0 )
        return 3221226016LL;
      *v12 &= 0xFFFFF000;
    }
  }
  else
  {
    v23 = *(_QWORD *)(a2 + 16);
    if ( v23 > 0x10000 && *(_QWORD *)(v13 + 64) )
      v23 = 0x10000LL;
    v24 = *v12;
    v25 = v24 & (v23 - 1);
    if ( v25 )
    {
      if ( (*(_DWORD *)(a2 + 60) & 2) != 0 )
        return 3221226016LL;
      *v12 = v24 & -(int)v23;
      if ( (*(_DWORD *)(v13 + 56) & 0x20) == 0 )
      {
        v48 = *(_QWORD *)(a2 + 24);
        if ( v48 + v25 < v48 )
          return 3221225503LL;
        *(_QWORD *)(a2 + 24) = v48 + v25;
      }
    }
  }
  v26 = *(_QWORD *)(a2 + 24);
  if ( (__int64)v26 <= 0 )
    return 3221225503LL;
  v27 = *(_QWORD *)(a2 + 16);
  if ( ((v27 - 1) & (unsigned __int64)*a3) == 0 )
    goto LABEL_28;
  if ( (*(_DWORD *)(a2 + 60) & 2) != 0 )
    return 3221226016LL;
  *a3 = (void *)((unsigned __int64)*a3 & -v27);
  v26 = *(_QWORD *)(a2 + 24);
LABEL_28:
  *(_QWORD *)(a2 + 32) = v26;
  v28 = v26;
  if ( (v26 & 0xFFF) == 0 )
    goto LABEL_29;
  v28 = v26 + 4096 - (unsigned int)(v26 & 0xFFF);
  if ( v28 < v26 )
    return 3221225503LL;
  *(_QWORD *)(a2 + 24) = v28;
LABEL_29:
  v29 = *(_DWORD *)(a2 + 60) & 1;
  v30 = (unsigned __int64 *)a3;
  if ( !v29 )
    v30 = (unsigned __int64 *)a2;
  v31 = *(_QWORD *)(a2 + 8);
  if ( *v30 > v31 )
    return 3221225485LL;
  if ( v31 - *v30 + 1 < v28 )
    return (unsigned int)(v29 != 0) - 1073741801;
  if ( v54 > v26 && (*(_DWORD *)(a2 + 40) & 0x2000) == 0 )
    return 3221225485LL;
  if ( v26 > *(_QWORD *)(a1 + 48) && (*(_DWORD *)(a2 + 40) & 0x2000) == 0 )
    return 3221225503LL;
  v32 = *(_DWORD *)(a2 + 40);
  if ( (v32 & 0x2000) != 0 && (*(_DWORD *)(a1 + 60) & 0x44) == 0 )
    return 3221225550LL;
  if ( (v32 & 0x800000) != 0 && ((*(_DWORD *)(a1 + 56) & 0x20) == 0 || (v32 & 0x20000000) != 0)
    || (*(_DWORD *)(a2 + 64) & 0x4000000) != 0
    && ((*(_DWORD *)(v13 + 56) & 0x420) != 0
     || (v32 & 0xFFFFDFFF) != 0
     || !v29
     || *a3 != (void *)((unsigned __int64)*a3 & 0xFFFFFFFFFFFFF000uLL)
     || !v56) )
  {
    return 3221225485LL;
  }
  v33 = *(_WORD *)(v14 + 12);
  v34 = *(_DWORD *)(a2 + 44);
  if ( v33 < 0 )
  {
    v34 = v34 & 0xFFFFF9FF | 0x200;
    *(_DWORD *)(a2 + 44) = v34;
    v33 = *(_WORD *)(v14 + 12);
  }
  if ( (v33 & 0x4000) != 0 )
  {
    v34 = v34 & 0xFFFFF9FF | 0x400;
    *(_DWORD *)(a2 + 44) = v34;
  }
  v35 = sub_14032BCC0(v34);
  LODWORD(v56) = v35;
  if ( v35 == -1 )
    return 3221225541LL;
  CurrentThread = KeGetCurrentThread();
  v39 = *(_QWORD *)(a2 + 96);
  if ( (*(_DWORD *)(v39 + 2512) & 0x100) != 0 && (*((_DWORD *)CurrentThread + 344) & 0x40000) == 0 )
  {
    if ( (*(_DWORD *)(a1 + 56) & 0x20) != 0 )
    {
      *(_DWORD *)(a2 + 40) = v36 & 0xDFFFFFFF;
    }
    else if ( (v35 & 2) != 0 )
    {
      return sub_14079EC14(v39);
    }
  }
  if ( v39 != v10 )
  {
    sub_14030D5C0(v10, 0LL, (__int64)v64, v37);
    v53 = 1;
  }
  v41 = sub_1406FCF80(a2, CurrentThread);
  if ( v41 >= 0 )
  {
    v43 = *(_DWORD *)(v13 + 56);
    if ( (v43 & 0x400) != 0 )
    {
      v44 = sub_140852834(v40, a3, v42, v35);
    }
    else
    {
      if ( (v43 & 0x20) != 0 )
      {
        v51 = *a3;
        Src = v51;
        v46 = *(_QWORD *)(a2 + 24);
        v60 = v46;
        while ( 1 )
        {
          v41 = sub_1406F9990(v13, a2, (unsigned __int64 *)&v51, v42, a1, a6, v35, 0);
          LODWORD(v54) = v41;
          v47 = *(_DWORD *)(a2 + 40);
          if ( (v47 & 0x20000000) == 0 )
            break;
          *(_DWORD *)(a2 + 40) = v47 & 0xDFFFFFFF;
          v50 = sub_1406F9990(v13, a2, (unsigned __int64 *)&Src, a5, a1, a6, v35, 0);
          if ( v41 < 0 )
          {
            v51 = Src;
            v41 = v50;
            break;
          }
          if ( v50 >= 0 )
          {
            memmove(v51, Src, v46);
            sub_1406F8D30(BugCheckParameter1, (unsigned __int64)Src, 0, 0LL);
            break;
          }
          sub_1406F8D30(BugCheckParameter1, (unsigned __int64)v51, 0, 0LL);
          v42 = a5;
        }
        if ( v41 >= 0 )
          *v57 = v51;
        goto LABEL_51;
      }
      v44 = sub_1406FB4D0(v13, a2, (unsigned __int64 *)a3, (unsigned __int64 *)v42, a1, a6, v35, v54);
    }
    v41 = v44;
  }
LABEL_51:
  if ( v53 )
    sub_1402D0930((__int64)v64, 0LL);
  return (unsigned int)v41;
}
