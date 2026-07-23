/*
 * XREFs of sub_140319F70 @ 0x140319F70
 * Callers:
 *     MmProbeAndLockSelectedPages @ 0x140247CF0 (MmProbeAndLockSelectedPages.c)
 *     sub_14029C5B0 @ 0x14029C5B0 (sub_14029C5B0.c)
 *     sub_1403198A0 @ 0x1403198A0 (sub_1403198A0.c)
 *     MmProbeAndLockPages @ 0x140319E90 (MmProbeAndLockPages.c)
 *     sub_140385584 @ 0x140385584 (sub_140385584.c)
 *     sub_14096A278 @ 0x14096A278 (sub_14096A278.c)
 * Callees:
 *     sub_14026DFC0 @ 0x14026DFC0 (sub_14026DFC0.c)
 *     sub_14027B520 @ 0x14027B520 (sub_14027B520.c)
 *     sub_14030E7C0 @ 0x14030E7C0 (sub_14030E7C0.c)
 *     sub_140319990 @ 0x140319990 (sub_140319990.c)
 *     sub_1403295C0 @ 0x1403295C0 (sub_1403295C0.c)
 *     sub_14032E700 @ 0x14032E700 (sub_14032E700.c)
 *     sub_140366A20 @ 0x140366A20 (sub_140366A20.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_140461B20 @ 0x140461B20 (sub_140461B20.c)
 *     sub_1407BE280 @ 0x1407BE280 (sub_1407BE280.c)
 */

