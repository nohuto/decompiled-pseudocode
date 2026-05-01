/*
 * XREFs of ?RmpActivityHostPopulateMetrics@@YAXPEAU_RM_POLICY_WORK_BUFFER@@GW4Enum@Priority@ExecutionModel@@@Z @ 0x1800556F0
 * Callers:
 *     ?RmpPolicyPopulateActivityHostMetrics@@YAXPEAU_RM_PARTITION@@W4Enum@Priority@ExecutionModel@@PEAU_RM_POLICY_WORK_BUFFER@@GP6AEPEAU_RM_ACTIVITY_HOST@@PEAX@Z4@Z @ 0x180056252 (-RmpPolicyPopulateActivityHostMetrics@@YAXPEAU_RM_PARTITION@@W4Enum@Priority@ExecutionModel@@PEA.c)
 * Callees:
 *     ?RmpSystemIsActivityHostTooLargeForSwap@@YAJPEAU_RM_ACTIVITY_HOST_METRICS@@KPEAK@Z @ 0x18000D278 (-RmpSystemIsActivityHostTooLargeForSwap@@YAJPEAU_RM_ACTIVITY_HOST_METRICS@@KPEAK@Z.c)
 *     ?RmpSystemQueryMemUtilMetricsForHosts@@YAJPEAU_RM_ACTIVITY_HOST_METRICS@@KG@Z @ 0x18000D5B8 (-RmpSystemQueryMemUtilMetricsForHosts@@YAJPEAU_RM_ACTIVITY_HOST_METRICS@@KG@Z.c)
 *     ?RmpEmPriorityCompare@@YAJW4Enum@Priority@ExecutionModel@@0@Z @ 0x18000DEDC (-RmpEmPriorityCompare@@YAJW4Enum@Priority@ExecutionModel@@0@Z.c)
 *     ?RmpActivityHostQueryOfferedMemory@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K@Z @ 0x180011B0C (-RmpActivityHostQueryOfferedMemory@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K@Z.c)
 *     ?RmpActivityHostQueryCommit@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K11@Z @ 0x18003C590 (-RmpActivityHostQueryCommit@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K11@Z.c)
 *     ?HampHostComputeEffectivePriority@@YAEPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z @ 0x18004BC88 (-HampHostComputeEffectivePriority@@YAEPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z.c)
 *     ?HampHostAcquireLockShared@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18005511C (-HampHostAcquireLockShared@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostReleaseLockShared@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180055222 (-HampHostReleaseLockShared@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 */

