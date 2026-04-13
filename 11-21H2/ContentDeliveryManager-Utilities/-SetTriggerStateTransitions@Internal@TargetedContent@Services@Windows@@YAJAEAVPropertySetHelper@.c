/*
 * XREFs of ?SetTriggerStateTransitions@Internal@TargetedContent@Services@Windows@@YAJAEAVPropertySetHelper@Triggers@CreativeFramework@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x1800ADD3C
 * Callers:
 *     ?SetTriggerRegistration@Internal@TargetedContent@Services@Windows@@YAJV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x1800AD024 (-SetTriggerRegistration@Internal@TargetedContent@Services@Windows@@YAJV-$shared_ptr@VISettingsCo.c)
 * Callees:
 *     ?_Ios_base_dtor@ios_base@std@@CAXPEAV12@@Z @ 0x18000524C (-_Ios_base_dtor@ios_base@std@@CAXPEAV12@@Z.c)
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044570 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048430 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$basic_streambuf@GU?$char_traits@G@std@@@std@@IEAA@XZ @ 0x180056390 (--0-$basic_streambuf@GU-$char_traits@G@std@@@std@@IEAA@XZ.c)
 *     ?GetBase64StringFromBytes@Internal@TargetedContent@Services@Windows@@YA?AVHString@Wrappers@WRL@Microsoft@@IPEBE@Z @ 0x1800A4E84 (-GetBase64StringFromBytes@Internal@TargetedContent@Services@Windows@@YA-AVHString@Wrappers@WRL@M.c)
 *     ?GetStringBytes@Internal@TargetedContent@Services@Windows@@YAXPEAUHSTRING__@@AEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@@wil@@PEAI@Z @ 0x1800A53F0 (-GetStringBytes@Internal@TargetedContent@Services@Windows@@YAXPEAUHSTRING__@@AEAV-$unique_any_t@.c)
 *     ?ResolveNameFromTriggerState@Internal@TargetedContent@Services@Windows@@YAPEB_WW4TargetedContentTriggerState@1234@@Z @ 0x1800A6700 (-ResolveNameFromTriggerState@Internal@TargetedContent@Services@Windows@@YAPEB_WW4TargetedContent.c)
 *     ??$?6_WU?$char_traits@_W@std@@@std@@YAAEAV?$basic_ostream@_WU?$char_traits@_W@std@@@0@AEAV10@PEB_W@Z @ 0x1800A73AC (--$-6_WU-$char_traits@_W@std@@@std@@YAAEAV-$basic_ostream@_WU-$char_traits@_W@std@@@0@AEAV10@PEB.c)
 *     ??$SetValue@V_lambda_e85697e1379bd30e043dcf6a8e09ee83_@@@?$PropertySetHelperBase@$1?RuntimeClass_Windows_Foundation_Collections_PropertySet@@3QB_WB@Triggers@CreativeFramework@@AEAAJPEB_WAEBV_lambda_e85697e1379bd30e043dcf6a8e09ee83_@@@Z @ 0x1800A7D44 (--$SetValue@V_lambda_e85697e1379bd30e043dcf6a8e09ee83_@@@-$PropertySetHelperBase@$1-RuntimeClass.c)
 *     ??1?$basic_ostringstream@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UEAA@XZ @ 0x1800A8D8C (--1-$basic_ostringstream@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@UEAA@XZ.c)
 *     ?init@?$basic_ios@_WU?$char_traits@_W@std@@@std@@IEAAXPEAV?$basic_streambuf@_WU?$char_traits@_W@std@@@2@_N@Z @ 0x1800AF2B0 (-init@-$basic_ios@_WU-$char_traits@_W@std@@@std@@IEAAXPEAV-$basic_streambuf@_WU-$char_traits@_W@.c)
 *     ?str@?$basic_stringbuf@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEBA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@2@XZ @ 0x1800AF9FC (-str@-$basic_stringbuf@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEBA-AV-$basic_string@_W.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=16
__int64 __fastcall Windows::Services::TargetedContent::Internal::SetTriggerStateTransitions(
        Windows::Services::TargetedContent::Internal *this,
        struct CreativeFramework::Triggers::PropertySetHelper *a2,
        struct Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *a3)
{
  int v4; // eax
  int v5; // eax
  unsigned int v6; // esi
  unsigned int i; // r14d
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rcx
  const char *v11; // r9
  __int64 v12; // rdx
  __int64 result; // rax
  __int64 v14; // rbx
  __int64 (__fastcall *v15)(__int64, HSTRING *); // rdi
  int v16; // eax
  int v17; // eax
  int v18; // eax
  void *v19; // rbx
  HSTRING *Base64StringFromBytes; // rdi
  int v21; // esi
  WCHAR *StringRawBuffer; // rax
  __int64 *v23; // rax
  __int64 *v24; // rbx
  wchar_t *v25; // rax
  __int64 *v26; // rax
  __int64 *v27; // rbx
  wchar_t *v28; // rax
  __int64 v29; // rcx
  HSTRING v30; // rax
  int v31; // eax
  __int64 v32; // rcx
  int v33[2]; // [rsp+20h] [rbp-188h] BYREF
  int v34; // [rsp+28h] [rbp-180h]
  int v35; // [rsp+2Ch] [rbp-17Ch] BYREF
  __int64 v36; // [rsp+30h] [rbp-178h]
  UINT32 v37; // [rsp+38h] [rbp-170h] BYREF
  HSTRING v38; // [rsp+40h] [rbp-168h] BYREF
  HSTRING string; // [rsp+48h] [rbp-160h] BYREF
  unsigned int v40; // [rsp+50h] [rbp-158h] BYREF
  int v41; // [rsp+54h] [rbp-154h] BYREF
  LPVOID pv; // [rsp+58h] [rbp-150h] BYREF
  int *v43; // [rsp+60h] [rbp-148h] BYREF
  _QWORD v44[14]; // [rsp+68h] [rbp-140h] BYREF
  int v45; // [rsp+D8h] [rbp-D0h]
  int v46; // [rsp+E4h] [rbp-C4h]
  _QWORD v47[13]; // [rsp+E8h] [rbp-C0h] BYREF
  void *v48[3]; // [rsp+150h] [rbp-58h] BYREF
  unsigned __int64 v49; // [rsp+168h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+1A8h] [rbp+0h]

  v34 = 0;
  v36 = 0LL;
  try
  {
    v4 = (*(__int64 (**)(void))(*(_QWORD *)a2 + 320LL))();
    if ( v4 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        458LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
        (const char *)(unsigned int)v4,
        v33[0]);
    v5 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v36 + 56LL))(v36, &v40);
    if ( v5 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        461LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
        (const char *)(unsigned int)v5,
        v33[0]);
    v43 = (int *)&std::basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>::`vbtable'{for `std::basic_ostream<unsigned short>'};
    v6 = 1;
    v34 = 1;
    v47[0] = &std::basic_ostream<unsigned short>::`vftable';
    v46 = 120;
    std::wios::init((std::ios_base *)v47);
    *(_QWORD *)((char *)&v44[-1] + v43[1]) = &std::wostringstream::`vftable';
    *(_DWORD *)((char *)&pv + v43[1] + 4) = v43[1] - 136;
    std::basic_streambuf<unsigned short>::basic_streambuf<unsigned short>((__int64)v44);
    v44[0] = &std::basic_stringbuf<unsigned short>::`vftable';
    v44[13] = 0LL;
    v45 = 4;
    for ( i = 0; i < v40; ++i )
    {
      *(_QWORD *)v33 = 0LL;
      v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(*(_QWORD *)v36 + 48LL))(v36, i, v33);
      v9 = v8;
      if ( v8 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1D2,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
          (const char *)(unsigned int)v8);
        v10 = *(_QWORD *)v33;
        if ( *(_QWORD *)v33 )
        {
          *(_QWORD *)v33 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
        }
        std::wostringstream::~wostringstream((__int64)v47);
        v47[0] = &std::ios_base::`vftable';
        std::ios_base::_Ios_base_dtor((struct std::ios_base *)v47);
        v12 = v36;
        if ( v36 )
        {
          v36 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
        }
        return v9;
      }
      v38 = 0LL;
      v14 = *(_QWORD *)v33;
      v15 = *(__int64 (__fastcall **)(__int64, HSTRING *))(**(_QWORD **)v33 + 48LL);
      WindowsDeleteString(0LL);
      v38 = 0LL;
      v16 = v15(v14, &v38);
      if ( v16 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          469LL,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
          (const char *)(unsigned int)v16,
          v33[0]);
      v17 = (*(__int64 (__fastcall **)(_QWORD, int *))(**(_QWORD **)v33 + 80LL))(*(_QWORD *)v33, &v35);
      if ( v17 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          471LL,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
          (const char *)(unsigned int)v17,
          v33[0]);
      v18 = (*(__int64 (__fastcall **)(_QWORD, int *))(**(_QWORD **)v33 + 64LL))(*(_QWORD *)v33, &v41);
      if ( v18 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          473LL,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
          (const char *)(unsigned int)v18,
          v33[0]);
      if ( i )
        std::operator<<<wchar_t,std::char_traits<wchar_t>>((__int64 *)&v43, L"|");
      v37 = 0;
      pv = 0LL;
      Windows::Services::TargetedContent::Internal::GetStringBytes(v38, &pv, &v37);
      v19 = pv;
      Base64StringFromBytes = (HSTRING *)Windows::Services::TargetedContent::Internal::GetBase64StringFromBytes(
                                           &string,
                                           v37,
                                           (__int64)pv);
      v21 = v6 | 4;
      v34 = v21;
      if ( v19 )
        CoTaskMemFree(v19);
      StringRawBuffer = (WCHAR *)WindowsGetStringRawBuffer(*Base64StringFromBytes, 0LL);
      v23 = std::operator<<<wchar_t,std::char_traits<wchar_t>>((__int64 *)&v43, StringRawBuffer);
      v24 = std::operator<<<wchar_t,std::char_traits<wchar_t>>(v23, L";");
      v25 = Windows::Services::TargetedContent::Internal::ResolveNameFromTriggerState(v41);
      v26 = std::operator<<<wchar_t,std::char_traits<wchar_t>>(v24, v25);
      v27 = std::operator<<<wchar_t,std::char_traits<wchar_t>>(v26, L";");
      v28 = Windows::Services::TargetedContent::Internal::ResolveNameFromTriggerState(v35);
      std::operator<<<wchar_t,std::char_traits<wchar_t>>(v27, v28);
      v6 = v21 & 0xFFFFFFFB;
      v34 = v6;
      WindowsDeleteString(string);
      string = 0LL;
      WindowsDeleteString(v38);
      v38 = 0LL;
      v29 = *(_QWORD *)v33;
      if ( *(_QWORD *)v33 )
      {
        *(_QWORD *)v33 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
      }
    }
    if ( v40 )
    {
      std::wstringbuf::str(v44, v48);
      v30 = (HSTRING)v48;
      if ( v49 >= 8 )
        v30 = (HSTRING)v48[0];
      string = v30;
      v31 = CreativeFramework::Triggers::PropertySetHelperBase<&wchar_t const near * const RuntimeClass_Windows_Foundation_Collections_PropertySet>::SetValue<_lambda_e85697e1379bd30e043dcf6a8e09ee83_>(
              (__int64)this,
              L"StateTransitions",
              (const WCHAR **)&string);
      if ( v31 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          489LL,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
          (const char *)(unsigned int)v31,
          v33[0]);
      if ( v49 >= 8 )
        operator delete(v48[0]);
    }
    std::wostringstream::~wostringstream((__int64)v47);
    v47[0] = &std::ios_base::`vftable';
    std::ios_base::_Ios_base_dtor((struct std::ios_base *)v47);
    v32 = v36;
    if ( v36 )
    {
      v36 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x1ED,
                           (int)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
                           v11);
  }
  return result;
}
