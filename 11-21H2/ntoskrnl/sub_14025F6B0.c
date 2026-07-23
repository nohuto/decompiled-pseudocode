/*
 * XREFs of sub_14025F6B0 @ 0x14025F6B0
 * Callers:
 *     sub_14025FF40 @ 0x14025FF40 (sub_14025FF40.c)
 *     sub_14033AC90 @ 0x14033AC90 (sub_14033AC90.c)
 *     sub_14037E048 @ 0x14037E048 (sub_14037E048.c)
 *     sub_14059D070 @ 0x14059D070 (sub_14059D070.c)
 *     sub_1407F7238 @ 0x1407F7238 (sub_1407F7238.c)
 * Callees:
 *     sub_14025ED04 @ 0x14025ED04 (sub_14025ED04.c)
 *     sub_14025FB48 @ 0x14025FB48 (sub_14025FB48.c)
 *     sub_14025FD40 @ 0x14025FD40 (sub_14025FD40.c)
 *     sub_1402E266C @ 0x1402E266C (sub_1402E266C.c)
 *     RtlSetBits @ 0x1402E4C80 (RtlSetBits.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     sub_140340078 @ 0x140340078 (sub_140340078.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     ExAcquireSpinLockShared @ 0x140366580 (ExAcquireSpinLockShared.c)
 *     sub_140389840 @ 0x140389840 (sub_140389840.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14059C440 @ 0x14059C440 (sub_14059C440.c)
 */

__int64 __fastcall sub_14025F6B0(__int64 a1, unsigned __int64 *a2, unsigned __int64 a3, unsigned int a4)
{
  unsigned int v4; // esi
  unsigned __int64 v7; // rbx
  __int64 v8; // r14
  unsigned int v9; // eax
  unsigned int v10; // ecx
  unsigned int v11; // esi
  __int64 *v12; // r15
  __int64 i; // r12
  __int16 v14; // cx
  __int64 v15; // rdi
  int v16; // eax
  int v17; // ecx
  unsigned __int64 v18; // r13
  KIRQL v19; // al
  KIRQL v20; // r15
  unsigned __int64 v21; // r10
  bool v22; // zf
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // rax
  ULONG v28; // edi
  char v29; // al
  unsigned int v30; // esi
  volatile LONG *v31; // rcx
  unsigned __int64 v33; // rbx
  __int64 v34; // rdx
  unsigned int v35; // eax
  int v36; // esi
  ULONG v37; // eax
  unsigned __int64 v38; // r8
  volatile LONG *v39; // rcx
  unsigned int v40; // eax
  unsigned __int64 v41; // rcx
  unsigned __int64 v42; // rdx
  __int64 j; // rcx
  unsigned __int8 v44; // al
  struct _KPRCB *v45; // r10
  __int64 v46; // r9
  int v47; // eax
  ULONG v48; // eax
  unsigned __int8 v49; // al
  struct _KPRCB *v50; // r9
  __int64 v51; // r8
  int v52; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v55; // r8
  int v56; // eax
  int v57; // [rsp+30h] [rbp-50h] BYREF
  int v58; // [rsp+34h] [rbp-4Ch]
  int v59; // [rsp+38h] [rbp-48h]
  __int128 v60; // [rsp+40h] [rbp-40h]
  __int128 v61; // [rsp+50h] [rbp-30h]
  __int128 v62; // [rsp+60h] [rbp-20h]
  __int64 v63; // [rsp+70h] [rbp-10h]
  unsigned int v66; // [rsp+D8h] [rbp+58h]

  v66 = a4;
  v63 = 0LL;
  v4 = a4;
  v60 = 0LL;
  v61 = 0LL;
  v62 = 0LL;
  if ( a3 >= 0xFFFFFFFF )
    return 0LL;
  LODWORD(v7) = -1;
  if ( (a4 & 0x10) != 0 )
    goto LABEL_3;
  v8 = *(_QWORD *)(a1 + 8LL * ((unsigned __int8)HIBYTE(*(_WORD *)a2) >> 4) + 16736);
  if ( (a4 & 0x65) == 1
    && (unsigned int)sub_14025FD40(*(_QWORD *)(a1 + 8LL * ((unsigned __int8)HIBYTE(*(_WORD *)a2) >> 4) + 16736)) < a3 )
  {
    v4 |= 0x10u;
    v66 = v4;
  }
  else
  {
    v33 = *a2;
    if ( qword_140C50780 && (v33 & 0x10) == 0 )
      v33 &= ~qword_140C50780;
    v7 = HIDWORD(v33);
  }
  if ( (v4 & 0x10) != 0 )
  {
LABEL_3:
    v8 = *(_QWORD *)(a1 + 16736);
    v9 = sub_14025FD40(v8);
    v10 = *(_DWORD *)(a1 + 16728);
    v11 = v9;
    if ( v10 > 1 )
    {
      v12 = (__int64 *)(a1 + 16744);
      for ( i = v10 - 1; i; --i )
      {
        v14 = *(_WORD *)(v8 + 204);
        v15 = *v12;
        if ( (v14 & 0x10) != 0 && (*(_BYTE *)(v15 + 204) & 0x10) == 0
          || (v14 & 0x20) != 0 && (*(_BYTE *)(v15 + 204) & 0x20) == 0 )
        {
          v8 = *v12;
          v40 = sub_14025FD40(*v12);
        }
        else
        {
          if ( (*(_WORD *)(v15 + 204) & 0x30) != 0 )
            goto LABEL_8;
          v40 = sub_14025FD40(*v12);
          if ( v40 <= v11 )
            goto LABEL_8;
          v8 = v15;
        }
        v11 = v40;
LABEL_8:
        ++v12;
      }
    }
    v4 = v66;
  }
  v16 = 0;
  v57 = 0;
  v17 = v4 & 4;
  v59 = v17;
LABEL_11:
  v18 = 0LL;
  v58 = 0;
  if ( v17 )
  {
    v20 = 0;
  }
  else
  {
    if ( (v4 & 1) != 0 || v16 )
    {
      v19 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v8 + 232));
    }
    else
    {
      v58 = 1;
      v19 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(v8 + 232));
    }
    v20 = v19;
  }
  if ( (*(_BYTE *)(v8 + 207) & 1) != 0 )
  {
LABEL_94:
    if ( !v59 )
    {
      v39 = (volatile LONG *)(v8 + 232);
      if ( v58 )
        ExReleaseSpinLockSharedFromDpcLevel(v39);
      else
        ExReleaseSpinLockExclusiveFromDpcLevel(v39);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && v20 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v55 = *((_QWORD *)CurrentPrcb + 4375);
            v56 = ~(unsigned __int16)(-1LL << (v20 + 1));
            v22 = (v56 & *(_DWORD *)(v55 + 20)) == 0;
            *(_DWORD *)(v55 + 20) &= v56;
            if ( v22 )
              sub_140418E4C(CurrentPrcb);
          }
        }
      }
      __writecr8(v20);
    }
    return 0LL;
  }
  if ( (_DWORD)v7 == -1 )
    goto LABEL_17;
  v34 = *(_QWORD *)(v8 + 112);
  if ( (unsigned int)v7 >= *(_DWORD *)(v34 + 24) )
  {
    if ( (v4 & 0x48) == 0 )
    {
LABEL_17:
      v21 = a3;
      goto LABEL_18;
    }
    goto LABEL_94;
  }
  if ( _bittest64(*(const signed __int64 **)(v34 + 32), (unsigned int)v7)
    || _bittest64(*(const signed __int64 **)(v34 + 16), (unsigned int)v7) )
  {
    v21 = a3;
    v28 = 0;
    v36 = v4 & 0x40;
    goto LABEL_74;
  }
  v35 = sub_1402E266C(v34 + 24, (unsigned int)v7, (unsigned int)a3);
  v21 = a3;
  if ( v35 == (_DWORD)a3 )
  {
    v36 = v4 & 0x40;
LABEL_73:
    v37 = sub_1402E266C(*(_QWORD *)(v8 + 112) + 8LL, (unsigned int)v7, v35);
    v21 = a3;
    v28 = v37;
    if ( v37 == (_DWORD)a3 || v36 )
      goto LABEL_74;
    goto LABEL_85;
  }
  v36 = v4 & 0x40;
  if ( v36 )
    goto LABEL_73;