void __fastcall RmpActivityHostPopulateMetrics(__int64 a1, __int16 a2, int a3)
{
  __int16 v4; // r14
  struct _RM_ACTIVITY_HOST_METRICS *v5; // r15
  int v6; // r8d
  unsigned int v7; // ebp
  unsigned int v8; // r12d
  __int16 v9; // ax
  __int16 v10; // r13
  char *v11; // rdi
  struct _RM_ACTIVITY_HOST *v12; // rcx
  struct _RM_HAM_ACTIVITY_HOST *v13; // rbx
  int Commit; // eax
  __int64 v15; // rdx
  int *v16; // rax
  unsigned __int64 v17; // rax
  __int64 v18; // r13
  unsigned int v19; // edi
  char *v20; // rbx
  unsigned int v21; // [rsp+20h] [rbp-68h] BYREF
  struct _RM_ACTIVITY_HOST *v22; // [rsp+28h] [rbp-60h]
  __int64 v23; // [rsp+30h] [rbp-58h]
  char v24; // [rsp+90h] [rbp+8h]
  __int16 v27; // [rsp+A8h] [rbp+20h]

  v4 = a2;
  if ( !*(_DWORD *)(a1 + 36) )
    goto LABEL_31;
  v5 = *(struct _RM_ACTIVITY_HOST_METRICS **)a1;
  LOBYTE(v6) = 1;
  v7 = 0;
  v8 = 0;
  v23 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 48LL) + 48LL);
  v9 = a2 & 2;
  v27 = v9;
  v10 = a2 & 1;
  do
  {
    v11 = (char *)v5 + 64 * (unsigned __int64)v8;
    v12 = (struct _RM_ACTIVITY_HOST *)*((_QWORD *)v11 + 6);
    LOWORD(v13) = *((_WORD *)v11 + 31);
    v22 = v12;
    v24 = (char)v13;
    if ( v9 )
    {
      if ( ((unsigned __int8)v13 & 2) == 0 )
      {
        Commit = RmpActivityHostQueryCommit(
                   v12,
                   (unsigned __int64 *)v11 + 1,
                   0LL,
                   (unsigned __int64 *)v5 + 8 * (unsigned __int64)v8);
        v12 = v22;
        LOBYTE(v6) = 1;
        if ( Commit >= 0 )
          *((_WORD *)v11 + 31) |= 2u;
      }
    }
    if ( v10 && ((unsigned __int8)v13 & (unsigned __int8)v6) == 0 )
    {
      v13 = (struct _RM_ACTIVITY_HOST *)((char *)v12 + 64);
      HampHostAcquireLockShared((struct _RM_ACTIVITY_HOST *)((char *)v12 + 64));
      *((_DWORD *)v11 + 14) = (unsigned __int8)HampHostComputeEffectivePriority(v13);
      HampHostReleaseLockShared(v13, v15);
      LOBYTE(v13) = v24;
      v16 = (int *)(v11 + 56);
      *((_WORD *)v11 + 31) |= 1u;
LABEL_11:
      if ( (int)RmpEmPriorityCompare(*v16, a3) >= 0 )
        goto LABEL_19;
      goto LABEL_12;
    }
    v16 = (int *)(v11 + 56);
    if ( v10 )
      goto LABEL_11;
LABEL_12:
    if ( (v4 & 0x40) != 0
      && ((unsigned __int8)v13 & 0x40) == 0
      && (int)RmpActivityHostQueryOfferedMemory(v22, (unsigned __int64 *)v11 + 5) >= 0 )
    {
      *((_WORD *)v11 + 31) |= 0x40u;
    }
    if ( v8 != v7 )
    {
      v17 = (unsigned __int64)v7 << 6;
      *(_OWORD *)((char *)v5 + v17) = *(_OWORD *)v11;
      *(_OWORD *)((char *)v5 + v17 + 16) = *((_OWORD *)v11 + 1);
      *(_OWORD *)((char *)v5 + v17 + 32) = *((_OWORD *)v11 + 2);
      *(_OWORD *)((char *)v5 + v17 + 48) = *((_OWORD *)v11 + 3);
    }
    v6 = 1;
    ++v7;
LABEL_19:
    v9 = v27;
    v8 += v6;
  }
  while ( v8 < *(_DWORD *)(a1 + 36) );
  v18 = v23;
  *(_DWORD *)(a1 + 36) = v7;
  if ( (v4 & 0x2C) != 0 )
    RmpSystemQueryMemUtilMetricsForHosts(v5, v7, v4 & 0x2C);
  v19 = 0;
  if ( *(_DWORD *)(a1 + 36) )
  {
    do
    {
      v20 = (char *)v5 + 64 * (unsigned __int64)v19;
      if ( (v4 & 0x10) != 0
        && (v20[62] & 0x10) == 0
        && (v20[62] & 8) != 0
        && (int)RmpSystemIsActivityHostTooLargeForSwap(
                  (struct _RM_ACTIVITY_HOST_METRICS *)((char *)v5 + 64 * (unsigned __int64)v19),
                  *(unsigned int *)(v18 + 528),
                  &v21) >= 0 )
      {
        *((_WORD *)v20 + 31) |= 0x10u;
        if ( v21 )
          *((_WORD *)v20 + 30) |= 1u;
      }
      ++v19;
    }
    while ( v19 < *(_DWORD *)(a1 + 36) );
    v4 = a2;
  }
LABEL_31:
  *(_WORD *)(a1 + 44) |= v4;
}
