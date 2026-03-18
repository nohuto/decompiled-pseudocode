/*
 * XREFs of Interrupter_DetermineSecondaryInterrupterCount @ 0x1C0079CDC
 * Callers:
 *     Controller_WdfEvtDeviceFilterRemoveResourceRequirements @ 0x1C006EAF0 (Controller_WdfEvtDeviceFilterRemoveResourceRequirements.c)
 * Callees:
 *     Interrupter_SetSecondaryInterrupterCount @ 0x1C0008228 (Interrupter_SetSecondaryInterrupterCount.c)
 *     WPP_RECORDER_SF_DDD @ 0x1C001E054 (WPP_RECORDER_SF_DDD.c)
 */

void __fastcall Interrupter_DetermineSecondaryInterrupterCount(__int64 a1, int a2)
{
  ULONG ActiveProcessorCount; // eax
  int v5; // edx
  __int64 v6; // r10
  unsigned int v7; // ebx
  ULONG v8; // r11d
  int v9; // eax

  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0);
  v6 = *(_QWORD *)(a1 + 8);
  v7 = 0;
  v8 = ActiveProcessorCount;
  if ( (*(_QWORD *)(v6 + 336) & 0x1000LL) == 0 )
  {
    v9 = (*(_DWORD *)(*(_QWORD *)(a1 + 8) + 636LL) == 1) + 1;
    if ( a2 != v9 )
    {
      v7 = a2 - v9;
      if ( (unsigned int)(a2 - v9) > 0x10 )
        v7 = 16;
      if ( v8 <= v7 )
        v7 = v8;
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v5) = 4;
    WPP_RECORDER_SF_DDD(
      *(_QWORD *)(v6 + 72),
      v5,
      9,
      55,
      (__int64)&WPP_89e87cee83d7332425398286600bed19_Traceguids,
      v8,
      a2,
      v7);
  }
  Interrupter_SetSecondaryInterrupterCount(a1, v7);
}