__int64 __fastcall sub_140319F70(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        char a5,
        int a6,
        char a7)
{
  char v8; // r15
  int v10; // r9d
  int v11; // eax
  unsigned __int64 v13; // rsi
  unsigned int v14; // ecx
  unsigned __int64 v15; // rsi
  __int64 v16; // rcx
  unsigned __int64 v17; // rdi
  __int16 v18; // cx
  __int16 v19; // ax
  __int16 v20; // cx
  __int64 v21; // rcx
  unsigned __int64 v22; // r14
  __int64 v23; // r10
  int v24; // esi
  char *v25; // rdi
  unsigned int v26; // edx
  unsigned int v27; // edx
  __int64 v28; // rdx
  unsigned __int8 v29; // al
  volatile __int32 *v30; // rdi
  unsigned __int8 v31; // r12
  struct _KPRCB *CurrentPrcb; // r15
  __int64 v33; // rcx
  signed __int32 v34; // ett
  unsigned __int8 CurrentIrql; // r9
  int v36; // ecx
  unsigned int v38; // edx
  __int64 v39; // rax
  unsigned int v40; // edx
  unsigned __int64 v41; // rdx
  unsigned __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // rcx
  unsigned int v45; // edx
  unsigned int v46; // edx
  __int64 v47; // rax
  __int64 v48; // r13
  __int64 v49; // rax
  int v50; // ecx
  unsigned __int64 v51; // rdx
  unsigned __int64 v52; // rcx
  unsigned int v53; // esi
  __int64 v54; // r9
  int v55; // eax
  int v56; // eax

  v8 = a7;
  *(_QWORD *)(a1 + 80) = KeGetCurrentThread();
  v10 = a6;
  *(_DWORD *)(a1 + 96) = a6;
  v11 = 0;
  *(_QWORD *)(a1 + 64) = a2;
  *(_QWORD *)a1 = a3;
  v13 = a3 + a4;
  *(_QWORD *)(a1 + 8) = a3;
  a6 = 0;
  if ( (v8 & 2) != 0 )
    v11 = 64;
  *(_QWORD *)(a1 + 16) = v13;
  v14 = v11 | *(_DWORD *)(a1 + 72) & 0xFFFFFFBF;
  *(_DWORD *)(a1 + 72) = v14;
  if ( a5 && (v13 > 0x7FFFFFFF0000LL || a3 >= v13) )
  {
    ++dword_140C52A70;
    return 3221225477LL;
  }
  v15 = v13 - 1;
  if ( (v14 & 0x40) != 0 )
  {
    v16 = 0LL;
  }
  else
  {
    v16 = a2 + 48;
    a4 = (a3 & 0xFFF) + *(unsigned int *)(a2 + 40) + 4095LL;
  }
  *(_QWORD *)(a1 + 56) = v16;
  v17 = a4 >> 12;
  *(_QWORD *)(a1 + 24) = ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  *(_QWORD *)(a1 + 32) = ((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  *(_QWORD *)(a1 + 144) = 0x3FFFFFFFFFLL;
  v18 = *(_WORD *)(a2 + 10);
  v19 = v18 & 0xFF7F;
  v20 = v18 | 0x80;
  if ( !v10 )
    v20 = v19;
  *(_WORD *)(a2 + 10) = v20 | 2;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  if ( *(_QWORD *)(a1 + 8) >= 0x7FFFFFFF0000uLL )
  {
    *(_QWORD *)(a1 + 88) = 0LL;
    *(_QWORD *)(a2 + 16) = 0LL;
  }
  else
  {
    v21 = *(_QWORD *)(*(_QWORD *)(a1 + 80) + 184LL);
    *(_QWORD *)(a1 + 88) = v21;
    *(_QWORD *)(a2 + 16) = v21;
    if ( v10 == 3 )
    {
      v47 = sub_14030E7C0(*(_QWORD *)(a1 + 8), 0, &a6);
      v48 = v47;
      if ( !v47 )
        return (unsigned int)a6;
      if ( (unsigned int)sub_140319990(v47)
        || (v49 = *(unsigned int *)(v48 + 52),
            LODWORD(v49) = v49 & 0x7FFFFFFF,
            (v49 | ((unsigned __int64)*(unsigned __int8 *)(v48 + 34) << 31)) >= 0x7FFFFFFFDLL)
        || (v50 = *(_DWORD *)(v48 + 48), (v50 & 0x70) == 0x10)
        || (v50 & 0x200000) == 0 && (v50 & 0x70) != 0x20 )
      {
        sub_14032E700((PVOID)v48);
        return 3221225477LL;
      }
      v51 = (*(unsigned int *)(v48 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v48 + 32) << 32)) << 12;
      if ( a3 < v51
        || (v52 = ((*(unsigned int *)(v48 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v48 + 33) << 32)) << 12) | 0xFFF,
            a3 > v52)
        || v15 < v51
        || v15 > v52 )
      {
        sub_14032E700((PVOID)v48);
        return 3221225496LL;
      }
      a6 = sub_1407BE280(*(_QWORD *)(a1 + 88), v17);
      v53 = a6;
      if ( a6 < 0 )
      {
        sub_14032E700((PVOID)v48);
        return v53;
      }
      *(_QWORD *)(a1 + 128) = v48;
      *(_QWORD *)(a1 + 120) = v17;
    }
    if ( (v8 & 1) != 0 )
      _InterlockedExchangeAdd64((volatile signed __int64 *)(*(_QWORD *)(a1 + 88) + 1280LL), v17);
  }
  v22 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 40) = 0LL;
  v23 = 1LL;
  if ( v22 >= 0xFFFF800000000000uLL )
  {
    v24 = (unsigned __int8)byte_140C53F50[((v22 >> 39) & 0x1FF) - 256];
  }
  else
  {
    v24 = 0;
    if ( v22 < 0x7FFFFFFF0000LL )
    {
      v25 = (char *)(*(_QWORD *)(a1 + 88) + 1664LL);
      v26 = *(_DWORD *)(a1 + 72) & 0xFFFFFFF1;
      *(_QWORD *)(a1 + 104) = v25;
      v27 = v26 | 1;
      goto LABEL_17;
    }
  }
  switch ( v24 )
  {
    case 1:
      *(_DWORD *)(a1 + 72) = *(_DWORD *)(a1 + 72) & 0xFFFFFFF0 | 8;
      v39 = sub_14027B520();
      goto LABEL_43;
    case 6:
      v25 = (char *)&unk_140C53800;
      v38 = *(_DWORD *)(a1 + 72) & 0xFFFFFFF3;
      *(_QWORD *)(a1 + 104) = &unk_140C53800;
      v27 = v38 | 3;
      break;
    case 8:
      v25 = sub_14026DFC0(0);
      v40 = *(_DWORD *)(a1 + 72) & 0xFFFFFFF2;
      *(_QWORD *)(a1 + 104) = v25;
      v27 = v40 | 2;
      break;
    case 5:
    case 15:
      v39 = (__int64)sub_14026DFC0(5);
      v27 = *(_DWORD *)(a1 + 72) & 0xFFFFFFF0 | 4;
      goto LABEL_43;
    case 12:
      v39 = (__int64)sub_14026DFC0(1);
      v27 = *(_DWORD *)(a1 + 72) & 0xFFFFFFF0 | 6;
LABEL_43:
      *(_QWORD *)(a1 + 104) = v39;
      v25 = (char *)v39;
      break;
    default:
      if ( ((v24 - 14) & 0xFFFFFFFD) != 0 )
      {
        v25 = sub_14026DFC0(3);
        v46 = *(_DWORD *)(a1 + 72) & 0xFFFFFFF5;
        *(_QWORD *)(a1 + 104) = v25;
        v27 = v46 | 5;
      }
      else
      {
        v25 = sub_14026DFC0(4);
        v45 = *(_DWORD *)(a1 + 72) & 0xFFFFFFF7;
        *(_QWORD *)(a1 + 104) = v25;
        v27 = v45 | 7;
      }
      break;
  }
