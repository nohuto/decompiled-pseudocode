/*
 * XREFs of MiProcessVaContiguityInformation @ 0x14065DF04
 * Callers:
 *     NtSetInformationVirtualMemory @ 0x1407A4210 (NtSetInformationVirtualMemory.c)
 * Callees:
 *     MiObtainReferencedVadEx @ 0x140274F40 (MiObtainReferencedVadEx.c)
 *     MiUnlockAndDereferenceVadShared @ 0x140275700 (MiUnlockAndDereferenceVadShared.c)
 *     MiConvertEntireLargePageToSmall @ 0x1402D2D60 (MiConvertEntireLargePageToSmall.c)
 *     MiGetLargePage @ 0x1402D7D10 (MiGetLargePage.c)
 *     MiReturnCommit @ 0x1402DC4E0 (MiReturnCommit.c)
 *     MiAcquireNonPagedResources @ 0x1402E45A4 (MiAcquireNonPagedResources.c)
 *     MiVadPagesTradable @ 0x1403520DC (MiVadPagesTradable.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     MiQueryVaPhysicalContiguity @ 0x14064949C (MiQueryVaPhysicalContiguity.c)
 *     MiMakeVaRangePhysicallyContiguous @ 0x14065DC10 (MiMakeVaRangePhysicallyContiguous.c)
 *     MiGetVadCacheAttribute @ 0x1406610F4 (MiGetVadCacheAttribute.c)
 *     MiVadSupportsPhysicalContiguityQuery @ 0x140A40144 (MiVadSupportsPhysicalContiguityQuery.c)
 */

__int64 __fastcall MiProcessVaContiguityInformation(unsigned __int64 a1, __int64 a2)
{
  __int64 v4; // r15
  unsigned __int64 v5; // r14
  _KPROCESS *Process; // rax
  int v7; // ebx
  bool i; // cf
  unsigned __int64 v9; // r8
  __int64 *v10; // rax
  unsigned int v11; // edi
  unsigned __int64 v12; // r13
  __int64 CurrentIrql; // rcx
  _DWORD *SchedulerAssist; // r9
  __int64 v15; // rdx
  __int64 LargePage; // rax
  __int64 v17; // r8
  unsigned __int8 v18; // r10
  unsigned __int8 v19; // al
  struct _KPRCB *CurrentPrcb; // r11
  _DWORD *v21; // r9
  int v22; // eax
  bool v23; // zf
  struct _KPRCB *v24; // r8
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v26; // eax
  __int64 v28; // [rsp+40h] [rbp-20h]
  unsigned __int64 v29; // [rsp+48h] [rbp-18h]
  __int64 v30; // [rsp+50h] [rbp-10h]
  unsigned __int64 v31; // [rsp+58h] [rbp-8h]
  unsigned __int64 v32; // [rsp+A8h] [rbp+48h]
  unsigned int VaRangePhysicallyContiguous; // [rsp+B0h] [rbp+50h] BYREF
  __int64 v34; // [rsp+B8h] [rbp+58h]

  VaRangePhysicallyContiguous = 0;
  v4 = 0LL;
  v5 = 512LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v7 = 0;
  v28 = (__int64)&Process[1].ActiveProcessors.StaticBitmap[26];
  v29 = *(_QWORD *)(qword_140C673C8 + 8LL * Process[1].IdealProcessor[25]);
  if ( (int)MiAcquireNonPagedResources(v29, 0x200uLL, 1024LL, 6u) < 0 )
    return 3221225626LL;
  v32 = a1 + 16 * a2;
  for ( i = a1 < v32; i; i = a1 < v32 )
  {
    if ( (*(_DWORD *)(a1 + 8) & 0x1FFFFF) != 0
      || (v9 = *(_QWORD *)a1, (*(_QWORD *)a1 & 0xFFFFFFFFFFE00000uLL) != *(_QWORD *)a1) )
    {
      VaRangePhysicallyContiguous = -1073741811;
      goto LABEL_46;
    }
    if ( v4 )
    {
      if ( v9 >= (*(unsigned int *)(v4 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v4 + 32) << 32)) << 12
        && v9 <= (((*(unsigned int *)(v4 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v4 + 33) << 32)) << 12) | 0xFFF) )
      {
        goto LABEL_16;
      }
      MiUnlockAndDereferenceVadShared((char *)v4);
    }
    v10 = MiObtainReferencedVadEx(*(_QWORD *)a1, 2, (int *)&VaRangePhysicallyContiguous);
    v4 = (__int64)v10;
    if ( !v10 )
      goto LABEL_48;
    if ( *(_QWORD *)(a1 + 8) + *(_QWORD *)a1 - 1LL > (((*((unsigned int *)v10 + 7) | ((unsigned __int64)*((unsigned __int8 *)v10 + 33) << 32)) << 12) | 0xFFF) )
    {
      VaRangePhysicallyContiguous = -1073741800;
      goto LABEL_47;
    }
    if ( !(unsigned int)MiVadSupportsPhysicalContiguityQuery(v10)
      || !(unsigned int)MiVadPagesTradable(v4)
      || (unsigned int)MiGetVadCacheAttribute(v4) != 1
      || (v7 = (*(_DWORD *)(v4 + 48) >> 12) & 0x7F) == 0 )
    {
      VaRangePhysicallyContiguous = -1073741637;
      goto LABEL_47;
    }
