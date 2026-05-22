/*
 * XREFs of ?RegisterProcessor@ContextualProcessorManager@@QEAAJPEAUIContextualProcessor@@W4InputSinkRequirement@1@@Z @ 0x180017D8C
 * Callers:
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x180035D10 (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x180002D48 (-InternalAddRef@-$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAX.c)
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x180015974 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?get@?$static_lazy@VInputETW@@@details@wil@@QEAAPEAVInputETW@@P6AXXZ@Z @ 0x18003F300 (-get@-$static_lazy@VInputETW@@@details@wil@@QEAAPEAVInputETW@@P6AXXZ@Z.c)
 *     ??$_Emplace_reallocate@UContextualProcessorEntry@ContextualProcessorManager@@@?$vector@UContextualProcessorEntry@ContextualProcessorManager@@V?$allocator@UContextualProcessorEntry@ContextualProcessorManager@@@std@@@std@@QEAAPEAUContextualProcessorEntry@ContextualProcessorManager@@QEAU23@$$QEAU23@@Z @ 0x18004A060 (--$_Emplace_reallocate@UContextualProcessorEntry@ContextualProcessorManager@@@-$vector@UContextu.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@@Z @ 0x1800C10F8 (--$Write@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ContextualProcessorManager::RegisterProcessor(__int64 a1, __int64 a2, int a3)
{
  __int64 v6; // rdx
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v11; // [rsp+30h] [rbp-18h] BYREF
  int v12; // [rsp+38h] [rbp-10h]
  __int64 v13; // [rsp+50h] [rbp+8h] BYREF

  v11 = a2;
  Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef(&v11);
  v12 = a3;
  v6 = *(_QWORD *)(a1 + 24);
  if ( v6 == *(_QWORD *)(a1 + 32) )
  {
    std::vector<ContextualProcessorManager::ContextualProcessorEntry>::_Emplace_reallocate<ContextualProcessorManager::ContextualProcessorEntry>(
      a1 + 16,
      v6,
      &v11);
  }
  else
  {
    *(_QWORD *)v6 = 0LL;
    if ( (__int64 *)v6 != &v11 )
    {
      *(_QWORD *)v6 = a2;
      v11 = 0LL;
    }
    *(_DWORD *)(v6 + 8) = a3;
    *(_QWORD *)(a1 + 24) += 16LL;
  }
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(&v11);
  v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 48LL))(a2);
  v9 = *(_QWORD *)(wil::details::static_lazy<InputETW>::get(
                     v8,
                     _lambda_ffe5d831185bf77c783480ebf240a46d_::_lambda_invoker_cdecl_)
                 + 8);
  if ( *(_DWORD *)v9 > 4u && (*(_BYTE *)(v9 + 16) & 1) != 0 && (*(_QWORD *)(v9 + 24) & 1LL) == *(_QWORD *)(v9 + 24) )
  {
    v13 = v7;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>>(
      v9,
      (int)&dword_18022895B,
      (__int64)&v13);
  }
  return 0LL;
}
