/*
 * XREFs of ValidatePerfDomainSymmetry @ 0x1C002F054
 * Callers:
 *     ProcLibDeviceStart @ 0x1C002BB68 (ProcLibDeviceStart.c)
 * Callees:
 *     EnumerateNextDevice @ 0x1C0001840 (EnumerateNextDevice.c)
 *     ResetEnumerationContext @ 0x1C00027D4 (ResetEnumerationContext.c)
 *     WPP_RECORDER_SF_ddii @ 0x1C0007B28 (WPP_RECORDER_SF_ddii.c)
 *     _guard_dispatch_icall_nop @ 0x1C000BB10 (_guard_dispatch_icall_nop.c)
 *     GetPerfDomain @ 0x1C002CF98 (GetPerfDomain.c)
 *     ValidateCpcSymmetry @ 0x1C002E824 (ValidateCpcSymmetry.c)
 *     ValidatePctPtcSymmetry @ 0x1C002ED7C (ValidatePctPtcSymmetry.c)
 *     ValidatePepPerformanceSymmetry @ 0x1C002EE40 (ValidatePepPerformanceSymmetry.c)
 *     ValidatePssSymmetry @ 0x1C002F640 (ValidatePssSymmetry.c)
 *     ValidateTssSymmetry @ 0x1C002F784 (ValidateTssSymmetry.c)
 */

__int64 __fastcall ValidatePerfDomainSymmetry(__int64 a1)
{
  unsigned int v2; // esi
  void (__fastcall *v3)(PWDF_DRIVER_GLOBALS, __int64, _QWORD); // rax
  __int64 v4; // rbx
  __int64 v5; // r14
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rbx
  int v10; // [rsp+20h] [rbp-50h]
  _OWORD v11[2]; // [rsp+50h] [rbp-20h] BYREF
  int v12; // [rsp+A8h] [rbp+38h] BYREF
  __int64 v13; // [rsp+B0h] [rbp+40h] BYREF

  v2 = 0;
  v13 = 0LL;
  v3 = *(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504);
  memset(v11, 0, sizeof(v11));
  v3(WdfDriverGlobals, qword_1C0011458, 0LL);
  if ( (unsigned int)GetPerfDomain(a1, (__int64)v11, &v12) != 1 )
  {
    v4 = 0LL;
    ResetEnumerationContext((__int64 *)v11);
    while ( !(unsigned int)EnumerateNextDevice((__int64 *)v11, &v13) )
    {
      v5 = v13;
      if ( v13 != a1 )
      {
        v6 = *(_QWORD *)(v13 + 280);
        v7 = *(_QWORD *)(a1 + 280);
        if ( (v7 & 0x10FF300000LL) != (v6 & 0x10FF300000LL) )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            WPP_RECORDER_SF_ddii(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              v6,
              v7 & 0x10FF300000LL,
              (__int64)&WPP_RECORDER_INITIALIZED,
              v10);
            v7 = *(_QWORD *)(a1 + 280);
            v6 = *(_QWORD *)(v5 + 280);
          }
          v4 |= (v6 ^ v7) & 0x10FF300000LL;
        }
        if ( (v7 & 0x70000000) != 0 )
        {
          if ( (int)ValidatePctPtcSymmetry(
                      *(_DWORD *)(a1 + 52),
                      a1 + 424,
                      *(_DWORD *)(v5 + 52),
                      a1 + 424,
                      (__int64)"_PCT") < 0 )
            v4 |= 0x70000000uLL;
          if ( (*(_DWORD *)(a1 + 280) & 0x40000000) != 0
            && (int)ValidatePssSymmetry(
                      *(_DWORD *)(a1 + 52),
                      *(_QWORD *)(a1 + 456),
                      *(_DWORD *)(v5 + 52),
                      *(_QWORD *)(v5 + 456),
                      (__int64)"XPSS") < 0 )
          {
            v4 |= 0x40000000uLL;
          }
          if ( (*(_DWORD *)(a1 + 280) & 0x30000000) != 0
            && (int)ValidatePssSymmetry(
                      *(_DWORD *)(a1 + 52),
                      *(_QWORD *)(a1 + 448),
                      *(_DWORD *)(v5 + 52),
                      *(_QWORD *)(v5 + 448),
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
                      *(_DWORD *)(v5 + 52),
                      a1 + 480,
                      (__int64)"_PTC") < 0 )
            v4 |= 0x3300000uLL;
          if ( (int)ValidateTssSymmetry(
                      *(unsigned int *)(a1 + 52),
                      *(_QWORD *)(a1 + 504),
                      *(unsigned int *)(v5 + 52),
                      *(_QWORD *)(v5 + 504)) < 0 )
            v4 |= 0x3300000uLL;
        }
        if ( (*(_DWORD *)(a1 + 280) & 0x8000000) != 0
          && (int)ValidateCpcSymmetry(
                    *(_DWORD *)(a1 + 52),
                    *(_QWORD *)(a1 + 592),
                    *(_DWORD *)(v5 + 52),
                    *(_QWORD *)(v5 + 592)) < 0 )
        {
          v4 |= 0x8000000uLL;
        }
        if ( _bittest64((const signed __int64 *)(a1 + 280), 0x24u)
          && (int)ValidatePepPerformanceSymmetry(
                    *(_DWORD *)(a1 + 52),
                    *(_QWORD *)(a1 + 1192),
                    *(unsigned int *)(v5 + 52),
                    *(_QWORD *)(v5 + 1192)) < 0 )
        {
          v4 |= 0x1000000000uLL;
        }
      }
    }
    ResetEnumerationContext((__int64 *)v11);
    if ( !(unsigned int)EnumerateNextDevice((__int64 *)v11, &v13) )
    {
      v8 = ~v4;
      do
        *(_QWORD *)(v13 + 280) &= v8;
      while ( !(unsigned int)EnumerateNextDevice((__int64 *)v11, &v13) );
    }
    v2 = (*(_QWORD *)(a1 + 280) & 0x10FF300000LL) == 0 ? 0xC0000001 : 0;
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C0011458);
  return v2;
}
