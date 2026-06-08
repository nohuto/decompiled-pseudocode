/*
 * XREFs of RegisterWmi @ 0x1C0025EEC
 * Callers:
 *     EvtDevicePrepareHardware @ 0x1C0022C40 (EvtDevicePrepareHardware.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0002BC0 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_d @ 0x1C0004950 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C000C450 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C000C7C0 (memset.c)
 */

__int64 __fastcall RegisterWmi(_DWORD *a1)
{
  __int64 v2; // rax
  __int64 v3; // r14
  int v4; // eax
  __int64 i; // rdi
  __int128 *v6; // rax
  __int128 v7; // xmm0
  int v8; // ebx
  unsigned __int16 v9; // r9
  unsigned int j; // edi
  __int128 v12; // xmm0
  __int64 v13; // rsi
  __int64 v14; // [rsp+30h] [rbp-A1h]
  _QWORD v15[2]; // [rsp+38h] [rbp-99h] BYREF
  _OWORD v16[4]; // [rsp+48h] [rbp-89h] BYREF
  _OWORD v17[2]; // [rsp+88h] [rbp-49h] BYREF
  __int64 v18; // [rsp+A8h] [rbp-29h]
  void *v19; // [rsp+B0h] [rbp-21h]
  _QWORD v20[5]; // [rsp+B8h] [rbp-19h]
  __int128 v21; // [rsp+E0h] [rbp+Fh] BYREF
  __int64 v22; // [rsp+F0h] [rbp+1Fh]
  wchar_t v23; // [rsp+F8h] [rbp+27h]

  v23 = aProcessorwmi[12];
  v15[1] = &v21;
  v19 = &ProcessorPerfStateEvent_GUID;
  v20[0] = a1 + 166;
  v20[1] = &ProcessorCStateEvent_GUID;
  v20[2] = a1 + 170;
  v20[3] = &ProcessorThrottleStateEvent_GUID;
  v20[4] = a1 + 174;
  memset(v16, 0, 60);
  v15[0] = 1703960LL;
  v22 = *(_QWORD *)L"RWMI";
  v21 = *(_OWORD *)L"PROCESSORWMI";
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _DWORD *))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, a1);
  a1[172] = 0;
  v3 = v2;
  a1[168] = 4;
  a1[176] = 4;
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 328))(
         WdfDriverGlobals,
         v2,
         v15);
  if ( v4 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      4u,
      0xAu,
      (__int64)&WPP_03f51a9042f5341de75bcf077a49bb6a_Traceguids,
      v4);
  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    if ( (unsigned int)i >= 4 )
    {
      for ( j = 0; ; ++j )
      {
        if ( j >= 3 )
          return 0LL;
        memset(v17, 0, sizeof(v17));
        v18 = 0LL;
        LODWORD(v17[0]) = 40;
        v12 = *(_OWORD *)v20[2 * j - 1];
        DWORD1(v17[1]) = 2;
        *(_OWORD *)((char *)v17 + 4) = v12;
        memset(v16, 0, sizeof(v16));
        *(_QWORD *)&v16[1] = v17;
        LODWORD(v16[0]) = 64;
        v13 = v20[2 * j];
        BYTE9(v16[1]) = 1;
        v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *, _QWORD, __int64))(WdfFunctions_01015
                                                                                                + 2984))(
               WdfDriverGlobals,
               v3,
               v16,
               0LL,
               v13);
        if ( v8 < 0 )
          break;
        *(_BYTE *)(v13 + 12) = 1;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (unsigned int)v8;
      v9 = 12;
      goto LABEL_10;
    }
    v18 = 0LL;
    v6 = (__int128 *)*(&off_1C000D000 + 3 * i);
    memset(v17, 0, sizeof(v17));
    LODWORD(v17[0]) = 40;
    v7 = *v6;
    DWORD2(v17[1]) = *((_DWORD *)&off_1C000D000 + 6 * i + 4);
    *(_OWORD *)((char *)v17 + 4) = v7;
    memset(v16, 0, sizeof(v16));
    *(_QWORD *)&v16[1] = v17;
    LODWORD(v16[0]) = 64;
    *(_QWORD *)&v16[2] = *(&off_1C000D000 + 3 * i + 1);
    BYTE9(v16[1]) = 1;
    v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *, _QWORD, _QWORD))(WdfFunctions_01015 + 2984))(
           WdfDriverGlobals,
           v3,
           v16,
           0LL,
           0LL);
    if ( v8 < 0 )
      break;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    return (unsigned int)v8;
  v9 = 11;
LABEL_10:
  LODWORD(v14) = v8;
  WPP_RECORDER_SF_d(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    2u,
    4u,
    v9,
    (__int64)&WPP_03f51a9042f5341de75bcf077a49bb6a_Traceguids,
    v14);
  return (unsigned int)v8;
}
