/*
 * XREFs of KiComputeHeteroThreadQos @ 0x1402B1080
 * Callers:
 *     KiDeferredReadySingleThread @ 0x14023A3A0 (KiDeferredReadySingleThread.c)
 *     KiSearchForNewThreadOnProcessor @ 0x140240D60 (KiSearchForNewThreadOnProcessor.c)
 *     KiCanLocalReadyThreadBeScheduledToRescheduleContextEntry @ 0x140243980 (KiCanLocalReadyThreadBeScheduledToRescheduleContextEntry.c)
 *     KiSetPriorityThread @ 0x1402B0860 (KiSetPriorityThread.c)
 *     KiComputeEffectivePriority @ 0x1402B2A20 (KiComputeEffectivePriority.c)
 *     KiRemoveBoostThread @ 0x1402BB4E0 (KiRemoveBoostThread.c)
 *     KiInitializeForegroundBoostThread @ 0x1402BE0E8 (KiInitializeForegroundBoostThread.c)
 *     KiApplyForegroundBoostThread @ 0x140350678 (KiApplyForegroundBoostThread.c)
 *     KeSetProcessPpmPolicy @ 0x140357250 (KeSetProcessPpmPolicy.c)
 *     KeSetThreadPpmPolicy @ 0x140359F1C (KeSetThreadPpmPolicy.c)
 *     KeUpdateThreadTag @ 0x140366D70 (KeUpdateThreadTag.c)
 *     KiConvertDynamicHeteroPolicy @ 0x140461A48 (KiConvertDynamicHeteroPolicy.c)
 *     KiHeteroComputeThreadWorkloadProperties @ 0x14046209C (KiHeteroComputeThreadWorkloadProperties.c)
 *     KzHeteroRefreshWorkloadProperties @ 0x140462BC0 (KzHeteroRefreshWorkloadProperties.c)
 *     KiSetHeteroPolicyThread @ 0x140577EFC (KiSetHeteroPolicyThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiComputeHeteroThreadQos(__int64 a1, int *a2)
{
  unsigned int v2; // r8d
  int v3; // r9d
  __int64 result; // rax
  int v5; // r11d
  char v6; // cl
  __int64 v7; // r10
  __int64 v8; // r8
  int v9; // r8d

  v2 = *(_DWORD *)(a1 + 80);
  v3 = 1;
  if ( v2 <= *(_DWORD *)(a1 + 84) )
    v2 = *(_DWORD *)(a1 + 84);
  if ( v2 < KiDynamicHeteroCpuPolicyExpectedCycles )
    v3 = 0;
  if ( !KeHeteroSystem )
  {
    result = 0LL;
    goto LABEL_7;
  }
  if ( (*(_DWORD *)(a1 + 120) & 0x400000) != 0 )
  {
    result = (unsigned __int8)*(_DWORD *)(a1 + 512);
    goto LABEL_7;
  }
  result = *(_QWORD *)(a1 + 1552);
  if ( result )
  {
    v5 = *(_DWORD *)(a1 + 512);
    v6 = 0;
    LODWORD(result) = *(_DWORD *)(result + 512);
    if ( (unsigned __int8)result != (unsigned __int8)v5
      && ((unsigned __int8)result == 3
       || (unsigned __int8)v5 == 3
       || (unsigned __int8)result < (unsigned int)(unsigned __int8)v5) )
    {
      v6 = 1;
    }
    if ( !v6 )
      LOBYTE(result) = v5;
    result = (unsigned __int8)result;
    goto LABEL_7;
  }
  if ( *(_BYTE *)(a1 + 124) == 1 )
  {
    result = 3LL;
    goto LABEL_7;
  }
  if ( *(_BYTE *)(a1 + 124) == 2 )
  {
    result = 4LL;
    goto LABEL_7;
  }
  result = (unsigned int)KiThreadPolicyToQosMappingTable[(*(_DWORD *)(a1 + 956) >> 8) & 7];
  if ( (_DWORD)result == 7 )
  {
    v7 = *(_QWORD *)(a1 + 544);
    v8 = (*(_DWORD *)(v7 + 632) >> 7) & 0xF;
    if ( (KiDynamicHeteroCpuPolicyMask & 4) != 0 )
    {
      if ( (_DWORD)v8 != 3 )
      {
        if ( (_DWORD)v8 == 8 )
          goto LABEL_37;
        if ( !v3 && KeHeteroSystemQos && (KiDynamicHeteroCpuPolicyMask & 8) != 0 )
        {
          result = 2LL;
          goto LABEL_7;
        }
      }
    }
    else if ( (_DWORD)v8 == 8 )
    {
      goto LABEL_37;
    }
    if ( (KiDynamicHeteroCpuPolicyMask & 1) != 0 && *(_BYTE *)(v7 + 1850) == 2 )
    {
      result = 0LL;
      goto LABEL_7;
    }
LABEL_37:
    result = (unsigned int)KiProcessPolicyToQosMappingTable[v8];
    if ( (_DWORD)result == 7 )
    {
      v9 = *(char *)(a1 + 195);
      if ( *(char *)(a1 + 195) >= 15 )
      {
        result = 0LL;
        goto LABEL_7;
      }
      if ( (KiDynamicHeteroCpuPolicyMask & 2) != 0 )
      {
        if ( v9 >= KiDynamicHeteroCpuPolicyImportantPriority )
        {
          result = 0LL;
          goto LABEL_7;
        }
        if ( (*(_DWORD *)(a1 + 116) & 0x400) != 0 )
        {
          result = 0LL;
          if ( (char)v9 >= 8 )
            goto LABEL_7;
        }
      }
      result = 6LL;
    }
  }
LABEL_7:
  if ( a2 )
    *a2 = v3;
  return result;
}
