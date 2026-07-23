/*
 * XREFs of VmpFaultEntryInsert @ 0x1404661D8
 * Callers:
 *     VmpAccessFaultBatch @ 0x140465EE6 (VmpAccessFaultBatch.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x14024CCA0 (RtlRbInsertNodeEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402893A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14028A810 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall VmpFaultEntryInsert(__int64 a1, _RTL_BALANCED_NODE *a2, unsigned int a3)
{
  _RTL_BALANCED_NODE *v3; // rsi
  unsigned __int64 v5; // r15
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9
  __int64 v8; // rdx
  volatile LONG *v9; // rbp
  __int64 v10; // rdi
  unsigned __int64 v11; // rdx
  BOOLEAN v12; // r8
  unsigned __int64 v13; // rax
  unsigned __int8 v14; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v16; // r8
  int v17; // eax
  bool v18; // zf
  __int64 result; // rax

  v3 = a2;
  v5 = (unsigned __int64)&a2[2 * a3];
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 15 )
      LODWORD(v8) = 0x8000;
    else
      v8 = (-1LL << (CurrentIrql + 1)) & 0xFFFC;
    SchedulerAssist[5] |= v8;
  }
  v9 = (volatile LONG *)(a1 + 64);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  if ( (unsigned __int64)v3 < v5 )
  {
    v10 = a1 + 48;
    do
    {
      v11 = *(_QWORD *)v10;
      if ( (*(_BYTE *)(v10 + 8) & 1) != 0 && v11 )
        v11 ^= v10;
      v12 = 0;
      if ( v11 )
      {
        while ( 1 )
        {
          if ( ((unsigned __int64)v3[1].Children[0] & 0xFFFFFFFFFFFFFLL) >= (*(_QWORD *)(v11 + 24) & 0xFFFFFFFFFFFFFuLL) )
          {
            v13 = *(_QWORD *)(v11 + 8);
            if ( (*(_BYTE *)(v10 + 8) & 1) != 0 )
            {
              if ( !v13 )
                goto LABEL_25;
              v13 ^= v11;
            }
            if ( !v13 )
            {
LABEL_25:
              v12 = 1;
              break;
            }
          }
          else
          {
            v13 = *(_QWORD *)v11;
            if ( (*(_BYTE *)(v10 + 8) & 1) != 0 )
            {
              if ( !v13 )
                break;
              v13 ^= v11;
            }
            if ( !v13 )
              break;
          }
          v11 = v13;
        }
      }
      RtlRbInsertNodeEx((PRTL_RB_TREE)v10, (PRTL_BALANCED_NODE)v11, v12, v3);
      v3 += 2;
    }
    while ( (unsigned __int64)v3 < v5 );
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(v9);
  if ( (_DWORD)KiIrqlFlags )
  {
    v14 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v14 <= 0xFu && CurrentIrql <= 0xFu && v14 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v16 = CurrentPrcb->SchedulerAssist;
      v17 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v18 = (v17 & v16[5]) == 0;
      v16[5] &= v17;
      if ( v18 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
