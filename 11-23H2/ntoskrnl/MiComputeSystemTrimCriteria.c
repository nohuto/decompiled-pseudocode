/*
 * XREFs of MiComputeSystemTrimCriteria @ 0x1402201BC
 * Callers:
 *     MiProcessWorkingSets @ 0x14021FA10 (MiProcessWorkingSets.c)
 * Callees:
 *     MiPruneProcessLargePageCaches @ 0x14021E690 (MiPruneProcessLargePageCaches.c)
 *     MiGetStandbyRepurposed @ 0x1402204FC (MiGetStandbyRepurposed.c)
 *     MiComputeAgeDistribution @ 0x1402225E8 (MiComputeAgeDistribution.c)
 *     MiGetAvailablePagesBelowPriority @ 0x14025BD60 (MiGetAvailablePagesBelowPriority.c)
 *     MiPulseLowAvailableEvent @ 0x140653D70 (MiPulseLowAvailableEvent.c)
 */

__int64 __fastcall MiComputeSystemTrimCriteria(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned int v5; // r14d
  unsigned __int64 AvailablePagesBelowPriority; // rbp
  unsigned int StandbyRepurposed; // eax
  unsigned int v8; // ecx
  unsigned __int64 v9; // r8
  unsigned int v10; // r11d
  unsigned __int64 v11; // r8
  __int64 v12; // rdx
  unsigned __int8 v13; // r12
  unsigned __int64 v14; // rdi
  BOOL v15; // r10d
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rax
  __int64 v18; // rdx
  int v19; // eax
  __int64 v20; // rdx
  int v21; // r10d
  int v22; // r11d
  int v23; // r15d
  unsigned int v24; // ecx
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rax
  unsigned __int8 v27; // cl
  unsigned __int64 v28; // rdx
  unsigned __int16 v29; // ax
  unsigned __int64 v30; // rax
  __int16 v32; // ax
  unsigned __int64 v33; // rcx
  unsigned __int64 v34; // rcx
  unsigned __int64 v35; // rcx
  unsigned __int64 v36; // rcx
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // rcx
  unsigned __int64 v39; // rax
  __int64 v40; // rcx
  int v41; // [rsp+60h] [rbp+8h]
  unsigned int v42; // [rsp+70h] [rbp+18h]
  unsigned __int64 v43; // [rsp+78h] [rbp+20h]

  v2 = a1[2115];
  v41 = 0;
  v5 = *(_DWORD *)(v2 + 40);
  AvailablePagesBelowPriority = MiGetAvailablePagesBelowPriority(a1, 6LL);
  StandbyRepurposed = MiGetStandbyRepurposed(a1, 1LL);
  v8 = *(_DWORD *)(v2 + 44);
  v9 = *(_QWORD *)(v2 + 2400);
  *(_DWORD *)(v2 + 44) = StandbyRepurposed;
  v10 = v8 < StandbyRepurposed ? StandbyRepurposed - v8 : 0;
  v42 = v10;
  if ( AvailablePagesBelowPriority <= v9 )
    v11 = v9 - AvailablePagesBelowPriority;
  else
    v11 = AvailablePagesBelowPriority - v9;
  v12 = *(_DWORD *)(v2 + 120) & 7;
  v13 = 0;
  v14 = 0LL;
  *(_QWORD *)(v2 + 2200) += (v11 >> 3) - (*(_QWORD *)(v2 + 8 * v12 + 2208) >> 3);
  *(_QWORD *)(v2 + 8 * v12 + 2208) = v11;
  v15 = *(_DWORD *)(v2 + 80) == 4 && *(_WORD *)(v2 + 2348) && *(_BYTE *)(v2 + 2350) && *(_BYTE *)(v2 + 2351)
     || AvailablePagesBelowPriority <= 0x120;
  v16 = *(_QWORD *)(v2 + 2400);
  v17 = v16;
  if ( v15 )
  {
    v18 = 0LL;
  }
  else
  {
    v18 = AvailablePagesBelowPriority - *(_QWORD *)(v2 + 2368);
    v17 = v16 >> 2;
  }
  if ( AvailablePagesBelowPriority < v17 )
  {
    v33 = v16 - v18;
  }
  else
  {
    if ( AvailablePagesBelowPriority >= 4 * v16 )
      goto LABEL_9;
    if ( v18 >= 0 )
      goto LABEL_9;
    v33 = v16 - v18;
    if ( AvailablePagesBelowPriority >= v33 )
      goto LABEL_9;
  }
  v14 = *(_QWORD *)(v2 + 2384);
  v34 = v33 - AvailablePagesBelowPriority;
  v13 = 1;
  if ( v34 <= v14 )
    v14 = v34;
LABEL_9:
  v43 = v10;
  if ( v10 >= AvailablePagesBelowPriority >> 2 )
  {
    v35 = v10 - (AvailablePagesBelowPriority >> 2);
    if ( v35 > v14 && v14 < 0x2000 && !v15 )
    {
      v14 = v10 - (AvailablePagesBelowPriority >> 2);
      v13 = 3;
      if ( v35 > 0x2000 )
        v14 = 0x2000LL;
    }
  }
  v19 = MiGetStandbyRepurposed(a1, 4LL);
  v23 = v19;
  if ( v14 )
  {
    if ( v14 < 0x1000 && !v21 )
      v14 = 4096LL;
  }
  else if ( !v21 )
  {
    v24 = v19 - *(_DWORD *)(v2 + 48);
    if ( v24 > 0x20000 )
    {
      v36 = a1[2152];
      if ( v36 >= 0x100000 || v36 >= a1[2130] >> 2 )
      {
        *(_DWORD *)(v2 + 48) = v19;
      }
      else
      {
        v14 = 0x8000LL;
        v13 = 2;
      }
    }
    else if ( v22 && v24 > 0x18000 && *(_QWORD *)(v2 + 2408) < 0x20000uLL )
    {
      v41 = 1;
    }
  }
  v25 = *(_QWORD *)(v2 + 2400);
  if ( AvailablePagesBelowPriority < 4 * v25 )
  {
    v20 = *(_QWORD *)(v2 + 2200);
    v37 = 4 * v20;
    if ( 4 * v20 >= v25 )
    {
      v39 = 2 * v20;
      if ( 2 * v20 <= v25 )
        goto LABEL_17;
      v38 = *(_QWORD *)(v2 + 2384);
      *(_QWORD *)(v2 + 2400) = v39;
      if ( v39 <= v38 )
        goto LABEL_17;
    }
    else
    {
      v38 = *(_QWORD *)(v2 + 2376);
      *(_QWORD *)(v2 + 2400) = v37;
      if ( v37 >= v38 )
        goto LABEL_17;
    }
    *(_QWORD *)(v2 + 2400) = v38;
    goto LABEL_17;
  }
  if ( AvailablePagesBelowPriority > 16 * v25 )
    *(_QWORD *)(v2 + 2400) = *(_QWORD *)(v2 + 2392);
LABEL_17:
  *(_QWORD *)(v2 + 2368) = AvailablePagesBelowPriority;
  if ( !v14 )
  {
    v26 = *(_QWORD *)(v2 + 2360);
    v27 = 0;
    if ( v26 )
    {
      if ( v26 > *(_QWORD *)(v2 + 2408) )
      {
        v28 = v43;
        v27 = 10;
        if ( *(_WORD *)(v2 + 2346) < 0xFAu )
          *(_WORD *)(v2 + 2346) = 250;
        goto LABEL_24;
      }
      *(_QWORD *)(v2 + 2360) = 0LL;
    }
    if ( *(_QWORD *)(v2 + 2408) < (unsigned __int64)(4LL * *(_QWORD *)(v2 + 2384)) )
    {
      if ( !*(_WORD *)(v2 + 2346) )
        goto LABEL_21;
      v32 = MiComputeAgeDistribution(a1, 1LL, 0LL);
      *(_WORD *)(v2 + 2346) = v32;
      if ( !v32 )
      {
        v27 = 0;
LABEL_21:
        v28 = v43;
        if ( v43 >= AvailablePagesBelowPriority >> 4 )
        {
          v27 = 9;
        }
        else if ( v41 )
        {
          v27 = 8;
        }
        goto LABEL_24;
      }
      v27 = 11;
    }
    v28 = v43;
LABEL_24:
    v29 = *(_WORD *)(v2 + 2348);
    if ( v29 )
    {
      if ( *(_WORD *)(v2 + 2346) < v29 )
        *(_WORD *)(v2 + 2346) = v29;
      if ( !v27 )
      {
        v27 = 12;
        *(_WORD *)(v2 + 2346) = v29;
      }
    }
    *(_BYTE *)a2 = 0;
    *(_QWORD *)(a2 + 96) = 0LL;
    *(_QWORD *)(a2 + 80) = 0LL;
    *(_QWORD *)(a2 + 72) = a1[2152];
    *(_QWORD *)(a2 + 104) = 0LL;
    *(_BYTE *)(a2 + 2) = v27;
    *(_OWORD *)(a2 + 8) = 0LL;
    *(_OWORD *)(a2 + 24) = 0LL;
    *(_OWORD *)(a2 + 40) = 0LL;
    *(_OWORD *)(a2 + 56) = 0LL;
    if ( v27 )
    {
      ++*(_DWORD *)(v2 + 4LL * v27 + 2488);
      v5 |= 2u;
    }
    else if ( *(_BYTE *)(v2 + 55) )
    {
      v5 |= 0x40u;
      *(_WORD *)(v2 + 2346) = 10;
    }
    else if ( !v5 )
    {
      v5 = 32;
    }
    goto LABEL_29;
  }
  MiPulseLowAvailableEvent(a1, v20, 0LL);
  if ( (unsigned __int8)(v13 - 2) <= 1u )
    *(_QWORD *)(v2 + 2360) = v14;
  v28 = v43;
  *(_BYTE *)a2 = 0;
  *(_QWORD *)(a2 + 96) = 0LL;
  v5 |= 1u;
  *(_QWORD *)(a2 + 80) = v14;
  v40 = a1[2152];
  *(_QWORD *)(a2 + 104) = 0LL;
  *(_QWORD *)(a2 + 72) = v14 + v40;
  *(_BYTE *)(a2 + 2) = v13;
  *(_OWORD *)(a2 + 8) = 0LL;
  *(_OWORD *)(a2 + 24) = 0LL;
  *(_OWORD *)(a2 + 40) = 0LL;
  *(_OWORD *)(a2 + 56) = 0LL;
  *(_DWORD *)(v2 + 48) = v23;
  ++*(_DWORD *)(v2 + 4LL * v13 + 2488);
LABEL_29:
  if ( AvailablePagesBelowPriority && v28 < AvailablePagesBelowPriority )
    v30 = 100 * v42 / AvailablePagesBelowPriority;
  else
    LOBYTE(v30) = 100;
  *(_BYTE *)(a2 + 3) = v30;
  if ( (v5 & 1) == 0 )
    *(_BYTE *)(a2 + 4) = 1;
  if ( v13 )
    MiPruneProcessLargePageCaches((__int64)a1, 0);
  return v5;
}
