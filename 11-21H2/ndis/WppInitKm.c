/*
 * XREFs of WppInitKm @ 0x1C0115358
 * Callers:
 *     ?ndisWppInitTracingEx@@YAXPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@@Z @ 0x1C0033594 (-ndisWppInitTracingEx@@YAXPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0036040 (_guard_dispatch_icall_nop.c)
 */

void __fastcall WppInitKm(__int64 a1, __int64 a2)
{
  _DEVICE_OBJECT *v4; // rbx
  void (__fastcall *v5)(_DRIVER_OBJECT *, _QWORD, void (__fastcall *)(const struct _GUID *, __int64, __int64, __int64), _DEVICE_OBJECT *, _VPB **); // rax

  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_MAIN_CB )
  {
    WPP_GLOBAL_Control = &WPP_MAIN_CB;
    if ( WPPTraceSuite == 4 )
    {
      v4 = &WPP_MAIN_CB;
      do
      {
        v5 = (void (__fastcall *)(_DRIVER_OBJECT *, _QWORD, void (__fastcall *)(const struct _GUID *, __int64, __int64, __int64), _DEVICE_OBJECT *, _VPB **))pfnEtwRegisterClassicProvider;
        v4->Vpb = 0LL;
        v5(v4->DriverObject, 0LL, WppClassicProviderCallback, v4, &v4->Vpb);
        v4 = v4->NextDevice;
      }
      while ( v4 );
    }
    else if ( WPPTraceSuite == 2 )
    {
      *(_QWORD *)&WPP_MAIN_CB.Type = &WppTraceCallback;
      IoWMIRegistrationControl(&WPP_MAIN_CB, 0x80010001);
    }
    WppAutoLogStart(WPP_GLOBAL_Control, a1, a2);
    *(_QWORD *)&WPP_RECORDER_INITIALIZED = &WPP_MAIN_CB;
  }
}
