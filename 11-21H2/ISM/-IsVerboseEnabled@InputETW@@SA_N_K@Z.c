/*
 * XREFs of ?IsVerboseEnabled@InputETW@@SA_N_K@Z @ 0x1800B2BE8
 * Callers:
 *     ?OnDeviceRemoval@InputStateManager@InputETW@@SAXPEAUDeviceInfo@@@Z @ 0x1800B2EA0 (-OnDeviceRemoval@InputStateManager@InputETW@@SAXPEAUDeviceInfo@@@Z.c)
 *     ?OnInputReport@InputStateManager@InputETW@@SAXPEAUInputInfo@@@Z @ 0x1800B3270 (-OnInputReport@InputStateManager@InputETW@@SAXPEAUInputInfo@@@Z.c)
 *     ?DeliverDeviceRemoval@InputTarget@InputETW@@SAXPEAUDeviceInfo@@@Z @ 0x1800E701C (-DeliverDeviceRemoval@InputTarget@InputETW@@SAXPEAUDeviceInfo@@@Z.c)
 *     ?DeliverInputReport@InputTarget@InputETW@@SAXPEAUInputInfo@@@Z @ 0x1800E7518 (-DeliverInputReport@InputTarget@InputETW@@SAXPEAUInputInfo@@@Z.c)
 *     ?CancelResize@Resize@InputETW@@SAXK@Z @ 0x180144CA4 (-CancelResize@Resize@InputETW@@SAXK@Z.c)
 *     ?StartManualResize@Resize@InputETW@@SAXKI@Z @ 0x1801470FC (-StartManualResize@Resize@InputETW@@SAXKI@Z.c)
 *     ?StartResize@Resize@InputETW@@SAXK@Z @ 0x18014747C (-StartResize@Resize@InputETW@@SAXK@Z.c)
 *     ?RequestUIAHitTest@UIAHitTest@InputETW@@SAXII_NU_GUID@@@Z @ 0x18019B98C (-RequestUIAHitTest@UIAHitTest@InputETW@@SAXII_NU_GUID@@@Z.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VInputETW@@@details@wil@@QEAA@XZ @ 0x180037D84 (--1Completer@-$static_lazy@VInputETW@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x18004A308 (atexit.c)
 */

char __fastcall InputETW::IsVerboseEnabled(__int64 a1)
{
  char v2; // bl
  __int64 v3; // rcx
  LPINIT_ONCE v5; // [rsp+20h] [rbp-18h] BYREF
  int v6; // [rsp+28h] [rbp-10h]
  WINBOOL v7; // [rsp+48h] [rbp+10h] BYREF
  __int64 *v8; // [rsp+50h] [rbp+18h] BYREF

  v2 = 0;
  v8 = 0LL;
  if ( __std_init_once_begin_initialize(&`InputETW::Instance'::`2'::wrapper, 0, &v7, (LPVOID *)&v8) && v7 )
  {
    v5 = &`InputETW::Instance'::`2'::wrapper;
    v8 = &qword_180242E40;
    qword_180242E40 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
    qword_180242E58 = (__int64)&`InputETW::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_ffe5d831185bf77c783480ebf240a46d_::_lambda_invoker_cdecl_);
    v6 = 0;
    wil::details::static_lazy<InputETW>::Completer::~Completer(&v5);
  }
  v3 = v8[1];
  if ( *(_DWORD *)v3 > 5u
    && (!a1 || (a1 & *(_QWORD *)(v3 + 16)) != 0 && (a1 & *(_QWORD *)(v3 + 24)) == *(_QWORD *)(v3 + 24)) )
  {
    return 1;
  }
  return v2;
}
