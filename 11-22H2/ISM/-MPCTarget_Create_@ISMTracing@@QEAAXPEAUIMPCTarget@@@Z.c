/*
 * XREFs of ?MPCTarget_Create_@ISMTracing@@QEAAXPEAUIMPCTarget@@@Z @ 0x18011B714
 * Callers:
 *     ??0MPCTarget@@QEAA@PEAVInputSite@@W4FrameworkViewType@@K@Z @ 0x18011AD50 (--0MPCTarget@@QEAA@PEAVInputSite@@W4FrameworkViewType@@K@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180026950 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x180040ACC (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetPIDOfMPCTarget@ISMTracing@@SAKPEAUIMPCTarget@@@Z @ 0x1800C62E0 (-GetPIDOfMPCTarget@ISMTracing@@SAKPEAUIMPCTarget@@@Z.c)
 *     ?GetTypeOfTarget@ISMTracing@@SAPEBGPEAUIMPCTarget@@@Z @ 0x1800C63E4 (-GetTypeOfTarget@ISMTracing@@SAPEBGPEAUIMPCTarget@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18011A8F0 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate.c)
 */

void __fastcall ISMTracing::MPCTarget_Create_(ISMTracing *this, struct IMPCTarget *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // [rsp+50h] [rbp+8h] BYREF
  __int64 v8; // [rsp+60h] [rbp+18h] BYREF
  __int64 TypeOfTarget; // [rsp+68h] [rbp+20h] BYREF

  v7 = (__int64)this;
  if ( ISMTracing::IsEnabled((__int64)this) )
  {
    v4 = wil::details::static_lazy<ISMTracing>::get(
           v3,
           _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_)[1];
    if ( *(_DWORD *)v4 > 4u && (*(_BYTE *)(v4 + 16) & 1) != 0 && (*(_QWORD *)(v4 + 24) & 1LL) == *(_QWORD *)(v4 + 24) )
    {
      v8 = (*(__int64 (__fastcall **)(struct IMPCTarget *))(*(_QWORD *)a2 + 56LL))(a2);
      TypeOfTarget = (__int64)ISMTracing::GetTypeOfTarget(a2);
      LODWORD(v7) = ISMTracing::GetPIDOfMPCTarget(a2);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>>(
        v4,
        (unsigned __int8 *)dword_1802346E3,
        v5,
        v6,
        (__int64)&v7,
        (const WCHAR **)&TypeOfTarget,
        (__int64)&v8);
    }
  }
}
