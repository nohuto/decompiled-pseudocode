/*
 * XREFs of ?NotifyStreamSuspensionStateChanged@CAudioSession@@UEAAJPEAVCAudioStream@@_N@Z @ 0x180017130
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _tlgKeywordOn @ 0x180020530 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180024B78 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ?reset@?$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180048A20 (-reset@-$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x1800DE5D0 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@.c)
 */

__int64 __fastcall CAudioSession::NotifyStreamSuspensionStateChanged(
        CAudioSession *this,
        struct CAudioStream *a2,
        char a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // rdi
  __int64 v7; // rcx
  struct CAudioStream **i; // rax
  struct CAudioStream *v9; // rbx
  int (__fastcall *v11)(char *, __int64 *); // rbx
  __int64 v12; // rcx
  __int64 v13; // rax
  _DWORD *v14; // rbx
  int v15; // r8d
  int v16; // r9d
  __int64 v17; // rax
  _DWORD *v18; // rsi
  int v19; // r8d
  int v20; // r9d
  __int64 v21; // [rsp+40h] [rbp-20h] BYREF
  __int64 v22; // [rsp+48h] [rbp-18h] BYREF
  _QWORD v23[2]; // [rsp+50h] [rbp-10h] BYREF
  char v24; // [rsp+90h] [rbp+30h] BYREF
  int v25; // [rsp+A8h] [rbp+48h] BYREF

  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 64);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
  for ( i = (struct CAudioStream **)*((_QWORD *)this + 14); i != *((struct CAudioStream ***)this + 15) && *i != a2; ++i )
    ;
  if ( i == *((struct CAudioStream ***)this + 15) )
  {
    v21 = 0LL;
    v11 = *(int (__fastcall **)(char *, __int64 *))(*((_QWORD *)a2 + 1) + 24LL);
    wil::com_ptr_t<IVolumeStrip,wil::err_returncode_policy>::reset(&v21);
    if ( v11((char *)a2 + 8, &v21) >= 0 )
    {
      v13 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
              v12,
              _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
      v14 = *(_DWORD **)(v13 + 8);
      if ( *v14 > 4u )
      {
        if ( (unsigned __int8)tlgKeywordOn(*(_QWORD *)(v13 + 8), 512LL) )
        {
          v24 = a3;
          v25 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v21 + 40LL))(v21);
          v22 = *((_QWORD *)this + 82);
          v23[0] = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)a2 + 1) + 80LL))((char *)a2 + 8);
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>>(
            (_DWORD)v14,
            (unsigned int)&unk_1801915CF,
            v15,
            v16,
            (__int64)v23,
            (__int64)&v22,
            (__int64)&v25,
            (__int64)&v24);
        }
      }
    }
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v21);
    if ( v6 )
      LeaveCriticalSection(v6);
    return 2290679812LL;
  }
  else
  {
    v9 = *i;
    if ( *((_BYTE *)*i + 136) != a3 )
    {
      v17 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
              v7,
              _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
      v18 = *(_DWORD **)(v17 + 8);
      if ( *v18 > 4u && (unsigned __int8)tlgKeywordOn(*(_QWORD *)(v17 + 8), 512LL) )
      {
        v24 = a3;
        v25 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v9 + 9) + 40LL))(*((_QWORD *)v9 + 9));
        v23[0] = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)v9 + 8) + 8LL) + 64LL))(*((_QWORD *)v9 + 8) + 8LL);
        v22 = (*(__int64 (__fastcall **)(__int64))(*((_QWORD *)v9 + 1) + 80LL))((__int64)v9 + 8);
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>>(
          (_DWORD)v18,
          (unsigned int)&unk_180191A5F,
          v19,
          v20,
          (__int64)&v22,
          (__int64)v23,
          (__int64)&v25,
          (__int64)&v24);
      }
      *((_BYTE *)v9 + 136) = a3;
    }
    if ( v6 )
      LeaveCriticalSection(v6);
    return 0LL;
  }
}
