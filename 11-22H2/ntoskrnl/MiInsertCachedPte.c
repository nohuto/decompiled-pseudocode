/*
 * XREFs of MiInsertCachedPte @ 0x1402CBB10
 * Callers:
 *     MiReleasePtes @ 0x1402CB8E0 (MiReleasePtes.c)
 *     MmUnmapIoSpace @ 0x140335B30 (MmUnmapIoSpace.c)
 * Callees:
 *     MiEmptyPteBins @ 0x14021E170 (MiEmptyPteBins.c)
 *     MiTbFlushTimeStampMayNeedFlush @ 0x14021E3B4 (MiTbFlushTimeStampMayNeedFlush.c)
 *     MiPteInShadowRange @ 0x140271240 (MiPteInShadowRange.c)
 *     KeFlushTb @ 0x140279850 (KeFlushTb.c)
 *     MiSwizzleInvalidPte @ 0x140285680 (MiSwizzleInvalidPte.c)
 *     MiReleaseSmallPteMappings @ 0x1402CBF20 (MiReleaseSmallPteMappings.c)
 *     MiWritePteShadow @ 0x140356D4C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140356DAC (MiPteHasShadow.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     MiReleaseLargePdeMappings @ 0x14065F844 (MiReleaseLargePdeMappings.c)
 */

__int64 __fastcall MiInsertCachedPte(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  unsigned __int64 v3; // r9
  __int64 v4; // r13
  unsigned int v5; // r15d
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // r14
  int v9; // r12d
  volatile signed __int64 *v10; // r10
  __int64 v11; // rbx
  unsigned __int64 v12; // r11
  unsigned __int64 v13; // rbx
  signed __int64 v14; // rdi
  unsigned __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  unsigned int v19; // ecx
  unsigned __int64 *v21; // rdi
  unsigned __int64 v22; // rbx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // r11
  unsigned __int8 CurrentIrql; // si
  int v29; // eax
  _DWORD *SchedulerAssist; // r9
  __int64 v31; // rdx
  unsigned __int64 v32; // rbx
  unsigned __int64 v33; // r11
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  int v37; // eax
  unsigned __int64 v38; // rcx
  unsigned __int8 v39; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v41; // r9
  int v42; // eax
  bool v43; // zf
  signed __int32 v44[8]; // [rsp+0h] [rbp-88h] BYREF
  volatile signed __int64 *v45; // [rsp+20h] [rbp-68h]
  volatile signed __int64 v46; // [rsp+28h] [rbp-60h]
  signed __int64 v47; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v48; // [rsp+38h] [rbp-50h]
  __int64 v49; // [rsp+40h] [rbp-48h]
  signed __int64 v52; // [rsp+A8h] [rbp+20h] BYREF

  v3 = *(_QWORD *)(a1 + 16);
  v47 = 0LL;
  v52 = 0LL;
  v4 = a3;
  v5 = a3 >= 0x200;
  v48 = v3;
  v7 = (__int64)(a2 << 25) >> 16;
  if ( v7 >= 0xFFFFF68000000000uLL && v7 <= 0xFFFFF6FFFFFFFFFFuLL )
  {
    v5 = 2;
    v3 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v48 = v3;
    if ( a3 > (4096 - (a2 & 0xFFF)) >> 3 )
      return 0LL;
  }
  if ( a2 == v3 )
    return 0LL;
  if ( a3 != 1 )
  {
    v21 = (unsigned __int64 *)(a2 + 8);
    v22 = (unsigned __int64)a3 << 32;
    if ( qword_140C65C40 )
    {
      if ( (qword_140C65C40 & v22) != 0 )
        v22 |= 0x10uLL;
      else
        v22 |= qword_140C65C40;
    }
    if ( MiPteInShadowRange(a2 + 8) )
    {
      if ( (unsigned int)MiPteHasShadow(v24, v23, v25) )
      {
        if ( !HIBYTE(word_140C66DFC) && (v22 & 1) != 0 )
          v22 |= 0x8000000000000000uLL;
        *v21 = v22;
        MiWritePteShadow(v21, v22);
        goto LABEL_32;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (v22 & 1) != 0 )
      {
        v22 |= 0x8000000000000000uLL;
      }
    }
    *v21 = v22;
LABEL_32:
    v49 = 0LL;
    goto LABEL_6;
  }
  v49 = 4096LL;
LABEL_6:
  v8 = *(_QWORD *)(a1 + 72)
     + 72
     * (KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0]
      + (unsigned __int64)(v5 * (unsigned __int16)KeNumberNodes));
  while ( 1 )
  {
    _InterlockedOr(v44, 0);
    v9 = KiTbFlushTimeStamp;
    if ( KiTbFlushTimeStamp )
      break;
    KeFlushTb(0, 1u);
  }
  v10 = (volatile signed __int64 *)(v8 + 8LL * (KiTbFlushTimeStamp & 7));
  v45 = v10;
  if ( v5 != 2 )
    goto LABEL_9;
  v38 = v4 + *(int *)(v8 + 64);
  if ( v38 >= 0x80 )
  {
    MiEmptyPteBins(a1);
    return 0LL;
  }
  if ( v38 >= 0x40 )
  {
    MiEmptyPteBins(a1);
    v10 = v45;
  }
