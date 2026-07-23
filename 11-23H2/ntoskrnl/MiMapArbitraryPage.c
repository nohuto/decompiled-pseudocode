/*
 * XREFs of MiMapArbitraryPage @ 0x14035A13C
 * Callers:
 *     MiConvertStandbyToProto @ 0x14035A020 (MiConvertStandbyToProto.c)
 * Callees:
 *     MiMakeProtectionPfnCompatible @ 0x140217E64 (MiMakeProtectionPfnCompatible.c)
 *     MiPteInShadowRange @ 0x1402715F0 (MiPteInShadowRange.c)
 *     MiCombineCandidate @ 0x140282240 (MiCombineCandidate.c)
 *     MiMakeValidPte @ 0x1402CF540 (MiMakeValidPte.c)
 *     MiLockPageInline @ 0x1402EF910 (MiLockPageInline.c)
 *     MiWritePteShadow @ 0x1403574EC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14035754C (MiPteHasShadow.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiMapArbitraryPage(_QWORD *a1, _QWORD *a2, char a3, int a4, int a5)
{
  __int64 v5; // rsi
  __int64 *v7; // r14
  unsigned __int64 v11; // rbp
  int v12; // eax
  unsigned int v13; // edi
  unsigned __int8 v14; // al
  int ProtectionPfnCompatible; // eax
  unsigned __int64 ValidPte; // rax
  __int64 v17; // rbx
  int v18; // r15d
  __int64 v19; // r8
  unsigned __int8 v21; // al
  struct _KPRCB *v22; // r10
  _DWORD *v23; // r8
  int v24; // eax
  bool v25; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v29; // eax

  v5 = a2[8];
  v7 = (__int64 *)a2[9];
  v11 = (unsigned __int8)MiLockPageInline(v5);
  v12 = MiCombineCandidate(a1, a3, (_OWORD *)v5);
  v13 = 0;
  if ( a4 )
  {
    if ( v12 != a4 )
      goto LABEL_14;
  }
  else if ( !v12 )
  {
    goto LABEL_14;
  }
  if ( !a5 || (v14 = *(_BYTE *)(v5 + 34) & 7, v14 >= 2u) && v14 <= 3u )
  {
    if ( (*(_BYTE *)(v5 + 34) & 0xC0) != 0xC0 )
    {
      ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(1, v5);
      ValidPte = MiMakeValidPte(
                   (unsigned __int64)v7,
                   0xAAAAAAAAAAAAAAABuLL * ((v5 + 0x220000000000LL) >> 4),
                   ProtectionPfnCompatible | 0x20000000u);
      a2[7] = v7;
      v17 = ValidPte;
      a2[6] = v5;
      v18 = 0;
      if ( !MiPteInShadowRange((unsigned __int64)v7) )
      {
LABEL_8:
        *v7 = v17;
        if ( v18 )
          MiWritePteShadow((__int64)v7, v17, v19);
        _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( (_DWORD)KiIrqlFlags )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
            && CurrentIrql <= 0xFu
            && (unsigned __int8)v11 <= 0xFu
            && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v29 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
            v25 = (v29 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v29;
            if ( v25 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        v13 = 1;
        goto LABEL_12;
      }
      if ( MiPteHasShadow() )
      {
        v18 = 1;
        if ( HIBYTE(word_140C66CFC) )
          goto LABEL_8;
        v25 = (v17 & 1) == 0;
      }
      else
      {
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
          goto LABEL_8;
        v25 = (v17 & 1) == 0;
      }
      if ( !v25 )
        v17 |= 0x8000000000000000uLL;
      goto LABEL_8;
    }
  }
LABEL_14:
  _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( (_DWORD)KiIrqlFlags )
  {
    v21 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v21 <= 0xFu && (unsigned __int8)v11 <= 0xFu && v21 >= 2u )
    {
      v22 = KeGetCurrentPrcb();
      v23 = v22->SchedulerAssist;
      v24 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
      v25 = (v24 & v23[5]) == 0;
      v23[5] &= v24;
      if ( v25 )
        KiRemoveSystemWorkPriorityKick(v22);
    }
  }
LABEL_12:
  __writecr8(v11);
  return v13;
}