LABEL_17:
  v28 = v27 & 0xFFFFFFCF;
  *(_DWORD *)(a1 + 72) = v28;
  v29 = v25[184] & 7;
  if ( v29 > 4u )
  {
    if ( v29 != 5 )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( dword_140D06B08 && ((unsigned __int8)dword_140D06B08 & (unsigned __int8)v23) != 0 && CurrentIrql <= 0xFu )
      {
        v43 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
        v28 = *(unsigned int *)(v43 + 20);
        *(_DWORD *)(v43 + 20) = v28 | ~((unsigned __int8)(v23 << (CurrentIrql + 1)) - 1) & 4;
      }
      goto LABEL_27;
    }
    goto LABEL_19;
  }
  if ( v29 != 2 )
  {
LABEL_19:
    v30 = (volatile __int32 *)(v25 + 192);
    goto LABEL_20;
  }
  v30 = (volatile __int32 *)&unk_140C53D00;
LABEL_20:
  v31 = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && ((unsigned __int8)dword_140D06B08 & (unsigned __int8)v23) != 0 && v31 <= 0xFu )
  {
    v54 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    v28 = (-1LL << (v31 + 1)) & 4;
    *(_DWORD *)(v54 + 20) |= v28;
  }
  if ( (BYTE6(xmmword_140D06900) & 0x21) != 0 )
  {
    sub_140461B20(v30, v31);
  }
  else
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v33 = *((_QWORD *)CurrentPrcb + 4375);
    if ( v33 )
    {
      if ( *((_BYTE *)CurrentPrcb + 32) <= (unsigned __int8)v23 )
      {
        v55 = *(_DWORD *)(v33 + 24);
        *(_DWORD *)(v33 + 24) = v23 + v55;
        if ( !((_DWORD)v23 + v55) )
          sub_140418E4C(CurrentPrcb);
      }
    }
    _m_prefetchw((const void *)v30);
    v34 = *v30 & 0x7FFFFFFF;
    if ( v34 != _InterlockedCompareExchange(v30, v34 + 1, v34) )
    {
      v44 = *((_QWORD *)CurrentPrcb + 4375);
      if ( v44 )
      {
        if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
        {
          v56 = *(_DWORD *)(v44 + 24) - 1;
          *(_DWORD *)(v44 + 24) = v56;
          if ( !v56 )
            sub_140418E4C(CurrentPrcb);
        }
      }
      sub_140366A20(v30, v31);
    }
  }
  if ( *((_DWORD *)v30 + 1) )
    _InterlockedExchange(v30 + 1, 0);
  CurrentIrql = v31;
LABEL_27:
  v36 = *(_DWORD *)(a1 + 72);
  *(_BYTE *)(a1 + 76) = CurrentIrql;
  if ( (v36 & 0xF) == 1 && *(_QWORD *)(*(_QWORD *)(a1 + 88) + 1264LL) )
    *(_DWORD *)(a1 + 72) = v36 | 0x10;
  if ( v24 == 8 )
  {
    v41 = *(_QWORD *)(sub_1403295C0(v22, v28) + 24);
    v42 = v41 & 0xFFFFFFFFFFFFFFFEuLL;
    if ( (v41 & 1) == 0 )
      v42 = v41;
    *(_QWORD *)(a1 + 104) = *(_QWORD *)(qword_140C51F48 + 8LL * (*(_WORD *)(*(_QWORD *)v42 + 60LL) & 0x3FF)) + 17024LL;
  }
  return 0LL;
}
