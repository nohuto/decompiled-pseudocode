/*
 * XREFs of ValidatePerfDomainSymmetry @ 0x1C002FFBC
 * Callers:
 *     ProcLibDeviceStart @ 0x1C002D1C4 (ProcLibDeviceStart.c)
 * Callees:
 *     EnumerateNextDevice @ 0x1C0001800 (EnumerateNextDevice.c)
 *     ResetEnumerationContext @ 0x1C0002344 (ResetEnumerationContext.c)
 *     WPP_RECORDER_SF_ddii @ 0x1C0008648 (WPP_RECORDER_SF_ddii.c)
 *     _guard_dispatch_icall_nop @ 0x1C000C510 (_guard_dispatch_icall_nop.c)
 *     ValidateCpcSymmetry @ 0x1C002F794 (ValidateCpcSymmetry.c)
 *     ValidatePctPtcSymmetry @ 0x1C002FCE0 (ValidatePctPtcSymmetry.c)
 *     ValidatePepPerformanceSymmetry @ 0x1C002FDA4 (ValidatePepPerformanceSymmetry.c)
 *     ValidatePssSymmetry @ 0x1C003059C (ValidatePssSymmetry.c)
 *     ValidateTssSymmetry @ 0x1C00306D4 (ValidateTssSymmetry.c)
 *     GetPerfDomain @ 0x1C0035D60 (GetPerfDomain.c)
 */

__int64 __fastcall ValidatePerfDomainSymmetry(__int64 a1)
{
  unsigned int v2; // esi
  void (__fastcall *v3)(PWDF_DRIVER_GLOBALS, __int64, _QWORD); // rax
  __int64 v4; // rbx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // r14
  __int64 v8; // rcx
  __int64 v9; // rbx
  int v11; // [rsp+20h] [rbp-50h]
  _OWORD v12[2]; // [rsp+50h] [rbp-20h] BYREF
  char v13; // [rsp+B8h] [rbp+48h] BYREF
  __int64 v14; // [rsp+C0h] [rbp+50h] BYREF

  v2 = 0;
  v14 = 0LL;
  v3 = *(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504);
  memset(v12, 0, sizeof(v12));
  v3(WdfDriverGlobals, qword_1C00124D8, 0LL);
  if ( (unsigned int)GetPerfDomain(a1, v12, &v13) != 1 )
  {
    v4 = 0LL;
    ResetEnumerationContext((__int64 *)v12);
    while ( !(unsigned int)EnumerateNextDevice((__int64 *)v12, &v14) )
    {
      v7 = v14;
      if ( v14 != a1 )
      {
        v8 = *(_QWORD *)(a1 + 280);
        if ( (v8 & 0x10FF300000LL) != (*(_QWORD *)(v14 + 280) & 0x10FF300000LL) )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_ddii((__int64)WPP_GLOBAL_Control->DeviceExtension, v8 & 0x10FF300000LL, v5, v6, v11);
          v8 = *(_QWORD *)(a1 + 280);
          v4 |= (*(_QWORD *)(v7 + 280) ^ v8) & 0x10FF300000LL;
        }
        if ( (v8 & 0x70000000) != 0 )
        {
          if ( (int)ValidatePctPtcSymmetry(
                      *(_DWORD *)(a1 + 52),
                      a1 + 424,
                      *(_DWORD *)(v7 + 52),
                      a1 + 424,
                      (__int64)"_PCT") < 0 )
            v4 |= 0x70000000uLL;
          if ( (*(_DWORD *)(a1 + 280) & 0x40000000) != 0
            && (int)ValidatePssSymmetry(
                      *(_DWORD *)(a1 + 52),
                      *(_QWORD *)(a1 + 456),
                      *(_DWORD *)(v7 + 52),
                      *(_QWORD *)(v7 + 456),
                      (__int64)"XPSS") < 0 )
          {
            v4 |= 0x40000000uLL;
          }
          if ( (*(_DWORD *)(a1 + 280) & 0x30000000) != 0
            && (int)ValidatePssSymmetry(
                      *(_DWORD *)(a1 + 52),
                      *(_QWORD *)(a1 + 448),
                      *(_DWORD *)(v7 + 52),
                      *(_QWORD *)(v7 + 448),
                      (__int64)"_PSS") < 0 )
          {
            v4 |= 0x30000000uLL;
          }
        }
        if ( (*(_DWORD *)(a1 + 280) & 0x3300000) != 0 )
        {
          if ( (int)ValidatePctPtcSymmetry(
                      *(_DWORD *)(a1 + 52),
                      a1 + 480,
                      *(_DWORD *)(v7 + 52),
                      a1 + 480,
                      (__int64)"_PTC") < 0 )
            v4 |= 0x3300000uLL;
          if ( (int)ValidateTssSymmetry(
                      *(unsigned int *)(a1 + 52),
                      *(_QWORD *)(a1 + 504),
                      *(unsigned int *)(v7 + 52),
                      *(_QWORD *)(v7 + 504)) < 0 )
            v4 |= 0x3300000uLL;
        }
        if ( (*(_DWORD *)(a1 + 280) & 0x8000000) != 0
          && (int)ValidateCpcSymmetry(
                    *(_DWORD *)(a1 + 52),
                    *(_QWORD *)(a1 + 592),
                    *(_DWORD *)(v7 + 52),
                    *(_QWORD *)(v7 + 592)) < 0 )
        {
          v4 |= 0x8000000uLL;
        }
        if ( (*(_QWORD *)(a1 + 280) & 0x1000000000LL) != 0
          && (int)ValidatePepPerformanceSymmetry(
                    *(_DWORD *)(a1 + 52),
                    *(_QWORD *)(a1 + 1192),
                    *(unsigned int *)(v7 + 52),
                    *(_QWORD *)(v7 + 1192)) < 0 )
        {
          v4 |= 0x1000000000uLL;
        }
      }
    }
    ResetEnumerationContext((__int64 *)v12);
    if ( !(unsigned int)EnumerateNextDevice((__int64 *)v12, &v14) )
    {
      v9 = ~v4;
      do
        *(_QWORD *)(v14 + 280) &= v9;
      while ( !(unsigned int)EnumerateNextDevice((__int64 *)v12, &v14) );
    }
    v2 = (*(_QWORD *)(a1 + 280) & 0x10FF300000LL) == 0 ? 0xC0000001 : 0;
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C00124D8);
  return v2;
}