LABEL_85:
  v28 = 0;
LABEL_74:
  if ( v28 == v21 || v36 )
  {
    v57 = v7;
    goto LABEL_47;
  }
  v4 = v66;
  while ( 1 )
  {
LABEL_18:
    if ( (v4 & 8) != 0 )
    {
      v57 = v7;
      v48 = sub_14059C440(v8, &v57, (unsigned int)v21, v4);
      LODWORD(v7) = v57;
      v28 = v48;
      goto LABEL_47;
    }
    LODWORD(v63) = 0;
    v22 = (*(_BYTE *)(v8 + 152) & 1) == 0;
    v23 = *(_QWORD *)(v8 + 144);
    HIDWORD(v63) = v21;
    if ( !v22 && v23 )
      v23 ^= v8 + 144;
    v18 = 0LL;
    while ( 1 )
    {
      if ( !v23 )
        goto LABEL_45;
      if ( (unsigned int)v21 >= *(_DWORD *)(v23 + 52) )
      {
        if ( (unsigned int)v21 > *(_DWORD *)(v23 + 52) )
        {
          v24 = *(_QWORD *)(v23 + 8);
          goto LABEL_29;
        }
        if ( !*(_DWORD *)(v23 + 48) )
          break;
      }
      v24 = *(_QWORD *)v23;
      v18 = v23;
LABEL_29:
      if ( (*(_BYTE *)(v8 + 152) & 1) != 0 && v24 )
        v23 ^= v24;
      else
        v23 = v24;
    }
    v25 = *(_QWORD *)v23;
    v18 = v23;
    if ( (*(_BYTE *)(v8 + 152) & 1) != 0 && v25 )
      v25 ^= v23;
    v26 = 0LL;
    if ( v25 )
    {
      while ( 1 )
      {
        if ( (unsigned int)v21 < *(_DWORD *)(v25 + 52) )
          goto LABEL_39;
        if ( (unsigned int)v21 <= *(_DWORD *)(v25 + 52) )
          break;
        v27 = *(_QWORD *)(v25 + 8);
LABEL_40:
        if ( (*(_BYTE *)(v8 + 152) & 1) != 0 && v27 )
          v25 ^= v27;
        else
          v25 = v27;
        if ( !v25 )
        {
          if ( v26 )
            v18 = v26;
          goto LABEL_45;
        }
      }
      if ( !*(_DWORD *)(v25 + 48) )
        v26 = v25;
LABEL_39:
      v27 = *(_QWORD *)v25;
      goto LABEL_40;
    }
LABEL_45:
    if ( *(_DWORD *)(v18 + 52) != -1 )
      goto LABEL_46;
    v38 = *(unsigned int *)(v8 + 140);
    if ( v38 < v21 || (unsigned int)v38 < 0x20 )
      break;
LABEL_92:
    if ( v58 )
    {
      ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v8 + 232));
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v44 = KeGetCurrentIrql();
          if ( v44 <= 0xFu && v20 <= 0xFu && v44 >= 2u )
          {
            v45 = KeGetCurrentPrcb();
            v46 = *((_QWORD *)v45 + 4375);
            v47 = ~(unsigned __int16)(-1LL << (v20 + 1));
            v22 = (v47 & *(_DWORD *)(v46 + 20)) == 0;
            *(_DWORD *)(v46 + 20) &= v47;
            if ( v22 )
              sub_140418E4C(v45);
          }
        }
      }
      __writecr8(v20);
      v17 = v59;
      v16 = 1;
      goto LABEL_11;
    }
    sub_14025ED04(v8);
    v21 = a3;
  }
  if ( (v4 & 0x80u) != 0 )
    goto LABEL_94;
  v41 = *(_QWORD *)v18;
  v42 = v18;
  if ( *(_QWORD *)v18 )
  {
    for ( ; *(_QWORD *)(v41 + 8); v41 = *(_QWORD *)(v41 + 8) )
      ;
  }
  else
  {
    for ( j = *(_QWORD *)(v18 + 16); ; j = *(_QWORD *)(v41 + 16) )
    {
      v41 = j & 0xFFFFFFFFFFFFFFFCuLL;
      if ( !v41 || *(_QWORD *)(v41 + 8) == v42 )
        break;
      v42 = v41;
    }
  }
  if ( !v41 )
  {
    if ( (unsigned int)v38 < 0x20 )
      goto LABEL_94;
    goto LABEL_92;
  }
  v18 = v41;
  if ( (unsigned int)v38 > *(_DWORD *)(v41 + 52) && (unsigned int)v38 >= 0x20 )
    goto LABEL_92;
  LODWORD(v21) = *(_DWORD *)(v41 + 52);
