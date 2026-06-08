/*
 * XREFs of InitPep @ 0x1C003B268
 * Callers:
 *     ProcLibDeviceStart @ 0x1C002C914 (ProcLibDeviceStart.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0004950 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C000C450 (_guard_dispatch_icall_nop.c)
 *     RegisterPepDevice @ 0x1C003B99C (RegisterPepDevice.c)
 */

__int64 __fastcall InitPep(__int64 a1)
{
  int v2; // esi
  _QWORD *v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rcx
  int v6; // eax
  char v7; // dl
  char v9; // [rsp+40h] [rbp+8h] BYREF

  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 208),
    0LL);
  v2 = RegisterPepDevice(a1);
  if ( v2 >= 0 )
  {
    v3 = (_QWORD *)(a1 + 1120);
    if ( !*(_DWORD *)(a1 + 80) )
      ((void (__fastcall *)(_QWORD, _QWORD))qword_1C0012838)(*(unsigned int *)(a1 + 56), *v3);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      qword_1C00124D8,
      0LL);
    if ( !PepLpiInitialized )
    {
      v4 = *(_QWORD *)(a1 + 280);
      if ( (v4 & 0x100000000000LL) != 0 && (v4 & 0xE0000000000LL) != 0 )
      {
        v5 = *v3;
        v9 = 0;
        v6 = PoFxProcessorNotification(v5, 34LL, &v9);
        v7 = 0;
        if ( v6 >= 0 )
          v7 = v9;
        PepLpiDisabled = v7;
      }
      PepLpiInitialized = 1;
    }
    if ( PepLpiDisabled )
      *(_QWORD *)(a1 + 280) &= 0xFFFFE1FFFFFFFFFFuLL;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
      WdfDriverGlobals,
      qword_1C00124D8);
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
