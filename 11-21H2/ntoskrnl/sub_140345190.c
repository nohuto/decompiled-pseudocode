/*
 * XREFs of sub_140345190 @ 0x140345190
 * Callers:
 *     sub_14023C6B0 @ 0x14023C6B0 (sub_14023C6B0.c)
 *     sub_1402440B4 @ 0x1402440B4 (sub_1402440B4.c)
 *     sub_14024B080 @ 0x14024B080 (sub_14024B080.c)
 *     sub_1402592CC @ 0x1402592CC (sub_1402592CC.c)
 *     sub_140259DD0 @ 0x140259DD0 (sub_140259DD0.c)
 *     sub_1402A7FE0 @ 0x1402A7FE0 (sub_1402A7FE0.c)
 *     sub_1402D9F70 @ 0x1402D9F70 (sub_1402D9F70.c)
 *     sub_140304060 @ 0x140304060 (sub_140304060.c)
 *     sub_1403078A0 @ 0x1403078A0 (sub_1403078A0.c)
 *     sub_140343BA0 @ 0x140343BA0 (sub_140343BA0.c)
 *     sub_140345110 @ 0x140345110 (sub_140345110.c)
 *     KeInsertQueueDpc @ 0x140345170 (KeInsertQueueDpc.c)
 *     sub_14039FF50 @ 0x14039FF50 (sub_14039FF50.c)
 *     sub_1403A1540 @ 0x1403A1540 (sub_1403A1540.c)
 *     sub_1403AED64 @ 0x1403AED64 (sub_1403AED64.c)
 *     sub_140459B00 @ 0x140459B00 (sub_140459B00.c)
 *     sub_14045ABA8 @ 0x14045ABA8 (sub_14045ABA8.c)
 *     sub_14045B8A0 @ 0x14045B8A0 (sub_14045B8A0.c)
 *     sub_140509620 @ 0x140509620 (sub_140509620.c)
 *     sub_14051910C @ 0x14051910C (sub_14051910C.c)
 *     sub_14051D4F4 @ 0x14051D4F4 (sub_14051D4F4.c)
 *     sub_14052A640 @ 0x14052A640 (sub_14052A640.c)
 *     sub_140560798 @ 0x140560798 (sub_140560798.c)
 *     sub_140565F08 @ 0x140565F08 (sub_140565F08.c)
 *     sub_14056F060 @ 0x14056F060 (sub_14056F060.c)
 *     sub_1405757C0 @ 0x1405757C0 (sub_1405757C0.c)
 *     sub_140578BB4 @ 0x140578BB4 (sub_140578BB4.c)
 *     sub_140579780 @ 0x140579780 (sub_140579780.c)
 *     sub_14057A2A0 @ 0x14057A2A0 (sub_14057A2A0.c)
 *     sub_14057C248 @ 0x14057C248 (sub_14057C248.c)
 *     sub_1405D9020 @ 0x1405D9020 (sub_1405D9020.c)
 *     sub_1406138D0 @ 0x1406138D0 (sub_1406138D0.c)
 *     sub_1406416D0 @ 0x1406416D0 (sub_1406416D0.c)
 *     WheaDeferredRecoveryService @ 0x140645AB0 (WheaDeferredRecoveryService.c)
 *     sub_140645B90 @ 0x140645B90 (sub_140645B90.c)
 *     sub_140645DC0 @ 0x140645DC0 (sub_140645DC0.c)
 *     sub_140646270 @ 0x140646270 (sub_140646270.c)
 *     sub_140B24E48 @ 0x140B24E48 (sub_140B24E48.c)
 * Callees:
 *     sub_140211E70 @ 0x140211E70 (sub_140211E70.c)
 *     sub_14022B9E4 @ 0x14022B9E4 (sub_14022B9E4.c)
 *     sub_14029F5C0 @ 0x14029F5C0 (sub_14029F5C0.c)
 *     sub_1402ADD00 @ 0x1402ADD00 (sub_1402ADD00.c)
 *     sub_1403457BC @ 0x1403457BC (sub_1403457BC.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14045A310 @ 0x14045A310 (sub_14045A310.c)
 *     sub_14056E8CC @ 0x14056E8CC (sub_14056E8CC.c)
 *     sub_14062D840 @ 0x14062D840 (sub_14062D840.c)
 */

