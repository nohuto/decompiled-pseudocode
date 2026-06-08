/*
 * XREFs of InitPep @ 0x1C003A2B8
 * Callers:
 *     ProcLibDeviceStart @ 0x1C002BB68 (ProcLibDeviceStart.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00045A0 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C000BB10 (_guard_dispatch_icall_nop.c)
 *     RegisterPepDevice @ 0x1C003A9F4 (RegisterPepDevice.c)
 */

__int64 __fastcall InitPep(__int64 a1)
{
  int v2; // edi
  __int64 v3; // rax
  __int64 v4; // rcx
  int v5; // eax
  char v6; // dl
  char v8; // [rsp+40h] [rbp+8h] BYREF

  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 208),
    0LL);
  v2 = RegisterPepDevice(a1);
  if ( v2 >= 0 )
  {
    if ( !*(_DWORD *)(a1 + 80) )
      ((void (__fastcall *)(_QWORD, _QWORD))qword_1C00117A8)(*(unsigned int *)(a1 + 56), *(_QWORD *)(a1 + 1120));
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      qword_1C0011458,
      0LL);
    if ( !PepLpiInitialized )
    {
      v3 = *(_QWORD *)(a1 + 280);
      if ( (v3 & 0x100000000000LL) != 0 && (v3 & 0xE0000000000LL) != 0 )
      {
        v4 = *(_QWORD *)(a1 + 1120);
        v8 = 0;
        v5 = PoFxProcessorNotification(v4, 34LL, &v8);
        v6 = 0;
        if ( v5 >= 0 )
          v6 = v8;
        PepLpiDisabled = v6;
      }
      PepLpiInitialized = 1;
    }
    if ( PepLpiDisabled )
      *(_QWORD *)(a1 + 280) &= 0xFFFFE1FFFFFFFFFFuLL;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
      WdfDriverGlobals,
      qword_1C0011458);
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      3u,
      0xAu,
      (__int64)&WPP_d8fc40cfe1e5329dd388ef68cabc8a2c_Traceguids,
      v2);
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 208));
  return (unsigned int)v2;
}
