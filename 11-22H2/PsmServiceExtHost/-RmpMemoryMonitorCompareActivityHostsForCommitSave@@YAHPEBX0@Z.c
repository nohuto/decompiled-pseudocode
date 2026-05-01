/*
 * XREFs of ?RmpMemoryMonitorCompareActivityHostsForCommitSave@@YAHPEBX0@Z @ 0x18008CD70
 * Callers:
 *     <none>
 * Callees:
 *     ?RmpPolicyActivityHostIsValidEmptyTarget@@YAEPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180056098 (-RmpPolicyActivityHostIsValidEmptyTarget@@YAEPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpMemoryMonitorCompareActivityHostMetricsForLargeHostAndEmpty@@YAHPEAU_RM_ACTIVITY_HOST_METRICS@@0@Z @ 0x18008CCD4 (-RmpMemoryMonitorCompareActivityHostMetricsForLargeHostAndEmpty@@YAHPEAU_RM_ACTIVITY_HOST_METRIC.c)
 */

__int64 __fastcall RmpMemoryMonitorCompareActivityHostsForCommitSave(
        struct _RM_ACTIVITY_HOST_METRICS *a1,
        struct _RM_ACTIVITY_HOST_METRICS *a2)
{
  __int64 v2; // rsi
  __int64 result; // rax
  unsigned int v6; // r11d
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rax

  v2 = *((_QWORD *)a1 + 6);
  result = RmpMemoryMonitorCompareActivityHostMetricsForLargeHostAndEmpty(a1, a2);
  if ( !(_DWORD)result )
  {
    if ( RmpPolicyActivityHostIsValidEmptyTarget((struct _RM_ACTIVITY_HOST *)v2) )
    {
      v7 = *((_QWORD *)a1 + 1) >> 1;
      if ( (*(_BYTE *)(v2 + 1457) & 1) == 0 )
        v7 = *((_QWORD *)a1 + 1);
      v8 = *((_QWORD *)a2 + 1) >> 1;
      if ( (*(_BYTE *)(*((_QWORD *)a2 + 6) + 1457LL) & 1) == 0 )
        v8 = *((_QWORD *)a2 + 1);
      if ( v7 <= v8 )
      {
        LOBYTE(v6) = v7 < v8;
        return v6;
      }
      else
      {
        return 0xFFFFFFFFLL;
      }
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}
