/*
 * XREFs of ?RmpPolicyCompareActivityHostsByPriorityAndCommitEx@@YAHPEAU_RM_POLICY_RECLAIM_CONTEXT@@PEBU_RM_ACTIVITY_HOST_METRICS@@1@Z @ 0x1800560EC
 * Callers:
 *     ?RmpPolicyCompareActivityHostsByPriorityAndCommitQSortThunk@@YAHPEAXPEBX1@Z @ 0x1800562B0 (-RmpPolicyCompareActivityHostsByPriorityAndCommitQSortThunk@@YAHPEAXPEBX1@Z.c)
 *     ?RmpMemoryMonitorCompareActivityHostMetricsForLargeHostAndEmpty@@YAHPEAU_RM_ACTIVITY_HOST_METRICS@@0@Z @ 0x18008CCD4 (-RmpMemoryMonitorCompareActivityHostMetricsForLargeHostAndEmpty@@YAHPEAU_RM_ACTIVITY_HOST_METRIC.c)
 * Callees:
 *     ?RmpEmPriorityCompare@@YAJW4Enum@Priority@ExecutionModel@@0@Z @ 0x18000DEDC (-RmpEmPriorityCompare@@YAJW4Enum@Priority@ExecutionModel@@0@Z.c)
 *     ?RmpPolicyGetHostCommitForReclaim@@YA_KW4_RM_RECLAIM_POLICY@@PEBU_RM_ACTIVITY_HOST_METRICS@@@Z @ 0x18005646E (-RmpPolicyGetHostCommitForReclaim@@YA_KW4_RM_RECLAIM_POLICY@@PEBU_RM_ACTIVITY_HOST_METRICS@@@Z.c)
 */

__int64 __fastcall RmpPolicyCompareActivityHostsByPriorityAndCommitEx(
        struct _RM_POLICY_RECLAIM_CONTEXT *a1,
        const struct _RM_ACTIVITY_HOST_METRICS *a2,
        const struct _RM_ACTIVITY_HOST_METRICS *a3)
{
  int v5; // r11d
  unsigned int v6; // edi
  char v7; // bl
  __int64 v8; // rbp
  __int64 v9; // rsi
  __int64 result; // rax
  char v11; // r8
  char v12; // r9
  int v13; // r11d
  unsigned __int8 v14; // al
  int v15; // r11d
  bool v16; // cl
  bool v17; // cf
  unsigned __int64 v18; // rax
  unsigned __int64 HostCommitForReclaim; // rax
  unsigned __int64 v20; // r8
  unsigned int v21; // r10d
  unsigned __int64 v22; // rdx
  unsigned __int16 v23; // r9

  if ( a1 )
  {
    v5 = *((_DWORD *)a1 + 2);
    v6 = *((_DWORD *)a1 + 3);
    v7 = *((_BYTE *)a1 + 20);
  }
  else
  {
    v5 = 0;
    v6 = 2;
    v7 = 0;
  }
  v8 = *((_QWORD *)a3 + 6);
  v9 = *((_QWORD *)a2 + 6);
  if ( v5 == 1 )
  {
    if ( (*(_WORD *)(v8 + 1184) & 0x10) == 0 && (*(_WORD *)(v9 + 1184) & 0x10) != 0 )
      return 0xFFFFFFFFLL;
    if ( (*(_WORD *)(v8 + 1184) & 0x10) != 0 && (*(_WORD *)(v9 + 1184) & 0x10) == 0 )
      return 1LL;
  }
  result = RmpEmPriorityCompare(*((_DWORD *)a2 + 14), *((_DWORD *)a3 + 14));
  if ( (_DWORD)result )
    return result;
  if ( v7 )
  {
    v14 = *(_BYTE *)(v9 + 1458);
    if ( v14 < *(_BYTE *)(v8 + 1458) )
      return 0xFFFFFFFFLL;
    if ( v14 > *(_BYTE *)(v8 + 1458) )
      return 1LL;
  }
  v15 = v13 - 2;
  if ( v15 )
  {
    if ( v15 != 1 )
      goto LABEL_18;
    if ( (v12 & 0x20) == 0 && (v11 & 0x20) != 0 )
      return 0xFFFFFFFFLL;
    v16 = (v12 & 0x20) != 0;
    v17 = (v11 & 0x20) != 0;
  }
  else
  {
    if ( (v12 & 0x10) == 0 && (v11 & 0x10) != 0 )
      return 0xFFFFFFFFLL;
    v16 = (v12 & 0x10) != 0;
    v17 = (v11 & 0x10) != 0;
  }
  if ( v16 && !v17 )
    return 1LL;
LABEL_18:
  if ( v6 == 1 )
    goto LABEL_21;
  v18 = *(_QWORD *)(v9 + 1232);
  if ( v18 <= *(_QWORD *)(v8 + 1232) )
  {
    if ( v18 >= *(_QWORD *)(v8 + 1232) )
    {
LABEL_21:
      RmpPolicyGetHostCommitForReclaim(v6, a2);
      HostCommitForReclaim = RmpPolicyGetHostCommitForReclaim(v6, a3);
      v22 = HostCommitForReclaim >> 1;
      if ( (v23 & *(_WORD *)(v8 + 1456)) == 0 )
        v22 = HostCommitForReclaim;
      if ( v20 <= v22 )
      {
        LOBYTE(v21) = v20 < v22;
        return v21;
      }
      return 0xFFFFFFFFLL;
    }
    return 1LL;
  }
  return 0xFFFFFFFFLL;
}