__int64 __fastcall sub_140345190(
        ULONG_PTR BugCheckParameter2,
        __int64 a2,
        __int64 a3,
        volatile signed __int32 *a4,
        unsigned __int8 a5)
{
  ULONG_PTR v5; // r10
  unsigned __int8 v6; // r15
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // rbp
  __int64 v11; // rbx
  __int64 v12; // rsi
  struct _KPRCB *v13; // r13
  __int64 v14; // rcx
  int v15; // r13d
  signed __int64 v16; // rcx
  bool v17; // r8
  int v18; // eax
  _QWORD *v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // r9
  __int64 v22; // rdx
  int v23; // r11d
  __int64 v24; // r10
  unsigned __int64 v25; // r8
  unsigned __int64 v26; // r12
  unsigned __int64 v27; // r13
  unsigned __int64 v28; // rdx
  __int64 v29; // rcx
  unsigned __int64 v30; // r9
  struct _KPRCB *v31; // rcx
  __int64 v32; // rdx
  char v33; // al
  __int16 v34; // r9
  __int16 v35; // r10
  signed __int16 v36; // dx
  struct _KPRCB *v38; // rax
  int *v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rcx
  __int16 v42; // r9
  __int64 v43; // r9
  int v44; // eax
  int v45; // eax
  int v46; // eax
  unsigned __int8 v47; // al
  struct _KPRCB *v48; // rax
  __int64 v49; // r9
  int v50; // edx
  bool v51; // zf
  char v52; // [rsp+40h] [rbp-B8h]
  int v53; // [rsp+44h] [rbp-B4h]
  unsigned __int64 v54; // [rsp+48h] [rbp-B0h]
  int v55; // [rsp+50h] [rbp-A8h]
  int v56; // [rsp+54h] [rbp-A4h]
  unsigned __int8 v57; // [rsp+58h] [rbp-A0h]
  unsigned int v58; // [rsp+60h] [rbp-98h] BYREF
  unsigned __int64 v59; // [rsp+68h] [rbp-90h]
  unsigned __int64 v60; // [rsp+70h] [rbp-88h]
  unsigned __int64 v61; // [rsp+78h] [rbp-80h]
  unsigned __int64 v62; // [rsp+80h] [rbp-78h]
  __int64 v63; // [rsp+88h] [rbp-70h] BYREF
  int v64; // [rsp+90h] [rbp-68h]
  __int64 v65; // [rsp+94h] [rbp-64h]
  _DWORD v66[6]; // [rsp+A0h] [rbp-58h] BYREF
  unsigned __int64 v67; // [rsp+B8h] [rbp-40h]
  void *retaddr; // [rsp+F8h] [rbp+0h]
  bool v69; // [rsp+100h] [rbp+8h]
  __int64 v70; // [rsp+108h] [rbp+10h]

  v70 = a2;
  v5 = *(unsigned __int16 *)(BugCheckParameter2 + 2);
  v6 = 0;
  v55 = 0;
  v56 = 0;
  v54 = 0LL;
  v69 = (DWORD1(xmmword_140D06900) & 0x40000) != 0;
  v52 = 0;
  CurrentIrql = KeGetCurrentIrql();
  v57 = CurrentIrql;
  __writecr8(0xFuLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v43 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v43 + 20) |= (-1LL << (CurrentIrql + 1)) & 0xFFFC;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  if ( (unsigned __int16)v5 < 0x800u )
  {
    v53 = *((_DWORD *)CurrentPrcb + 9);
    if ( (_WORD)v5 != (_WORD)v53 )
      v52 = 1;
    v11 = (__int64)CurrentPrcb;
  }
  else
  {
    v53 = v5 - 2048;
    v11 = qword_140D088C0[(unsigned int)(v5 - 2048)];
    if ( !v11 )
      KeBugCheckEx(0xC7u, 3uLL, BugCheckParameter2, v5, (unsigned int)dword_140D06884);
  }
  if ( (*(_QWORD *)(BugCheckParameter2 + 16) & *(_QWORD *)(v11 + 200)) == 0LL )
    _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 + 16), *(unsigned __int8 *)(v11 + 209));
  if ( *(_BYTE *)BugCheckParameter2 == 26 && *(_BYTE *)(v11 + 13240) )
    v12 = v11 + 13168;
  else
    v12 = v11 + 13120;
  if ( (BYTE6(xmmword_140D06900) & 0x21) != 0 )
  {
    sub_14045A310(v12 + 16);
LABEL_77:
    a2 = v70;
    goto LABEL_11;
  }
  v13 = KeGetCurrentPrcb();
  v14 = *((_QWORD *)v13 + 4375);
  if ( v14 )
  {
    if ( *((_BYTE *)v13 + 32) <= 1u )
    {
      v44 = *(_DWORD *)(v14 + 24);
      *(_DWORD *)(v14 + 24) = v44 + 1;
      if ( v44 == -1 )
      {
        sub_140418E4C(v13);
        a2 = v70;
      }
    }
  }
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 16), 0LL) )
  {
    v41 = *((_QWORD *)v13 + 4375);
    if ( v41 )
    {
      if ( *((_BYTE *)v13 + 32) <= 1u )
      {
        v45 = *(_DWORD *)(v41 + 24) - 1;
        *(_DWORD *)(v41 + 24) = v45;
        if ( !v45 )
          sub_140418E4C(v13);
      }
    }
    sub_140211E70((volatile signed __int32 *)(v12 + 16));
    goto LABEL_77;
  }
