/*
 * XREFs of ?PinnedListAdded@PinningActivity@TaskbarPinningTelemetry@@QEAAXPEBG0W4PINNEDLISTMODIFYCALLER@@0@Z @ 0x180759E38
 * Callers:
 *     ?InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModifyFlags@@@Z @ 0x180757410 (-InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModif.c)
 *     ?PinShellLink@CPinnedList@@UEAAJPEBGPEAUIShellLinkW@@@Z @ 0x180759AA0 (-PinShellLink@CPinnedList@@UEAAJPEBGPEAUIShellLinkW@@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18016270C (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAGXZ @ 0x180163C70 (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU.c)
 *     ?get@?$static_lazy@VTaskbarLogging@@@details@wil@@QEAAPEAVTaskbarLogging@@P6AXXZ@Z @ 0x18017CE00 (-get@-$static_lazy@VTaskbarLogging@@@details@wil@@QEAAPEAVTaskbarLogging@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?CensorAppIdBuffer@AppIdCensorUtility@LoggingUtil@@SAJPEBGPEAPEAG@Z @ 0x1803AD8C8 (-CensorAppIdBuffer@AppIdCensorUtility@LoggingUtil@@SAJPEBGPEAPEAG@Z.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U1@U1@U1@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@333AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180750F60 (--$Write@U-$_tlgWrapSz@G@@U1@U1@U1@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgP.c)
 *     ?CensorUnescapedUrl@AppIdCensorUtility@LoggingUtil@@SAXPEBG0PEAPEAG@Z @ 0x180752B20 (-CensorUnescapedUrl@AppIdCensorUtility@LoggingUtil@@SAXPEBG0PEAPEAG@Z.c)
 *     ?GetSecondaryTileLaunchArguments@TaskbarTelemetryHelper@@YAJPEBGPEAPEAG11@Z @ 0x1807560A8 (-GetSecondaryTileLaunchArguments@TaskbarTelemetryHelper@@YAJPEBGPEAPEAG11@Z.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall TaskbarPinningTelemetry::PinningActivity::PinnedListAdded(
        __int64 a1,
        unsigned __int16 *a2,
        const WCHAR *a3,
        int a4)
{
  void **v8; // rax
  const unsigned __int16 *v9; // rcx
  __int64 v10; // rcx
  void **v11; // rax
  __int64 *v12; // rax
  _DWORD *v13; // rbx
  __int64 v14; // r9
  __int64 v15; // [rsp+50h] [rbp-51h] BYREF
  __int64 v16; // [rsp+58h] [rbp-49h] BYREF
  __int64 v17; // [rsp+60h] [rbp-41h] BYREF
  __int64 FileNameW; // [rsp+68h] [rbp-39h] BYREF
  __int64 v19; // [rsp+70h] [rbp-31h] BYREF
  LPVOID pv; // [rsp+78h] [rbp-29h] BYREF
  unsigned __int16 *v21[2]; // [rsp+80h] [rbp-21h] BYREF
  __int64 v22; // [rsp+90h] [rbp-11h]
  unsigned __int16 *v23[2]; // [rsp+98h] [rbp-9h] BYREF
  __int64 v24; // [rsp+A8h] [rbp+7h]
  unsigned __int16 *v25[2]; // [rsp+B0h] [rbp+Fh] BYREF
  __int64 v26; // [rsp+C0h] [rbp+1Fh]

  v26 = 0LL;
  v25[0] = 0LL;
  v25[1] = 0LL;
  v24 = 0LL;
  v23[0] = 0LL;
  v23[1] = 0LL;
  v22 = 0LL;
  v21[0] = 0LL;
  v21[1] = 0LL;
  pv = 0LL;
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v21);
  v21[1] = (unsigned __int16 *)-1LL;
  v22 = -1LL;
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v23);
  v23[1] = (unsigned __int16 *)-1LL;
  v24 = -1LL;
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v25);
  v25[1] = (unsigned __int16 *)-1LL;
  v26 = -1LL;
  if ( (int)TaskbarTelemetryHelper::GetSecondaryTileLaunchArguments(a2, (unsigned __int16 *)v25, v23, v21) < 0 )
  {
    v11 = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::put(&pv);
    LoggingUtil::AppIdCensorUtility::CensorAppIdBuffer(a2, (unsigned __int16 **)v11);
  }
  else
  {
    v8 = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::put(&pv);
    LoggingUtil::AppIdCensorUtility::CensorUnescapedUrl(v9, v25[0], (unsigned __int16 **)v8);
  }
  v12 = wil::details::static_lazy<TaskbarLogging>::get(
          v10,
          (void (__cdecl *)())_lambda_fb11ae61ca52cbbca3d237d126ab4bed_::_lambda_invoker_cdecl_);
  v13 = (_DWORD *)v12[1];
  if ( *v13 > 5u && tlgKeywordOn(v12[1], 0x400000000000LL) )
  {
    LODWORD(v15) = a4;
    v16 = (__int64)v21[0];
    v17 = (__int64)v23[0];
    FileNameW = (__int64)PathFindFileNameW(a3);
    v19 = (__int64)pv;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
      (__int64)v13,
      (unsigned __int8 *)dword_18087FB65,
      (const GUID *)(*(_QWORD *)(a1 + 48) + 8LL),
      v14,
      (const WCHAR **)&v19,
      (const WCHAR **)&FileNameW,
      (const WCHAR **)&v17,
      (const WCHAR **)&v16,
      (__int64)&v15);
  }
  if ( pv )
    CoTaskMemFree(pv);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v21);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v23);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v25);
}
