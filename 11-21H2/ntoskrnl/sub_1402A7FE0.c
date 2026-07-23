/*
 * XREFs of sub_1402A7FE0 @ 0x1402A7FE0
 * Callers:
 *     sub_1402A7C20 @ 0x1402A7C20 (sub_1402A7C20.c)
 *     sub_1402B5240 @ 0x1402B5240 (sub_1402B5240.c)
 *     sub_1402E2D20 @ 0x1402E2D20 (sub_1402E2D20.c)
 *     sub_1402E33D0 @ 0x1402E33D0 (sub_1402E33D0.c)
 *     sub_1402EF710 @ 0x1402EF710 (sub_1402EF710.c)
 *     KeSetTimerEx @ 0x1403575C0 (KeSetTimerEx.c)
 *     sub_1403AD6AC @ 0x1403AD6AC (sub_1403AD6AC.c)
 * Callees:
 *     sub_1402B7800 @ 0x1402B7800 (sub_1402B7800.c)
 *     sub_1402F3290 @ 0x1402F3290 (sub_1402F3290.c)
 *     sub_1402F6A70 @ 0x1402F6A70 (sub_1402F6A70.c)
 *     sub_1402F6BC0 @ 0x1402F6BC0 (sub_1402F6BC0.c)
 *     KeInsertQueueDpc @ 0x140345170 (KeInsertQueueDpc.c)
 *     sub_140345190 @ 0x140345190 (sub_140345190.c)
 *     sub_140357CE4 @ 0x140357CE4 (sub_140357CE4.c)
 *     sub_14035B550 @ 0x14035B550 (sub_14035B550.c)
 *     sub_14056B1E4 @ 0x14056B1E4 (sub_14056B1E4.c)
 *     sub_14062DA60 @ 0x14062DA60 (sub_14062DA60.c)
 */

