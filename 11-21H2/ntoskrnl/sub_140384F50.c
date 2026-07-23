/*
 * XREFs of sub_140384F50 @ 0x140384F50
 * Callers:
 *     sub_140238330 @ 0x140238330 (sub_140238330.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeSetActualBasePriorityThread @ 0x14028FD20 (KeSetActualBasePriorityThread.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeQueryPriorityThread @ 0x14035D5C0 (KeQueryPriorityThread.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 *__fastcall sub_140384F50(__int64 a1, _DWORD *a2)
{
  KSPIN_LOCK *v2; // r14
  KIRQL v5; // al
  unsigned __int64 *v6; // r8
  unsigned __int64 v7; // rbp
  __int64 *v8; // r9
  unsigned __int64 *v9; // rcx
  __int64 *v10; // rdx
  __int64 v11; // rax
  KPRIORITY v12; // edi
  unsigned __int64 *v13; // rcx
  __int64 *v14; // rdx
  __int64 *v15; // rdi
  __int64 v17; // rax
  unsigned int v18; // edx
  int v19; // eax
  __int64 i; // rcx
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rax
  __int64 v25; // r9
  int v26; // edx
  bool v27; // zf

  *a2 = 0;
  v2 = (KSPIN_LOCK *)(a1 + 6040);
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 6040));
  v6 = (unsigned __int64 *)(a1 + 6080);
  v7 = v5;
  v8 = *(__int64 **)(a1 + 6088);
  if ( v8 == (__int64 *)(a1 + 6080) )
  {
    v9 = (unsigned __int64 *)(a1 + 6048);
    v10 = *(__int64 **)(a1 + 6056);
    if ( v10 == (__int64 *)(a1 + 6048) )
    {
      if ( !*(_DWORD *)(a1 + 6104) )
      {
        v11 = *(unsigned __int8 *)(a1 + 6022);
        v12 = (_DWORD)v11 == 4 ? *(_DWORD *)(a1 + 6728) : *((_DWORD *)qword_14001BFE0 + v11);
        if ( KeQueryPriorityThread(*(PKTHREAD *)(a1 + 6200)) > v12 )
        {
          v17 = *(unsigned __int8 *)(a1 + 6022);
          if ( (_DWORD)v17 == 4 )
            v18 = *(_DWORD *)(a1 + 6728);
          else
            v18 = *((_DWORD *)qword_14001BFE0 + v17);
          KeSetActualBasePriorityThread(*(_QWORD *)(a1 + 6200), v18);
        }
      }
      v13 = (unsigned __int64 *)(a1 + 6064);
      v14 = *(__int64 **)(a1 + 6072);
      if ( v14 == (__int64 *)(a1 + 6064) )
      {
        v15 = 0LL;
        goto LABEL_17;
      }
      v15 = (__int64 *)*v13;
      *v13 = *(_QWORD *)*v13 & 0xFFFFFFFFFFFFFFF8uLL;
      if ( v15 == v14 )
      {
        *v13 = 0LL;
        *(_QWORD *)(a1 + 6072) = a1 + 6064;
      }
      else
      {
        *v14 = *v14 & 7 | (8 * (((unsigned __int64)*v14 >> 3) - 1));
      }
      if ( !--*(_DWORD *)(a1 + 6100)
        && (*(_BYTE *)v15 & 7) == 6
        && *(_BYTE *)(a1 + 6022)
        && KeQueryPriorityThread(*(PKTHREAD *)(a1 + 6200)) > 4 )
      {
        KeSetActualBasePriorityThread(*(_QWORD *)(a1 + 6200), 4u);
      }
    }
    else
    {
      v15 = (__int64 *)*v9;
      *v9 = *(_QWORD *)*v9 & 0xFFFFFFFFFFFFFFF8uLL;
      if ( v15 == v10 )
      {
        *v9 = 0LL;
        *(_QWORD *)(a1 + 6056) = a1 + 6048;
      }
      else
      {
        *v10 = *v10 & 7 | (8 * (((unsigned __int64)*v10 >> 3) - 1));
      }
      --*(_DWORD *)(a1 + 6096);
    }
  }
  else
  {
    v15 = (__int64 *)*v6;
    *v6 = *(_QWORD *)*v6 & 0xFFFFFFFFFFFFFFF8uLL;
    if ( v15 == v8 )
    {
      *v6 = 0LL;
      *(_QWORD *)(a1 + 6088) = a1 + 6080;
    }
    else
    {
      *v8 = *v8 & 7 | (8 * (((unsigned __int64)*v8 >> 3) - 1));
    }
    v19 = *(_DWORD *)(a1 + 6100) - 1;
    *a2 = 1;
    *(_DWORD *)(a1 + 6100) = v19;
  }
  if ( !v15 )
  {
LABEL_17:
    *(_QWORD *)(a1 + 6120) = 0LL;
    goto LABEL_13;
  }
  *(_QWORD *)(a1 + 6112) = MEMORY[0xFFFFF78000000320];
  if ( (*(_DWORD *)v15 & 7) == 2 && *(_BYTE *)(a1 + 6020) )
  {
    for ( i = *(_QWORD *)(*(_QWORD *)(a1 + 3952) + 16LL);
          *(_DWORD *)i < (unsigned __int8)*((_DWORD *)v15 + 2) << 12;
          i += 32LL )
    {
      ;
    }
    v21 = *(_QWORD *)(i + 8);
    v22 = *(_QWORD *)(a1 + 6120);
    if ( v22 > v21 )
    {
      *(_QWORD *)(a1 + 6120) = v22 - v21;
      goto LABEL_13;
    }
    goto LABEL_17;
  }
LABEL_13:
  KeReleaseSpinLockFromDpcLevel(v2);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v7 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v25 = *((_QWORD *)CurrentPrcb + 4375);
        v26 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
        v27 = (v26 & *(_DWORD *)(v25 + 20)) == 0;
        *(_DWORD *)(v25 + 20) &= v26;
        if ( v27 )
          sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(v7);
  return v15;
}
