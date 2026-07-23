/*
 * XREFs of MiComputeCombineHash @ 0x140281B30
 * Callers:
 *     MiCombinePte @ 0x140653300 (MiCombinePte.c)
 *     MiCombineAllPhysicalMemory @ 0x1406F9DC0 (MiCombineAllPhysicalMemory.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140242E20 (KeYieldProcessorEx.c)
 *     MiPteInShadowRange @ 0x140271240 (MiPteInShadowRange.c)
 *     MiCombineCandidate @ 0x140281E90 (MiCombineCandidate.c)
 *     MiPerformCombineScan @ 0x140282DA0 (MiPerformCombineScan.c)
 *     MiMakeValidPte @ 0x1402CF2B0 (MiMakeValidPte.c)
 *     MiGetUltraMapping @ 0x1402D1A10 (MiGetUltraMapping.c)
 *     MiWritePteShadow @ 0x140356D4C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140356DAC (MiPteHasShadow.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiComputeCombineHash(__int64 *a1, _QWORD *a2)
{
  __int64 v2; // rbp
  _QWORD *v3; // rsi
  unsigned __int64 UltraMapping; // rax
  unsigned int v7; // r12d
  __int64 *v8; // r14
  __int64 v9; // rbx
  __int64 v10; // rdi
  unsigned __int64 v11; // rbx
  __int64 CurrentIrql; // rcx
  __int64 v13; // r9
  char v14; // al
  __int64 v15; // r8
  __int64 ValidPte; // rax
  __int64 v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  unsigned __int8 v21; // bl
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // rdi
  int v25; // r12d
  unsigned __int8 v26; // r15
  unsigned __int64 *v27; // r14
  unsigned __int64 v28; // rbx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  _DWORD *SchedulerAssist; // r8
  _DWORD *v34; // r8
  __int64 v35; // r9
  unsigned __int8 v36; // bl
  struct _KPRCB *v37; // r10
  _DWORD *v38; // r9
  int v39; // eax
  bool v40; // zf
  unsigned __int8 v41; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v43; // r8
  int v44; // eax
  unsigned __int8 v45; // al
  _DWORD *v46; // r8
  int v47; // eax
  __int64 v48; // r11
  unsigned __int8 v49; // cl
  unsigned __int8 v50; // cl
  struct _KPRCB *v51; // r9
  _DWORD *v52; // r8
  int v53; // eax
  int v54; // [rsp+60h] [rbp+8h] BYREF
  __int64 v55; // [rsp+68h] [rbp+10h] BYREF
  __int64 v56; // [rsp+70h] [rbp+18h]

  v2 = *a1;
  v3 = a1 + 2;
  UltraMapping = MiGetUltraMapping(a1 + 32, 3LL, 1LL);
  v7 = *((_DWORD *)a1 + 35);
  v8 = (__int64 *)(((UltraMapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v9 = 48LL * a2[2];
  v10 = v9 - 0x220000000000LL;
  v3[9] = v8;
  v11 = 0xAAAAAAAAAAAAAAABuLL * (v9 >> 4);
  v3[8] = v10;
  CurrentIrql = KeGetCurrentIrql();
  v55 = CurrentIrql;
  __writecr8(2uLL);
  LODWORD(v13) = 4;
  v56 = 4LL;
  if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( (_BYTE)CurrentIrql != 2 )
      v13 = (-1LL << ((unsigned __int8)CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v13;
  }
  v54 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v54);
    while ( *(__int64 *)(v10 + 24) < 0 );
  }
  if ( !(unsigned int)MiCombineCandidate(v2, v7, v10) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v36 = v55;
    if ( !(_DWORD)KiIrqlFlags )
      goto LABEL_33;
    v41 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) == 0 )
      goto LABEL_33;
    if ( v41 > 0xFu )
      goto LABEL_33;
    if ( (unsigned __int8)v55 > 0xFu )
      goto LABEL_33;
    if ( v41 < 2u )
      goto LABEL_33;
    CurrentPrcb = KeGetCurrentPrcb();
    v43 = CurrentPrcb->SchedulerAssist;
    v44 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v55 + 1));
    v40 = (v44 & v43[5]) == 0;
    v43[5] &= v44;
    if ( !v40 )
      goto LABEL_33;
LABEL_52:
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
LABEL_33:
    __writecr8(v36);
    return 0LL;
  }
  v14 = *(_BYTE *)(v10 + 34) >> 6;
  if ( v14 == 3 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v36 = v55;
    if ( !(_DWORD)KiIrqlFlags )
      goto LABEL_33;
    v45 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) == 0 )
      goto LABEL_33;
    if ( v45 > 0xFu )
      goto LABEL_33;
    if ( (unsigned __int8)v55 > 0xFu )
      goto LABEL_33;
    if ( v45 < 2u )
      goto LABEL_33;
    CurrentPrcb = KeGetCurrentPrcb();
    v46 = CurrentPrcb->SchedulerAssist;
    v47 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v55 + 1));
    v40 = (v47 & v46[5]) == 0;
    v46[5] &= v47;
    if ( !v40 )
      goto LABEL_33;
    goto LABEL_52;
  }
  v15 = 1LL;
  if ( v14 )
  {
    if ( v14 == 2 )
      v15 = 25LL;
  }
  else
  {
    v15 = 9LL;
  }
  LODWORD(v15) = v15 | 0x20000000;
  ValidPte = MiMakeValidPte(v8, v11, v15);
  v3[7] = v8;
  v17 = ValidPte;
  v3[6] = v10;
  if ( !MiPteInShadowRange((unsigned __int64)v8) )
    goto LABEL_9;
  if ( !(unsigned int)MiPteHasShadow(v19, v18, v20) )
  {
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 && (v17 & 1) != 0 )
      v17 |= v48;
LABEL_9:
    *v8 = v17;
    goto LABEL_10;
  }
  if ( !HIBYTE(word_140C66DFC) && (v17 & 1) != 0 )
    v17 |= v48;
  *v8 = v17;
  MiWritePteShadow(v8, v17);
LABEL_10:
  _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v21 = v55;
  if ( (_DWORD)KiIrqlFlags )
  {
    v49 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v49 <= 0xFu && (unsigned __int8)v55 <= 0xFu && v49 >= 2u )
    {
      v37 = KeGetCurrentPrcb();
      v38 = v37->SchedulerAssist;
      v39 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v55 + 1));
      v40 = (v39 & v38[5]) == 0;
      v20 = (unsigned int)v39 & v38[5];
      v38[5] = v20;
      if ( v40 )
        KiRemoveSystemWorkPriorityKick(v37);
    }
  }
  __writecr8(v21);
  v22 = a1[13];
  if ( (*(_BYTE *)(v10 + 34) & 7) == 6 )
    ++*(_QWORD *)(v22 + 16);
  else
    ++*(_QWORD *)(v22 + 24);
  v23 = MiPerformCombineScan(v22, v3, v20, a2);
  v24 = v3[6];
  v25 = v23;
  v26 = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && v26 <= 0xFu )
  {
    v34 = KeGetCurrentPrcb()->SchedulerAssist;
    if ( v26 == 2 )
      LODWORD(v35) = v56;
    else
      v35 = (-1LL << (v26 + 1)) & 4;
    v34[5] |= v35;
  }
  LODWORD(v55) = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v24 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v55);
    while ( *(__int64 *)(v24 + 24) < 0 );
  }
  v27 = (unsigned __int64 *)v3[7];
  v3[6] = 0LL;
  v28 = ZeroPte;
  if ( !MiPteInShadowRange((unsigned __int64)v27) )
    goto LABEL_16;
  if ( !(unsigned int)MiPteHasShadow(v30, v29, v31) )
  {
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
      && (ZeroPte & 1) != 0 )
    {
      v28 = ZeroPte | 0x8000000000000000uLL;
    }
LABEL_16:
    *v27 = v28;
    goto LABEL_17;
  }
  if ( !HIBYTE(word_140C66DFC) && (ZeroPte & 1) != 0 )
    v28 = ZeroPte | 0x8000000000000000uLL;
  *v27 = v28;
  MiWritePteShadow(v27, v28);
LABEL_17:
  v3[7] = 0LL;
  _InterlockedAnd64((volatile signed __int64 *)(v24 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( (_DWORD)KiIrqlFlags )
  {
    v50 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v50 <= 0xFu && v26 <= 0xFu && v50 >= 2u )
    {
      v51 = KeGetCurrentPrcb();
      v52 = v51->SchedulerAssist;
      v53 = ~(unsigned __int16)(-1LL << (v26 + 1));
      v40 = (v53 & v52[5]) == 0;
      v52[5] &= v53;
      if ( v40 )
        KiRemoveSystemWorkPriorityKick(v51);
    }
  }
  __writecr8(v26);
  if ( v25 )
  {
    *a2 = 0LL;
    return 1LL;
  }
  return 0LL;
}
