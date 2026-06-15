/*
 * XREFs of ?SetPolicyVolume@CAudioStream@@QEAAJM_J_N@Z @ 0x180009E80
 * Callers:
 *     ?SetVolumeAllStreams@CAudioSession@@IEAAXW4AudioVolumeChangeType@@_NMIPEAM_J@Z @ 0x180009760 (-SetVolumeAllStreams@CAudioSession@@IEAAXW4AudioVolumeChangeType@@_NMIPEAM_J@Z.c)
 *     ?AddStream@CPerStreamVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z @ 0x180009CA0 (-AddStream@CPerStreamVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z.c)
 *     ?AddStream@CPerEndpointVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z @ 0x1800DF0D0 (-AddStream@CPerEndpointVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z.c)
 * Callees:
 *     ?RecalculateVolume@CAudioStream@@QEAAJ_N_J@Z @ 0x180018874 (-RecalculateVolume@CAudioStream@@QEAAJ_N_J@Z.c)
 *     _tlgKeywordOn @ 0x180020530 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180024B78 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@3@Z @ 0x1800822C8 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U1@@-$_tlgWriteTempl.c)
 */

__int64 __fastcall CAudioStream::SetPolicyVolume(CAudioStream *this, float a2, __int64 a3, char a4)
{
  bool v4; // zf
  __int64 v8; // rax
  _DWORD *v9; // rdi
  int v10; // eax
  __int64 v11; // rcx
  int v12; // r8d
  int v13; // r9d
  int v14; // eax
  unsigned int v15; // ebx
  int v16; // [rsp+20h] [rbp-48h]
  __int64 v17; // [rsp+40h] [rbp-28h] BYREF
  __int64 v18[4]; // [rsp+48h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  int v20; // [rsp+70h] [rbp+8h] BYREF
  int v21; // [rsp+78h] [rbp+10h]
  int v22; // [rsp+80h] [rbp+18h] BYREF

  v21 = LODWORD(a2);
  v4 = a2 == *((float *)this + 26);
  *((_QWORD *)this + 14) = a3;
  if ( v4 )
    return 0LL;
  v4 = *((_QWORD *)this + 8) == 0LL;
  *((float *)this + 26) = a2;
  if ( !v4 )
  {
    v8 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
           this,
           _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    v9 = *(_DWORD **)(v8 + 8);
    if ( *v9 > 4u )
    {
      if ( (unsigned __int8)tlgKeywordOn(*(_QWORD *)(v8 + 8), 2LL) )
      {
        v10 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 9) + 40LL))(*((_QWORD *)this + 9));
        v11 = *((_QWORD *)this + 8) + 8LL;
        v20 = v10;
        v17 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 64LL))(v11);
        v18[0] = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 1) + 80LL))((char *)this + 8);
        v22 = v21;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
          (_DWORD)v9,
          (unsigned int)&unk_180191A07,
          v12,
          v13,
          (__int64)&v22,
          (__int64)v18,
          (__int64)&v17,
          (__int64)&v20);
      }
    }
  }
  if ( !a4 )
    return 0LL;
  v14 = CAudioStream::RecalculateVolume(this, 0, 0LL);
  v15 = v14;
  if ( v14 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x3CE,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
    (const char *)(unsigned int)v14,
    v16);
  return v15;
}
