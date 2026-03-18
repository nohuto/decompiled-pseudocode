/*
 * XREFs of MiCopySinglePage @ 0x14026BE94
 * Callers:
 *     MmCopyMemory @ 0x14026BBB0 (MmCopyMemory.c)
 * Callees:
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     MiChangePageAttribute @ 0x140267E78 (MiChangePageAttribute.c)
 *     MiMakeProtectionPfnCompatible @ 0x14026C61C (MiMakeProtectionPfnCompatible.c)
 *     MiIsPageSecured @ 0x14026C720 (MiIsPageSecured.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1402BEDD0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMakeValidPte @ 0x1402CBD10 (MiMakeValidPte.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1402CC7C0 (MiMapPageInHyperSpaceWorker.c)
 *     MiLockPageInline @ 0x1402F2700 (MiLockPageInline.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     memmove @ 0x140435B40 (memmove.c)
 */

__int64 __fastcall MiCopySinglePage(void *a1, unsigned __int64 a2, __int64 a3, size_t a4, __int64 a5, char a6)
{
  __int64 v8; // rbx
  __int64 v9; // rsi
  unsigned __int8 v10; // di
  int v11; // r12d
  int ProtectionPfnCompatible; // eax
  __int64 ValidPte; // rbx
  int v14; // ebp
  __int64 v15; // rbx
  const void *v16; // rbx
  __int64 v17; // rdx
  unsigned __int64 v18; // rbx
  int v19; // ebp
  bool v21; // zf
  bool v22; // zf
  unsigned __int8 v23; // al
  struct _KPRCB *v24; // r10
  _DWORD *v25; // r8
  int v26; // eax
  unsigned __int8 v27; // al
  struct _KPRCB *v28; // r10
  _DWORD *v29; // r8
  int v30; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v34; // eax

  if ( a2 > qword_140C50840 )
    return 3221225793LL;
  v8 = 6 * a2;
  if ( !_bittest64((const signed __int64 *)(48 * a2 - 0x21FFFFFFFFD8LL), 0x36u) )
    return 3221225793LL;
  v9 = 48 * a2 - 0x220000000000LL;
  if ( (a6 & 1) != 0 )
    v10 = MiLockPageInline(48 * a2 - 0x220000000000LL);
  else
    v10 = 17;
  if ( a2 > qword_140C50840 || !_bittest64((const signed __int64 *)(8 * v8 - 0x21FFFFFFFFD8LL), 0x36u) )
  {
    if ( v10 != 17 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && v10 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v34 = ~(unsigned __int16)(-1LL << (v10 + 1));
            v21 = (v34 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v34;
            if ( v21 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(v10);
    }
    return 3221225793LL;
  }
  if ( *(char *)(v9 + 35) >= 0 && !(unsigned int)MiIsPageSecured(8 * v8 - 0x220000000000LL) )
  {
    v11 = *(unsigned __int8 *)(v9 + 34) >> 6;
    if ( v11 == 3 )
      MiChangePageAttribute(8 * v8 - 0x220000000000LL, 1u, 1);
    ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(1LL, 8 * v8 - 0x220000000000LL);
    if ( !a5 )
    {
      v15 = MiMapPageInHyperSpaceWorker(a2, 0LL, 2684354560LL);
      goto LABEL_16;
    }
    ValidPte = MiMakeValidPte(a5, a2, ProtectionPfnCompatible | 0x20000000u);
    v14 = 0;
    if ( !(unsigned int)MiPteInShadowRange(a5) )
    {
LABEL_13:
      *(_QWORD *)a5 = ValidPte;
      if ( v14 )
        MiWritePteShadow(a5, ValidPte);
      v15 = a5 << 25 >> 16;
LABEL_16:
      v16 = (const void *)(a3 + v15);
      memmove(a1, v16, a4);
      if ( !a5 )
      {
        LOBYTE(v17) = 17;
        MiUnmapPageInHyperSpaceWorker(v16, v17, 0x80000000LL);
LABEL_20:
        if ( v11 == 3 )
          MiChangePageAttribute(v9, 3u, 3);
        if ( v10 != 17 )
        {
          _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              v23 = KeGetCurrentIrql();
              if ( v23 <= 0xFu && v10 <= 0xFu && v23 >= 2u )
              {
                v24 = KeGetCurrentPrcb();
                v25 = v24->SchedulerAssist;
                v26 = ~(unsigned __int16)(-1LL << (v10 + 1));
                v21 = (v26 & v25[5]) == 0;
                v25[5] &= v26;
                if ( v21 )
                  KiRemoveSystemWorkPriorityKick(v24);
              }
            }
          }
          __writecr8(v10);
        }
        return 0LL;
      }
      v18 = ZeroPte;
      v19 = 0;
      if ( !(unsigned int)MiPteInShadowRange(a5) )
      {
LABEL_18:
        *(_QWORD *)a5 = v18;
        if ( v19 )
          MiWritePteShadow(a5, v18);
        goto LABEL_20;
      }
      if ( (unsigned int)MiPteHasShadow() )
      {
        v19 = 1;
        if ( HIBYTE(word_140C51864) )
          goto LABEL_18;
        v22 = (ZeroPte & 1) == 0;
      }
      else
      {
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
          goto LABEL_18;
        v22 = (ZeroPte & 1) == 0;
      }
      if ( !v22 )
        v18 = ZeroPte | 0x8000000000000000uLL;
      goto LABEL_18;
    }
    if ( (unsigned int)MiPteHasShadow() )
    {
      v14 = 1;
      if ( HIBYTE(word_140C51864) )
        goto LABEL_13;
      v21 = (ValidPte & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_13;
      v21 = (ValidPte & 1) == 0;
    }
    if ( !v21 )
      ValidPte |= 0x8000000000000000uLL;
    goto LABEL_13;
  }
  if ( v10 != 17 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v27 = KeGetCurrentIrql();
        if ( v27 <= 0xFu && v10 <= 0xFu && v27 >= 2u )
        {
          v28 = KeGetCurrentPrcb();
          v29 = v28->SchedulerAssist;
          v30 = ~(unsigned __int16)(-1LL << (v10 + 1));
          v21 = (v30 & v29[5]) == 0;
          v29[5] &= v30;
          if ( v21 )
            KiRemoveSystemWorkPriorityKick(v28);
        }
      }
    }
    __writecr8(v10);
  }
  return 3221227273LL;
}