LABEL_11:
  v15 = v53;
  v16 = *((_QWORD *)CurrentPrcb + 1458);
  if ( v53 != *((_DWORD *)CurrentPrcb + 9) )
    v16 = 1LL;
  v17 = v69;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(BugCheckParameter2 + 56), v16, 0LL) )
    goto LABEL_63;
  v18 = *(_DWORD *)(v12 + 24);
  ++*(_DWORD *)(v12 + 28);
  *(_DWORD *)(v12 + 24) = v18 + 1;
  *(_QWORD *)(BugCheckParameter2 + 40) = a2;
  *(_QWORD *)(BugCheckParameter2 + 48) = a3;
  if ( v69 )
  {
    v56 = *(_DWORD *)(v12 + 24);
    v55 = *(_DWORD *)(v12 + 28);
  }
  v19 = (_QWORD *)(BugCheckParameter2 + 8);
  v6 = 1;
  if ( *(_BYTE *)(BugCheckParameter2 + 1) == 2 )
  {
    v40 = *(_QWORD *)v12;
    if ( !*(_QWORD *)v12 )
      *(_QWORD *)(v12 + 8) = v19;
    *v19 = v40;
    *(_QWORD *)v12 = v19;
  }
  else
  {
    *v19 = 0LL;
    **(_QWORD **)(v12 + 8) = v19;
    *(_QWORD *)(v12 + 8) = v19;
  }
  if ( v52 )
    *(_WORD *)(BugCheckParameter2 + 2) = v53;
  v20 = *(_QWORD *)(v11 + 35000);
  if ( v20 && v12 == v11 + 13120 )
  {
    ++*(_DWORD *)(v20 + 28);
  }
  else if ( v12 != v11 + 13120 )
  {
    goto LABEL_63;
  }
  v21 = *(_QWORD *)(v11 + 13072);
  v22 = *(_QWORD *)(BugCheckParameter2 + 24);
  if ( v21 )
  {
    v23 = *(_DWORD *)(v21 + 4) >> 5;
    v24 = -1LL << (*(_BYTE *)(v21 + 4) & 0x1F);
    v25 = v22 & v24;
    v62 = (v22 & (unsigned __int64)v24) >> 40;
    v26 = (v22 & (unsigned __int64)v24) >> 56;
    v61 = (v22 & (unsigned __int64)v24) >> 32;
    v60 = (v22 & (unsigned __int64)v24) >> 24;
    v27 = (v22 & (unsigned __int64)v24) >> 48;
    v28 = (v22 & (unsigned __int64)v24) >> 8;
    v59 = v25 >> 16;
    if ( v23 )
    {
      v67 = v25;
      v29 = *(_QWORD *)(v21 + 8)
          + 8LL
          * (((_DWORD)v26
            + 37
            * ((unsigned __int8)v27
             + 37
             * ((unsigned __int8)v62
              + 37
              * ((unsigned __int8)v61
               + 37
               * ((unsigned __int8)v60
                + 37 * ((unsigned __int8)v59 + 37 * ((unsigned __int8)v28 + 37 * ((unsigned __int8)v25 + 11623883)))))))) & (unsigned int)(v23 - 1));
      while ( 1 )
      {
        v29 = *(_QWORD *)v29;
        if ( (v29 & 1) != 0 )
          break;
        if ( v25 == (v24 & *(_QWORD *)(v29 + 8)) )
        {
          v30 = *(_QWORD *)(v29 + 16);
          v17 = v69;
          v15 = v53;
          v54 = v30;
          if ( v30 > (unsigned int)dword_140D06D5C )
            *(_DWORD *)(v12 + 40) = 1;
          goto LABEL_29;
        }
      }
    }
    v15 = v53;
    v17 = v69;
  }
LABEL_63:
  v30 = 0LL;
