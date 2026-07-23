/*
 * XREFs of sub_140215E54 @ 0x140215E54
 * Callers:
 *     sub_140308F00 @ 0x140308F00 (sub_140308F00.c)
 *     sub_14031BAB0 @ 0x14031BAB0 (sub_14031BAB0.c)
 *     sub_1403C6E24 @ 0x1403C6E24 (sub_1403C6E24.c)
 *     sub_14065FFA0 @ 0x14065FFA0 (sub_14065FFA0.c)
 *     sub_140693498 @ 0x140693498 (sub_140693498.c)
 *     sub_140852834 @ 0x140852834 (sub_140852834.c)
 *     sub_14096D3A4 @ 0x14096D3A4 (sub_14096D3A4.c)
 *     sub_140B197C0 @ 0x140B197C0 (sub_140B197C0.c)
 * Callees:
 *     sub_140215AA8 @ 0x140215AA8 (sub_140215AA8.c)
 *     sub_140216544 @ 0x140216544 (sub_140216544.c)
 *     sub_1402165BC @ 0x1402165BC (sub_1402165BC.c)
 *     sub_1402166A4 @ 0x1402166A4 (sub_1402166A4.c)
 *     KeShouldYieldProcessor @ 0x140222100 (KeShouldYieldProcessor.c)
 *     sub_14026A230 @ 0x14026A230 (sub_14026A230.c)
 *     sub_1402C1550 @ 0x1402C1550 (sub_1402C1550.c)
 *     sub_14030B860 @ 0x14030B860 (sub_14030B860.c)
 *     RtlAvlInsertNodeEx @ 0x14030EFD0 (RtlAvlInsertNodeEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     sub_140398900 @ 0x140398900 (sub_140398900.c)
 *     sub_140398948 @ 0x140398948 (sub_140398948.c)
 *     sub_1403A5C24 @ 0x1403A5C24 (sub_1403A5C24.c)
 *     sub_1403B40EC @ 0x1403B40EC (sub_1403B40EC.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140215E54(int a1, __int64 a2, __int64 a3, int a4, _DWORD *a5, __int64 *a6)
{
  __int64 v6; // r15
  __int64 v8; // rsi
  _QWORD *v9; // rbp
  ULONG_PTR v10; // rdi
  __int64 v11; // r12
  ULONG_PTR *v12; // r14
  __int64 v13; // r13
  unsigned __int8 CurrentIrql; // bl
  __int64 v15; // rcx
  bool i; // zf
  ULONG_PTR v17; // rax
  __int64 v18; // r9
  __int64 v19; // rax
  _WORD *j; // rcx
  __int64 v21; // rax
  unsigned __int16 *v22; // r13
  unsigned __int64 v23; // r15
  __int64 v24; // r9
  __int64 v25; // r8
  __int64 v26; // rcx
  int v27; // r10d
  int v28; // ebp
  unsigned __int16 v29; // bx
  int v30; // eax
  unsigned int v31; // ebx
  __int64 v33; // r9
  char v34; // dl
  unsigned __int8 v35; // r10
  __int64 *v36; // rcx
  _QWORD *v37; // rdx
  __int64 v38; // r8
  ULONG_PTR v39; // rax
  _QWORD *v40; // rax
  unsigned __int8 v41; // r10
  __int64 v42; // r9
  int v43; // ebx
  _BYTE *v44; // rcx
  unsigned __int8 v45; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v47; // r9
  int v48; // eax
  __int64 v49; // rax
  int v50; // eax
  __int64 v51; // r9
  unsigned __int16 v52; // [rsp+20h] [rbp-178h]
  unsigned int v54; // [rsp+28h] [rbp-170h]
  char v55; // [rsp+2Ch] [rbp-16Ch]
  __int64 v56; // [rsp+30h] [rbp-168h]
  _QWORD *v57; // [rsp+38h] [rbp-160h]
  unsigned __int8 v58; // [rsp+40h] [rbp-158h]
  int v59; // [rsp+48h] [rbp-150h]
  int v60; // [rsp+4Ch] [rbp-14Ch]
  int v61; // [rsp+50h] [rbp-148h]
  _BYTE *v62; // [rsp+58h] [rbp-140h]
  __int64 v63; // [rsp+60h] [rbp-138h]
  __int64 v65; // [rsp+70h] [rbp-128h]
  __int64 v66; // [rsp+78h] [rbp-120h]
  __int64 v67; // [rsp+80h] [rbp-118h]
  __int64 *v68; // [rsp+88h] [rbp-110h]
  _BYTE v69[176]; // [rsp+A0h] [rbp-F8h] BYREF

  v6 = a3;
  v8 = a1;
  v63 = a3;
  memset(v69, 0, sizeof(v69));
  if ( a5 )
    *a5 = 0;
  if ( a6 )
    *a6 = 0LL;
  v62 = 0LL;
  v57 = 0LL;
  v9 = 0LL;
  v55 = 0;
  v10 = ((1LL << ((unsigned __int8)dword_140C50720 - 12)) - 1) & a2;
  v60 = 3;
  v65 = v10;
  v67 = -1LL;
  v56 = 0LL;
  v66 = v8;
  v68 = &qword_140C4F040[v8 + 2072];
  v11 = v10;
  v12 = 0LL;
  v13 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  v58 = CurrentIrql;
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v33 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v33 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
  }
  if ( (_DWORD)v8 == 1 )
  {
    v13 = sub_1402166A4(v10, v6);
    v56 = v13;
  }
  sub_1402165BC(5LL);
  if ( v6 )
  {
    while ( 1 )
    {
      v54 = 0;
      v8 = *v68;
      for ( i = *v68 == 0; !i; i = v8 == 0 )
      {
        while ( 1 )
        {
          v17 = *(_QWORD *)(v8 + 24);
          if ( v10 < v17 )
            break;
          if ( v10 < v17 + 512 )
            goto LABEL_21;
          v8 = *(_QWORD *)(v8 + 8);
          if ( !v8 )
            goto LABEL_16;
        }
        v8 = *(_QWORD *)v8;
      }
LABEL_16:
      LOBYTE(v15) = CurrentIrql;
      sub_140216544(v15, 5LL);
      if ( v9 )
      {
        v57 = v9;
      }
      else
      {
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            v45 = KeGetCurrentIrql();
            if ( v45 <= 0xFu && CurrentIrql <= 0xFu && v45 >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v47 = *((_QWORD *)CurrentPrcb + 4375);
              v48 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
              i = (v48 & *(_DWORD *)(v47 + 20)) == 0;
              *(_DWORD *)(v47 + 20) &= v48;
              if ( i )
                sub_140418E4C(CurrentPrcb);
            }
          }
        }
        __writecr8(CurrentIrql);
        v18 = *(unsigned int *)(sub_1402C1550(v10) + 8);
        LODWORD(v18) = v18 | 0x80000000;
        v19 = sub_14030B860(64LL, 1152LL, 1867082061LL, v18);
        v57 = (_QWORD *)v19;
        v9 = (_QWORD *)v19;
        if ( !v19 )
        {
          sub_140215AA8(a1, v65, v10 - v65);
          return 3221225626LL;
        }
        *(_DWORD *)(v19 + 68) = 1;
        for ( j = (_WORD *)(v19 + 80); (unsigned __int64)j < v19 + 1104; ++j )
          *j |= 0xC000u;
        v35 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && v35 <= 0xFu )
        {
          v42 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
          *(_DWORD *)(v42 + 20) |= (-1 << (v35 + 1)) & 4;
        }
        v58 = v35;
        if ( a1 == 1 && !v13 )
          v56 = sub_1402166A4(v10, v6);
      }
      v9[3] = v10 & 0xFFFFFFFFFFFFFE00uLL;
      sub_1402165BC(6LL);
      v37 = (_QWORD *)*v68;
      LOBYTE(v38) = 0;
      if ( *v68 )
      {
        while ( 1 )
        {
          v39 = v37[3];
          if ( v10 < v39 )
          {
            v40 = (_QWORD *)*v37;
            if ( !*v37 )
              break;
          }
          else
          {
            if ( v10 < v39 + 512 )
            {
              v8 = (__int64)v37;
              goto LABEL_103;
            }
            v40 = (_QWORD *)v37[1];
            if ( !v40 )
            {
              LOBYTE(v38) = 1;
              break;
            }
          }
          v37 = v40;
        }
      }
      v8 = (__int64)v9;
      RtlAvlInsertNodeEx(v68, v37, v38, v9);
      v36 = qword_140C4F040;
      _InterlockedAdd64(&qword_140C4F040[v66 + 2081], 1uLL);
      v57 = 0LL;
      v54 = 1;
LABEL_103:
      sub_1403B40EC(v36, v37, v38);
LABEL_21:
      if ( a6 && !*a6 )
        *a6 = v8;
      v21 = *(_QWORD *)(v8 + 24);
      v22 = (unsigned __int16 *)(v8 + 2 * (v10 - v21 + 40));
      if ( v21 == -512 || v6 + v10 <= v21 + 512 )
        v23 = v8 + 2 * (v10 - v21 + v6 + 40);
      else
        v23 = v8 + 1104;
      v61 = 0;
      v59 = 0;
      ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v8 + 64));
      v25 = v54;
      if ( v54 )
        --*(_DWORD *)(v8 + 68);
      if ( (unsigned __int64)v22 < v23 )
      {
        v26 = v63;
        v24 = 1LL;
        v27 = 0x3FFF;
        while ( 1 )
        {
          v52 = *v22;
          if ( v56 && v10 >= *(_QWORD *)(v56 + 24) && v10 <= *(_QWORD *)(v56 + 32) )
          {
            v28 = *(_DWORD *)(v56 + 40);
            if ( v10 == *(_QWORD *)(v56 + 32) && v26 != v24 )
            {
              v49 = sub_1402166A4(v10 + 1, v26 - 1);
              v25 = v54;
              v56 = v49;
            }
          }
          else
          {
            v28 = a4;
          }
          v29 = v52;
          if ( (unsigned __int16)(v27 & v52) == v27 )
          {
            if ( v62 )
              sub_140398900(v62, ((char *)v12 - v62 - 48) >> 3, v25, v24);
            ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v8 + 64));
            v11 = v65;
            v9 = v57;
            CurrentIrql = v58;
            LODWORD(v8) = a1;
            if ( v10 != v65 )
              v67 = v10;
            goto LABEL_53;
          }
          if ( (v52 & (unsigned __int16)v27) == 0 )
          {
            v30 = *(_DWORD *)(v8 + 68);
            if ( !v30 )
            {
              v34 = v55;
              if ( !(_DWORD)v25 )
                v34 = v24;
              v55 = v34;
            }
            *(_DWORD *)(v8 + 68) = v30 + 1;
            if ( v52 >> 14 != v28 )
              break;
          }
LABEL_44:
          if ( a5 )
            *a5 |= (_DWORD)v24 << (v29 >> 14);
          v25 = v54;
          v26 = v63 - v24;
          v63 -= v24;
          v10 += v24;
          *v22++ = v27 & (v29 ^ (v24 + v29)) ^ v29;
          if ( (unsigned __int64)v22 >= v23 )
            goto LABEL_47;
        }
        if ( v28 == (_DWORD)v24 )
          *(_BYTE *)(v8 + 72) = v24;
        if ( v52 >> 14 != 3 )
        {
          if ( !v59 )
          {
            sub_14026A230();
            v24 = 1LL;
            v59 = 1;
          }
          if ( v52 >> 14 == (_WORD)v24 )
          {
            v43 = v61;
            if ( !v61 )
            {
              dword_140C5319C += v24;
              v44 = v62;
              if ( !v62 )
                goto LABEL_93;
              if ( v60 != v28 )
              {
                sub_140398900(v62, ((char *)v12 - v62 - 48) >> 3, v25, v24);
                v24 = 1LL;
LABEL_93:
                v44 = v69;
                v62 = v69;
                v12 = (ULONG_PTR *)&v69[48];
              }
              *v12++ = v10;
              v60 = v28;
              if ( v12 == (ULONG_PTR *)(v44 + 176) )
              {
                *(_QWORD *)v44 = 0LL;
                *((_QWORD *)v44 + 4) = 0LL;
                *((_DWORD *)v44 + 11) = 0;
                dword_140C53198 += v24;
                *((_DWORD *)v44 + 2) = 131248;
                *((_DWORD *)v44 + 10) = 0x10000;
                v50 = sub_140398948();
                v24 = 1LL;
                if ( v50 )
                  v43 = 1;
                v62 = 0LL;
                v61 = v43;
              }
            }
          }
        }
        v27 = 0x3FFF;
        v29 = (_WORD)v28 << 14;
        goto LABEL_44;
      }
LABEL_47:
      if ( v62 )
        sub_140398900(v62, ((char *)v12 - v62 - 48) >> 3, v25, v24);
      if ( v55 )
      {
        v55 = 0;
        _InterlockedDecrement64(&qword_140C4F040[v66 + 2074]);
      }
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v8 + 64));
      v6 = v63;
      if ( !v63 )
      {
        v9 = v57;
        CurrentIrql = v58;
        v11 = v65;
        LODWORD(v8) = a1;
        break;
      }
      if ( (unsigned int)sub_1403A5C24(0LL) || (v9 = v57, v13 = v56, KeShouldYieldProcessor()) )
      {
        LOBYTE(v15) = v58;
        sub_140216544(v15, 1LL);
        v41 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && v41 <= 0xFu )
        {
          v51 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
          *(_DWORD *)(v51 + 20) |= ~((unsigned __int8)(1LL << (v41 + 1)) - 1) & 4;
        }
        CurrentIrql = v41;
        v13 = v56;
        v58 = v41;
        if ( a1 == 1 && !v56 )
        {
          v13 = sub_1402166A4(v10, v63);
          v56 = v13;
        }
        sub_1402165BC(5LL);
        v9 = v57;
      }
      else
      {
        CurrentIrql = v58;
      }
    }
  }
LABEL_53:
  LOBYTE(v15) = CurrentIrql;
  sub_140216544(v15, 1LL);
  if ( v67 == -1 )
  {
    v31 = 0;
  }
  else
  {
    v31 = -1073741670;
    sub_140215AA8(v8, v11, v67 - v11);
  }
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  return v31;
}
