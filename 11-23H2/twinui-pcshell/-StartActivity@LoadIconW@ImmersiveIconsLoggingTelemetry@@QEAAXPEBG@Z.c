/*
 * XREFs of ?StartActivity@LoadIconW@ImmersiveIconsLoggingTelemetry@@QEAAXPEBG@Z @ 0x18074533C
 * Callers:
 *     ?LoadImmersiveIcon@ImmersiveIcons@@YAJUtagSIZE@@00KI_NPEBGPEAPEAUHBITMAP__@@@Z @ 0x180744800 (-LoadImmersiveIcon@ImmersiveIcons@@YAJUtagSIZE@@00KI_NPEBGPEAPEAUHBITMAP__@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@@Z @ 0x18002355C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800BCA00 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAGXZ @ 0x180163C70 (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU.c)
 *     ?zInternalRelatedId@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x1801D69D8 (-zInternalRelatedId@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorT.c)
 *     ?CensorAppIdBuffer@AppIdCensorUtility@LoggingUtil@@SAJPEBGPEAPEAG@Z @ 0x1803AD8C8 (-CensorAppIdBuffer@AppIdCensorUtility@LoggingUtil@@SAJPEBGPEAPEAG@Z.c)
 *     ?LockExclusive@?$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1803EFC80 (-LockExclusive@-$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgRefl.c)
 *     ?get@?$static_lazy@VImmersiveIconsLogging@@@details@wil@@QEAAPEAVImmersiveIconsLogging@@P6AXXZ@Z @ 0x180745F08 (-get@-$static_lazy@VImmersiveIconsLogging@@@details@wil@@QEAAPEAVImmersiveIconsLogging@@P6AXXZ@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall ImmersiveIconsLoggingTelemetry::LoadIconW::StartActivity(
        ImmersiveIconsLoggingTelemetry::LoadIconW *this,
        const unsigned __int16 *a2)
{
  void **v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rcx
  PSRWLOCK v7; // rcx
  _DWORD *v8; // rbx
  const GUID *v9; // rax
  __int64 v10; // [rsp+40h] [rbp-10h] BYREF
  PSRWLOCK SRWLock; // [rsp+70h] [rbp+20h] BYREF
  LPVOID pv; // [rsp+80h] [rbp+30h] BYREF
  const WCHAR *v13; // [rsp+88h] [rbp+38h] BYREF

  pv = 0LL;
  v4 = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::put(&pv);
  LoggingUtil::AppIdCensorUtility::CensorAppIdBuffer(a2, (unsigned __int16 **)v4);
  wil::ActivityBase<WindowManagementLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)this,
    &SRWLock);
  v5 = *((_QWORD *)this + 6);
  if ( **(_DWORD **)(wil::details::static_lazy<ImmersiveIconsLogging>::get(
                       v6,
                       _lambda_ff1cb61a894a675aef28afa9d97db49a_::_lambda_invoker_cdecl_)
                   + 8) <= 5u )
    *(_OWORD *)(v5 + 8) = 0LL;
  else
    EventActivityIdControl(3u, (LPGUID)(v5 + 8));
  *(_DWORD *)v5 = 1;
  v7 = SRWLock;
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  v8 = *(_DWORD **)(wil::details::static_lazy<ImmersiveIconsLogging>::get(
                      v7,
                      _lambda_ff1cb61a894a675aef28afa9d97db49a_::_lambda_invoker_cdecl_)
                  + 8);
  if ( *v8 > 5u )
  {
    v13 = (const WCHAR *)pv;
    LODWORD(SRWLock) = GetCurrentThreadId();
    v10 = 0LL;
    v9 = (const GUID *)wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId((__int64)this);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
      (__int64)v8,
      byte_18087C7DF,
      (const GUID *)(*((_QWORD *)this + 6) + 8LL),
      v9,
      (__int64)&v10,
      (__int64)&SRWLock,
      &v13);
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((ImmersiveIconsLoggingTelemetry::LoadIconW *)((char *)this + 8));
  if ( pv )
    CoTaskMemFree(pv);
}
