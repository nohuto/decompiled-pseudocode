/*
 * XREFs of ?CreateStream@CStreamInstanceProxy@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSystemAudioStream@@@Z @ 0x180048460
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180024B78 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@4@Z @ 0x180048508 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     _lambda_2b2683a8448ebb10882635d39a043dfb_::operator() @ 0x180073164 (_lambda_2b2683a8448ebb10882635d39a043dfb_--operator().c)
 */

__int64 __fastcall CStreamInstanceProxy::CreateStream(
        CStreamInstanceProxy *this,
        struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *a2,
        struct IAudioGraphCallback *a3,
        struct SystemAudioStream *a4)
{
  char *v4; // rsi
  unsigned int v6; // ebx
  __int64 v7; // rcx
  _DWORD *v8; // rcx
  int v9; // r8d
  int v10; // r9d
  __int64 v12; // [rsp+40h] [rbp-38h] BYREF
  char *v13; // [rsp+48h] [rbp-30h] BYREF
  _QWORD v14[5]; // [rsp+50h] [rbp-28h] BYREF
  unsigned int v15; // [rsp+A0h] [rbp+28h] BYREF
  struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *v16; // [rsp+A8h] [rbp+30h] BYREF
  struct IAudioGraphCallback *v17; // [rsp+B0h] [rbp+38h] BYREF
  struct SystemAudioStream *v18; // [rsp+B8h] [rbp+40h] BYREF

  v18 = a4;
  v17 = a3;
  v16 = a2;
  v4 = (char *)this - 40;
  v14[0] = (char *)this - 40;
  v14[1] = &v16;
  v14[2] = &v17;
  v14[3] = &v18;
  v6 = lambda_2b2683a8448ebb10882635d39a043dfb_::operator()(v14);
  v8 = (_DWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                   v7,
                   _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)[1];
  if ( *v8 > 4u )
  {
    v12 = *((_QWORD *)this - 1);
    v13 = v4;
    v15 = v6;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
      (_DWORD)v8,
      (unsigned int)&unk_180192C09,
      v9,
      v10,
      (__int64)&v15,
      (__int64)&v13,
      (__int64)&v12);
  }
  return v6;
}
