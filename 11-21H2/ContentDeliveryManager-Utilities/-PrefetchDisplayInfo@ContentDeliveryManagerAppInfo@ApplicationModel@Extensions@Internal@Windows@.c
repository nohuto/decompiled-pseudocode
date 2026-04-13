/*
 * XREFs of ?PrefetchDisplayInfo@ContentDeliveryManagerAppInfo@ApplicationModel@Extensions@Internal@Windows@@AEAAXXZ @ 0x1800D9220
 * Callers:
 *     ?RuntimeClassInitialize@ContentDeliveryManagerAppInfo@ApplicationModel@Extensions@Internal@Windows@@QEAAJPEAUHSTRING__@@PEAUIAppInfo@25@@Z @ 0x1800D96E0 (-RuntimeClassInitialize@ContentDeliveryManagerAppInfo@ApplicationModel@Extensions@Internal@Windo.c)
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048430 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x180069E40 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ??$LookupWString@U?$IMapView@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@PEBG@PropertySetHelper@@SA_NPEAU?$IMapView@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@PEBGAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1800D8D70 (--$LookupWString@U-$IMapView@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@P.c)
 *     ??$MakeAndInitialize@VContentDeliveryManagerAppDisplayInfo@ApplicationModel@Extensions@Internal@Windows@@UIAppDisplayInfo@25@PEBGPEAU625@@Details@WRL@Microsoft@@YAJPEAPEAUIAppDisplayInfo@ApplicationModel@Windows@@$$QEAPEBG$$QEAPEAU345@@Z @ 0x1800D8FCC (--$MakeAndInitialize@VContentDeliveryManagerAppDisplayInfo@ApplicationModel@Extensions@Internal@.c)
 *     ?get_Properties@ContentDeliveryManagerAppInfo@ApplicationModel@Extensions@Internal@Windows@@UEAAJPEAPEAU?$IMapView@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@5@@Z @ 0x1800D98D0 (-get_Properties@ContentDeliveryManagerAppInfo@ApplicationModel@Extensions@Internal@Windows@@UEAA.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
void __fastcall Windows::Internal::Extensions::ApplicationModel::ContentDeliveryManagerAppInfo::PrefetchDisplayInfo(
        Windows::Internal::Extensions::ApplicationModel::ContentDeliveryManagerAppInfo *this)
{
  __int64 *v2; // rdi
  __int64 *v3; // rcx
  __int64 v4; // rax
  int v5; // eax
  int Properties; // eax
  __int64 v7; // rdx
  char v8; // al
  void **v9; // rdx
  const unsigned __int16 *v10; // rax
  __int64 v11; // rcx
  int v12; // eax
  struct Windows::ApplicationModel::IAppDisplayInfo *v13; // [rsp+28h] [rbp-39h] BYREF
  __int64 v14; // [rsp+30h] [rbp-31h] BYREF
  void **v15; // [rsp+38h] [rbp-29h] BYREF
  void *v16[2]; // [rsp+40h] [rbp-21h] BYREF
  __int64 v17; // [rsp+50h] [rbp-11h]
  unsigned __int64 v18; // [rsp+58h] [rbp-9h]
  struct Windows::ApplicationModel::IAppDisplayInfo *v19; // [rsp+60h] [rbp-1h] BYREF
  void *v20[2]; // [rsp+68h] [rbp+7h] BYREF
  __int64 v21; // [rsp+78h] [rbp+17h]
  unsigned __int64 v22; // [rsp+80h] [rbp+1Fh]
  void *v23[2]; // [rsp+88h] [rbp+27h] BYREF
  __int64 v24; // [rsp+98h] [rbp+37h]
  unsigned __int64 v25; // [rsp+A0h] [rbp+3Fh]
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
          66LL,
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
          69LL,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\contentdeliverymanagernotificationextension\\lib\\"
                   "contentdeliverymanagerappinfo.cpp",
          (const char *)(unsigned int)Properties,
          (int)v13);
      v18 = 7LL;
      v17 = 0LL;
      LOWORD(v16[0]) = 0;
      v15 = v16;
      v25 = 7LL;
      v24 = 0LL;
      LOWORD(v23[0]) = 0;
      v8 = PropertySetHelper::LookupWString<Windows::Foundation::Collections::IMapView<HSTRING__ *,IInspectable *>,unsigned short const *>(
             v14,
             v7,
             (unsigned __int64 *)v23);
      v9 = v23;
      if ( !v8 )
        v9 = v16;
      v22 = 7LL;
      v21 = 0LL;
      LOWORD(v20[0]) = 0;
      std::wstring::assign(v20, v9, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
      if ( v25 >= 8 )
        operator delete(v23[0]);
      v25 = 7LL;
      v24 = 0LL;
      LOWORD(v23[0]) = 0;
      if ( v18 >= 8 )
        operator delete(v16[0]);
      v18 = 7LL;
      v17 = 0LL;
      LOWORD(v16[0]) = 0;
      v19 = v13;
      v10 = (const unsigned __int16 *)v20;
      if ( v22 >= 8 )
        v10 = (const unsigned __int16 *)v20[0];
      v15 = (void **)v10;
      v11 = *v2;
      *v2 = 0LL;
      if ( v11 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
      v12 = Microsoft::WRL::Details::MakeAndInitialize<Windows::Internal::Extensions::ApplicationModel::ContentDeliveryManagerAppDisplayInfo,Windows::ApplicationModel::IAppDisplayInfo,unsigned short const *,Windows::ApplicationModel::IAppDisplayInfo *>(
              v2,
              (const unsigned __int16 **)&v15,
              &v19);
      if ( v12 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          72LL,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\contentdeliverymanagernotificationextension\\lib\\"
                   "contentdeliverymanagerappinfo.cpp",
          (const char *)(unsigned int)v12,
          (int)v13);
      if ( v22 >= 8 )
        operator delete(v20[0]);
      v22 = 7LL;
      v21 = 0LL;
      LOWORD(v20[0]) = 0;
      if ( v14 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
      if ( v13 )
        (*(void (__fastcall **)(struct Windows::ApplicationModel::IAppDisplayInfo *))(*(_QWORD *)v13 + 16LL))(v13);
    }
  }
}
