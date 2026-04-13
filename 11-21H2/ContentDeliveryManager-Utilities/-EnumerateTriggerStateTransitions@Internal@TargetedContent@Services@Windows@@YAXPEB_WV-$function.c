/*
 * XREFs of ?EnumerateTriggerStateTransitions@Internal@TargetedContent@Services@Windows@@YAXPEB_WV?$function@$$A6A_NPEAUHSTRING__@@W4TargetedContentTriggerState@Internal@TargetedContent@Services@Windows@@1@Z@std@@@Z @ 0x1800AAB30
 * Callers:
 *     ?GetTriggerStateTransitionsFromSetting@Internal@TargetedContent@Services@Windows@@YAJAEAVPropertySetHelper@Triggers@CreativeFramework@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x1800AC338 (-GetTriggerStateTransitionsFromSetting@Internal@TargetedContent@Services@Windows@@YAJAEAVPropert.c)
 *     std::_Func_impl_std::_Callable_obj__lambda_c0bbf621b4662329ff8f927a7da19c87__0__std::allocator_std::_Func_class_bool_std::shared_ptr_CreativeFramework::CommonHelper::ISettingsContainer__CreativeFramework::Triggers::PropertySetHelper_&_std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil____bool_std::shared_ptr_CreativeFramework::CommonHelper::ISettingsContainer__CreativeFramework::Triggers::PropertySetHelper_&_std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil_::_Do_call @ 0x1800AE940 (std--_Func_impl_std--_Callable_obj__lambda_c0bbf621b4662329ff8f927a7da19c87__0__std_ea_1800AE940.c)
 * Callees:
 *     ?_Xbad_function_call@std@@YAXXZ @ 0x1800042D0 (-_Xbad_function_call@std@@YAXXZ.c)
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180023E6C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??1?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEAA@XZ @ 0x180057EB4 (--1-$vector@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$allocator@V-$basic_.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x1800A41C4 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x1800A42B8 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     ?DecodeBase64String@Internal@TargetedContent@Services@Windows@@YA?AVHString@Wrappers@WRL@Microsoft@@PEAUHSTRING__@@@Z @ 0x1800A4A60 (-DecodeBase64String@Internal@TargetedContent@Services@Windows@@YA-AVHString@Wrappers@WRL@Microso.c)
 *     ?ResolveTriggerStateFromName@Internal@TargetedContent@Services@Windows@@YA?AW4TargetedContentTriggerState@1234@PEB_W@Z @ 0x1800A6D00 (-ResolveTriggerStateFromName@Internal@TargetedContent@Services@Windows@@YA-AW4TargetedContentTri.c)
 *     ?SplitString@StringUtils@CommonHelper@CreativeFramework@@YA?AV?$vector@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@std@@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@5@PEB_W@Z @ 0x1800E896C (-SplitString@StringUtils@CommonHelper@CreativeFramework@@YA-AV-$vector@V-$basic_string@_WU-$char.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=11
void __fastcall Windows::Services::TargetedContent::Internal::EnumerateTriggerStateTransitions(char *Src, __int64 a2)
{
  unsigned __int64 v3; // r8
  void **v4; // rbx
  __int64 v5; // r14
  unsigned int v6; // r8d
  const WCHAR *v7; // rax
  HSTRING_HEADER *v8; // rax
  const WCHAR *v9; // rcx
  int v10; // esi
  const WCHAR *v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  HSTRING string; // [rsp+30h] [rbp-89h] BYREF
  int v17; // [rsp+38h] [rbp-81h] BYREF
  const WCHAR *v18; // [rsp+40h] [rbp-79h] BYREF
  HSTRING v19; // [rsp+48h] [rbp-71h] BYREF
  __int64 v20[3]; // [rsp+50h] [rbp-69h] BYREF
  __int64 v21[4]; // [rsp+68h] [rbp-51h] BYREF
  void *v22[2]; // [rsp+88h] [rbp-31h] BYREF
  __int64 v23; // [rsp+98h] [rbp-21h]
  unsigned __int64 v24; // [rsp+A0h] [rbp-19h]
  void *v25[3]; // [rsp+A8h] [rbp-11h] BYREF
  unsigned __int64 v26; // [rsp+C0h] [rbp+7h]
  HSTRING_HEADER v27; // [rsp+C8h] [rbp+Fh] BYREF
  __int64 v28; // [rsp+E0h] [rbp+27h]

  v21[3] = a2;
  v24 = 7LL;
  v23 = 0LL;
  LOWORD(v22[0]) = 0;
  if ( *(_WORD *)Src )
  {
    v3 = -1LL;
    do
      ++v3;
    while ( *(_WORD *)&Src[2 * v3] );
  }
  else
  {
    v3 = 0LL;
  }
  std::wstring::assign((unsigned __int64 *)v22, Src, v3);
  CreativeFramework::CommonHelper::StringUtils::SplitString(v21, v22, L"|");
  if ( v24 >= 8 )
    operator delete(v22[0]);
  v24 = 7LL;
  v23 = 0LL;
  LOWORD(v22[0]) = 0;
  v4 = (void **)v21[0];
  v5 = v21[1];
  while ( v4 != (void **)v5 )
  {
    v26 = 7LL;
    v25[2] = 0LL;
    LOWORD(v25[0]) = 0;
    std::wstring::assign(v25, v4, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
    CreativeFramework::CommonHelper::StringUtils::SplitString(v20, v25, L";");
    v7 = (const WCHAR *)v20[0];
    if ( *(_QWORD *)(v20[0] + 24) >= 8uLL )
      v7 = *(const WCHAR **)v20[0];
    v18 = v7;
    v8 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v27, &v18, v6);
    Windows::Services::TargetedContent::Internal::DecodeBase64String(&string, (__int64)v8[1].Reserved.Reserved1);
    v28 = 0LL;
    v9 = (const WCHAR *)(v20[0] + 32);
    if ( *(_QWORD *)(v20[0] + 56) >= 8uLL )
      v9 = *(const WCHAR **)v9;
    v10 = Windows::Services::TargetedContent::Internal::ResolveTriggerStateFromName(v9);
    v11 = (const WCHAR *)(v20[0] + 64);
    if ( *(_QWORD *)(v20[0] + 88) >= 8uLL )
      v11 = *(const WCHAR **)v11;
    v12 = Windows::Services::TargetedContent::Internal::ResolveTriggerStateFromName(v11);
    v19 = string;
    v17 = v12;
    LODWORD(v18) = v10;
    v13 = *(_QWORD *)(a2 + 24);
    if ( !v13 )
      std::_Xbad_function_call();
    if ( !(*(unsigned __int8 (__fastcall **)(__int64, HSTRING *, const WCHAR **, int *))(*(_QWORD *)v13 + 16LL))(
            v13,
            &v19,
            &v18,
            &v17) )
    {
      WindowsDeleteString(string);
      string = 0LL;
      std::vector<std::wstring>::~vector<std::wstring>(v20);
      if ( v26 >= 8 )
        operator delete(v25[0]);
      break;
    }
    WindowsDeleteString(string);
    string = 0LL;
    std::vector<std::wstring>::~vector<std::wstring>(v20);
    if ( v26 >= 8 )
      operator delete(v25[0]);
    v4 += 4;
  }
  std::vector<std::wstring>::~vector<std::wstring>(v21);
  v15 = *(_QWORD *)(a2 + 24);
  if ( v15 )
  {
    LOBYTE(v14) = v15 != a2;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v15 + 32LL))(v15, v14);
    *(_QWORD *)(a2 + 24) = 0LL;
  }
}
