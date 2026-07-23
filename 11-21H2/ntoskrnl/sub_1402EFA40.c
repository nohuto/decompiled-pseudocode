/*
 * XREFs of sub_1402EFA40 @ 0x1402EFA40
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402103E0 @ 0x1402103E0 (sub_1402103E0.c)
 *     sub_140224100 @ 0x140224100 (sub_140224100.c)
 *     sub_14023BD18 @ 0x14023BD18 (sub_14023BD18.c)
 *     sub_140245C68 @ 0x140245C68 (sub_140245C68.c)
 *     sub_14024ECFC @ 0x14024ECFC (sub_14024ECFC.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     sub_1402B0820 @ 0x1402B0820 (sub_1402B0820.c)
 *     sub_1402B4EC0 @ 0x1402B4EC0 (sub_1402B4EC0.c)
 *     sub_1402B7AE0 @ 0x1402B7AE0 (sub_1402B7AE0.c)
 *     sub_1402B9970 @ 0x1402B9970 (sub_1402B9970.c)
 *     sub_1402EE784 @ 0x1402EE784 (sub_1402EE784.c)
 *     sub_1402EE894 @ 0x1402EE894 (sub_1402EE894.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     sub_1402F1DC0 @ 0x1402F1DC0 (sub_1402F1DC0.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140345C80 @ 0x140345C80 (sub_140345C80.c)
 *     sub_14035C560 @ 0x14035C560 (sub_14035C560.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_140428A30 @ 0x140428A30 (sub_140428A30.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14045B7FC @ 0x14045B7FC (sub_14045B7FC.c)
 *     sub_1406EA7D0 @ 0x1406EA7D0 (sub_1406EA7D0.c)
 */