LABEL_9:
  v11 = 0LL;
  if ( qword_140C65C40 )
    v11 = qword_140C65C40;
  v12 = a2;
  v13 = v49 | v11 & 0xFFFFFFFFFFFF0FFFuLL;
LABEL_12:
  v14 = *v10;
  v46 = *v10;
  while ( 1 )
  {
    while ( 1 )
    {
      v47 = v14;
      if ( (_DWORD)v14 != v9 )
      {
        if ( HIDWORD(v14) )
          break;
      }
      if ( v13 )
      {
        if ( qword_140C65C40 )
        {
          if ( (v13 & 0x10) != 0 )
            LODWORD(v13) = v13 & 0xFFFFFFEF;
          else
            LODWORD(v13) = ~(_DWORD)qword_140C65C40 & v13;
        }
      }
      else
      {
        LODWORD(v13) = 0;
      }
      v13 = ((unsigned __int64)HIDWORD(v46) << 32) | (unsigned int)v13;
      if ( qword_140C65C40 )
      {
        if ( (qword_140C65C40 & v13) != 0 )
          v13 |= 0x10uLL;
        else
          v13 |= qword_140C65C40;
      }
      v15 = v13;
      if ( MiPteInShadowRange(v12) )
      {
        if ( (unsigned int)MiPteHasShadow(v17, v16, v18) )
        {
          if ( !HIBYTE(word_140C66DFC) && (v13 & 1) != 0 )
            v15 = v13 | 0x8000000000000000uLL;
          *(_QWORD *)a2 = v15;
          MiWritePteShadow(a2, v15);
          goto LABEL_23;
        }
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (v13 & 1) != 0 )
        {
          v15 = v13 | 0x8000000000000000uLL;
        }
      }
      v12 = a2;
      *(_QWORD *)a2 = v15;
LABEL_23:
      v10 = v45;
      HIDWORD(v52) = (__int64)(v12 - v48) >> 3;
      LODWORD(v52) = v9;
      v14 = _InterlockedCompareExchange64(v45, v52, v14);
      v46 = v14;
      if ( v14 == v47 )
      {
        v19 = v4;
        goto LABEL_25;
      }
    }
    if ( !(_DWORD)v14 )
      goto LABEL_12;
    _InterlockedOr(v44, 0);
    if ( MiTbFlushTimeStampMayNeedFlush(v14, KiTbFlushTimeStamp, -1) )
      break;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      if ( CurrentIrql == 2 )
        LODWORD(v31) = 4;
      else
        v31 = (-1LL << (CurrentIrql + 1)) & 4;
      SchedulerAssist[5] |= v31;
    }
    v14 = _InterlockedCompareExchange64(v10, 0LL, v14);
    v46 = v14;
    if ( v14 == v47 )
    {
      if ( v5 == 2 )
        v29 = MiReleaseLargePdeMappings(a1, &v47, 0LL);
      else
        v29 = MiReleaseSmallPteMappings(a1, v5, HIDWORD(v47), 0LL);
      _InterlockedExchangeAdd((volatile signed __int32 *)(v8 + 64), -v29);
      v10 = v45;
      v14 = 0LL;
      v46 = 0LL;
    }
    if ( (_DWORD)KiIrqlFlags )
    {
      v39 = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v39 <= 0xFu && CurrentIrql <= 0xFu && v39 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v41 = CurrentPrcb->SchedulerAssist;
        v42 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v43 = (v42 & v41[5]) == 0;
        v41[5] &= v42;
        if ( v43 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        v10 = v45;
      }
    }
    __writecr8(CurrentIrql);
    v12 = a2;
  }
  HIDWORD(v52) = (v27 - v26) >> 3;
  v32 = v49 | MiSwizzleInvalidPte(0LL) & 0xFFFFFFFFFFFF0FFFuLL;
  if ( !MiPteInShadowRange(v33) )
    goto LABEL_52;
  if ( (unsigned int)MiPteHasShadow(v35, v34, v36) )
  {
    if ( !HIBYTE(word_140C66DFC) && (v32 & 1) != 0 )
      v32 |= 0x8000000000000000uLL;
    *(_QWORD *)a2 = v32;
    MiWritePteShadow(a2, v32);
  }
  else
  {
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 && (v32 & 1) != 0 )
      v32 |= 0x8000000000000000uLL;
LABEL_52:
    *(_QWORD *)a2 = v32;
  }
  if ( v5 == 2 )
    v37 = MiReleaseLargePdeMappings(a1, &v52, 0LL);
  else
    v37 = MiReleaseSmallPteMappings(a1, v5, HIDWORD(v52), 0LL);
  v19 = -v37;
LABEL_25:
  _InterlockedExchangeAdd((volatile signed __int32 *)(v8 + 64), v19);
  return 1LL;
}
