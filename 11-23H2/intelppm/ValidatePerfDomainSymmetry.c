/*
 * XREFs of ValidatePerfDomainSymmetry @ 0x1C002A6D4
 * Callers:
 *     ProcLibDeviceStart @ 0x1C0027F5C (ProcLibDeviceStart.c)
 * Callees:
 *     EnumerateNextDevice @ 0x1C00033D8 (EnumerateNextDevice.c)
 *     ResetEnumerationContext @ 0x1C0003474 (ResetEnumerationContext.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004250 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_ddii @ 0x1C000A2C8 (WPP_RECORDER_SF_ddii.c)
 *     WPP_RECORDER_SF_dds @ 0x1C000A3E0 (WPP_RECORDER_SF_dds.c)
 *     ValidateRegisterSymmetry @ 0x1C002C8CC (ValidateRegisterSymmetry.c)
 *     GetPerfDomain @ 0x1C002CA14 (GetPerfDomain.c)
 *     ValidatePctPtcSymmetry @ 0x1C0038EFC (ValidatePctPtcSymmetry.c)
 *     ValidatePepPerformanceSymmetry @ 0x1C0038FC0 (ValidatePepPerformanceSymmetry.c)
 *     ValidatePssSymmetry @ 0x1C00394E4 (ValidatePssSymmetry.c)
 *     ValidateTssSymmetry @ 0x1C00395EC (ValidateTssSymmetry.c)
 */

