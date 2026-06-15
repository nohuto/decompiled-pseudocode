/*
 * XREFs of ?IsEnabled@AudioDgTelemetryProvider@@SA_NE_K@Z @ 0x1400033CC
 * Callers:
 *     ?CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@AEAV?$unique_ptr@VCPipeInstance@@U?$default_delete@VCPipeInstance@@@wistd@@@wistd@@@Z @ 0x14000B1F4 (-CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PE.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1400035C8 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAAPEAVAudioDgTelemetryProvider@@P6AXXZ@Z @ 0x140019CB0 (-get@-$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAAPEAVAudioDgTelemetryProvider@@P6.c)
 */

char __fastcall AudioDgTelemetryProvider::IsEnabled(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // r8
  char v3; // r9
  _DWORD *v4; // rcx

  v1 = wil::details::static_lazy<AudioDgTelemetryProvider>::get(
         a1,
         _lambda_5306e8013c9084f1ba6b78d0c08c093f_::_lambda_invoker_cdecl_);
  v3 = 0;
  v4 = *(_DWORD **)(v1 + 8);
  if ( v4 && *v4 > 4u )
    return (unsigned __int8)tlgKeywordOn(v4, 0x400000000000LL, v2, 0LL) != 0;
  return v3;
}
