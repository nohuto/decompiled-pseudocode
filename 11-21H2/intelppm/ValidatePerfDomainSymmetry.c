/*
 * XREFs of ValidatePerfDomainSymmetry @ 0x1C0026C74
 * Callers:
 *     ProcLibDeviceStart @ 0x1C0028678 (ProcLibDeviceStart.c)
 * Callees:
 *     EnumerateNextDevice @ 0x1C000248C (EnumerateNextDevice.c)
 *     ResetEnumerationContext @ 0x1C0002528 (ResetEnumerationContext.c)
 *     _guard_dispatch_icall_nop @ 0x1C0003700 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_ddii @ 0x1C00088C4 (WPP_RECORDER_SF_ddii.c)
 *     WPP_RECORDER_SF_dds @ 0x1C00089E0 (WPP_RECORDER_SF_dds.c)
 *     GetPerfDomain @ 0x1C002478C (GetPerfDomain.c)
 *     ValidateRegisterSymmetry @ 0x1C0024EEC (ValidateRegisterSymmetry.c)
 *     ValidatePctPtcSymmetry @ 0x1C0037A24 (ValidatePctPtcSymmetry.c)
 *     ValidatePepPerformanceSymmetry @ 0x1C0037AE8 (ValidatePepPerformanceSymmetry.c)
 *     ValidatePssSymmetry @ 0x1C0038008 (ValidatePssSymmetry.c)
 *     ValidateTssSymmetry @ 0x1C0038110 (ValidateTssSymmetry.c)
 */

