/*
 * XREFs of ?RegisterProcessor@ContextualProcessorManager@@QEAAJPEAUIContextualProcessor@@W4InputSinkRequirement@1@@Z @ 0x180036894
 * Callers:
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x180035B8C (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 * Callees:
 *     ??$_Emplace_reallocate@UContextualProcessorEntry@ContextualProcessorManager@@@?$vector@UContextualProcessorEntry@ContextualProcessorManager@@V?$allocator@UContextualProcessorEntry@ContextualProcessorManager@@@std@@@std@@QEAAPEAUContextualProcessorEntry@ContextualProcessorManager@@QEAU23@$$QEAU23@@Z @ 0x1800369F0 (--$_Emplace_reallocate@UContextualProcessorEntry@ContextualProcessorManager@@@-$vector@UContextu.c)
 *     ??1Completer@?$static_lazy@VInputETW@@@details@wil@@QEAA@XZ @ 0x180037D84 (--1Completer@-$static_lazy@VInputETW@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x18004A308 (atexit.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@@Z @ 0x1800A912C (--$Write@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ContextualProcessorManager::RegisterProcessor(__int64 a1, union _RTL_RUN_ONCE *a2, int a3)
{
  union _RTL_RUN_ONCE *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rbx
  __int64 v9; // rcx
  union _RTL_RUN_ONCE *v11; // [rsp+30h] [rbp-10h] BYREF
  int v12; // [rsp+38h] [rbp-8h]
  LPVOID Context; // [rsp+70h] [rbp+30h] BYREF
  __int64 v14; // [rsp+78h] [rbp+38h] BYREF
  WINBOOL fPending; // [rsp+80h] [rbp+40h] BYREF

  v6 = a2;
  v11 = a2;
  if ( a2 )
    (*((void (__fastcall **)(union _RTL_RUN_ONCE *))a2->Ptr + 1))(a2);
  v12 = a3;
  v7 = *(_QWORD *)(a1 + 24);
  if ( v7 == *(_QWORD *)(a1 + 32) )
  {
    std::vector<ContextualProcessorManager::ContextualProcessorEntry>::_Emplace_reallocate<ContextualProcessorManager::ContextualProcessorEntry>(
      a1 + 16,
      v7,
      &v11);
    v6 = v11;
  }
  else
  {
    *(_QWORD *)v7 = 0LL;
    if ( (union _RTL_RUN_ONCE **)v7 != &v11 )
    {
      *(_QWORD *)v7 = a2;
      v6 = 0LL;
    }
    *(_DWORD *)(v7 + 8) = a3;
    *(_QWORD *)(a1 + 24) += 16LL;
  }
  if ( v6 )
    (*((void (__fastcall **)(union _RTL_RUN_ONCE *))v6->Ptr + 2))(v6);
  v8 = (*((__int64 (__fastcall **)(union _RTL_RUN_ONCE *))a2->Ptr + 6))(a2);
  Context = 0LL;
  if ( __std_init_once_begin_initialize(&`InputETW::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    v11 = &`InputETW::Instance'::`2'::wrapper;
    Context = &qword_180242E40;
    qword_180242E40 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
    qword_180242E58 = (__int64)&`InputETW::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_ffe5d831185bf77c783480ebf240a46d_::_lambda_invoker_cdecl_);
    v12 = 0;
    wil::details::static_lazy<InputETW>::Completer::~Completer(&v11);
  }
  v9 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v9 > 4u && (*(_BYTE *)(v9 + 16) & 1) != 0 && (*(_QWORD *)(v9 + 24) & 1LL) == *(_QWORD *)(v9 + 24) )
  {
    v14 = v8;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>>(
      v9,
      (int)&dword_1802065BE,
      (__int64)&v14);
  }
  return 0LL;
}