LABEL_46:
  LODWORD(v7) = *(_DWORD *)(v18 + 48);
  v28 = v21;
  v57 = v7;
LABEL_47:
  if ( !v28 )
    goto LABEL_94;
  v29 = v66;
  v30 = 0;
  if ( (v66 & 1) != 0 )
  {
    v30 = 2;
    RtlSetBits((PRTL_BITMAP)(*(_QWORD *)(v8 + 112) + 24LL), v7, v28);
    *(_QWORD *)(v8 + 48) -= v28;
    v29 = v66;
  }
  if ( (v29 & 2) != 0 )
  {
    v30 |= 1u;
    sub_140389840(v8, (unsigned int)v7, v28);
  }
  if ( v30 )
    sub_14025FB48(v8, (unsigned int)v7, v28, v18);
  if ( !v59 )
  {
    v31 = (volatile LONG *)(v8 + 232);
    if ( v58 )
      ExReleaseSpinLockSharedFromDpcLevel(v31);
    else
      ExReleaseSpinLockExclusiveFromDpcLevel(v31);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v49 = KeGetCurrentIrql();
        if ( v49 <= 0xFu && v20 <= 0xFu && v49 >= 2u )
        {
          v50 = KeGetCurrentPrcb();
          v51 = *((_QWORD *)v50 + 4375);
          v52 = ~(unsigned __int16)(-1LL << (v20 + 1));
          v22 = (v52 & *(_DWORD *)(v51 + 20)) == 0;
          *(_DWORD *)(v51 + 20) &= v52;
          if ( v22 )
            sub_140418E4C(v50);
          LODWORD(v7) = v57;
        }
      }
    }
    __writecr8(v20);
  }
  *a2 = sub_140340078(*a2, v8, (unsigned int)v7, v30);
  return v28;
}
