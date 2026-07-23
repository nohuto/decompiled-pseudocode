/*
 * XREFs of HalpTimerPropagateQpcBiasUpdate @ 0x14037A8C0
 * Callers:
 *     HalpTimerSelectRoles @ 0x14037A44C (HalpTimerSelectRoles.c)
 *     HalpTimerCalibratePerformanceCounter @ 0x14037A7B8 (HalpTimerCalibratePerformanceCounter.c)
 *     HalpTimerInitSystem @ 0x14037ABD0 (HalpTimerInitSystem.c)
 * Callees:
 *     RtlSetSystemGlobalData @ 0x14035C1C0 (RtlSetSystemGlobalData.c)
 *     HalpTimerScaleCounter @ 0x1403C4704 (HalpTimerScaleCounter.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
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
    if ( !qword_140C62610 )
    {
      v2 = *(_QWORD *)(a1 + 208);
      if ( qword_140C62608 )
        qword_140C62608(v2);
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