LABEL_16:
    if ( v7 )
      v11 = v7 - 1;
    else
      v11 = *(_DWORD *)(KiProcessorBlock[KeGetCurrentThread()->IdealProcessor] + 33364);
    v12 = *(_QWORD *)a1;
    v31 = *(_QWORD *)a1 + *(_QWORD *)(a1 + 8);
    if ( *(_QWORD *)a1 < v31 )
    {
      do
      {
        if ( !(unsigned int)MiQueryVaPhysicalContiguity(v28, v12, 1, 1) )
        {
          CurrentIrql = KeGetCurrentIrql();
          v34 = CurrentIrql;
          __writecr8(2uLL);
          if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
          {
            SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
            if ( (_BYTE)CurrentIrql == 2 )
              LODWORD(v15) = 4;
            else
              v15 = (-1LL << ((unsigned __int8)CurrentIrql + 1)) & 4;
            SchedulerAssist[5] |= v15;
          }
          LargePage = MiGetLargePage(v29, v12, 1u, v11, 1u, 4, 0LL);
          v30 = LargePage;
          if ( LargePage )
            MiConvertEntireLargePageToSmall(LargePage, 1, 2, 1, 0LL, 0LL, 0LL);
          v18 = v34;
          if ( (_DWORD)KiIrqlFlags )
          {
            v19 = KeGetCurrentIrql();
            if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v19 <= 0xFu && (unsigned __int8)v34 <= 0xFu && v19 >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v21 = CurrentPrcb->SchedulerAssist;
              v22 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v34 + 1));
              v23 = (v22 & v21[5]) == 0;
              v17 = (unsigned int)v22 & v21[5];
              v21[5] = v17;
              if ( v23 )
              {
                KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
                v18 = v34;
              }
            }
          }
          __writecr8(v18);
          if ( !v30 )
          {
            VaRangePhysicallyContiguous = -1073741801;
            goto LABEL_46;
          }
          VaRangePhysicallyContiguous = MiMakeVaRangePhysicallyContiguous(v28, v12, v17, v30);
        }
        v12 += 0x200000LL;
      }
      while ( v12 < v31 );
    }
    a1 += 16LL;
  }
  VaRangePhysicallyContiguous = 0;
LABEL_46:
  if ( !v4 )
    goto LABEL_48;
LABEL_47:
  MiUnlockAndDereferenceVadShared((char *)v4);
LABEL_48:
  MiReturnCommit(v29, 512LL);
  if ( (unsigned __int16 *)v29 != MiSystemPartition
    || (v24 = KeGetCurrentPrcb(),
        CachedResidentAvailable = (int)v24->CachedResidentAvailable,
        (_DWORD)CachedResidentAvailable == -1) )
  {
LABEL_58:
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v29 + 17280), v5);
    return VaRangePhysicallyContiguous;
  }
  if ( (unsigned __int64)(CachedResidentAvailable + 512) > 0x100 )
  {
LABEL_54:
    if ( (int)CachedResidentAvailable > 192
      && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                              (volatile signed __int32 *)&v24->CachedResidentAvailable,
                                              192,
                                              CachedResidentAvailable) )
    {
      v5 = (int)CachedResidentAvailable - 192 + 512LL;
    }
    if ( !v5 )
      return VaRangePhysicallyContiguous;
    goto LABEL_58;
  }
  while ( 1 )
  {
    v26 = _InterlockedCompareExchange(
            (volatile signed __int32 *)&v24->CachedResidentAvailable,
            CachedResidentAvailable + 512,
            CachedResidentAvailable);
    v23 = (_DWORD)CachedResidentAvailable == v26;
    LODWORD(CachedResidentAvailable) = v26;
    if ( v23 )
      return VaRangePhysicallyContiguous;
    if ( v26 == -1 || (unsigned __int64)(v26 + 512LL) > 0x100 )
      goto LABEL_54;
  }
}
