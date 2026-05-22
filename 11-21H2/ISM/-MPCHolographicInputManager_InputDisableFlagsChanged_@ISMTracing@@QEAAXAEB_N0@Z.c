/*
 * XREFs of ?MPCHolographicInputManager_InputDisableFlagsChanged_@ISMTracing@@QEAAXAEB_N0@Z @ 0x18009E9B4
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_7bb679a9323d805fac01dd20cc91ea96__void_::_Do_call @ 0x1800A1660 (std--_Func_impl_no_alloc__lambda_7bb679a9323d805fac01dd20cc91ea96__void_--_Do_call.c)
 * Callees:
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180014738 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$00@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$00@@3@Z @ 0x1800903E8 (--$Write@U-$_tlgWrapperByVal@$00@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x180090CA0 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 */

void __fastcall ISMTracing::MPCHolographicInputManager_InputDisableFlagsChanged_(
        ISMTracing *this,
        const bool *a2,
        const bool *a3)
{
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  ISMTracing *v9; // [rsp+40h] [rbp+8h] BYREF
  char v10; // [rsp+58h] [rbp+20h] BYREF

  v9 = this;
  if ( ISMTracing::IsEnabled((__int64)this) )
  {
    v6 = wil::details::static_lazy<ISMTracing>::get(
           v5,
           _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_)[1];
    if ( *(_DWORD *)v6 > 4u && (*(_BYTE *)(v6 + 16) & 1) != 0 && (*(_QWORD *)(v6 + 24) & 1LL) == *(_QWORD *)(v6 + 24) )
    {
      LOBYTE(v9) = *a3;
      v10 = *a2;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
        v6,
        byte_1801FFED2,
        v7,
        v8,
        (__int64)&v10,
        (__int64)&v9);
    }
  }
}
