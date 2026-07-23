/*
 * XREFs of HalpTimerPropagateQpcBiasUpdate @ 0x14037AD70
 * Callers:
 *     HalpTimerSelectRoles @ 0x14037A8FC (HalpTimerSelectRoles.c)
 *     HalpTimerCalibratePerformanceCounter @ 0x14037AC68 (HalpTimerCalibratePerformanceCounter.c)
 *     HalpTimerInitSystem @ 0x14037B080 (HalpTimerInitSystem.c)
 * Callees:
 *     RtlSetSystemGlobalData @ 0x14035B9D0 (RtlSetSystemGlobalData.c)
 *     HalpTimerScaleCounter @ 0x1403C3EC4 (HalpTimerScaleCounter.c)
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 */

void __fastcall HalpTimerPropagateQpcBiasUpdate(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 v4; // r11
  int v5; // eax
  __int64 Buffer; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 == HalpPerformanceCounter )
  {
    if ( !qword_140C626F0 )
    {
      v2 = *(_QWORD *)(a1 + 208);
      if ( qword_140C626E8 )
        qword_140C626E8(v2);
    }
    if ( *(_DWORD *)(a1 + 228) == 5 && *(_QWORD *)(a1 + 192) )
    {
      v3 = HalpTimerScaleCounter(abs64(*(_QWORD *)(a1 + 208)), *(_QWORD *)(a1 + 192), 10000000LL);
      if ( v4 < 0 )
        v3 = -v3;
      Buffer = v3;
      RtlSetSystemGlobalData(GlobalDataIdQpcBias, &Buffer, 8u);
    }
    v5 = *(_DWORD *)(a1 + 228);
    if ( v5 == 10 || v5 == 7 )
    {
      Buffer = *(_QWORD *)(a1 + 208);
      RtlSetSystemGlobalData(GlobalDataIdQpcBias, &Buffer, 8u);
    }
  }
}
