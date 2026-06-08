/*
 * XREFs of QueryPepCapabilites @ 0x1C003A718
 * Callers:
 *     ProcLibDeviceStart @ 0x1C002BB68 (ProcLibDeviceStart.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00029DC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00045A0 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C000BB10 (_guard_dispatch_icall_nop.c)
 *     ProcLibTraceQueryCapabilities @ 0x1C001EB6C (ProcLibTraceQueryCapabilities.c)
 *     ProcLibTraceGetPlatformIdleStates @ 0x1C001F730 (ProcLibTraceGetPlatformIdleStates.c)
 *     PepNotifyProcessorLpiStates @ 0x1C0036280 (PepNotifyProcessorLpiStates.c)
 *     PepQueryVetoList @ 0x1C003713C (PepQueryVetoList.c)
 *     PepNotifyQueryCapabilities @ 0x1C003A514 (PepNotifyQueryCapabilities.c)
 */

__int64 __fastcall QueryPepCapabilites(__int64 a1)
{
  __int64 v2; // rdx
  int VetoList; // edi
  void (__fastcall *v4)(PWDF_DRIVER_GLOBALS, __int64, _QWORD); // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  int v7; // ecx
  int v9; // [rsp+30h] [rbp-18h] BYREF
  _DWORD v10[5]; // [rsp+34h] [rbp-14h] BYREF
  char v11; // [rsp+80h] [rbp+38h] BYREF
  char v12; // [rsp+88h] [rbp+40h] BYREF
  char v13; // [rsp+90h] [rbp+48h] BYREF
  int v14; // [rsp+98h] [rbp+50h] BYREF

  v2 = *(_QWORD *)(a1 + 208);
  VetoList = 0;
  v9 = 0;
  v4 = *(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504);
  v10[0] = 0;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v4(WdfDriverGlobals, v2, 0LL);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C0011458,
    0LL);
  if ( !PepPlatformStatesQueried )
  {
    if ( (*(_QWORD *)(a1 + 280) & 0x300000300LL) != 0 )
    {
      v5 = *(_QWORD *)(a1 + 1120);
      v14 = 0;
      if ( (int)PoFxProcessorNotification(v5, 16LL, &v14) >= 0 )
        dword_1C0011A9C = v14;
      ProcLibTraceGetPlatformIdleStates(0);
    }
    PepPlatformStatesQueried = 1;
    VetoList = PepQueryVetoList(a1);
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C0011458);
  if ( VetoList >= 0 )
  {
    if ( _bittest64((const signed __int64 *)(a1 + 280), 0x2Cu) )
      PepNotifyProcessorLpiStates(a1);
    VetoList = PepNotifyQueryCapabilities(a1, v10, &v13, &v9, &v12, &v11);
    if ( VetoList >= 0 )
    {
      *(_BYTE *)(a1 + 1138) = v11;
      *(_BYTE *)(a1 + 1137) = v12;
      *(_DWORD *)(a1 + 1128) = v9;
      *(_DWORD *)(a1 + 1132) = v10[0];
      *(_BYTE *)(a1 + 1136) = v13;
      ProcLibTraceQueryCapabilities(a1, 0);
      v6 = *(_QWORD *)(a1 + 280);
      v7 = *(_DWORD *)(a1 + 1132);
      if ( (v6 & 0x100000000000LL) != 0 )
      {
        if ( v7 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              2u,
              1u,
              0xCu,
              (__int64)&WPP_d8fc40cfe1e5329dd388ef68cabc8a2c_Traceguids);
          *(_DWORD *)(a1 + 1132) = 0;
        }
      }
      else if ( !v7 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          WPP_RECORDER_SF_(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            4u,
            2u,
            0xDu,
            (__int64)&WPP_d8fc40cfe1e5329dd388ef68cabc8a2c_Traceguids);
          v6 = *(_QWORD *)(a1 + 280);
        }
        *(_QWORD *)(a1 + 280) = v6 & 0xFFFFFFFCFFFFFCFFuLL;
      }
      if ( !*(_BYTE *)(a1 + 1137) && !*(_DWORD *)(a1 + 1128) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            4u,
            2u,
            0xEu,
            (__int64)&WPP_d8fc40cfe1e5329dd388ef68cabc8a2c_Traceguids);
        *(_QWORD *)(a1 + 280) &= ~0x1000000000uLL;
      }
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      3u,
      0xBu,
      (__int64)&WPP_d8fc40cfe1e5329dd388ef68cabc8a2c_Traceguids,
      VetoList);
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 208));
  return (unsigned int)VetoList;
}
