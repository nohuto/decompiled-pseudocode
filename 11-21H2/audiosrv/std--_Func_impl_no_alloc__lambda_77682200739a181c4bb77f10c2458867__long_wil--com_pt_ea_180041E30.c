/*
 * XREFs of std::_Func_impl_no_alloc__lambda_77682200739a181c4bb77f10c2458867__long_wil::com_ptr_t_CEndpointStore_wil::err_returncode_policy__&_::_Do_call @ 0x180041E30
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18000F4A4 (-reset@-$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180015934 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18002B390 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@@Z @ 0x1800C2254 (--$Write@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::_Func_impl_no_alloc__lambda_77682200739a181c4bb77f10c2458867__long_wil::com_ptr_t_CEndpointStore_wil::err_returncode_policy____::_Do_call(
        __int64 a1,
        __int64 a2)
{
  struct _RTL_CRITICAL_SECTION *v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  int v9; // r8d
  int v10; // r9d
  _QWORD *v11; // rax
  _QWORD *v12; // [rsp+40h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+48h] [rbp+10h] BYREF

  if ( (unsigned int)GetSessionIdFromEndpointId() == **(_DWORD **)(a1 + 8) )
  {
    v5 = (struct _RTL_CRITICAL_SECTION *)(*(_QWORD *)a2 + 112LL);
    EnterCriticalSection(v5);
    v13 = v5;
    v6 = *(_QWORD *)(*(_QWORD *)a2 + 152LL);
    if ( v6 )
    {
      if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v6 + 32LL))(v6) != **(_DWORD **)(a1 + 16) )
      {
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)a2 + 152LL) + 264LL))(*(_QWORD *)(*(_QWORD *)a2 + 152LL));
        wil::com_ptr_t<IVolumeStrip,wil::err_returncode_policy>::reset((__int64 *)(*(_QWORD *)a2 + 152LL));
        v8 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
               v7,
               _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)[1];
        if ( *(_DWORD *)v8 > 4u
          && (*(_BYTE *)(v8 + 16) & 2) != 0
          && (*(_QWORD *)(v8 + 24) & 2LL) == *(_QWORD *)(v8 + 24) )
        {
          v11 = (_QWORD *)(*(_QWORD *)a2 + 16LL);
          if ( *(_QWORD *)(*(_QWORD *)a2 + 40LL) >= 8uLL )
            v11 = (_QWORD *)*v11;
          v12 = v11;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>>(
            v8,
            (unsigned int)&unk_180188713,
            v9,
            v10,
            (__int64)&v12);
        }
      }
    }
    wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v13);
  }
  return 0LL;
}