__int64 __fastcall ValidatePerfDomainSymmetry(__int64 a1)
{
  __int64 v1; // rdi
  unsigned int v2; // esi
  void (__fastcall *v3)(PWDF_DRIVER_GLOBALS, __int64, _QWORD); // rax
  __int64 v4; // rbx
  __int64 v5; // r9
  _UNKNOWN **v6; // r8
  __int64 v7; // r14
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 *v10; // r15
  int v11; // eax
  int v12; // r12d
  __int64 v13; // rbx
  __int64 v14; // r13
  int v15; // edi
  char v16; // r14
  __int64 v17; // rdx
  int v18; // eax
  __int64 v19; // rbx
  int v21; // [rsp+20h] [rbp-49h]
  __int64 v22; // [rsp+50h] [rbp-19h] BYREF
  __int64 v23; // [rsp+58h] [rbp-11h]
  _OWORD v24[6]; // [rsp+60h] [rbp-9h] BYREF
  int v26; // [rsp+D8h] [rbp+6Fh] BYREF
  __int64 v27; // [rsp+E8h] [rbp+7Fh]

  v1 = a1;
  v2 = 0;
  v22 = 0LL;
  v3 = *(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504);
  memset(v24, 0, 32);
  v3(WdfDriverGlobals, qword_1C001F018, 0LL);
  if ( (unsigned int)GetPerfDomain(v1, v24, &v26) != 1 )
  {
    v4 = 0LL;
    v27 = 0LL;
    ResetEnumerationContext((__int64 *)v24);
    if ( !(unsigned int)EnumerateNextDevice((__int64 *)v24, &v22) )
    {
      v6 = &WPP_RECORDER_INITIALIZED;
      do
      {
        v7 = v22;
        if ( v22 != v1 )
        {
          v8 = *(_QWORD *)(v1 + 280);
          if ( (v8 & 0x10FF300000LL) != (*(_QWORD *)(v22 + 280) & 0x10FF300000LL) )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_ddii(
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                v8 & 0x10FF300000LL,
                (__int64)&WPP_RECORDER_INITIALIZED,
                v5,
                v21);
            v8 = *(_QWORD *)(v1 + 280);
            v4 |= (*(_QWORD *)(v7 + 280) ^ v8) & 0x10FF300000LL;
            v27 = v4;
          }
          if ( (v8 & 0x70000000) != 0 )
          {
            if ( (int)ValidatePctPtcSymmetry(
                        *(_DWORD *)(v1 + 52),
                        (int)v1 + 424,
                        *(_DWORD *)(v7 + 52),
                        (int)v1 + 424,
                        (__int64)"_PCT") < 0 )
            {
              v4 |= 0x70000000uLL;
              v27 = v4;
            }
            if ( (*(_DWORD *)(v1 + 280) & 0x40000000) != 0
              && (int)ValidatePssSymmetry(
                        *(_DWORD *)(v1 + 52),
                        *(_QWORD *)(v1 + 456),
                        *(_DWORD *)(v7 + 52),
                        *(_QWORD *)(v7 + 456),
                        (__int64)"XPSS") < 0 )
            {
              v4 |= 0x40000000uLL;
              v27 = v4;
            }
            if ( (*(_DWORD *)(v1 + 280) & 0x30000000) != 0
              && (int)ValidatePssSymmetry(
                        *(_DWORD *)(v1 + 52),
                        *(_QWORD *)(v1 + 448),
                        *(_DWORD *)(v7 + 52),
                        *(_QWORD *)(v7 + 448),
                        (__int64)"_PSS") < 0 )
            {
              v4 |= 0x30000000uLL;
              v27 = v4;
            }
          }
          if ( (*(_DWORD *)(v1 + 280) & 0x3300000) != 0 )
          {
            if ( (int)ValidatePctPtcSymmetry(
                        *(_DWORD *)(v1 + 52),
                        (int)v1 + 480,
                        *(_DWORD *)(v7 + 52),
                        (int)v1 + 480,
                        (__int64)"_PTC") < 0 )
            {
              v4 |= 0x3300000uLL;
              v27 = v4;
            }
            if ( (int)ValidateTssSymmetry(
                        *(unsigned int *)(v1 + 52),
                        *(_QWORD *)(v1 + 504),
                        *(unsigned int *)(v7 + 52),
                        *(_QWORD *)(v7 + 504)) < 0 )
            {
              v4 |= 0x3300000uLL;
              v27 = v4;
            }
          }
          if ( (*(_DWORD *)(v1 + 280) & 0x8000000) != 0 )
          {
            v9 = *(_QWORD *)(v1 + 592);
            v10 = (__int64 *)&off_1C0010468;
            v11 = *(_DWORD *)(v7 + 52);
            v12 = 0;
            v13 = *(_QWORD *)(v7 + 592);
            v14 = 15LL;
            v15 = *(_DWORD *)(v1 + 52);
            v16 = v11;
            v23 = v9;
            v26 = v11;
            do
            {
              if ( !(unsigned __int8)ValidateRegisterSymmetry(
                                       *((unsigned int *)v10 - 2) + v9,
                                       *((unsigned int *)v10 - 2) + v13,
                                       v6) )
              {
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  WPP_RECORDER_SF_dds(
                    (__int64)WPP_GLOBAL_Control->DeviceExtension,
                    v17,
                    (__int64)v6,
                    0x42u,
                    v21,
                    v15,
                    v16,
                    *v10);
                v12 = -1073741823;
              }
              v9 = v23;
              v10 += 3;
              --v14;
            }
            while ( v14 );
            v4 = v27;
            v1 = a1;
            v7 = v22;
            if ( v12 < 0 )
            {
              v4 = v27 | 0x8000000;
              v27 |= 0x8000000uLL;
            }
          }
          if ( (*(_QWORD *)(v1 + 280) & 0x1000000000LL) != 0
            && (int)ValidatePepPerformanceSymmetry(
                      *(unsigned int *)(v1 + 52),
                      *(_QWORD *)(v1 + 1192),
                      *(unsigned int *)(v7 + 52),
                      *(_QWORD *)(v7 + 1192)) < 0 )
          {
            v4 |= 0x1000000000uLL;
            v27 = v4;
          }
        }
        v18 = EnumerateNextDevice((__int64 *)v24, &v22);
        v6 = &WPP_RECORDER_INITIALIZED;
      }
      while ( !v18 );
    }
    ResetEnumerationContext((__int64 *)v24);
    if ( !(unsigned int)EnumerateNextDevice((__int64 *)v24, &v22) )
    {
      v19 = ~v4;
      do
        *(_QWORD *)(v22 + 280) &= v19;
      while ( !(unsigned int)EnumerateNextDevice((__int64 *)v24, &v22) );
    }
    v2 = (*(_QWORD *)(v1 + 280) & 0x10FF300000LL) == 0 ? 0xC0000001 : 0;
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C001F018);
  return v2;
}
