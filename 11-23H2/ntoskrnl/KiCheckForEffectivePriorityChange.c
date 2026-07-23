/*
 * XREFs of KiCheckForEffectivePriorityChange @ 0x1402064E4
 * Callers:
 *     KiUpdateCpuTargetByWeight @ 0x14020572C (KiUpdateCpuTargetByWeight.c)
 *     KiUpdateCpuTargetByRate @ 0x1402058E8 (KiUpdateCpuTargetByRate.c)
 *     KeSetSchedulingGroupRankBias @ 0x140205AD8 (KeSetSchedulingGroupRankBias.c)
 *     KiComputeGroupSchedulingRank @ 0x140305AC8 (KiComputeGroupSchedulingRank.c)
 * Callees:
 *     KiIsThreadRankNonZero @ 0x140309270 (KiIsThreadRankNonZero.c)
 *     KiSetSchedulerAssistPriority @ 0x140410704 (KiSetSchedulerAssistPriority.c)
 */

void __fastcall KiCheckForEffectivePriorityChange(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  __int64 v5; // rdx
  char *v6; // r14
  char v7; // bl
  char v8; // al
  char v9; // bl
  __int64 v10; // rcx
  bool v11; // zf
  char v12; // al
  __int64 v13; // rdx

  v3 = *(_QWORD *)(a1 + 16);
  if ( !v3 )
    v3 = *(_QWORD *)(a1 + 8);
  v5 = *(_QWORD *)(v3 + 104);
  if ( v5 )
  {
    for ( v5 += *(unsigned int *)(a1 + 216); v5; v5 = *(_QWORD *)(v5 + 408) )
    {
      if ( v5 == a3 )
        goto LABEL_10;
    }
  }
  if ( v5 == a3 )
  {
LABEL_10:
    v6 = *(char **)(a1 + 56);
    v7 = *v6;
    if ( (*(_BYTE *)(v3 + 2) & 4) != 0 )
    {
      v11 = (unsigned __int8)KiIsThreadRankNonZero(v3, a1) == 0;
      v12 = 1;
      if ( v11 )
        v12 = *(_BYTE *)(v3 + 195);
      v8 = v7 ^ v12;
    }
    else
    {
      v8 = *(_BYTE *)(v3 + 195) ^ v7;
    }
    v9 = v8 & 0x7F ^ v7;
    *v6 = v9;
    v10 = *(_QWORD *)(a1 + 35000);
    if ( v10 )
    {
      if ( v3 == *(_QWORD *)(a1 + 24) )
        v13 = (unsigned int)KiVpThreadSystemWorkPriority;
      else
        v13 = v9 & 0x7F;
      KiSetSchedulerAssistPriority(v10, v13, 0LL);
    }
  }
}