LABEL_29:
  if ( a4 )
    _InterlockedAnd(a4, ~((a5 << 24) | 0x80));
  if ( (BYTE6(xmmword_140D06900) & 1) != 0 )
  {
    sub_14056E8CC(v12 + 16, retaddr);
    v17 = v69;
    v30 = v54;
  }
  else
  {
    _InterlockedAnd64((volatile signed __int64 *)(v12 + 16), 0LL);
  }
  v31 = KeGetCurrentPrcb();
  v32 = *((_QWORD *)v31 + 4375);
  if ( v32 )
  {
    if ( *((_BYTE *)v31 + 32) <= 1u )
    {
      v46 = *(_DWORD *)(v32 + 24) - 1;
      *(_DWORD *)(v32 + 24) = v46;
      if ( !v46 )
      {
        sub_140418E4C(v31);
        v17 = v69;
        v30 = v54;
      }
    }
  }
  if ( !v6 )
    goto LABEL_49;
  if ( v17 )
    sub_14062D840(
      -203591049
    * (qword_140D06CC8 ^ __ROR8__(
                           *(_QWORD *)(BugCheckParameter2 + 24) ^ _byteswap_uint64(BugCheckParameter2 ^ qword_140D06E28),
                           qword_140D06CC8)),
      *(_QWORD *)(BugCheckParameter2 + 24),
      v56,
      v55,
      v15,
      *(_BYTE *)(BugCheckParameter2 + 1),
      v30);
  if ( v12 != v11 + 13168 )
  {
    if ( *(_DWORD *)(v12 + 24) < *(_DWORD *)(v11 + 13224) )
    {
      v33 = *(_BYTE *)(BugCheckParameter2 + 1);
      if ( CurrentPrcb == (struct _KPRCB *)v11 )
      {
        if ( !v33 && *(_DWORD *)(v11 + 13228) >= *(_DWORD *)(v11 + 13232) )
        {
LABEL_65:
          if ( (sub_14022B9E4((unsigned __int16 *)(v11 + 13244), 16) & 0xAF) != 0
            || (*(_QWORD *)(*(_QWORD *)(v11 + 192) + 64LL) & *(_QWORD *)(v11 + 200)) == 0LL )
          {
            goto LABEL_49;
          }
        }
      }
      else if ( (unsigned __int8)(v33 - 2) > 1u )
      {
        goto LABEL_65;
      }
    }
    v34 = 2;
    goto LABEL_42;
  }
  if ( (sub_14022B9E4((unsigned __int16 *)(v11 + 13246), 2) & 0xAF) != 0 )
    goto LABEL_49;
  v34 = 4;
LABEL_42:
  v35 = 175;
  if ( (struct _KPRCB *)v11 == CurrentPrcb )
  {
    v35 = 169;
    v34 |= 0x20u;
  }
  v58 = 0;
  _m_prefetchw((const void *)(v11 + 13244));
  v36 = *(_WORD *)(v11 + 13244);
  if ( v36 != _InterlockedCompareExchange16((volatile signed __int16 *)(v11 + 13244), v34 | v36, v36) )
  {
    do
    {
      sub_14029F5C0(&v58);
      _m_prefetchw((const void *)(v11 + 13244));
      v36 = *(_WORD *)(v11 + 13244);
    }
    while ( v36 != _InterlockedCompareExchange16((volatile signed __int16 *)(v11 + 13244), v42 | v36, v36) );
  }
  if ( ((unsigned __int16)v36 & (unsigned __int16)v35) == 0 )
  {
    if ( (struct _KPRCB *)v11 == CurrentPrcb )
    {
      if ( *((_BYTE *)CurrentPrcb + 32) )
      {
        *((_BYTE *)CurrentPrcb + 6) = 1;
        goto LABEL_49;
      }
      v66[0] = 5;
      *(_OWORD *)&v66[1] = 0LL;
      v39 = v66;
LABEL_56:
      sub_1402ADD00(v39, 0x2Fu);
      goto LABEL_49;
    }
    if ( *(_QWORD *)(v11 + 8) != *(_QWORD *)(v11 + 24) || *(_BYTE *)(v11 + 7) )
    {
      sub_1403457BC(CurrentPrcb, v11, (unsigned int)dword_140D0504C);
      v38 = KeGetCurrentPrcb();
      v39 = (int *)&v63;
      v63 = 6LL;
      v65 = 0LL;
      v64 = v15;
      ++*((_DWORD *)v38 + 8757);
      goto LABEL_56;
    }
  }
LABEL_49:
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v47 = KeGetCurrentIrql();
      if ( v47 <= 0xFu && v57 <= 0xFu && v47 >= 2u )
      {
        v48 = KeGetCurrentPrcb();
        v49 = *((_QWORD *)v48 + 4375);
        v50 = ~(unsigned __int16)(-1LL << (v57 + 1));
        v51 = (v50 & *(_DWORD *)(v49 + 20)) == 0;
        *(_DWORD *)(v49 + 20) &= v50;
        if ( v51 )
          sub_140418E4C(v48);
      }
    }
  }
  __writecr8(v57);
  return v6;
}
