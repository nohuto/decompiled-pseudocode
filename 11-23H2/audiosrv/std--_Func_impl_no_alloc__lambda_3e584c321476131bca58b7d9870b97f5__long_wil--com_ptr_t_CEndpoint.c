/*
 * XREFs of std::_Func_impl_no_alloc__lambda_3e584c321476131bca58b7d9870b97f5__long_wil::com_ptr_t_CEndpointStore_wil::err_returncode_policy__&_::_Do_call @ 0x180048110
 * Callers:
 *     <none>
 * Callees:
 *     _tlgKeywordOn @ 0x180020530 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180024B78 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ?reset@?$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180048A20 (-reset@-$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??$Write@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@@Z @ 0x18004B3A4 (--$Write@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::_Func_impl_no_alloc__lambda_3e584c321476131bca58b7d9870b97f5__long_wil::com_ptr_t_CEndpointStore_wil::err_returncode_policy____::_Do_call(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v4; // rcx
  struct _RTL_CRITICAL_SECTION *v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rcx
  _DWORD *v9; // rcx
  int v10; // ecx
  int v11; // r8d
  int v12; // r9d
  struct _RTL_CRITICAL_SECTION *v13; // rax
  struct _RTL_CRITICAL_SECTION *v14; // [rsp+40h] [rbp+8h] BYREF

  v4 = (_QWORD *)(*(_QWORD *)a2 + 16LL);
  if ( *(_QWORD *)(*(_QWORD *)a2 + 40LL) >= 8uLL )
    v4 = (_QWORD *)*v4;
  if ( (unsigned int)GetSessionIdFromEndpointId(v4) == **(_DWORD **)(a1 + 8) )
  {
    v6 = (struct _RTL_CRITICAL_SECTION *)(*(_QWORD *)a2 + 112LL);
    EnterCriticalSection(v6);
    v14 = v6;
    v7 = *(_QWORD *)(*(_QWORD *)a2 + 152LL);
    if ( v7 )
    {
      if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v7 + 32LL))(v7) != **(_DWORD **)(a1 + 16) )
      {
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)a2 + 152LL) + 264LL))(*(_QWORD *)(*(_QWORD *)a2 + 152LL));
        wil::com_ptr_t<IVolumeStrip,wil::err_returncode_policy>::reset(*(_QWORD *)a2 + 152LL);
        v9 = (_DWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                         v8,
                         _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)[1];
        if ( *v9 > 4u )
        {
          if ( tlgKeywordOn((__int64)v9, 2LL) )
          {
            v13 = (struct _RTL_CRITICAL_SECTION *)(*(_QWORD *)a2 + 16LL);
            if ( *(_QWORD *)(*(_QWORD *)a2 + 40LL) >= 8uLL )
              v13 = (struct _RTL_CRITICAL_SECTION *)v13->DebugInfo;
            v14 = v13;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>>(
              v10,
              (unsigned int)&unk_180194773,
              v11,
              v12,
              (__int64)&v14);
          }
        }
      }
    }
    if ( v6 )
      LeaveCriticalSection(v6);
  }
  return 0LL;
}
