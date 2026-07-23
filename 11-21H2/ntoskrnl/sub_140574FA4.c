/*
 * XREFs of sub_140574FA4 @ 0x140574FA4
 * Callers:
 *     KeSetHeteroCpuPolicyThread @ 0x14056B9E0 (KeSetHeteroCpuPolicyThread.c)
 *     sub_14056C00C @ 0x14056C00C (sub_14056C00C.c)
 *     sub_140882410 @ 0x140882410 (sub_140882410.c)
 * Callees:
 *     sub_140210C14 @ 0x140210C14 (sub_140210C14.c)
 *     sub_140224100 @ 0x140224100 (sub_140224100.c)
 *     sub_14022BA48 @ 0x14022BA48 (sub_14022BA48.c)
 *     sub_14028F83C @ 0x14028F83C (sub_14028F83C.c)
 *     sub_1402ADD00 @ 0x1402ADD00 (sub_1402ADD00.c)
 *     sub_1402B4EC0 @ 0x1402B4EC0 (sub_1402B4EC0.c)
 *     sub_1402B9970 @ 0x1402B9970 (sub_1402B9970.c)
 *     sub_1402F1DC0 @ 0x1402F1DC0 (sub_1402F1DC0.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_1402F6970 @ 0x1402F6970 (sub_1402F6970.c)
 *     sub_140340300 @ 0x140340300 (sub_140340300.c)
 *     sub_1403405E0 @ 0x1403405E0 (sub_1403405E0.c)
 *     sub_140344DD0 @ 0x140344DD0 (sub_140344DD0.c)
 *     sub_140345C80 @ 0x140345C80 (sub_140345C80.c)
 *     sub_14035C3FC @ 0x14035C3FC (sub_14035C3FC.c)
 *     sub_14035D0F8 @ 0x14035D0F8 (sub_14035D0F8.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_140428A30 @ 0x140428A30 (sub_140428A30.c)
 *     sub_14045AD66 @ 0x14045AD66 (sub_14045AD66.c)
 *     sub_14045ADBE @ 0x14045ADBE (sub_14045ADBE.c)
 *     sub_14062DAE4 @ 0x14062DAE4 (sub_14062DAE4.c)
 */

