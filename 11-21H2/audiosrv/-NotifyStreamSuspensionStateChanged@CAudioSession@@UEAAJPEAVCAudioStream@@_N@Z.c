/*
 * XREFs of ?NotifyStreamSuspensionStateChanged@CAudioSession@@UEAAJPEAVCAudioStream@@_N@Z @ 0x180009B30
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18000F4A4 (-reset@-$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180015934 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18002B390 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x1800D52F0 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSession::NotifyStreamSuspensionStateChanged(
        CAudioSession *this,
        struct CAudioStream *a2,
        char a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // rbx
  struct CAudioStream **v7; // rcx
  struct CAudioStream **v8; // rax
  struct CAudioStream *v9; // rsi
  int (__fastcall *v11)(char *, __int64 *); // rbx
  __int64 v12; // rcx
  __int64 v13; // rbx
  int v14; // r8d
  int v15; // r9d
  __int64 v16; // rdi
  int v17; // r8d
  int v18; // r9d
  __int64 v19; // [rsp+40h] [rbp-38h] BYREF
  __int64 v20; // [rsp+48h] [rbp-30h] BYREF
  __int64 v21; // [rsp+50h] [rbp-28h] BYREF
  struct _RTL_CRITICAL_SECTION *v22; // [rsp+58h] [rbp-20h] BYREF
  char v23; // [rsp+80h] [rbp+8h] BYREF
  int v24; // [rsp+98h] [rbp+20h] BYREF

  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 64);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
  v22 = v6;
  v7 = (struct CAudioStream **)*((_QWORD *)this + 15);
  v8 = (struct CAudioStream **)*((_QWORD *)this + 14);
  if ( v8 == v7 )
  {
LABEL_8:
    v19 = 0LL;
    v11 = *(int (__fastcall **)(char *, __int64 *))(*((_QWORD *)a2 + 1) + 24LL);
    wil::com_ptr_t<IVolumeStrip,wil::err_returncode_policy>::reset(&v19);
    if ( v11((char *)a2 + 8, &v19) >= 0 )
    {
      v13 = *(_QWORD *)(wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                          v12,
                          _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
                      + 8);
      if ( *(_DWORD *)v13 > 4u
        && (*(_DWORD *)(v13 + 16) & 0x200LL) != 0
        && (*(_QWORD *)(v13 + 24) & 0x200LL) == *(_QWORD *)(v13 + 24) )
      {
        v23 = a3;
        v24 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v19 + 40LL))(v19);
        v21 = *((_QWORD *)this + 82);
        v20 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)a2 + 1) + 80LL))((char *)a2 + 8);
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>>(
          v13,
          (unsigned int)&unk_180188B1C,
          v14,
          v15,
          (__int64)&v20,
          (__int64)&v21,
          (__int64)&v24,
          (__int64)&v23);
      }
    }
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v19);
    wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v22);
    return 2290679812LL;
  }
  else
  {
    while ( 1 )
    {
      v9 = *v8;
      if ( *v8 == a2 )
        break;
      if ( ++v8 == v7 )
        goto LABEL_8;
    }
    if ( *((_BYTE *)v9 + 120) != a3 )
    {
      v16 = *(_QWORD *)(wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                          v7,
                          _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
                      + 8);
      if ( *(_DWORD *)v16 > 4u
        && (*(_DWORD *)(v16 + 16) & 0x200LL) != 0
        && (*(_QWORD *)(v16 + 24) & 0x200LL) == *(_QWORD *)(v16 + 24) )
      {
        v23 = a3;
        v24 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v9 + 9) + 40LL))(*((_QWORD *)v9 + 9));
        v20 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)v9 + 8) + 8LL) + 64LL))(*((_QWORD *)v9 + 8) + 8LL);
        v21 = (*(__int64 (__fastcall **)(__int64))(*((_QWORD *)v9 + 1) + 80LL))((__int64)v9 + 8);
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>>(
          v16,
          (unsigned int)&unk_180188EDE,
          v17,
          v18,
          (__int64)&v21,
          (__int64)&v20,
          (__int64)&v24,
          (__int64)&v23);
      }
      *((_BYTE *)v9 + 120) = a3;
    }
    if ( v6 )
      LeaveCriticalSection(v6);
    return 0LL;
  }
}
