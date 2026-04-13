/*
 * XREFs of ?PrefetchDisplayInfo@ContentDeliveryManagerAppInfo@ApplicationModel@Extensions@Internal@Windows@@AEAAXXZ @ 0x1800C3420
 * Callers:
 *     ?RuntimeClassInitialize@ContentDeliveryManagerAppInfo@ApplicationModel@Extensions@Internal@Windows@@QEAAJPEAUHSTRING__@@PEAUIAppInfo@25@@Z @ 0x1800C3760 (-RuntimeClassInitialize@ContentDeliveryManagerAppInfo@ApplicationModel@Extensions@Internal@Windo.c)
 * Callees:
 *     __security_check_cookie @ 0x1800224C0 (__security_check_cookie.c)
 *     ??1?$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18002C074 (--1-$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180043350 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x1800518F0 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Tidy@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX_N_K@Z @ 0x1800627B4 (-_Tidy@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX_N_K@Z.c)
 *     ??$LookupWString@U?$IMapView@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@PEBG@PropertySetHelper@@SA_NPEAU?$IMapView@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@PEBGAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1800C30FC (--$LookupWString@U-$IMapView@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@P.c)
 *     ??$MakeAndInitialize@VContentDeliveryManagerAppDisplayInfo@ApplicationModel@Extensions@Internal@Windows@@UIAppDisplayInfo@25@PEBGPEAU625@@Details@WRL@Microsoft@@YAJPEAPEAUIAppDisplayInfo@ApplicationModel@Windows@@$$QEAPEBG$$QEAPEAU345@@Z @ 0x1800C31A4 (--$MakeAndInitialize@VContentDeliveryManagerAppDisplayInfo@ApplicationModel@Extensions@Internal@.c)
 *     ?get_Properties@ContentDeliveryManagerAppInfo@ApplicationModel@Extensions@Internal@Windows@@UEAAJPEAPEAU?$IMapView@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@5@@Z @ 0x1800C3950 (-get_Properties@ContentDeliveryManagerAppInfo@ApplicationModel@Extensions@Internal@Windows@@UEAA.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4360 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
void __fastcall Windows::Internal::Extensions::ApplicationModel::ContentDeliveryManagerAppInfo::PrefetchDisplayInfo(
        Windows::Internal::Extensions::ApplicationModel::ContentDeliveryManagerAppInfo *this)
{
  __int64 *v2; // rdi
  __int64 *v3; // rcx
  __int64 v4; // rax
  int v5; // eax
  int Properties; // eax
  HSTRING v7; // rdx
  char v8; // al
  _QWORD *v9; // rdx
  const unsigned __int16 *v10; // rax
  __int64 v11; // rcx
  int v12; // eax
  struct Windows::ApplicationModel::IAppDisplayInfo *v13; // [rsp+28h] [rbp-39h] BYREF
  __int64 v14; // [rsp+30h] [rbp-31h] BYREF
  const unsigned __int16 *v15; // [rsp+38h] [rbp-29h] BYREF
  struct Windows::ApplicationModel::IAppDisplayInfo *v16; // [rsp+40h] [rbp-21h] BYREF
  _QWORD v17[4]; // [rsp+48h] [rbp-19h] BYREF
  _QWORD v18[4]; // [rsp+68h] [rbp+7h] BYREF
  _QWORD v19[4]; // [rsp+88h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]

  v2 = (__int64 *)((char *)this + 80);
  if ( !*((_QWORD *)this + 10) )
  {
    v3 = (__int64 *)*((_QWORD *)this + 9);
    if ( v3 )
    {
      v13 = 0LL;
      v4 = *v3;
      v13 = 0LL;
      v5 = (*(__int64 (__fastcall **)(__int64 *, struct Windows::ApplicationModel::IAppDisplayInfo **))(v4 + 64))(
             v3,
             &v13);
      if ( v5 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x42,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\contentdeliverymanagernotificationextension\\lib\\"
                   "contentdeliverymanagerappinfo.cpp",
          (const char *)(unsigned int)v5,
          (int)v13);
      v14 = 0LL;
      Properties = Windows::Internal::Extensions::ApplicationModel::ContentDeliveryManagerAppInfo::get_Properties(
                     (char *)this + 16,
                     &v14);
      if ( Properties < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x45,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\contentdeliverymanagernotificationextension\\lib\\"
                   "contentdeliverymanagerappinfo.cpp",
          (const char *)(unsigned int)Properties,
          (int)v13);
      v17[3] = 7LL;
      v17[2] = 0LL;
      LOWORD(v17[0]) = 0;
      v15 = (const unsigned __int16 *)v17;
      v18[3] = 7LL;
      v18[2] = 0LL;
      LOWORD(v18[0]) = 0;
      v8 = PropertySetHelper::LookupWString<Windows::Foundation::Collections::IMapView<HSTRING__ *,IInspectable *>,unsigned short const *>(
             v14,
             v7,
             v18);
      v9 = v18;
      if ( !v8 )
        v9 = v17;
      std::wstring::wstring((__int64)v19, (__int64)v9);
      std::wstring::_Tidy(v18, 1, 0LL);
      std::wstring::_Tidy(v17, 1, 0LL);
      v16 = v13;
      v10 = (const unsigned __int16 *)v19;
      if ( v19[3] >= 8uLL )
        v10 = (const unsigned __int16 *)v19[0];
      v15 = v10;
      v11 = *v2;
      *v2 = 0LL;
      if ( v11 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
      v12 = Microsoft::WRL::Details::MakeAndInitialize<Windows::Internal::Extensions::ApplicationModel::ContentDeliveryManagerAppDisplayInfo,Windows::ApplicationModel::IAppDisplayInfo,unsigned short const *,Windows::ApplicationModel::IAppDisplayInfo *>(
              v2,
              &v15,
              &v16);
      if ( v12 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x48,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\contentdeliverymanagernotificationextension\\lib\\"
                   "contentdeliverymanagerappinfo.cpp",
          (const char *)(unsigned int)v12,
          (int)v13);
      std::wstring::_Tidy(v19, 1, 0LL);
      wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(&v14);
      wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v13);
    }
  }
}
