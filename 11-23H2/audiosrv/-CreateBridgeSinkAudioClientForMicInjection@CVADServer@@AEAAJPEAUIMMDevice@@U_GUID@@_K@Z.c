/*
 * XREFs of ?CreateBridgeSinkAudioClientForMicInjection@CVADServer@@AEAAJPEAUIMMDevice@@U_GUID@@_K@Z @ 0x180073B14
 * Callers:
 *     ?CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18000F420 (-CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180001008 (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlg.c)
 *     ?Provider@AudioSrvTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ @ 0x180024898 (-Provider@AudioSrvTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Emplace_reallocate@AEBV?$com_ptr_t@UIAudioClient@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIAudioClient@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAudioClient@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@UIAudioClient@@Uerr_returncode_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x180073888 (--$_Emplace_reallocate@AEBV-$com_ptr_t@UIAudioClient@@Uerr_returncode_policy@wil@@@wil@@@-$vecto.c)
 *     ??0?$com_ptr_t@UIAudioClient@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x180073A08 (--0-$com_ptr_t@UIAudioClient@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     ??1?$com_ptr_t@UIAudioClientInternal@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180073A44 (--1-$com_ptr_t@UIAudioClientInternal@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CVADServer::CreateBridgeSinkAudioClientForMicInjection(
        CVADServer *this,
        struct IMMDevice *a2,
        struct _GUID *a3,
        __int64 a4)
{
  struct IMMDeviceVtbl *lpVtbl; // rax
  HRESULT (__stdcall *Activate)(IMMDevice *, const IID *const, DWORD, PROPVARIANT *, void **); // rax
  int v9; // eax
  unsigned int v10; // edi
  const char *v11; // r9
  __int64 result; // rax
  int v13; // eax
  unsigned int v14; // edi
  __int64 v15; // rax
  int v16; // eax
  __int64 v17; // rcx
  unsigned int v18; // edi
  const struct _tlgProvider_t *v19; // rax
  __int64 v20; // r8
  __int64 v21; // r9
  int v22[2]; // [rsp+30h] [rbp-58h] BYREF
  __int64 *v23; // [rsp+38h] [rbp-50h] BYREF
  __int64 v24; // [rsp+40h] [rbp-48h] BYREF
  int v25[4]; // [rsp+50h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  lpVtbl = a2->lpVtbl;
  *(_QWORD *)v22 = 0LL;
  Activate = lpVtbl->Activate;
  try
  {
    v9 = ((__int64 (__fastcall *)(struct IMMDevice *))Activate)(a2);
    v10 = v9;
    if ( v9 >= 0 )
    {
      v23 = 0LL;
      v13 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 **))v22)(
              *(_QWORD *)v22,
              &GUID_c64f5665_8a09_4032_a580_80f345604ce1,
              &v23);
      v14 = v13;
      if ( v13 >= 0 )
      {
        v15 = *v23;
        *(struct _GUID *)v25 = *a3;
        v16 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64, _QWORD, int *))(v15 + 72))(
                v23,
                0LL,
                a4,
                *((_QWORD *)this + 19),
                v25);
        v18 = v16;
        if ( v16 >= 0 )
        {
          v19 = AudioSrvTelemetryProvider::Provider(v17);
          if ( *(_DWORD *)v19 > 4u )
          {
            v24 = a4;
            *(_QWORD *)v25 = a3;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByVal<8>>(
              (int)v19,
              (int)&unk_180193DA7,
              v20,
              v21,
              v25,
              (__int64)&v24);
          }
          if ( *((_QWORD *)this + 73) == *((_QWORD *)this + 74) )
          {
            std::vector<wil::com_ptr_t<IAudioClient,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<IAudioClient,wil::err_returncode_policy> const &>(
              (__int64 *)this + 72,
              *((_QWORD *)this + 73),
              (__int64)v22);
          }
          else
          {
            wil::com_ptr_t<IAudioClient,wil::err_returncode_policy>::com_ptr_t<IAudioClient,wil::err_returncode_policy>(
              *((__int64 **)this + 73),
              (__int64 *)v22);
            *((_QWORD *)this + 73) += 8LL;
          }
          wil::com_ptr_t<IAudioClientInternal,wil::err_returncode_policy>::~com_ptr_t<IAudioClientInternal,wil::err_returncode_policy>((__int64 *)&v23);
          wil::com_ptr_t<IAudioClientInternal,wil::err_returncode_policy>::~com_ptr_t<IAudioClientInternal,wil::err_returncode_policy>((__int64 *)v22);
          result = 0LL;
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x1558,
            (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
            (const char *)(unsigned int)v16);
          wil::com_ptr_t<IAudioClientInternal,wil::err_returncode_policy>::~com_ptr_t<IAudioClientInternal,wil::err_returncode_policy>((__int64 *)&v23);
          wil::com_ptr_t<IAudioClientInternal,wil::err_returncode_policy>::~com_ptr_t<IAudioClientInternal,wil::err_returncode_policy>((__int64 *)v22);
          result = v18;
        }
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1556,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
          (const char *)(unsigned int)v13);
        wil::com_ptr_t<IAudioClientInternal,wil::err_returncode_policy>::~com_ptr_t<IAudioClientInternal,wil::err_returncode_policy>((__int64 *)&v23);
        wil::com_ptr_t<IAudioClientInternal,wil::err_returncode_policy>::~com_ptr_t<IAudioClientInternal,wil::err_returncode_policy>((__int64 *)v22);
        result = v14;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1553,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)(unsigned int)v9);
      wil::com_ptr_t<IAudioClientInternal,wil::err_returncode_policy>::~com_ptr_t<IAudioClientInternal,wil::err_returncode_policy>((__int64 *)v22);
      result = v10;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x1564,
                           (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
                           v11);
  }
  return result;
}
