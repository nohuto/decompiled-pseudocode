/*
 * XREFs of IopMcRemoveMdlPagesFromTable @ 0x14055F2C0
 * Callers:
 *     IopMcTryUnlockMdl @ 0x14055F4AC (IopMcTryUnlockMdl.c)
 *     IopMcCreateBufferEntryMdl @ 0x1409516F0 (IopMcCreateBufferEntryMdl.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140242E20 (KeYieldProcessorEx.c)
 *     ExAcquireSpinLockExclusive @ 0x14024D340 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402893A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlAvlRemoveNode @ 0x14028AE30 (RtlAvlRemoveNode.c)
 *     IopMcShouldYield @ 0x14055F470 (IopMcShouldYield.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 */

_DWORD *__fastcall IopMcRemoveMdlPagesFromTable(__int64 a1, __int64 a2)
{
  int v2; // r8d
  __int64 v4; // rdi
  unsigned __int64 v5; // rdi
  unsigned int v6; // esi
  __int64 v7; // rdx
  KIRQL v8; // bl
  unsigned __int64 *v9; // rbp
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v13; // eax
  bool v14; // zf
  unsigned __int8 v15; // al
  struct _KPRCB *v16; // r9
  _DWORD *v17; // r8
  int v18; // eax
  _DWORD *result; // rax
  __int64 v20; // rcx
  int v21; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(_DWORD *)(a2 + 44);
  v4 = *(unsigned int *)(a2 + 40);
  v21 = 0;
  v5 = ((unsigned __int64)(v2 & 0xFFF) + v4 + 4095) >> 12;
  v6 = 0;
  v8 = ExAcquireSpinLockExclusive(&dword_140C5D764);
  if ( (_DWORD)v5 )
  {
    v9 = (unsigned __int64 *)(a1 + 96);
    do
    {
      LOBYTE(v7) = v8;
      if ( (unsigned __int8)IopMcShouldYield(v6, v7) )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C5D764);
        if ( (_DWORD)KiIrqlFlags )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v8 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v13 = ~(unsigned __int16)(-1LL << (v8 + 1));
            v14 = (v13 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v13;
            if ( v14 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        __writecr8(v8);
        KeYieldProcessorEx(&v21);
        v8 = ExAcquireSpinLockExclusive(&dword_140C5D764);
      }
      RtlAvlRemoveNode((unsigned __int64 *)&qword_140C5D768, v9);
      ++v6;
      v9 += 4;
    }
    while ( v6 < (unsigned int)v5 );
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C5D764);
  if ( (_DWORD)KiIrqlFlags )
  {
    v15 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v15 <= 0xFu && v8 <= 0xFu && v15 >= 2u )
    {
      v16 = KeGetCurrentPrcb();
      v17 = v16->SchedulerAssist;
      v18 = ~(unsigned __int16)(-1LL << (v8 + 1));
      v14 = (v18 & v17[5]) == 0;
      v17[5] &= v18;
      if ( v14 )
        KiRemoveSystemWorkPriorityKick(v16);
    }
  }
  result = (_DWORD *)v8;
  __writecr8(v8);
  if ( (_DWORD)v5 )
  {
    result = (_DWORD *)(a1 + 120);
    v20 = (unsigned int)v5;
    do
    {
      *result = -2;
      result += 8;
      --v20;
    }
    while ( v20 );
  }
  *(_QWORD *)(a1 + 88) = 0LL;
  return result;
}
