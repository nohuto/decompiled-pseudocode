/*
 * XREFs of Interrupter_DetermineSecondaryInterrupterCount @ 0x1C00778E0
 * Callers:
 *     Controller_WdfEvtDeviceFilterRemoveResourceRequirements @ 0x1C006F3C0 (Controller_WdfEvtDeviceFilterRemoveResourceRequirements.c)
 * Callees:
 *     Interrupter_SetSecondaryInterrupterCount @ 0x1C0001904 (Interrupter_SetSecondaryInterrupterCount.c)
 *     WPP_RECORDER_SF_ddd @ 0x1C0013618 (WPP_RECORDER_SF_ddd.c)
 */

void __fastcall Interrupter_DetermineSecondaryInterrupterCount(__int64 a1, int a2)
{
  ULONG ActiveProcessorCount; // eax
  __int64 v5; // r10
  unsigned int v6; // ebx
  ULONG v7; // r11d
  int v8; // eax
  ULONG v9; // [rsp+28h] [rbp-20h]
  int v10; // [rsp+30h] [rbp-18h]
  unsigned int v11; // [rsp+38h] [rbp-10h]

  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0);
  v5 = *(_QWORD *)(a1 + 8);
  v6 = 0;
  v7 = ActiveProcessorCount;
  if ( (*(_QWORD *)(v5 + 336) & 0x1000LL) == 0 )
  {
    v8 = (*(_DWORD *)(*(_QWORD *)(a1 + 8) + 588LL) == 1) + 1;
    if ( a2 != v8 )
    {
      v6 = a2 - v8;
      if ( (unsigned int)(a2 - v8) > 0x10 )
        v6 = 16;
      if ( v7 <= v6 )
        v6 = v7;
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v11 = v6;
    v10 = a2;
    v9 = v7;
    WPP_RECORDER_SF_ddd(
      *(_QWORD *)(v5 + 72),
      4u,
      9u,
      0x37u,
      (__int64)&WPP_84765f96df013c20a94fd65d5e9532b8_Traceguids,
      v9,
      v10,
      v11);
  }
  Interrupter_SetSecondaryInterrupterCount(a1, v6);
}
