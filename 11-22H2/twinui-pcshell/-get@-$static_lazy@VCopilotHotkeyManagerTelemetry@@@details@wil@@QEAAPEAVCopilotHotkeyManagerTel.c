/*
 * XREFs of ?get@?$static_lazy@VCopilotHotkeyManagerTelemetry@@@details@wil@@QEAAPEAVCopilotHotkeyManagerTelemetry@@P6AXXZ@Z @ 0x1806FDD6C
 * Callers:
 *     ??$InvokeCopilotHotkey@AEAW4IMMERSIVE_HOT_KEY_ID@@@CopilotHotkeyManagerTelemetry@@SAXAEAW4IMMERSIVE_HOT_KEY_ID@@@Z @ 0x1806FD1BC (--$InvokeCopilotHotkey@AEAW4IMMERSIVE_HOT_KEY_ID@@@CopilotHotkeyManagerTelemetry@@SAXAEAW4IMMERS.c)
 *     ?Provider@CopilotHotkeyManagerTelemetry@@SAQEBU_tlgProvider_t@@XZ @ 0x1806FDC50 (-Provider@CopilotHotkeyManagerTelemetry@@SAQEBU_tlgProvider_t@@XZ.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ @ 0x180084F18 (--1Completer@-$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x1801C6CEC (atexit.c)
 */

__int64 *__fastcall wil::details::static_lazy<CopilotHotkeyManagerTelemetry>::get(__int64 a1, void (__cdecl *a2)())
{
  __int64 v3; // rdx
  void (*v4)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  union _RTL_RUN_ONCE *v6; // [rsp+20h] [rbp-18h] BYREF
  int v7; // [rsp+28h] [rbp-10h]
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF
  __int64 *v9; // [rsp+50h] [rbp+18h] BYREF

  v8 = a1;
  v9 = 0LL;
  if ( __std_init_once_begin_initialize(
         &`CopilotHotkeyManagerTelemetry::Instance'::`2'::wrapper,
         0,
         (PBOOL)&v8,
         (LPVOID *)&v9)
    && (_DWORD)v8 )
  {
    v6 = &`CopilotHotkeyManagerTelemetry::Instance'::`2'::wrapper;
    v9 = &qword_180990268;
    qword_180990268 = (__int64)&ShellScreenClippingLogging::`vftable';
    qword_180990280 = (__int64)&`CopilotHotkeyManagerTelemetry::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(a2);
    v7 = 0;
    wil::details::static_lazy<DelayAllocateTLSLogging>::Completer::~Completer(&v6, v3, v4);
  }
  return v9;
}
