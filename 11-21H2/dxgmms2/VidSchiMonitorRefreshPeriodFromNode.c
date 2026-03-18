/*
 * XREFs of VidSchiMonitorRefreshPeriodFromNode @ 0x1C001836C
 * Callers:
 *     VidSchiProcessDpcCompletedPacket @ 0x1C0007C30 (VidSchiProcessDpcCompletedPacket.c)
 *     VidSchiUpdateLastCompletedPresentTimestamp @ 0x1C000C250 (VidSchiUpdateLastCompletedPresentTimestamp.c)
 *     ?VidSchiUpdateNodeYieldStatus@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x1C00181D8 (-VidSchiUpdateNodeYieldStatus@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiMonitorRefreshPeriodFromNode(__int64 a1)
{
  __int64 v1; // rdi
  ULONGLONG v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 24);
  v3 = *(unsigned int *)(a1 + 1768);
  if ( !v3 )
  {
    result = *(unsigned int *)(*(_QWORD *)(v1 + 3200) + 82736LL);
    if ( (_DWORD)result )
      return result;
    WdLogSingleEntry1(3LL, 0LL);
    return 16LL;
  }
  v4 = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 16LL * (unsigned int)RtlFindMostSignificantBit(v3) + 2056) + 96LL)
                       + 504LL);
  if ( (unsigned int)v4 > *(_DWORD *)(v1 + 40) )
    v4 = 0LL;
  v5 = (unsigned int)v4;
  result = *(unsigned int *)(*(_QWORD *)(v1 + 8 * v4 + 3200) + 82736LL);
  if ( !(_DWORD)result )
  {
    WdLogSingleEntry1(3LL, v5);
    return 16LL;
  }
  return result;
}
