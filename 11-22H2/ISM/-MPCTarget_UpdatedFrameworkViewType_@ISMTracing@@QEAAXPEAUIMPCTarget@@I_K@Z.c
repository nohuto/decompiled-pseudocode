/*
 * XREFs of ?MPCTarget_UpdatedFrameworkViewType_@ISMTracing@@QEAAXPEAUIMPCTarget@@I_K@Z @ 0x18011B918
 * Callers:
 *     ?OnUniversalPropertyChanged@MPCTarget@@AEAAJUIUniversalAppModelWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UUniversalPropertyChangedEventArgs@34567@@Z @ 0x18011B9E0 (-OnUniversalPropertyChanged@MPCTarget@@AEAAJUIUniversalAppModelWatcher@WindowManagement@Applicat.c)
 * Callees:
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180026950 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     ?GetPIDOfMPCTarget@ISMTracing@@SAKPEAUIMPCTarget@@@Z @ 0x1800C62E0 (-GetPIDOfMPCTarget@ISMTracing@@SAKPEAUIMPCTarget@@@Z.c)
 *     ?GetFrameworkViewType@ISMTracing@@SAPEBGI@Z @ 0x1801175A0 (-GetFrameworkViewType@ISMTracing@@SAPEBGI@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@3@Z @ 0x18011A9C0 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U1@@-$_tlgWriteTempl.c)
 */

void __fastcall ISMTracing::MPCTarget_UpdatedFrameworkViewType_(
        ISMTracing *this,
        struct IMPCTarget *a2,
        int a3,
        __int64 a4)
{
  __int64 v7; // rbx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // [rsp+40h] [rbp-28h] BYREF
  __int64 FrameworkViewType; // [rsp+48h] [rbp-20h] BYREF
  __int64 v12; // [rsp+50h] [rbp-18h] BYREF
  __int64 v13; // [rsp+70h] [rbp+8h] BYREF

  v13 = (__int64)this;
  v7 = wil::details::static_lazy<ISMTracing>::get(
         (__int64)this,
         _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_)[1];
  if ( *(_DWORD *)v7 > 4u && (*(_BYTE *)(v7 + 16) & 1) != 0 && (*(_QWORD *)(v7 + 24) & 1LL) == *(_QWORD *)(v7 + 24) )
  {
    v10 = a4;
    FrameworkViewType = (__int64)ISMTracing::GetFrameworkViewType(a3);
    LODWORD(v13) = ISMTracing::GetPIDOfMPCTarget(a2);
    v12 = (__int64)a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>>(
      v7,
      (unsigned __int8 *)dword_1802345CD,
      v8,
      v9,
      (__int64)&v12,
      (__int64)&v13,
      (const WCHAR **)&FrameworkViewType,
      (__int64)&v10);
  }
}
