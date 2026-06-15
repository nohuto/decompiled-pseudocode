/*
 * XREFs of ?CreateBridgeSourceStreamForMicInjection@CBridgeStreamInstanceProxy@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIStreamInstanceProxy@@PEAUSystemAudioStream@@@Z @ 0x180073700
 * Callers:
 *     <none>
 * Callees:
 *     ?Provider@AudioSrvTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ @ 0x180024898 (-Provider@AudioSrvTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ.c)
 *     _lambda_35737e3609a2bbc950aa37b2f22ff221_::operator() @ 0x18007332C (_lambda_35737e3609a2bbc950aa37b2f22ff221_--operator().c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@44@Z @ 0x1800D7D48 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U2@U2@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 */

__int64 __fastcall CBridgeStreamInstanceProxy::CreateBridgeSourceStreamForMicInjection(
        CBridgeStreamInstanceProxy *this,
        struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *a2,
        struct IStreamInstanceProxy *a3,
        struct SystemAudioStream *a4)
{
  char *v4; // rsi
  unsigned int v6; // ebx
  __int64 v7; // rcx
  const struct _tlgProvider_t *v8; // r14
  __int64 v9; // rax
  __int64 v10; // rcx
  int v11; // r8d
  int v12; // r9d
  __int64 v14; // [rsp+40h] [rbp-40h] BYREF
  __int64 v15; // [rsp+48h] [rbp-38h] BYREF
  char *v16; // [rsp+50h] [rbp-30h] BYREF
  __int64 v17[5]; // [rsp+58h] [rbp-28h] BYREF
  unsigned int v18; // [rsp+B0h] [rbp+30h] BYREF
  struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *v19; // [rsp+B8h] [rbp+38h] BYREF
  struct IStreamInstanceProxy *v20; // [rsp+C0h] [rbp+40h] BYREF
  struct SystemAudioStream *v21; // [rsp+C8h] [rbp+48h] BYREF

  v21 = a4;
  v20 = a3;
  v19 = a2;
  v4 = (char *)this - 40;
  v17[0] = (__int64)this - 40;
  v17[1] = (__int64)&v20;
  v17[2] = (__int64)&v19;
  v17[3] = (__int64)&v21;
  v6 = lambda_35737e3609a2bbc950aa37b2f22ff221_::operator()(v17);
  v8 = AudioSrvTelemetryProvider::Provider(v7);
  if ( *(_DWORD *)v8 > 4u )
  {
    v9 = (*(__int64 (__fastcall **)(struct IStreamInstanceProxy *))(*(_QWORD *)v20 + 104LL))(v20);
    v10 = *((_QWORD *)this - 1);
    v14 = v9;
    v15 = v10;
    v16 = v4;
    v18 = v6;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
      (_DWORD)v8,
      (unsigned int)&unk_180192AF3,
      v11,
      v12,
      (__int64)&v18,
      (__int64)&v16,
      (__int64)&v15,
      (__int64)&v14);
  }
  return v6;
}