__int64 __fastcall sub_140574FA4(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // r12d
  int v5; // r14d
  int v6; // esi
  unsigned __int8 CurrentIrql; // r15
  struct _KPRCB *CurrentPrcb; // rdi
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  unsigned int v15; // eax
  int v16; // r14d
  char v17; // al
  bool v18; // sf
  unsigned __int8 v19; // al
  struct _KPRCB *v20; // rax
  __int64 v21; // r9
  int v22; // edx
  int v23; // eax
  __int64 v24; // rdi
  _WORD *v25; // rdx
  __int64 v26; // rsi
  __int64 v27; // rdx
  __int64 v28; // r9
  char v29; // cl
  unsigned __int64 v30; // rax
  char v31; // cl
  int v32; // ecx
  int v33; // esi
  unsigned __int8 v34; // al
  __int64 v35; // rdi
  __int64 v36; // rcx
  unsigned int v37; // r12d
  unsigned int v38; // r13d
  struct _KPRCB *v39; // rbx
  _QWORD *v40; // rdi
  char v41; // si
  ULONG_PTR v42; // rdi
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // r9
  struct _KPRCB *v46; // rsi
  __int64 v47; // rcx
  int v48; // eax
  __int64 v49; // rcx
  int v50; // eax
  __int64 v51; // rsi
  __int64 v52; // r8
  unsigned int v53; // r8d
  bool v54; // zf
  struct _KPRCB *v55; // rcx
  __int64 v56; // rdx
  struct _KPRCB *v57; // r9
  __int64 v58; // r8
  int v59; // eax
  _QWORD *v61; // [rsp+30h] [rbp-39h] BYREF
  __int64 v62; // [rsp+38h] [rbp-31h] BYREF
  unsigned int v63; // [rsp+40h] [rbp-29h]
  unsigned int v64; // [rsp+44h] [rbp-25h]
  int v65; // [rsp+48h] [rbp-21h] BYREF
  volatile signed __int64 *v66; // [rsp+50h] [rbp-19h] BYREF
  __int128 v67; // [rsp+58h] [rbp-11h] BYREF
  __int64 v68; // [rsp+68h] [rbp-1h]
  int v69[20]; // [rsp+70h] [rbp+7h] BYREF
  int v70; // [rsp+E0h] [rbp+77h] BYREF

  v62 = 0LL;
  v61 = 0LL;
  v4 = a4;
  v66 = 0LL;
  v5 = a3;
  v6 = a2;
  v68 = 0LL;
  v67 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    a4 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    a2 = (-1LL << (CurrentIrql + 1)) & 4;
    a3 = (unsigned int)a2 | *(_DWORD *)(a4 + 20);
    *(_DWORD *)(a4 + 20) = a3;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v70 = 0;
  while ( 1 )
  {
    v10 = *((_QWORD *)CurrentPrcb + 4375);
    if ( v10 )
    {
      if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
      {
        v11 = *(_DWORD *)(v10 + 24);
        *(_DWORD *)(v10 + 24) = v11 + 1;
        if ( v11 == -1 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
      break;
    v12 = *((_QWORD *)CurrentPrcb + 4375);
    if ( v12 )
    {
      if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
      {
        v13 = *(_DWORD *)(v12 + 24) - 1;
        *(_DWORD *)(v12 + 24) = v13;
        if ( !v13 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
    do
      sub_1402F32E0(&v70, a2, a3, a4);
    while ( *(_QWORD *)(a1 + 64) );
  }
  v14 = *(unsigned int *)(a1 + 588);
  v15 = *(_DWORD *)(a1 + 196);
  v63 = *(_DWORD *)(a1 + 588);
  v64 = v15;
  if ( v5 )
  {
    v16 = *(unsigned __int8 *)(a1 + 125);
    v17 = (*(_BYTE *)(a1 + 126) ^ v6) & 0x7F;
    v18 = ((v17 ^ *(_BYTE *)(a1 + 126)) & 0x80u) != 0;
    *(_BYTE *)(a1 + 126) ^= v17;
    if ( v18 )
      goto LABEL_20;
    goto LABEL_19;
  }
  if ( v4 )
  {
LABEL_19:
    v16 = v6;
    goto LABEL_20;
  }
  v16 = *(_BYTE *)(a1 + 126) & 0x7F;
  *(_BYTE *)(a1 + 126) &= ~0x80u;
LABEL_20:
  if ( v16 == 8 )
    v16 = dword_140D0509C;
  if ( !dword_140D068FC )
  {
    v16 = 0;
    *(_BYTE *)(a1 + 126) &= ~0x80u;
  }
  if ( *(unsigned __int8 *)(a1 + 125) == v16 )
  {
    sub_140224100(a1);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v19 = KeGetCurrentIrql();
        if ( v19 <= 0xFu && CurrentIrql <= 0xFu && v19 >= 2u )
        {
          v20 = KeGetCurrentPrcb();
          v21 = *((_QWORD *)v20 + 4375);
          v22 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v54 = (v22 & *(_DWORD *)(v21 + 20)) == 0;
          *(_DWORD *)(v21 + 20) &= v22;
          if ( v54 )
            sub_140418E4C((__int64)v20);
        }
      }
    }
LABEL_98:
    __writecr8(CurrentIrql);
    return (unsigned int)v16;
  }
  v23 = v16;
  v24 = qword_140D088C0[v14];
  if ( v16 >= 5 )
    v23 = sub_14045AD66(a1, a2, a3, a4);
  v25 = *(_WORD **)(a1 + 576);
  v26 = *(unsigned __int8 *)(v24 + 208);
  if ( (unsigned __int16)v26 >= *v25 )
    v27 = 0LL;
  else
    v27 = *(_QWORD *)&v25[4 * v26 + 4];
  sub_14045ADBE(*(_QWORD *)(v24 + 192), v27, v23, *(_BYTE *)(a1 + 516), &v67);
  if ( ((unsigned __int64)v67 & *(_QWORD *)(v24 + 200)) == 0 )
  {
    v29 = *(_BYTE *)(v24 + 209);
    _BitScanForward64(&v30, __ROR8__(v67, v29));
    v31 = v30 + v29;
    LODWORD(v30) = *(_DWORD *)(a1 + 116);
    v32 = dword_140D105E0[64 * (_DWORD)v26 + (v31 & 0x3F)];
    *(_DWORD *)(a1 + 588) = v32;
    if ( (v30 & 8) == 0 )
      *(_DWORD *)(a1 + 196) = v32;
  }
  v33 = 0;
  v34 = sub_140344DD0(a1, (__int64)&v62, (volatile signed __int32 **)&v66, v28);
  v35 = v62;
  *(_BYTE *)(a1 + 125) = v16;
  if ( v34 == 1 )
  {
    sub_140210C14(v35, (__int64)v66, a1, *(char *)(a1 + 195));
    sub_14028F83C(a1, *(char *)(a1 + 195), (__int64)&v61);
  }
  else
  {
    v36 = (unsigned int)v34 - 2;
    if ( v34 == 2 )
    {
      if ( (*(_QWORD *)(v35 + 200) & v68) == 0 )
      {
        if ( *(_BYTE *)(a1 + 388) == 2 )
        {
          _interlockedbittestandset((volatile signed __int32 *)(a1 + 120), 0xCu);
          v35 = v62;
          if ( !*(_QWORD *)(v62 + 16) )
          {
            sub_14035C3FC(v62, (__int64)&v61);
            v33 = 1;
          }
        }
        else
        {
          *(_BYTE *)(a1 + 112) |= 8u;
          v35 = v62;
        }
      }
    }
    else if ( v34 == 3 && (*(_QWORD *)(v35 + 200) & v68) == 0 )
    {
      sub_14035C3FC(v35, (__int64)&v61);
      sub_1402F6970((__int64)&v61, a1);
    }
  }
  v37 = *(_DWORD *)(a1 + 588);
  v38 = *(_DWORD *)(a1 + 196);
  sub_14035D0F8(v36, v35, v66);
  sub_140224100(a1);
  if ( v33 && HIDWORD(KeGetPcr()[1].LockArray) != *(_DWORD *)(v62 + 36) )
    sub_14022BA48();
  if ( _bittest((const signed __int32 *)&xmmword_140D06910, 0x1Bu) )
    sub_14062DAE4(a1, 1350LL, v63, v37);
  if ( _bittest((const signed __int32 *)&xmmword_140D06910, 0x1Bu) )
    sub_14062DAE4(a1, 1351LL, v64, v38);
  v39 = KeGetCurrentPrcb();
  v40 = v61;
  v41 = 0;
  if ( v61 )
  {
    v61 = (_QWORD *)*v61;
    do
    {
      sub_1403405E0((__int64)v39, (ULONG_PTR)(v40 - 27), (__int64)&v61);
      v40 = v61;
      ++v41;
      if ( v61 )
        v61 = (_QWORD *)*v61;
      if ( (v41 & 0xF) == 0 )
        sub_140340300((unsigned __int8 *)v39 + 12760);
    }
    while ( v40 );
  }
  sub_140340300((unsigned __int8 *)v39 + 12760);
  if ( CurrentIrql < 2u )
  {
    v42 = *((_QWORD *)v39 + 1);
    if ( *((_QWORD *)v39 + 2) )
    {
      sub_1402B4EC0(*((_QWORD *)v39 + 1), 0);
      v46 = KeGetCurrentPrcb();
      v65 = 0;
      while ( 1 )
      {
        v47 = *((_QWORD *)v46 + 4375);
        if ( v47 )
        {
          if ( *((_BYTE *)v46 + 32) <= 1u )
          {
            v48 = *(_DWORD *)(v47 + 24);
            *(_DWORD *)(v47 + 24) = v48 + 1;
            if ( v48 == -1 )
              sub_140418E4C((__int64)v46);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)v39 + 12, 0LL) )
          break;
        v49 = *((_QWORD *)v46 + 4375);
        if ( v49 )
        {
          if ( *((_BYTE *)v46 + 32) <= 1u )
          {
            v50 = *(_DWORD *)(v49 + 24) - 1;
            *(_DWORD *)(v49 + 24) = v50;
            if ( !v50 )
              sub_140418E4C((__int64)v46);
          }
        }
        do
          sub_1402F32E0(&v65, v43, v44, v45);
        while ( *((_QWORD *)v39 + 6) );
      }
      v51 = *((_QWORD *)v39 + 2);
      *((_QWORD *)v39 + 2) = 0LL;
      _disable();
      LOBYTE(v45) = 1;
      sub_140345C80((__int64)v39, v42, 0LL, v45);
      _enable();
      *((_QWORD *)v39 + 1) = v51;
      if ( *(_BYTE *)(v51 + 388) == 1 )
      {
        v52 = (unsigned int)(*(_DWORD *)(v51 + 132) - *(_DWORD *)(v51 + 436));
        *(_DWORD *)(v51 + 132) = v52 + MEMORY[0xFFFFF78000000320];
      }
      *(_BYTE *)(v51 + 388) = 2;
      *(_BYTE *)(v42 + 643) = 32;
      *(_BYTE *)(v42 + 390) = CurrentIrql;
      sub_1402B9970((__int64)v39, v42, v52);
      LOBYTE(v53) = CurrentIrql;
      v54 = (unsigned __int8)sub_140428A30(v42, v51, v53) == 0;
    }
    else
    {
      v54 = (*(_DWORD *)(v42 + 116) & 0x40) == 0;
    }
    if ( !v54 )
    {
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
        {
          v55 = KeGetCurrentPrcb();
          v56 = *((_QWORD *)v55 + 4375);
          v54 = (*(_DWORD *)(v56 + 20) & 0xFFFF0003) == 0;
          *(_DWORD *)(v56 + 20) &= 0xFFFF0003;
          if ( v54 )
            sub_140418E4C((__int64)v55);
        }
      }
      __writecr8(1uLL);
      *(_DWORD *)(v42 + 116) &= ~0x40u;
      sub_1402F1DC0(0, 0LL, 0LL);
    }
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
      {
        v57 = KeGetCurrentPrcb();
        v58 = *((_QWORD *)v57 + 4375);
        v59 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v54 = (v59 & *(_DWORD *)(v58 + 20)) == 0;
        *(_DWORD *)(v58 + 20) &= v59;
        if ( v54 )
          sub_140418E4C((__int64)v57);
      }
    }
    goto LABEL_98;
  }
  if ( *((_QWORD *)v39 + 2) && !*((_BYTE *)v39 + 13242) )
  {
    if ( *((_BYTE *)v39 + 32) )
    {
      *((_BYTE *)v39 + 6) = 1;
    }
    else
    {
      v69[0] = 5;
      *(_OWORD *)&v69[1] = 0LL;
      sub_1402ADD00(v69, 0x2Fu);
    }
  }
  return (unsigned int)v16;
}
