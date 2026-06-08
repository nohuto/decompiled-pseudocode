/*
 * XREFs of RegisterWmi @ 0x1C0027794
 * Callers:
 *     EvtDevicePrepareHardware @ 0x1C00276A0 (EvtDevicePrepareHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C000325C (WPP_RECORDER_SF_D.c)
 *     __security_check_cookie @ 0x1C0003770 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004250 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00045C0 (memset.c)
 */

__int64 __fastcall RegisterWmi(_DWORD *a1)
{
  __int64 v2; // rax
  __int64 v3; // r15
  int v4; // eax
  unsigned int v5; // edi
  _DWORD *v6; // rbx
  __int128 *v7; // rax
  __int128 v8; // xmm0
  int v9; // esi
  unsigned int v10; // ebx
  __int64 *i; // rdi
  __int128 v12; // xmm0
  __int64 v13; // r14
  __int64 v15; // [rsp+30h] [rbp-A1h]
  _QWORD v16[2]; // [rsp+38h] [rbp-99h] BYREF
  _QWORD v17[8]; // [rsp+48h] [rbp-89h] BYREF
  _OWORD v18[2]; // [rsp+88h] [rbp-49h] BYREF
  __int64 v19; // [rsp+A8h] [rbp-29h]
  void *v20; // [rsp+B0h] [rbp-21h]
  _QWORD v21[5]; // [rsp+B8h] [rbp-19h] BYREF
  __int128 v22; // [rsp+E0h] [rbp+Fh] BYREF
  __int64 v23; // [rsp+F0h] [rbp+1Fh]
  wchar_t v24; // [rsp+F8h] [rbp+27h]

  HIDWORD(v17[0]) = 0;
  v24 = aProcessorwmi[12];
  v16[1] = &v22;
  v20 = &ProcessorPerfStateEvent_GUID;
  v21[0] = a1 + 166;
  v21[1] = &ProcessorCStateEvent_GUID;
  v21[2] = a1 + 170;
  v21[3] = &ProcessorThrottleStateEvent_GUID;
  v21[4] = a1 + 174;
  v22 = *(_OWORD *)L"PROCESSORWMI";
  v16[0] = 1703960LL;
  v23 = *(_QWORD *)L"RWMI";
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _DWORD *))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, a1);
  a1[172] = 0;
  v3 = v2;
  a1[168] = 4;
  a1[176] = 4;
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 328))(
         WdfDriverGlobals,
         v2,
         v16);
  if ( v4 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      4u,
      0xAu,
      (__int64)&WPP_03f51a9042f5341de75bcf077a49bb6a_Traceguids,
      v4);
  v5 = 0;
  v6 = &unk_1C0010410;
  do
  {
    v19 = 0LL;
    v7 = (__int128 *)*((_QWORD *)v6 - 2);
    memset(v18, 0, sizeof(v18));
    LODWORD(v18[0]) = 40;
    v8 = *v7;
    DWORD2(v18[1]) = *v6;
    *(_OWORD *)((char *)v18 + 4) = v8;
    memset(v17, 0, sizeof(v17));
    v17[2] = v18;
    v17[4] = *((_QWORD *)v6 - 1);
    LODWORD(v17[0]) = 64;
    BYTE1(v17[3]) = 1;
    v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *, _QWORD, _QWORD))(WdfFunctions_01015 + 2984))(
           WdfDriverGlobals,
           v3,
           v17,
           0LL,
           0LL);
    if ( v9 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v15) = v9;
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          4u,
          0xBu,
          (__int64)&WPP_03f51a9042f5341de75bcf077a49bb6a_Traceguids,
          v15);
      }
      return (unsigned int)v9;
    }
    ++v5;
    v6 += 6;
  }
  while ( v5 < 4 );
  v10 = 0;
  for ( i = v21; ; i += 2 )
  {
    memset(v18, 0, sizeof(v18));
    LODWORD(v18[0]) = 40;
    v19 = 0LL;
    v12 = *(_OWORD *)*(i - 1);
    DWORD1(v18[1]) = 2;
    *(_OWORD *)((char *)v18 + 4) = v12;
    memset(v17, 0, sizeof(v17));
    v13 = *i;
    v17[2] = v18;
    LODWORD(v17[0]) = 64;
    BYTE1(v17[3]) = 1;
    v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *, _QWORD, __int64))(WdfFunctions_01015 + 2984))(
           WdfDriverGlobals,
           v3,
           v17,
           0LL,
           v13);
    if ( v9 < 0 )
      break;
    ++v10;
    *(_BYTE *)(v13 + 12) = 1;
    if ( v10 >= 3 )
      return 0LL;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v15) = v9;
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      4u,
      0xCu,
      (__int64)&WPP_03f51a9042f5341de75bcf077a49bb6a_Traceguids,
      v15);
  }
  return (unsigned int)v9;
}
