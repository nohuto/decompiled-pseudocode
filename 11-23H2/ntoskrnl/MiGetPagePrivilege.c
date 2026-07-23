/*
 * XREFs of MiGetPagePrivilege @ 0x140282FF0
 * Callers:
 *     MiMarkPfnVerified @ 0x140219BD0 (MiMarkPfnVerified.c)
 *     MiCompleteProtoPteFault @ 0x140268E70 (MiCompleteProtoPteFault.c)
 *     MiAllocateWsle @ 0x14026BA60 (MiAllocateWsle.c)
 *     MiInsertPageInList @ 0x14026EE90 (MiInsertPageInList.c)
 *     MiFlushSectionInternal @ 0x1402759E0 (MiFlushSectionInternal.c)
 *     MiRevertValidPte @ 0x140278D10 (MiRevertValidPte.c)
 *     MiPageMightBeZero @ 0x140281A90 (MiPageMightBeZero.c)
 *     MiCombineCandidate @ 0x140282240 (MiCombineCandidate.c)
 *     MiLockCode @ 0x1402825C0 (MiLockCode.c)
 *     MiCopyPage @ 0x1402840A0 (MiCopyPage.c)
 *     MiSetSystemCodeProtection @ 0x1402845A0 (MiSetSystemCodeProtection.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402D3900 (MiInsertPageInFreeOrZeroedList.c)
 *     MiActivePageTradeable @ 0x1402EB940 (MiActivePageTradeable.c)
 *     MiClearPfnImageVerified @ 0x140335648 (MiClearPfnImageVerified.c)
 *     MiDeletePerSessionProtos @ 0x14033EE54 (MiDeletePerSessionProtos.c)
 *     MiReferencePageForModifiedWrite @ 0x140349F80 (MiReferencePageForModifiedWrite.c)
 *     MiDbgWriteCheck @ 0x14038CC04 (MiDbgWriteCheck.c)
 *     MiStealPage @ 0x1403BC5BC (MiStealPage.c)
 *     MiProtectDriverSectionPte @ 0x14061A9F0 (MiProtectDriverSectionPte.c)
 *     MiShouldUseExtendedStandby @ 0x140652290 (MiShouldUseExtendedStandby.c)
 *     MmChangeImageProtection @ 0x140724040 (MmChangeImageProtection.c)
 * Callees:
 *     MiGetTopLevelPfn @ 0x140215FA0 (MiGetTopLevelPfn.c)
 *     MiLockPageInline @ 0x1402EF910 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiGetPagePrivilege(ULONG_PTR BugCheckParameter2, int a2, unsigned __int64 *a3)
{
  unsigned __int64 *v3; // rdi
  __int64 v6; // rdx
  __int64 result; // rax
  __int64 v8; // rcx
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // r11
  __int64 v11; // r8
  __int64 v12; // r8
  __int64 v13; // r10
  unsigned __int64 v14; // rdx
  int v15; // r9d
  unsigned __int64 v16; // r11
  unsigned int v17; // r14d
  unsigned __int64 v18; // rbp
  unsigned __int8 v19; // r15
  __int64 TopLevelPfn; // rax
  unsigned __int64 v21; // r13
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v25; // eax
  bool v26; // zf

  v3 = a3;
  if ( (MiFlags & 0x1000) == 0 )
    return 0LL;
  v6 = *(_QWORD *)(BugCheckParameter2 + 40);
  if ( (((unsigned __int64)v6 >> 60) & 7) != 3 || (v6 & 0x20000000000000LL) != 0 )
    return 0LL;
  if ( a3 && (MiFlags & 0x4000) == 0 )
    v3 = 0LL;
  v8 = *(_QWORD *)(BugCheckParameter2 + 8);
  v9 = *(_QWORD *)(BugCheckParameter2 + 8) | 0x8000000000000000uLL;
  if ( v6 >= 0 )
  {
    if ( (MiFlags & 0x20000) != 0 )
    {
      v17 = 17;
      if ( (unsigned __int64)((__int64)(v9 << 25) >> 16) < 0xFFFF800000000000uLL )
        return 2;
    }
    else if ( v8 )
    {
      v18 = (__int64)(v9 << 25) >> 16;
      if ( v18 < 0xFFFF800000000000uLL )
      {
        v17 = 20;
        if ( v3 )
        {
          if ( a2 )
            v19 = 17;
          else
            v19 = MiLockPageInline(BugCheckParameter2);
          TopLevelPfn = MiGetTopLevelPfn(BugCheckParameter2);
          v21 = (*(_QWORD *)TopLevelPfn >> 13) & 0x7FFFFFFFFFF0LL | 0xFFFF800000000000uLL;
          _InterlockedAnd64((volatile signed __int64 *)(TopLevelPfn + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( !a2 )
          {
            _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( (_DWORD)KiIrqlFlags )
            {
              CurrentIrql = KeGetCurrentIrql();
              if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v19 <= 0xFu && CurrentIrql >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                SchedulerAssist = CurrentPrcb->SchedulerAssist;
                v25 = ~(unsigned __int16)(-1LL << (v19 + 1));
                v26 = (v25 & SchedulerAssist[5]) == 0;
                SchedulerAssist[5] &= v25;
                if ( v26 )
                  KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              }
            }
            __writecr8(v19);
          }
          if ( *(_QWORD *)(v21 + 992) )
          {
            *v3 = v18;
            v3[1] = *(_QWORD *)(v21 + 992);
          }
          else
          {
            return 0;
          }
        }
      }
      else
      {
        v17 = 1;
        if ( (((unsigned __int8)*(_DWORD *)(BugCheckParameter2 + 16) >> 5) & 2) == 0 )
          v17 = 64;
        if ( v3 )
        {
          *v3 = v18;
          v3[1] = 0LL;
        }
      }
    }
    else
    {
      v17 = 4;
      if ( v3 )
      {
        *v3 = 0LL;
        v3[1] = 0LL;
      }
    }
    return v17;
  }
  else
  {
    v10 = *(_QWORD *)(BugCheckParameter2 + 16);
    if ( (v10 & 0x400) != 0 )
    {
      v11 = *(_QWORD *)(BugCheckParameter2 + 16);
      if ( qword_140C65B40 && (v10 & 0x10) == 0 )
        v11 = ~qword_140C65B40 & v10;
      v12 = v11 >> 16;
      v13 = *(_QWORD *)v12;
      if ( (*(_DWORD *)(*(_QWORD *)v12 + 56LL) & 0x20) == 0 )
        return 2LL;
      v14 = *(_QWORD *)(v12 + 8);
      if ( v9 >= v14 && v9 < v14 + 8LL * *(unsigned int *)(v12 + 44) )
      {
        v15 = *(_DWORD *)(v13 + 92);
        if ( (v15 & 0xC0000) != 0 && (v15 & 0x20000) != 0 && v12 != v13 + 128 )
          return 40LL;
        v16 = v10 >> 5;
        if ( (MiFlags & 0x20000) != 0 )
        {
          result = 2LL;
          if ( (v15 & 0xC0000) == 0 )
            goto LABEL_21;
          result = 10LL;
          if ( (v16 & 2) == 0 )
            goto LABEL_21;
LABEL_23:
          result = 11LL;
LABEL_21:
          if ( v3 )
          {
            v3[1] = *(_QWORD *)(*(_QWORD *)(v13 + 96) + 56LL);
            *v3 = (__int64)(v9 - *(_QWORD *)(v13 + 136)) >> 3 << 12;
          }
          return result;
        }
        if ( (v15 & 0xC0000) != 0 )
        {
          result = 8LL;
          if ( (v16 & 2) == 0 )
            goto LABEL_21;
          goto LABEL_23;
        }
      }
      return 0LL;
    }
    result = 16 * (((unsigned int)MiFlags >> 17) & 1) + 3;
    if ( v3 )
    {
      *v3 = 0LL;
      v3[1] = 0LL;
    }
  }
  return result;
}
