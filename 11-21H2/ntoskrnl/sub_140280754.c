/*
 * XREFs of sub_140280754 @ 0x140280754
 * Callers:
 *     IoBoostThreadIo @ 0x1402019A0 (IoBoostThreadIo.c)
 *     sub_14021CA70 @ 0x14021CA70 (sub_14021CA70.c)
 *     sub_14023C3B4 @ 0x14023C3B4 (sub_14023C3B4.c)
 *     sub_14024A468 @ 0x14024A468 (sub_14024A468.c)
 *     sub_1402B4EC0 @ 0x1402B4EC0 (sub_1402B4EC0.c)
 *     sub_140343010 @ 0x140343010 (sub_140343010.c)
 *     sub_1403591D8 @ 0x1403591D8 (sub_1403591D8.c)
 *     sub_14035D3E0 @ 0x14035D3E0 (sub_14035D3E0.c)
 *     sub_1403CFD20 @ 0x1403CFD20 (sub_1403CFD20.c)
 *     sub_1406CA810 @ 0x1406CA810 (sub_1406CA810.c)
 *     NtSetInformationThread @ 0x14072EC80 (NtSetInformationThread.c)
 *     NtSetInformationProcess @ 0x1407E7850 (NtSetInformationProcess.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_140281870 @ 0x140281870 (sub_140281870.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireQueuedSpinLock @ 0x140285C80 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1402A3F30 (KeReleaseQueuedSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_1403119F0 @ 0x1403119F0 (sub_1403119F0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140280754(KSPIN_LOCK *a1, int a2, int a3)
{
  char v5; // r15
  KSPIN_LOCK *v6; // rsi
  unsigned __int64 v7; // rdi
  __int64 result; // rax
  unsigned int v9; // r14d
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rax
  KIRQL v13; // al
  KSPIN_LOCK v14; // rdi
  KIRQL v15; // si
  __int64 v16; // rcx
  unsigned __int64 v17; // rsi
  void *v18; // rsi
  unsigned __int16 v19; // ax
  unsigned __int16 v20; // si
  __int64 v21; // r15
  __int64 v22; // r13
  unsigned __int16 v23; // di
  _QWORD *v24; // rsi
  unsigned __int64 v25; // rdi
  __int64 v26; // rsi
  __int64 v27; // r8
  signed __int64 v28; // rax
  signed __int64 v29; // rtt
  KIRQL v30; // al
  __int64 v31; // rdi
  __int64 v32; // rcx
  __int64 i; // rdx
  __int64 v34; // rax
  __int64 v35; // rdx
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v37; // r8
  bool v38; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *v40; // r10
  __int64 v41; // r9
  int v42; // eax
  __int64 Pool2; // rax
  unsigned __int8 v44; // al
  struct _KPRCB *v45; // r9
  __int64 v46; // r8
  int v47; // eax
  KIRQL v48; // [rsp+28h] [rbp-E0h]
  KIRQL v49; // [rsp+28h] [rbp-E0h]
  char v50; // [rsp+29h] [rbp-DFh]
  __int16 v52; // [rsp+2Ch] [rbp-DCh]
  __int64 v54; // [rsp+38h] [rbp-D0h]
  __int64 v55; // [rsp+38h] [rbp-D0h]
  void *v56; // [rsp+40h] [rbp-C8h]
  __int64 v58; // [rsp+50h] [rbp-B8h]
  _QWORD v59[10]; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD *v60; // [rsp+B8h] [rbp-50h]
  _QWORD v61[8]; // [rsp+C8h] [rbp-40h] BYREF
  _QWORD v62[8]; // [rsp+108h] [rbp+0h] BYREF

  v5 = 0;
  memset(v61, 0, sizeof(v61));
  memset(v62, 0, sizeof(v62));
  if ( a3 < 0 )
  {
    v5 = 1;
  }
  else
  {
    v6 = a1 + 187;
    v7 = KeAcquireSpinLockRaiseToDpc(a1 + 187);
    if ( (KSPIN_LOCK *)a1[160] == a1 + 160 )
    {
      if ( (a3 & 0x40000000) == 0 )
      {
        KeReleaseSpinLockFromDpcLevel(v6);
        result = (unsigned int)dword_140D06B08;
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            result = KeGetCurrentIrql();
            if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v7 <= 0xFu && (unsigned __int8)result >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v37 = *((_QWORD *)CurrentPrcb + 4375);
              result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
              v38 = ((unsigned int)result & *(_DWORD *)(v37 + 20)) == 0;
              *(_DWORD *)(v37 + 20) &= result;
              if ( v38 )
                result = sub_140418E4C(CurrentPrcb);
            }
          }
        }
        __writecr8(v7);
        return result;
      }
      v5 = 1;
    }
    KeReleaseSpinLockFromDpcLevel(v6);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v7 <= 0xFu && CurrentIrql >= 2u )
        {
          v40 = KeGetCurrentPrcb();
          v41 = *((_QWORD *)v40 + 4375);
          v42 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
          v38 = (v42 & *(_DWORD *)(v41 + 20)) == 0;
          *(_DWORD *)(v41 + 20) &= v42;
          if ( v38 )
            sub_140418E4C(v40);
        }
      }
    }
    __writecr8(v7);
  }
  v9 = 0;
  v10 = 0LL;
  v11 = 8LL;
  do
  {
    v12 = sub_140281870((char *)&unk_140C46D20 + v10 * 8);
    v61[v10] = v12;
    if ( v12 )
      v62[v10] = *(_QWORD *)(v12 + 16);
    ++v10;
    --v11;
  }
  while ( v11 );
  if ( v5 == 1 )
  {
    result = 0LL;
    goto LABEL_24;
  }
  v56 = 0LL;
  v13 = KeAcquireSpinLockRaiseToDpc(a1 + 187);
  v14 = a1[160];
  v48 = v13;
  v15 = v13;
  if ( (KSPIN_LOCK *)v14 == a1 + 160 )
    goto LABEL_22;
  do
  {
    v16 = *(char *)(v14 + 34);
    if ( *(char *)(v14 + 35) > (char)v16 )
      goto LABEL_20;
    v17 = *(_QWORD *)(v14 + 152);
    if ( v17 >= v14 + 8 * (v16 + 8 * v16 + 22) )
      goto LABEL_20;
    v18 = *(void **)(v17 + 40);
    if ( !v18 )
      goto LABEL_20;
    v19 = 0;
    v52 = 0;
    while ( 1 )
    {
      v58 = v19;
      v54 = v61[v19];
      if ( v54 )
        break;
LABEL_19:
      v52 = ++v19;
      if ( v19 >= 8u )
        goto LABEL_20;
    }
    v50 = 0;
    sub_1403119F0((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 160);
    for ( i = *(_QWORD *)(*(_QWORD *)(v62[v58] + 32LL) + 8LL); i; i = *(_QWORD *)(i + 16) )
    {
      if ( (void *)i == v18 && (*(_DWORD *)(i + 48) & 0x1000000) != 0 )
      {
        v50 = 1;
        break;
      }
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel((PKLOCK_QUEUE_HANDLE)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 160));
    if ( v50 != 1 || v56 == v18 )
    {
      v19 = v52;
      goto LABEL_19;
    }
    v56 = v18;
    if ( v9 >= 2 )
    {
      Pool2 = ExAllocatePool2(64LL, 48LL, 1128427337LL);
      if ( Pool2 )
      {
        *(_QWORD *)(Pool2 + 32) = v60;
        v60 = (_QWORD *)Pool2;
        *(_QWORD *)Pool2 = v54;
        *(_WORD *)(Pool2 + 40) = v52;
        *(_DWORD *)(Pool2 + 24) = a2;
        *(_QWORD *)(Pool2 + 8) = v18;
        *(_QWORD *)(Pool2 + 16) = a1;
        goto LABEL_67;
      }
    }
    else
    {
      v35 = 6LL * v9;
      v59[v35] = v54;
      LODWORD(v59[v35 + 3]) = a2;
      LOWORD(v59[v35 + 5]) = v52;
      v59[v35 + 4] = 0LL;
      v59[v35 + 1] = v18;
      v59[v35 + 2] = a1;
LABEL_67:
      ++v9;
      ObfReferenceObjectWithTag(v18, 0x746C6644u);
      ObfReferenceObjectWithTag(a1, 0x746C6644u);
      if ( (*(_DWORD *)(v14 - 16) & 2) != 0 )
        ++dword_140C46D60;
      else
        ++dword_140C46D64;
    }
LABEL_20:
    v14 = *(_QWORD *)v14;
  }
  while ( (KSPIN_LOCK *)v14 != a1 + 160 );
  v15 = v48;
LABEL_22:
  KeReleaseSpinLockFromDpcLevel(a1 + 187);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v44 = KeGetCurrentIrql();
      if ( v44 <= 0xFu && v15 <= 0xFu && v44 >= 2u )
      {
        v45 = KeGetCurrentPrcb();
        v46 = *((_QWORD *)v45 + 4375);
        v47 = ~(unsigned __int16)(-1LL << (v15 + 1));
        v38 = (v47 & *(_DWORD *)(v46 + 20)) == 0;
        *(_DWORD *)(v46 + 20) &= v47;
        if ( v38 )
          sub_140418E4C(v45);
      }
    }
  }
  __writecr8(v15);
  result = 0LL;
  if ( v9 )
    goto LABEL_29;
LABEL_24:
  v20 = 0;
  v55 = 0LL;
  v21 = 0LL;
  while ( 2 )
  {
    v22 = *(_QWORD *)((char *)v61 + v21);
    if ( !v22 )
      goto LABEL_26;
    v30 = KeAcquireQueuedSpinLock(0xAuLL);
    v49 = v30;
    v31 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)((char *)v62 + v21) + 32LL) + 8LL);
    if ( !v31 )
      goto LABEL_50;
    while ( 2 )
    {
      if ( (*(_DWORD *)(v31 + 48) & 0x1000000) == 0 )
        goto LABEL_48;
      if ( v9 < 2 )
      {
        v32 = 6LL * v9;
        LODWORD(v59[v32 + 3]) = a2;
        v59[v32 + 4] = 0LL;
        v59[v32] = v22;
        LOWORD(v59[v32 + 5]) = v20;
        v59[v32 + 1] = v31;
        v59[v32 + 2] = a1;
        goto LABEL_47;
      }
      v34 = ExAllocatePool2(64LL, 48LL, 1128427337LL);
      if ( v34 )
      {
        *(_QWORD *)(v34 + 32) = v60;
        v60 = (_QWORD *)v34;
        *(_QWORD *)v34 = v22;
        *(_WORD *)(v34 + 40) = v20;
        *(_QWORD *)(v34 + 8) = v31;
        *(_QWORD *)(v34 + 16) = a1;
        *(_DWORD *)(v34 + 24) = a2;
LABEL_47:
        ObfReferenceObjectWithTag((PVOID)v31, 0x746C6644u);
        ObfReferenceObjectWithTag(a1, 0x746C6644u);
        ++v9;
LABEL_48:
        v31 = *(_QWORD *)(v31 + 16);
        if ( !v31 )
          break;
        continue;
      }
      break;
    }
    v21 = v55;
    v30 = v49;
LABEL_50:
    KeReleaseQueuedSpinLock(0xAuLL, v30);
    result = 0LL;
LABEL_26:
    ++v20;
    v21 += 8LL;
    v55 = v21;
    if ( v20 < 8u )
      continue;
    break;
  }
  if ( v9 )
    ++dword_140C46D68;
LABEL_29:
  v23 = 0;
  if ( v9 )
  {
    do
    {
      if ( v23 >= 2u )
      {
        v24 = v60;
        v60 = (_QWORD *)v60[4];
      }
      else
      {
        v24 = &v59[6 * v23];
      }
      sub_14042A5E0(*v24, v24 + 1);
      if ( v23 >= 2u )
        ExFreePoolWithTag(v24, 0);
      ++v23;
    }
    while ( v23 < v9 );
    result = 0LL;
  }
  v25 = 0LL;
  v26 = 8LL;
  do
  {
    v27 = v61[v25 / 8];
    if ( v27 )
    {
      _m_prefetchw((char *)&unk_140C46D20 + v25);
      v28 = *(_QWORD *)((char *)&unk_140C46D20 + v25);
      if ( (v27 ^ (unsigned __int64)v28) >= 0xF )
      {
LABEL_94:
        sub_1402AD030(v27);
      }
      else
      {
        while ( 1 )
        {
          v29 = v28;
          v28 = _InterlockedCompareExchange64((volatile signed __int64 *)((char *)&unk_140C46D20 + v25), v28 + 1, v28);
          if ( v29 == v28 )
            break;
          if ( (v27 ^ (unsigned __int64)v28) >= 0xF )
            goto LABEL_94;
        }
      }
      result = 0LL;
    }
    v25 += 8LL;
    --v26;
  }
  while ( v26 );
  return result;
}
