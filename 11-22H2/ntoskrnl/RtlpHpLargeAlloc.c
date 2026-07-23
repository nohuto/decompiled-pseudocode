/*
 * XREFs of RtlpHpLargeAlloc @ 0x140323EBC
 * Callers:
 *     RtlpHpAllocateHeap @ 0x14024D400 (RtlpHpAllocateHeap.c)
 *     ExAllocateHeapPool @ 0x1402AD2B0 (ExAllocateHeapPool.c)
 * Callees:
 *     RtlpHpFreeVA @ 0x140212178 (RtlpHpFreeVA.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     RtlRbInsertNodeEx @ 0x14024CCA0 (RtlRbInsertNodeEx.c)
 *     RtlpHpAllocVA @ 0x1402869A0 (RtlpHpAllocVA.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402893A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExfTryToWakePushLock @ 0x1402BD930 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14030F640 (KiCheckForKernelApcDelivery.c)
 *     RtlpHpQueryVA @ 0x140315738 (RtlpHpQueryVA.c)
 *     RtlpHpMetadataFree @ 0x140323E7C (RtlpHpMetadataFree.c)
 *     RtlpHpMetadataAlloc @ 0x140324348 (RtlpHpMetadataAlloc.c)
 *     RtlpHpSegHeapCheckCommitLimit @ 0x1403244A8 (RtlpHpSegHeapCheckCommitLimit.c)
 *     RtlpHpLargeLockAcquire @ 0x140324520 (RtlpHpLargeLockAcquire.c)
 *     RtlHeapZero @ 0x1403D8230 (RtlHeapZero.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall RtlpHpLargeAlloc(__int64 a1, __int16 a2, unsigned __int64 a3, unsigned int a4)
{
  __int128 v4; // xmm0
  __int64 v5; // rsi
  __int64 v8; // rax
  _RTL_BALANCED_NODE *v9; // r13
  char v10; // bl
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rcx
  int v13; // ecx
  __int64 v14; // rdx
  unsigned __int64 v15; // r15
  int v16; // r9d
  unsigned int v17; // r15d
  int v18; // ecx
  __int64 v19; // r8
  bool v20; // zf
  unsigned __int64 v21; // rbx
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // r14
  unsigned __int8 v24; // al
  _RTL_RB_TREE *v25; // rcx
  unsigned __int64 v26; // rsi
  unsigned __int64 v27; // rdx
  BOOLEAN v28; // r8
  unsigned __int64 v29; // rax
  struct _KTHREAD *CurrentThread; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v35; // edx
  __int64 v36; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v37; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v38; // [rsp+48h] [rbp-C0h]
  __int64 v39; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD *v40; // [rsp+58h] [rbp-B0h] BYREF
  unsigned __int64 v41; // [rsp+60h] [rbp-A8h] BYREF
  __int128 v42; // [rsp+68h] [rbp-A0h] BYREF
  unsigned __int64 v43; // [rsp+78h] [rbp-90h]
  __int128 v44; // [rsp+88h] [rbp-80h] BYREF
  __int128 v45; // [rsp+98h] [rbp-70h] BYREF
  __int128 v46; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v47; // [rsp+B8h] [rbp-50h]
  __int128 v48; // [rsp+C8h] [rbp-40h]
  __int128 v49; // [rsp+D8h] [rbp-30h]
  __int128 v50; // [rsp+E8h] [rbp-20h]
  __int128 v51; // [rsp+F8h] [rbp-10h]
  __int128 v52; // [rsp+108h] [rbp+0h]
  int v53; // [rsp+158h] [rbp+50h]

  v4 = *(_OWORD *)a1;
  v40 = 0LL;
  v5 = 0LL;
  LODWORD(v39) = 0;
  v38 = 0LL;
  v36 = 0LL;
  v44 = v4;
  v8 = RtlpHpMetadataAlloc(40LL, 40LL, 0LL, &v44);
  v9 = (_RTL_BALANCED_NODE *)v8;
  if ( !v8 )
    return v38;
  *(_OWORD *)v8 = 0LL;
  v10 = 0;
  *(_OWORD *)(v8 + 16) = 0LL;
  *(_QWORD *)(v8 + 32) = 0LL;
  if ( (*(_DWORD *)(a1 + 20) & 0x4000000) != 0 )
    v10 = 0x1FFFFF - ((a3 - 1) & 0x1FFFFF) < a3 >> 2;
  if ( BYTE1(*(_QWORD *)a1) == 3 )
    v10 = 3;
  if ( BYTE1(*(_QWORD *)a1) == 2 )
    v10 = 7;
  while ( 1 )
  {
    v53 = 0;
    if ( (v10 & 1) != 0 )
    {
      v11 = 0x200000LL;
      v12 = a3 - ((a3 - 1) & 0x1FFFFF) + 0x1FFFFF;
    }
    else
    {
      v11 = 0LL;
      v53 = BYTE1(*(_QWORD *)a1) < 2u;
      v12 = a3 + (unsigned int)(v53 << 12);
    }
    v37 = v12;
    if ( v12 < a3 )
      goto LABEL_64;
    v13 = *(_DWORD *)(a1 + 20) & 0x40000000;
    v45 = *(_OWORD *)a1;
    v47 = 0LL;
    v48 = 0LL;
    v49 = 0LL;
    if ( v13 )
    {
      *(_QWORD *)&v47 = a1;
      DWORD2(v47) = 64;
    }
    if ( (int)RtlpHpAllocVA((unsigned __int64 *)&v36, &v37, v11, 0x2000, v13 != 0 ? 64 : 4, &v45) < 0 )
    {
      v5 = 0LL;
      v36 = 0LL;
      goto LABEL_64;
    }
    v5 = v36;
    RtlpHpQueryVA(v36, v14, &v40, &v39);
    *v40 = a1;
    v43 = (a3 + 4095) >> 12;
    v15 = v43 << 12;
    v41 = v43 << 12;
    if ( !(unsigned int)RtlpHpSegHeapCheckCommitLimit(v43 << 12, a1) )
      goto LABEL_64;
    if ( (v10 & 1) != 0 )
    {
      v41 = v15 - ((v15 - 1) & 0x1FFFFF) + 0x1FFFFF;
      v16 = ((v10 & 4) << 20) | 0x20001000;
      v17 = a4;
    }
    else
    {
      v17 = a4;
      v16 = 4096;
      if ( (a4 & 2) != 0 )
        v16 = 1073745920;
    }
    v18 = *(_DWORD *)(a1 + 20) & 0x40000000;
    v46 = *(_OWORD *)a1;
    v50 = 0LL;
    v51 = 0LL;
    v52 = 0LL;
    if ( v18 )
    {
      *(_QWORD *)&v50 = a1;
      DWORD2(v50) = 64;
    }
    if ( (int)RtlpHpAllocVA((unsigned __int64 *)&v36, (__int64 *)&v41, 0LL, v16, v18 != 0 ? 64 : 4, &v46) >= 0 )
      break;
    if ( (v10 & 3) != 1 )
    {
      v5 = v36;
LABEL_64:
      v42 = *(_OWORD *)a1;
      RtlpHpMetadataFree((__int64)v9, &v42);
      goto LABEL_40;
    }
    v10 &= ~1u;
    v42 = *(_OWORD *)a1;
    RtlpHpFreeVA((unsigned __int64 *)&v36, (unsigned __int64 *)&v37, 0x8000LL, &v42);
    v5 = 0LL;
    v36 = 0LL;
  }
  v20 = (v10 & 1) == 0;
  v21 = v36;
  if ( !v20 && (v17 & 2) != 0 )
    RtlHeapZero(v36, (a3 + 15) & 0xFFFFFFFFFFFFFFF0uLL, v19);
  _BitScanForward64(&v22, v37);
  v23 = v43;
  LODWORD(v38) = v22;
  v9[1].Children[0] = (_RTL_BALANCED_NODE *)v21;
  v9[1].Children[1] = (_RTL_BALANCED_NODE *)((__int64)v9[1].Right & 0xF01 | (2
                                                                           * (v53 & 0xFFFFFF81 | (2
                                                                                                * ((v23 << 10) | v22 & 0x3F)))));
  LOWORD(v9[1].Children[0]) = ((_WORD)v23 << 12) - a2;
  v24 = RtlpHpLargeLockAcquire(a1, v17);
  v25 = (_RTL_RB_TREE *)(a1 + 72);
  v26 = v24;
  v27 = *(_QWORD *)(a1 + 72);
  if ( (*(_BYTE *)(a1 + 80) & 1) != 0 && v27 )
    v27 ^= (unsigned __int64)v25;
  v28 = 0;
  if ( v27 )
  {
    while ( 1 )
    {
      if ( v21 >= (*(_QWORD *)(v27 + 24) & 0xFFFFFFFFFFFF0000uLL) )
      {
        v29 = *(_QWORD *)(v27 + 8);
        if ( (*(_BYTE *)(a1 + 80) & 1) != 0 )
        {
          if ( !v29 )
            goto LABEL_34;
          v29 ^= v27;
        }
        if ( !v29 )
        {
LABEL_34:
          v28 = 1;
          break;
        }
      }
      else
      {
        v29 = *(_QWORD *)v27;
        if ( (*(_BYTE *)(a1 + 80) & 1) != 0 )
        {
          if ( !v29 )
            break;
          v29 ^= v27;
        }
        if ( !v29 )
          break;
      }
      v27 = v29;
    }
  }
  RtlRbInsertNodeEx(v25, (PRTL_BALANCED_NODE)v27, v28, v9);
  if ( (v17 & 1) == 0 )
  {
    if ( (*(_DWORD *)a1 & 1) != 0 )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
      if ( (_DWORD)KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
          && CurrentIrql <= 0xFu
          && (unsigned __int8)v26 <= 0xFu
          && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v35 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v26 + 1));
          v20 = (v35 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v35;
          if ( v20 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(v26);
    }
    else
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 64), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 64));
      KeAbPostRelease(a1 + 64);
      CurrentThread = KeGetCurrentThread();
      v20 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v20
        && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery();
      }
    }
  }
  _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 88), v37 / 4096);
  _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 96), v23);
  v5 = 0LL;
  v38 = v36;
  v36 = 0LL;
LABEL_40:
  if ( v5 )
  {
    v42 = *(_OWORD *)a1;
    RtlpHpFreeVA((unsigned __int64 *)&v36, (unsigned __int64 *)&v37, 0x8000LL, &v42);
  }
  return v38;
}