ULONG_PTR __fastcall sub_1402A7FE0(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int16 v3; // r9
  __int64 v4; // rax
  char v6; // bp
  __int64 v8; // r12
  ULONG_PTR v9; // rdi
  unsigned __int8 v10; // r15
  unsigned __int16 *v11; // r14
  unsigned __int16 *v12; // rbx
  __int64 v14; // rbx
  unsigned __int64 v15; // r14
  __int64 *v16; // r8
  __int64 *v17; // rdx
  unsigned __int16 *v18; // rbp
  char v19; // al
  __int64 v20; // r8
  unsigned __int16 *v21; // rax
  unsigned __int16 *v22; // r10
  unsigned __int16 **v23; // rcx
  char v24; // al
  bool v25; // zf
  unsigned __int8 CurrentIrql; // dl
  _QWORD *v27; // rdx
  __int64 v28; // rcx
  char v29; // al
  int v30; // r9d
  _QWORD *v31; // r8
  unsigned __int8 v32; // al
  __int64 v33; // r9
  __int64 v34; // r9
  unsigned __int8 v35; // cl
  _QWORD *v36; // rdx
  __int64 v37; // rcx
  char v38; // al
  bool v39; // cc
  __int64 *v40; // rax
  int v41; // r10d
  unsigned __int16 **v42; // r9
  unsigned __int8 v43; // al
  __int64 v44; // r9
  __int64 v45; // r10
  __int64 v46; // r9
  unsigned int v47; // ecx
  struct _KPRCB *CurrentPrcb; // [rsp+38h] [rbp-70h]
  struct _KPRCB *v49; // [rsp+38h] [rbp-70h]
  __int64 v50; // [rsp+48h] [rbp-60h]
  __int64 v51; // [rsp+48h] [rbp-60h]
  int v52; // [rsp+50h] [rbp-58h]
  __int64 v53; // [rsp+B8h] [rbp+10h]
  __int64 v54; // [rsp+B8h] [rbp+10h]
  unsigned __int16 *v56; // [rsp+C8h] [rbp+20h]

  v3 = 0;
  v4 = *(int *)(a2 + 60);
  v6 = *(_BYTE *)a2 & 0x7F;
  v8 = a3;
  v9 = qword_140D06E28 ^ _byteswap_uint64(a2 ^ __ROL8__(*(_QWORD *)(a2 + 48) ^ qword_140D06CC8, qword_140D06CC8));
  v10 = -1;
  if ( (_DWORD)v4 )
  {
    v14 = -10000 * v4;
    v10 = 0;
    if ( *(_BYTE *)(a1 + 13242) )
    {
      if ( ++*(_DWORD *)(a1 + 33124) >= 0xBB8u )
      {
        v47 = *(_DWORD *)(a1 + 33128);
        *(_DWORD *)(a1 + 33124) = 0;
        if ( v47 < 0x5F5E100 )
          *(_DWORD *)(a1 + 33128) = dword_140D06938 + v47;
      }
      v14 -= *(unsigned int *)(a1 + 33128);
    }
    if ( v14 + MEMORY[0xFFFFF78000000008] - *(_QWORD *)(a2 + 24) >= 0 )
      *(_QWORD *)(a2 + 24) = MEMORY[0xFFFFF78000000008];
    v15 = 0LL;
    v52 = *(_DWORD *)a2;
    if ( BYTE1(*(_DWORD *)a2) >= 4u )
      v15 = (unsigned __int64)((unsigned __int8)BYTE1(*(_DWORD *)a2) & 0xFC) << 16;
    if ( !dword_140D06A20 )
    {
      v16 = *(__int64 **)(a2 + 8);
      *(_WORD *)(a2 + 58) = 1;
      v17 = (__int64 *)(a2 + 8);
      if ( v16 == (__int64 *)(a2 + 8) )
        goto LABEL_21;
      while ( 1 )
      {
        v39 = *((_BYTE *)v16 + 16) <= 1u;
        v40 = v16;
        v16 = (__int64 *)*v16;
        if ( v39 )
        {
          if ( (unsigned __int8)sub_140357CE4(*(_QWORD *)(v40[3] + 544), v17, v16) )
            break;
        }
        if ( v16 == v17 )
          goto LABEL_21;
      }
    }
    *(_WORD *)(a2 + 58) = v3;
LABEL_21:
    BYTE1(v52) &= ~1u;
    HIBYTE(v52) = 64;
    do
    {
      *(_QWORD *)(a2 + 24) -= v14;
      BYTE2(v52) = (v15 + *(_QWORD *)(a2 + 24)) >> 18;
      *(_DWORD *)a2 = v52;
    }
    while ( !(unsigned __int8)sub_1402B7800(a1, a2, v9, BYTE2(v52), 0LL) );
    v8 = a3;
  }
  v11 = *(unsigned __int16 **)(a2 + 8);
  v12 = (unsigned __int16 *)(a2 + 8);
  *(_DWORD *)(a2 + 4) = 1;
  if ( v6 == 8 )
  {
    if ( v11 == v12 )
    {
LABEL_4:
      *(_QWORD *)(a2 + 16) = a2 + 8;
      *(_QWORD *)v12 = v12;
      goto LABEL_5;
    }
    while ( 1 )
    {
      v18 = v11;
      v11 = *(unsigned __int16 **)v11;
      v19 = *((_BYTE *)v18 + 16);
      switch ( v19 )
      {
        case 1:
          v20 = v18[9];
          break;
        case 2:
          *((_BYTE *)v18 + 17) = 5;
          v53 = *((_QWORD *)v18 + 3);
          *(_QWORD *)v18 = 0LL;
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
          {
            v34 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
            *(_DWORD *)(v34 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
          }
          CurrentPrcb = KeGetCurrentPrcb();
          v50 = *((_QWORD *)CurrentPrcb + 1);
          if ( (DWORD1(xmmword_140D06900) & 0x1000000) != 0 )
          {
            v32 = sub_14056B1E4(*((_QWORD *)CurrentPrcb + 1));
            sub_14062DA60(v33, v18, v32);
          }
          sub_1402F3290(v53);
          v27 = (_QWORD *)(v53 + 8);
          v28 = v53;
          if ( (_QWORD *)*v27 == v27
            || *(_DWORD *)(v53 + 40) >= *(_DWORD *)(v53 + 44)
            || *(_QWORD *)(v50 + 232) == v53 && *(_BYTE *)(v50 + 643) == 15 )
          {
LABEL_52:
            v30 = *(_DWORD *)(v28 + 4);
            *(_DWORD *)(v28 + 4) = v30 + 1;
            v31 = *(_QWORD **)(v28 + 32);
            if ( *v31 != v28 + 24 )
              goto LABEL_32;
            *(_QWORD *)v18 = v28 + 24;
            *((_QWORD *)v18 + 1) = v31;
            *v31 = v18;
            *(_QWORD *)(v28 + 32) = v18;
            if ( !v30 && (_QWORD *)*v27 != v27 )
            {
              sub_14035B550(CurrentPrcb, v28);
              v28 = v53;
            }
          }
          else
          {
            v29 = sub_1402F6A70(CurrentPrcb, v53, v18);
            v28 = v53;
            if ( !v29 )
            {
              v27 = (_QWORD *)(v53 + 8);
              goto LABEL_52;
            }
            *(_QWORD *)v18 = 0LL;
          }
          _InterlockedAnd((volatile signed __int32 *)v28, 0xFFFFFF7F);
          goto LABEL_27;
        case 4:
          *((_BYTE *)v18 + 17) = 5;
          *(_DWORD *)(a2 + 4) = 0;
          KeInsertQueueDpc(*((PRKDPC *)v18 + 3), (PVOID)a2, v18);
          goto LABEL_27;
        default:
          v20 = 256LL;
          break;
      }
      sub_1402F6BC0(a1, v18, v20, 0LL);
LABEL_27:
      if ( v11 == v12 )
        goto LABEL_4;
    }
  }
  if ( v11 != v12 )
  {
    while ( 1 )
    {
      v21 = *(unsigned __int16 **)v11;
      v22 = v11;
      v56 = v11;
      v11 = v21;
      v23 = (unsigned __int16 **)*((_QWORD *)v22 + 1);
      if ( *((unsigned __int16 **)v21 + 1) != v22 || *v23 != v22 )
LABEL_32:
        __fastfail(3u);
      *v23 = v21;
      *((_QWORD *)v21 + 1) = v23;
      v24 = *((_BYTE *)v22 + 16);
      if ( v24 != 1 )
        break;
      if ( (unsigned __int8)sub_1402F6BC0(a1, v22, v22[9], 0LL) )
      {
        v25 = (*(_DWORD *)(a2 + 4))-- == 1;
        if ( v25 )
          goto LABEL_5;
      }
LABEL_38:
      if ( v11 == v12 )
        goto LABEL_5;
    }
    if ( v24 != 2 )
    {
      if ( v24 == 4 )
      {
        *((_BYTE *)v22 + 17) = 5;
        *(_DWORD *)(a2 + 4) = 0;
        KeInsertQueueDpc(*((PRKDPC *)v22 + 3), (PVOID)a2, v22);
      }
      else
      {
        sub_1402F6BC0(a1, v22, 256LL, 0LL);
      }
      goto LABEL_38;
    }
    *((_BYTE *)v22 + 17) = 5;
    v54 = *((_QWORD *)v22 + 3);
    *(_QWORD *)v22 = 0LL;
    v35 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && v35 <= 0xFu )
    {
      v46 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
      *(_DWORD *)(v46 + 20) |= (-1 << (v35 + 1)) & 4;
    }
    v49 = KeGetCurrentPrcb();
    v51 = *((_QWORD *)v49 + 1);
    if ( (DWORD1(xmmword_140D06900) & 0x1000000) != 0 )
    {
      v43 = sub_14056B1E4(*((_QWORD *)v49 + 1));
      sub_14062DA60(v44, v45, v43);
    }
    sub_1402F3290(v54);
    v36 = (_QWORD *)(v54 + 8);
    v37 = v54;
    if ( (_QWORD *)*v36 != v36
      && *(_DWORD *)(v54 + 40) < *(_DWORD *)(v54 + 44)
      && (*(_QWORD *)(v51 + 232) != v54 || *(_BYTE *)(v51 + 643) != 15) )
    {
      v38 = sub_1402F6A70(v49, v54, v56);
      v37 = v54;
      if ( v38 )
      {
        *(_QWORD *)v56 = 0LL;
LABEL_68:
        _InterlockedAnd((volatile signed __int32 *)v37, 0xFFFFFF7F);
        v25 = (*(_DWORD *)(a2 + 4))-- == 1;
        if ( v25 )
          goto LABEL_5;
        goto LABEL_38;
      }
      v36 = (_QWORD *)(v54 + 8);
    }
    v41 = *(_DWORD *)(v37 + 4);
    *(_DWORD *)(v37 + 4) = v41 + 1;
    v42 = *(unsigned __int16 ***)(v37 + 32);
    if ( *v42 != (unsigned __int16 *)(v37 + 24) )
      goto LABEL_32;
    *(_QWORD *)v56 = v37 + 24;
    *((_QWORD *)v56 + 1) = v42;
    *v42 = v56;
    *(_QWORD *)(v37 + 32) = v56;
    if ( !v41 && (_QWORD *)*v36 != v36 )
    {
      sub_14035B550(v49, v37);
      v37 = v54;
    }
    goto LABEL_68;
  }
LABEL_5:
  if ( v9 )
  {
    if ( !v8 || dword_140D05038 && *(_WORD *)(v9 + 2) >= 0x800u || *(_BYTE *)v9 == 26 && *(_BYTE *)(a1 + 13240) )
    {
      sub_140345190(v9, v10);
      return 0LL;
    }
    *(_QWORD *)(a1 + 13152) = v9;
    if ( (*(_QWORD *)(a1 + 200) & *(_QWORD *)(v9 + 16)) == 0LL )
      _interlockedbittestandset64((volatile signed __int32 *)(v9 + 16), *(unsigned __int8 *)(a1 + 209));
  }
  _InterlockedAnd((volatile signed __int32 *)a2, ~((v10 << 24) | 0x80));
  return v9;
}
