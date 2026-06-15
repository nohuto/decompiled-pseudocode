/*
 * XREFs of _lambda_b7a15968bb3a3e07f37b8dc672840d88_::operator() @ 0x180068CDC
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_b7a15968bb3a3e07f37b8dc672840d88__long_IAudioProcessingObject____GUID_unsigned_int_::_Do_call @ 0x18006A340 (std--_Func_impl_no_alloc__lambda_b7a15968bb3a3e07f37b8dc672840d88__long_IAudioProce_ea_18006A340.c)
 * Callees:
 *     ??1?$com_ptr_t@UISessionInternalEvents@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800026F0 (--1-$com_ptr_t@UISessionInternalEvents@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180143268 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTempla.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_b7a15968bb3a3e07f37b8dc672840d88_::operator()(
        _QWORD *a1,
        int (__fastcall ***a2)(_QWORD, GUID *, __int64 *),
        __int64 a3,
        int a4)
{
  __int64 v8; // rbx
  int v9; // r8d
  int v10; // r9d
  __int64 v11; // rcx
  int v13; // [rsp+40h] [rbp-38h] BYREF
  __int64 v14; // [rsp+48h] [rbp-30h] BYREF
  __int64 v15; // [rsp+50h] [rbp-28h] BYREF
  __int64 v16; // [rsp+58h] [rbp-20h] BYREF

  v8 = *a1;
  if ( (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 56LL))(*a1) && *(_DWORD *)a1[1] == 2 && !a4 )
    return 0LL;
  v14 = 0LL;
  if ( (**a2)(a2, &GUID_25385759_3236_4101_a943_25693dfb5d2d, &v14) < 0 )
  {
    wil::com_ptr_t<ISessionInternalEvents,wil::err_returncode_policy>::~com_ptr_t<ISessionInternalEvents,wil::err_returncode_policy>(&v14);
    return 0LL;
  }
  v11 = *(_QWORD *)(v8 + 9784);
  if ( *(_DWORD *)v11 > 4u
    && (*(_DWORD *)(v11 + 16) & 0x100LL) != 0
    && (*(_QWORD *)(v11 + 24) & 0x100LL) == *(_QWORD *)(v11 + 24) )
  {
    v13 = *(_DWORD *)a1[1];
    v15 = a3;
    v16 = *(_QWORD *)(v8 + 24);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>>(
      v11,
      (unsigned int)&unk_18018F238,
      v9,
      v10,
      (__int64)&v16,
      (__int64)&v15,
      (__int64)&v13);
  }
  wil::com_ptr_t<ISessionInternalEvents,wil::err_returncode_policy>::~com_ptr_t<ISessionInternalEvents,wil::err_returncode_policy>(&v14);
  return 2289827895LL;
}