__int64 __fastcall ValidatePerfDomainSymmetry(__int64 a1)
{
  __int64 v1; // rdi
  unsigned int v2; // esi
  void (__fastcall *v3)(PWDF_DRIVER_GLOBALS, __int64, _QWORD); // rax
  __int64 v4; // rbx
  __int64 v5; // r14
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 *v9; // r15
  int v10; // eax
  int v11; // r12d
  __int64 v12; // rbx
  __int64 v13; // r13
  int v14; // edi
  char v15; // r14
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rbx
  int v20; // [rsp+20h] [rbp-49h]
  __int64 v21; // [rsp+50h] [rbp-19h] BYREF
  __int64 v22; // [rsp+58h] [rbp-11h]
  _OWORD v23[6]; // [rsp+60h] [rbp-9h] BYREF
  int v25; // [rsp+D8h] [rbp+6Fh] BYREF
  __int64 v26; // [rsp+E8h] [rbp+7Fh]

  v1 = a1;
  v2 = 0;
  v21 = 0LL;
  v3 = *(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504);
  memset(v23, 0, 32);
  v3(WdfDriverGlobals, qword_1C001DCF8, 0LL);
  if ( (unsigned int)GetPerfDomain(v1, (__int64)v23, &v25) != 1 )
  {
    v4 = 0LL;
    v26 = 0LL;
    ResetEnumerationContext((__int64 *)v23);
    while ( !(unsigned int)EnumerateNextDevice((__int64 *)v23, &v21) )
    {
      v5 = v21;
      if ( v21 != v1 )
      {
        v6 = *(_QWORD *)(v21 + 280);
        v7 = *(_QWORD *)(v1 + 280);
        if ( (v7 & 0x10FF300000LL) != (v6 & 0x10FF300000LL) )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            WPP_RECORDER_SF_ddii(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              v6,
              v7 & 0x10FF300000LL,
              (__int64)&WPP_RECORDER_INITIALIZED,
              v20);
            v7 = *(_QWORD *)(v1 + 280);
            v6 = *(_QWORD *)(v5 + 280);
          }
          v4 |= (v6 ^ v7) & 0x10FF300000LL;
          v26 = v4;
        }
        if ( (v7 & 0x70000000) != 0 )
        {
          if ( (int)ValidatePctPtcSymmetry(
                      *(_DWORD *)(v1 + 52),
                      (int)v1 + 424,
                      *(_DWORD *)(v5 + 52),
                      (int)v1 + 424,
                      (__int64)"_PCT") < 0 )
          {
            v4 |= 0x70000000uLL;
            v26 = v4;
          }
          if ( (*(_DWORD *)(v1 + 280) & 0x40000000) != 0
            && (int)ValidatePssSymmetry(
                      *(_DWORD *)(v1 + 52),
                      *(_QWORD *)(v1 + 456),
                      *(_DWORD *)(v5 + 52),
                      *(_QWORD *)(v5 + 456),
                      (__int64)"XPSS") < 0 )
          {
            v4 |= 0x40000000uLL;
            v26 = v4;
          }
          if ( (*(_DWORD *)(v1 + 280) & 0x30000000) != 0
            && (int)ValidatePssSymmetry(
                      *(_DWORD *)(v1 + 52),
                      *(_QWORD *)(v1 + 448),
                      *(_DWORD *)(v5 + 52),
                      *(_QWORD *)(v5 + 448),
                      (__int64)"_PSS") < 0 )
          {
            v4 |= 0x30000000uLL;
            v26 = v4;
          }
        }
        if ( (*(_DWORD *)(v1 + 280) & 0x3300000) != 0 )
        {
          if ( (int)ValidatePctPtcSymmetry(
                      *(_DWORD *)(v1 + 52),
                      (int)v1 + 480,
                      *(_DWORD *)(v5 + 52),
                      (int)v1 + 480,
                      (__int64)"_PTC") < 0 )
          {
            v4 |= 0x3300000uLL;
            v26 = v4;
          }
          if ( (int)ValidateTssSymmetry(
                      *(unsigned int *)(v1 + 52),
                      *(_QWORD *)(v1 + 504),
                      *(unsigned int *)(v5 + 52),
                      *(_QWORD *)(v5 + 504)) < 0 )
          {
            v4 |= 0x3300000uLL;
            v26 = v4;
          }
        }
        if ( (*(_DWORD *)(v1 + 280) & 0x8000000) != 0 )
        {
          v8 = *(_QWORD *)(v1 + 592);
          v9 = (__int64 *)&off_1C000F0D8;
          v10 = *(_DWORD *)(v5 + 52);
          v11 = 0;
          v12 = *(_QWORD *)(v5 + 592);
          v13 = 15LL;
          v14 = *(_DWORD *)(v1 + 52);
          v15 = v10;
          v22 = v8;
          v25 = v10;
          do
          {
            if ( !ValidateRegisterSymmetry(
                    (_BYTE *)(*((unsigned int *)v9 - 2) + v8),
                    (const void *)(*((unsigned int *)v9 - 2) + v12)) )
            {
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_SF_dds((__int64)WPP_GLOBAL_Control->DeviceExtension, v16, v17, 0x42u, v20, v14, v15, *v9);
              v11 = -1073741823;
            }
            v8 = v22;
            v9 += 3;
            --v13;
          }
          while ( v13 );
          v4 = v26;
          v1 = a1;
          v5 = v21;
          if ( v11 < 0 )
          {
            v4 = v26 | 0x8000000;
            v26 |= 0x8000000uLL;
          }
        }
        if ( (*(_QWORD *)(v1 + 280) & 0x1000000000LL) != 0
          && (int)ValidatePepPerformanceSymmetry(
                    *(unsigned int *)(v1 + 52),
                    *(_QWORD *)(v1 + 1192),
                    *(unsigned int *)(v5 + 52),
                    *(_QWORD *)(v5 + 1192)) < 0 )
        {
          v4 |= 0x1000000000uLL;
          v26 = v4;
        }
      }
    }
    ResetEnumerationContext((__int64 *)v23);
    if ( !(unsigned int)EnumerateNextDevice((__int64 *)v23, &v21) )
    {
      v18 = ~v4;
      do
        *(_QWORD *)(v21 + 280) &= v18;
      while ( !(unsigned int)EnumerateNextDevice((__int64 *)v23, &v21) );
    }
    v2 = (*(_QWORD *)(v1 + 280) & 0x10FF300000LL) == 0 ? 0xC0000001 : 0;
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C001DCF8);
  return v2;
}
