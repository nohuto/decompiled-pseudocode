/*
 * XREFs of ?get@?$static_lazy@VAudioProcessingObjectTelemetryProvider@@@details@wil@@QEAAPEAVAudioProcessingObjectTelemetryProvider@@P6AXXZ@Z @ 0x1400678F4
 * Callers:
 *     ?ApoLog@CAPOServiceProvider@@UEAAXW4APO_LOG_LEVEL@@PEBGZZ @ 0x140067520 (-ApoLog@CAPOServiceProvider@@UEAAXW4APO_LOG_LEVEL@@PEBGZZ.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x14002DEC8 (--1Completer@-$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x14002FBF8 (atexit.c)
 */

__int64 *__fastcall wil::details::static_lazy<AudioProcessingObjectTelemetryProvider>::get(
        __int64 a1,
        void (__cdecl *a2)())
{
  __int64 v3; // rdx
  void (*v4)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  LPINIT_ONCE v6; // [rsp+20h] [rbp-18h] BYREF
  int v7; // [rsp+28h] [rbp-10h]
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF
  __int64 *v9; // [rsp+50h] [rbp+18h] BYREF

  v8 = a1;
  v9 = 0LL;
  if ( InitOnceBeginInitialize(
         &`AudioProcessingObjectTelemetryProvider::Instance'::`2'::wrapper,
         0,
         (PBOOL)&v8,
         (LPVOID *)&v9)
    && (_DWORD)v8 )
  {
    v6 = &`AudioProcessingObjectTelemetryProvider::Instance'::`2'::wrapper;
    v9 = &qword_1400C1798;
    qword_1400C1798 = (__int64)&AudioDgTelemetryProvider::`vftable';
    qword_1400C17B0 = (__int64)&`AudioProcessingObjectTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(a2);
    v7 = 0;
    wil::details::static_lazy<AudioDgTelemetryProvider>::Completer::~Completer(&v6, v3, v4);
  }
  return v9;
}
