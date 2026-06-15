/*
 * XREFs of ?IsEnabled@AudioDgTelemetryProvider@@SA_NE_K@Z @ 0x14001E6E8
 * Callers:
 *     ?CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@AEAV?$unique_ptr@VCPipeInstance@@U?$default_delete@VCPipeInstance@@@wistd@@@wistd@@@Z @ 0x14001CF18 (-CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PE.c)
 * Callees:
 *     _tlgKeywordOn @ 0x140008E90 (_tlgKeywordOn.c)
 *     atexit @ 0x140028478 (atexit.c)
 *     ??1Completer@?$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x140050464 (--1Completer@-$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAA@XZ.c)
 */

char __fastcall AudioDgTelemetryProvider::IsEnabled(char a1)
{
  char v1; // bl
  _DWORD *v2; // rcx
  union _RTL_RUN_ONCE *v4; // [rsp+20h] [rbp-18h] BYREF
  int v5; // [rsp+28h] [rbp-10h]
  WINBOOL v6; // [rsp+40h] [rbp+8h] BYREF
  __int64 *v7; // [rsp+48h] [rbp+10h] BYREF

  LOBYTE(v6) = a1;
  v1 = 0;
  v7 = 0LL;
  if ( __std_init_once_begin_initialize(&`AudioDgTelemetryProvider::Instance'::`2'::wrapper, 0, &v6, (LPVOID *)&v7)
    && v6 )
  {
    v4 = &`AudioDgTelemetryProvider::Instance'::`2'::wrapper;
    v7 = &qword_1400CF680;
    qword_1400CF680 = (__int64)&AudioDgTelemetryProvider::`vftable';
    qword_1400CF698 = (__int64)&`AudioDgTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_5306e8013c9084f1ba6b78d0c08c093f_::_lambda_invoker_cdecl_);
    v5 = 0;
    wil::details::static_lazy<AudioDgTelemetryProvider>::Completer::~Completer(&v4);
  }
  v2 = (_DWORD *)v7[1];
  if ( v2 && *v2 > 4u && tlgKeywordOn((__int64)v2, 0x400000000000LL) )
    return 1;
  return v1;
}