char __fastcall sub_1402EFA40(ULONG_PTR a1)
{
  char result; // al
  int v3; // r13d
  int v4; // r13d
  void *v5; // r15
  unsigned __int8 CurrentIrql; // r15
  __int64 v7; // r9
  struct _KPRCB *CurrentPrcb; // rsi
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // rcx
  struct _KPRCB *v13; // rcx
  __int64 v14; // rdx
  unsigned __int8 v15; // r14
  struct _KPRCB *v16; // r15
  __int64 v17; // rcx
  bool v18; // zf
  __int64 v19; // r9
  __int64 v20; // r8
  _BYTE *v21; // r14
  char v22; // cl
  char v23; // al
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r8
  KPROCESSOR_MODE v27; // si
  __int64 v28; // rax
  KPROCESSOR_MODE v29; // di
  bool v30; // di
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rdx
  char v34; // r9
  __int64 v35; // rcx
  int v36; // eax
  int v37; // eax
  int v38; // eax
  __int64 v39; // rdx
  unsigned int v40; // edx
  char v41; // al
  char v42; // al
  struct _KPRCB *v43; // rcx
  __int64 v44; // rdx
  unsigned __int8 v45; // al
  struct _KPRCB *v46; // r10
  __int64 v47; // r9
  int v48; // eax
  unsigned __int8 v49; // r14
  __int64 v50; // r9
  struct _KPRCB *v51; // rdi
  __int64 v52; // rcx
  int v53; // eax
  __int64 v54; // rcx
  int v55; // eax
  __int64 v56; // rcx
  int v57; // eax
  char v58; // di
  char v59; // al
  unsigned __int8 v60; // al
  struct _KPRCB *v61; // r10
  __int64 v62; // r9
  int v63; // eax
  unsigned __int8 v64; // si
  __int64 v65; // r9
  struct _KPRCB *v66; // rdi
  __int64 v67; // rcx
  int v68; // eax
  __int64 v69; // rcx
  int v70; // eax
  unsigned __int8 v71; // al
  struct _KPRCB *v72; // r10
  __int64 v73; // r9
  int v74; // eax
  __int64 v75; // r8
  __int64 v76; // rdx
  __int64 v77; // r8
  int v78; // eax
  int v79; // eax
  int v80; // [rsp+38h] [rbp-99h] BYREF
  int v81; // [rsp+3Ch] [rbp-95h] BYREF
  int v82; // [rsp+40h] [rbp-91h] BYREF
  int v83; // [rsp+44h] [rbp-8Dh] BYREF
  _DWORD v84[4]; // [rsp+48h] [rbp-89h] BYREF
  _DWORD v85[40]; // [rsp+58h] [rbp-79h] BYREF

  result = (unsigned __int8)memset(v85, 0, 0x98uLL);
  v3 = *(_DWORD *)(a1 + 120);
  v80 = 0;
  v4 = v3 & 0x8000;
  if ( (*(_DWORD *)(a1 + 120) & 0x400) != 0 && !v4 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
    {
      v19 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
      *(_DWORD *)(v19 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
    }
    _interlockedbittestandreset((volatile signed __int32 *)(a1 + 120), 0xAu);
    sub_1402B4EC0(a1, 0);
    CurrentPrcb = KeGetCurrentPrcb();
    v81 = 0;
    while ( 1 )
    {
      v9 = *((_QWORD *)CurrentPrcb + 4375);
      if ( v9 )
      {
        if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
        {
          v36 = *(_DWORD *)(v9 + 24);
          *(_DWORD *)(v9 + 24) = v36 + 1;
          if ( v36 == -1 )
            sub_140418E4C(CurrentPrcb);
        }
      }
      if ( !_interlockedbittestandset64((volatile signed __int32 *)CurrentPrcb + 12, 0LL) )
        break;
      v31 = *((_QWORD *)CurrentPrcb + 4375);
      if ( v31 )
      {
        if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
        {
          v37 = *(_DWORD *)(v31 + 24) - 1;
          *(_DWORD *)(v31 + 24) = v37;
          if ( !v37 )
            sub_140418E4C(CurrentPrcb);
        }
      }
      do
        sub_1402F32E0(&v81);
      while ( *((_QWORD *)CurrentPrcb + 6) );
    }
    v10 = *((_QWORD *)CurrentPrcb + 2);
    if ( v10
      || (v10 = sub_1402B7AE0((__int64)CurrentPrcb, a1, 0LL)) != 0
      || (*(_DWORD *)(a1 + 120) & 0x200) == 0
      && (v11 = *(_QWORD *)(a1 + 104)) != 0
      && (v12 = *((unsigned int *)CurrentPrcb + 54) + v11) != 0
      && sub_14023BD18(v12)
      && (v10 = *((_QWORD *)CurrentPrcb + 3), sub_14035C560(CurrentPrcb, 1LL, 1LL), v10) )
    {
      *((_QWORD *)CurrentPrcb + 2) = 0LL;
      _disable();
      LOBYTE(v7) = 1;
      sub_140345C80(CurrentPrcb, a1, 0LL, v7);
      _enable();
      v21 = (_BYTE *)*((_QWORD *)CurrentPrcb + 7);
      if ( (*(_BYTE *)(v10 + 2) & 4) != 0
        && *(char *)(v10 + 195) < 16
        && *(_QWORD *)(v10 + 104)
        && (v32 = *(_QWORD *)(v10 + 104)) != 0
        && (v33 = *((unsigned int *)CurrentPrcb + 54) + v32) != 0
        && (unsigned int)sub_1402103E0(v10, v33, v20, 0, 0LL) )
      {
        v22 = v34 + 1;
      }
      else
      {
        v22 = *(_BYTE *)(v10 + 195);
      }
      v23 = v22 & 0x7F | (*(_BYTE *)(v10 + 119) << 7);
      *v21 = v23;
      v24 = *((_QWORD *)CurrentPrcb + 4375);
      if ( v24 )
      {
        if ( v10 == *((_QWORD *)CurrentPrcb + 3) )
          v39 = (unsigned int)dword_140D0504C;
        else
          v39 = v23 & 0x7F;
        sub_14045B7FC(v24, v39, 0LL);
      }
      v25 = *((_QWORD *)CurrentPrcb + 7);
      if ( dword_140D068FC )
      {
        v40 = *(_DWORD *)(v10 + 80);
        v41 = (*(_BYTE *)(v25 + 64) ^ *(_BYTE *)(v10 + 512)) & 7 ^ *(_BYTE *)(v25 + 64);
        v42 = (v41 ^ (8 * *(_BYTE *)(v10 + 516))) & 0x38 ^ v41;
        if ( v40 <= *(_DWORD *)(v10 + 84) )
          v40 = *(_DWORD *)(v10 + 84);
        *(_BYTE *)(v25 + 64) = (v40 >= dword_140D05308 ? 0x40 : 0) | v42 & 0xBF;
      }
      *((_QWORD *)CurrentPrcb + 1) = v10;
      if ( *(_BYTE *)(v10 + 388) == 1 )
        *(_DWORD *)(v10 + 132) = *(_DWORD *)(v10 + 132) - *(_DWORD *)(v10 + 436) + MEMORY[0xFFFFF78000000320];
      *(_BYTE *)(v10 + 388) = 2;
      if ( v10 != *((_QWORD *)CurrentPrcb + 3) && (*((_BYTE *)CurrentPrcb + 35) & 1) == 0 )
        __fastfail(0x21u);
      *(_BYTE *)(a1 + 643) = 38;
      *(_BYTE *)(a1 + 390) = 0;
      sub_1402B9970((__int64)CurrentPrcb, a1, v25);
      if ( (unsigned __int8)sub_140428A30(a1, v10, 0LL) )
      {
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
          {
            v43 = KeGetCurrentPrcb();
            v44 = *((_QWORD *)v43 + 4375);
            v18 = (*(_DWORD *)(v44 + 20) & 0xFFFF0003) == 0;
            *(_DWORD *)(v44 + 20) &= 0xFFFF0003;
            if ( v18 )
              sub_140418E4C(v43);
          }
        }
        __writecr8(1uLL);
        *(_DWORD *)(a1 + 116) &= ~0x40u;
        sub_1402F1DC0(0LL, 0LL, 0LL);
      }
    }
    else
    {
      _InterlockedAnd64((volatile signed __int64 *)CurrentPrcb + 6, 0LL);
      v13 = KeGetCurrentPrcb();
      v14 = *((_QWORD *)v13 + 4375);
      if ( v14 )
      {
        if ( *((_BYTE *)v13 + 32) <= 1u )
        {
          v38 = *(_DWORD *)(v14 + 24) - 1;
          *(_DWORD *)(v14 + 24) = v38;
          if ( !v38 )
            sub_140418E4C(v13);
        }
      }
    }
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v45 = KeGetCurrentIrql();
        if ( v45 <= 0xFu && CurrentIrql <= 0xFu && v45 >= 2u )
        {
          v46 = KeGetCurrentPrcb();
          v47 = *((_QWORD *)v46 + 4375);
          v48 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v18 = (v48 & *(_DWORD *)(v47 + 20)) == 0;
          *(_DWORD *)(v47 + 20) &= v48;
          if ( v18 )
            sub_140418E4C(v46);
        }
      }
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  v5 = (void *)(a1 + 736);
  if ( !*(_DWORD *)(a1 + 740) && !v4 )
  {
    v27 = (*(_DWORD *)(a1 + 116) & 0x40000) != 0;
    if ( (*(_DWORD *)(a1 + 116) & 0x40000) == 0 )
    {
      v28 = *(_QWORD *)(a1 + 144);
      if ( v28 )
      {
        --*(_WORD *)(a1 + 486);
        v29 = *(_BYTE *)(v28 + 368) & 1;
        v18 = (*(_WORD *)(a1 + 486))++ == 0xFFFF;
        v27 = v29;
        if ( v18 && *(_QWORD *)(a1 + 152) != a1 + 152 )
          KiCheckForKernelApcDelivery();
      }
    }
    v30 = (*(_BYTE *)(a1 + 194) & 2) != 0;
    if ( (*(_BYTE *)(a1 + 194) & 2) != 0 )
    {
      v49 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && v49 <= 0xFu )
      {
        v50 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
        *(_DWORD *)(v50 + 20) |= (-1 << (v49 + 1)) & 4;
      }
      v51 = KeGetCurrentPrcb();
      v82 = 0;
      v52 = *((_QWORD *)v51 + 4375);
      if ( v52 )
      {
        if ( *((_BYTE *)v51 + 32) <= 1u )
        {
          v53 = *(_DWORD *)(v52 + 24);
          *(_DWORD *)(v52 + 24) = v53 + 1;
          if ( v53 == -1 )
LABEL_104:
            sub_140418E4C(v51);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
      {
        v54 = *((_QWORD *)v51 + 4375);
        if ( v54 )
        {
          if ( *((_BYTE *)v51 + 32) <= 1u )
          {
            v55 = *(_DWORD *)(v54 + 24) - 1;
            *(_DWORD *)(v54 + 24) = v55;
            if ( !v55 )
              sub_140418E4C(v51);
          }
        }
        do
          sub_1402F32E0(&v82);
        while ( *(_QWORD *)(a1 + 64) );
        v56 = *((_QWORD *)v51 + 4375);
        if ( v56 )
        {
          if ( *((_BYTE *)v51 + 32) <= 1u )
          {
            v57 = *(_DWORD *)(v56 + 24);
            *(_DWORD *)(v56 + 24) = v57 + 1;
            if ( v57 == -1 )
              goto LABEL_104;
          }
        }
      }
      v58 = *(_BYTE *)(a1 + 194);
      v59 = v58 & 0xFD;
      v30 = (v58 & 2) != 0;
      *(_BYTE *)(a1 + 194) = v59;
      sub_140224100(a1);
      v5 = (void *)(a1 + 736);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v60 = KeGetCurrentIrql();
          if ( v60 <= 0xFu && v49 <= 0xFu && v60 >= 2u )
          {
            v61 = KeGetCurrentPrcb();
            v62 = *((_QWORD *)v61 + 4375);
            v63 = ~(unsigned __int16)(-1LL << (v49 + 1));
            v18 = (v63 & *(_DWORD *)(v62 + 20)) == 0;
            *(_DWORD *)(v62 + 20) &= v63;
            if ( v18 )
              sub_140418E4C(v61);
          }
        }
      }
      __writecr8(v49);
    }
    *(_DWORD *)(a1 + 116) |= 0x80000u;
    result = KeWaitForSingleObject(v5, Suspended, v27, 0, 0LL);
    *(_DWORD *)(a1 + 116) &= ~0x80000u;
    if ( v30 )
    {
      v64 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && v64 <= 0xFu )
      {
        v65 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
        *(_DWORD *)(v65 + 20) |= (-1 << (v64 + 1)) & 4;
      }
      v66 = KeGetCurrentPrcb();
      v83 = 0;
      while ( 1 )
      {
        v67 = *((_QWORD *)v66 + 4375);
        if ( v67 )
        {
          if ( *((_BYTE *)v66 + 32) <= 1u )
          {
            v68 = *(_DWORD *)(v67 + 24);
            *(_DWORD *)(v67 + 24) = v68 + 1;
            if ( v68 == -1 )
              sub_140418E4C(v66);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
          break;
        v69 = *((_QWORD *)v66 + 4375);
        if ( v69 )
        {
          if ( *((_BYTE *)v66 + 32) <= 1u )
          {
            v70 = *(_DWORD *)(v69 + 24) - 1;
            *(_DWORD *)(v69 + 24) = v70;
            if ( !v70 )
              sub_140418E4C(v66);
          }
        }
        do
          sub_1402F32E0(&v83);
        while ( *(_QWORD *)(a1 + 64) );
      }
      if ( *(_QWORD *)(a1 + 168) != a1 + 168 )
        *(_BYTE *)(a1 + 194) |= 2u;
      sub_140224100(a1);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v71 = KeGetCurrentIrql();
          if ( v71 <= 0xFu && v64 <= 0xFu && v71 >= 2u )
          {
            v72 = KeGetCurrentPrcb();
            v73 = *((_QWORD *)v72 + 4375);
            v74 = ~(unsigned __int16)(-1LL << (v64 + 1));
            v18 = (v74 & *(_DWORD *)(v73 + 20)) == 0;
            *(_DWORD *)(v73 + 20) &= v74;
            if ( v18 )
              sub_140418E4C(v72);
          }
        }
      }
      result = v64;
      __writecr8(v64);
    }
  }
  *(_DWORD *)(a1 + 116) &= ~0x40000u;
  if ( v4 )
  {
    if ( sub_140245C68(a1, &v80) )
    {
      memset(&v85[2], 0, 0x90uLL);
      LOBYTE(v75) = 1;
      v85[0] = v80;
      LOBYTE(v76) = 1;
      v85[1] = 1;
      sub_1406EA7D0(v85, v76, v75);
      LOBYTE(v77) = 1;
      sub_1406EA7D0(v85, 0LL, v77);
    }
    v15 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && v15 <= 0xFu )
    {
      v26 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
      *(_DWORD *)(v26 + 20) |= (-1 << (v15 + 1)) & 4;
    }
    v16 = KeGetCurrentPrcb();
    v84[0] = 0;
    while ( 1 )
    {
      v17 = *((_QWORD *)v16 + 4375);
      if ( v17 )
      {
        if ( *((_BYTE *)v16 + 32) <= 1u )
        {
          v78 = *(_DWORD *)(v17 + 24);
          *(_DWORD *)(v17 + 24) = v78 + 1;
          if ( v78 == -1 )
            sub_140418E4C(v16);
        }
      }
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
        break;
      v35 = *((_QWORD *)v16 + 4375);
      if ( v35 )
      {
        if ( *((_BYTE *)v16 + 32) <= 1u )
        {
          v79 = *(_DWORD *)(v35 + 24) - 1;
          *(_DWORD *)(v35 + 24) = v79;
          if ( !v79 )
            sub_140418E4C(v16);
        }
      }
      do
        sub_1402F32E0(v84);
      while ( *(_QWORD *)(a1 + 64) );
    }
    if ( (*(_DWORD *)(a1 + 116) & 0x4000) != 0 )
    {
      v18 = *(_BYTE *)(a1 + 730) == 0;
      *(_QWORD *)(a1 + 680) = sub_1406C2560;
      *(_BYTE *)(a1 + 729) = 1;
      if ( !v18 )
        sub_14024ECFC(a1 + 648);
      *(_BYTE *)(a1 + 730) = 1;
      sub_1402EE784(a1 + 648);
      sub_1402EE894((__int64)v16, a1 + 648, v15);
    }
    sub_140224100(a1);
    return sub_1402B0820((__int64)v16, 0, 1, 0, v15);
  }
  return result;
}
