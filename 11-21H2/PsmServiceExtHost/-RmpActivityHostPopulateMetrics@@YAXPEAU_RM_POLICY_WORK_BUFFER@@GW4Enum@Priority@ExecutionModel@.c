/*
 * XREFs of ?RmpActivityHostPopulateMetrics@@YAXPEAU_RM_POLICY_WORK_BUFFER@@GW4Enum@Priority@ExecutionModel@@@Z @ 0x1800871F0
 * Callers:
 *     ?RmpPolicyPopulateActivityHostMetrics@@YAXPEAU_RM_PARTITION@@W4Enum@Priority@ExecutionModel@@PEAU_RM_POLICY_WORK_BUFFER@@GP6AEPEAU_RM_ACTIVITY_HOST@@PEAX@Z4@Z @ 0x18008D9B0 (-RmpPolicyPopulateActivityHostMetrics@@YAXPEAU_RM_PARTITION@@W4Enum@Priority@ExecutionModel@@PEA.c)
 * Callees:
 *     ?RmpActivityHostQueryCommit@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K11@Z @ 0x18002A1F0 (-RmpActivityHostQueryCommit@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K11@Z.c)
 *     ?RmpActivityHostQueryOfferedMemory@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K@Z @ 0x18002E49C (-RmpActivityHostQueryOfferedMemory@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K@Z.c)
 *     ?RmpSystemIsActivityHostTooLargeForSwap@@YAJPEAU_RM_ACTIVITY_HOST_METRICS@@KPEAK@Z @ 0x180038B20 (-RmpSystemIsActivityHostTooLargeForSwap@@YAJPEAU_RM_ACTIVITY_HOST_METRICS@@KPEAK@Z.c)
 *     ?RmpSystemQueryMemUtilMetricsForHosts@@YAJPEAU_RM_ACTIVITY_HOST_METRICS@@KG@Z @ 0x180038B68 (-RmpSystemQueryMemUtilMetricsForHosts@@YAJPEAU_RM_ACTIVITY_HOST_METRICS@@KG@Z.c)
 *     ?RmpActivityHostQueryEffectivePriority@@YAJPEAU_RM_ACTIVITY_HOST@@_KPEAW4Enum@Priority@ExecutionModel@@@Z @ 0x1800517E0 (-RmpActivityHostQueryEffectivePriority@@YAJPEAU_RM_ACTIVITY_HOST@@_KPEAW4Enum@Priority@Execution.c)
 *     ?RmpEmPriorityCompare@@YAJW4Enum@Priority@ExecutionModel@@0@Z @ 0x180083D1C (-RmpEmPriorityCompare@@YAJW4Enum@Priority@ExecutionModel@@0@Z.c)
 */

void __fastcall RmpActivityHostPopulateMetrics(__int64 a1, __int16 a2, int a3)
{
  int v4; // r12d
  __int16 v5; // r14
  struct _RM_ACTIVITY_HOST_METRICS *v6; // r15
  int v7; // r8d
  unsigned int v8; // esi
  unsigned int v9; // ebp
  bool v10; // dl
  char *v11; // rbx
  __int16 v12; // r13
  struct _RM_ACTIVITY_HOST *v13; // rcx
  int Commit; // eax
  unsigned __int64 v15; // rax
  __int64 v16; // r13
  unsigned int v17; // ebp
  char *v18; // rbx
  unsigned int v19; // [rsp+24h] [rbp-64h] BYREF
  struct _RM_ACTIVITY_HOST *v20; // [rsp+28h] [rbp-60h]
  __int64 v21; // [rsp+30h] [rbp-58h]
  bool v24; // [rsp+A8h] [rbp+20h]

  v4 = a3;
  v5 = a2;
  if ( *(_DWORD *)(a1 + 36) )
  {
    v6 = *(struct _RM_ACTIVITY_HOST_METRICS **)a1;
    LOWORD(v7) = 1;
    v8 = 0;
    v9 = 0;
    v10 = (a2 & 2) != 0;
    v24 = v10;
    v21 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 48LL) + 48LL);
    do
    {
      v11 = (char *)v6 + 64 * (unsigned __int64)v9;
      v12 = *((_WORD *)v11 + 31);
      v13 = (struct _RM_ACTIVITY_HOST *)*((_QWORD *)v11 + 6);
      v20 = v13;
      if ( !_bittest16(&v12, v7) && v10 )
      {
        Commit = RmpActivityHostQueryCommit(
                   v13,
                   (unsigned __int64 *)v11 + 1,
                   0LL,
                   (unsigned __int64 *)v6 + 8 * (unsigned __int64)v9);
        v13 = v20;
        if ( Commit >= 0 )
          *((_WORD *)v11 + 31) |= 2u;
      }
      if ( (v12 & 1) == 0 && (v5 & 1) != 0 )
      {
        v4 = a3;
        if ( (int)RmpActivityHostQueryEffectivePriority(
                    v13,
                    *(_QWORD *)v11,
                    (enum ExecutionModel::Priority::Enum *)(v11 + 56)) >= 0 )
          *((_WORD *)v11 + 31) |= 1u;
        else
          *((_DWORD *)v11 + 14) = 101;
      }
      if ( (v5 & 1) == 0 || (int)RmpEmPriorityCompare(*((_DWORD *)v11 + 14), v4) < 0 )
      {
        if ( (v12 & 0x40) == 0
          && (v5 & 0x40) != 0
          && (int)RmpActivityHostQueryOfferedMemory(v20, (unsigned __int64 *)v11 + 5) >= 0 )
        {
          *((_WORD *)v11 + 31) |= 0x40u;
        }
        if ( v9 != v8 )
        {
          v15 = (unsigned __int64)v8 << 6;
          *(_OWORD *)((char *)v6 + v15) = *(_OWORD *)v11;
          *(_OWORD *)((char *)v6 + v15 + 16) = *((_OWORD *)v11 + 1);
          *(_OWORD *)((char *)v6 + v15 + 32) = *((_OWORD *)v11 + 2);
          *(_OWORD *)((char *)v6 + v15 + 48) = *((_OWORD *)v11 + 3);
        }
        v7 = 1;
        ++v8;
      }
      v10 = v24;
      v9 += v7;
    }
    while ( v9 < *(_DWORD *)(a1 + 36) );
    v16 = v21;
    *(_DWORD *)(a1 + 36) = v8;
    if ( (v5 & 0x2C) != 0 )
    {
      RmpSystemQueryMemUtilMetricsForHosts(v6, v8, v5 & 0x2C);
      v8 = *(_DWORD *)(a1 + 36);
    }
    v17 = 0;
    if ( v8 )
    {
      do
      {
        v18 = (char *)v6 + 64 * (unsigned __int64)v17;
        if ( (v5 & 0x10) != 0
          && (v18[62] & 0x10) == 0
          && (v18[62] & 8) != 0
          && (int)RmpSystemIsActivityHostTooLargeForSwap(
                    (struct _RM_ACTIVITY_HOST_METRICS *)((char *)v6 + 64 * (unsigned __int64)v17),
                    *(unsigned int *)(v16 + 528),
                    &v19) >= 0 )
        {
          *((_WORD *)v18 + 31) |= 0x10u;
          if ( v19 )
            *((_WORD *)v18 + 30) |= 1u;
        }
        ++v17;
      }
      while ( v17 < *(_DWORD *)(a1 + 36) );
      v5 = a2;
    }
  }
  *(_WORD *)(a1 + 44) |= v5;
}
