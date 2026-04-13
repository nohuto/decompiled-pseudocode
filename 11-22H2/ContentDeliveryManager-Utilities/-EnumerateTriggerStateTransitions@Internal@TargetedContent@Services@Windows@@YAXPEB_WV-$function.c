/*
 * XREFs of ?EnumerateTriggerStateTransitions@Internal@TargetedContent@Services@Windows@@YAXPEB_WV?$function@$$A6A_NPEAUHSTRING__@@W4TargetedContentTriggerState@Internal@TargetedContent@Services@Windows@@1@Z@std@@@Z @ 0x18009CC3C
 * Callers:
 *     _lambda_c0bbf621b4662329ff8f927a7da19c87_::operator() @ 0x18009B808 (_lambda_c0bbf621b4662329ff8f927a7da19c87_--operator().c)
 *     ?GetTriggerStateTransitionsFromSetting@Internal@TargetedContent@Services@Windows@@YAJAEAVPropertySetHelper@Triggers@CreativeFramework@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x18009DBA8 (-GetTriggerStateTransitionsFromSetting@Internal@TargetedContent@Services@Windows@@YAJAEAVPropert.c)
 * Callees:
 *     ?_Xbad_function_call@std@@YAXXZ @ 0x180004960 (-_Xbad_function_call@std@@YAXXZ.c)
 *     __security_check_cookie @ 0x1800224C0 (__security_check_cookie.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180024270 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??1?$function@$$A6AXPEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z@std@@QEAA@XZ @ 0x180053324 (--1-$function@$$A6AXPEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@Window.c)
 *     ?_Tidy@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX_N_K@Z @ 0x1800627B4 (-_Tidy@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX_N_K@Z.c)
 *     ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@PEB_W@Z @ 0x18008F79C (--0-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@PEB_W@Z.c)
 *     ?DecodeBase64String@Internal@TargetedContent@Services@Windows@@YA?AVHString@Wrappers@WRL@Microsoft@@PEAUHSTRING__@@@Z @ 0x180097690 (-DecodeBase64String@Internal@TargetedContent@Services@Windows@@YA-AVHString@Wrappers@WRL@Microso.c)
 *     ?ResolveTriggerStateFromName@Internal@TargetedContent@Services@Windows@@YA?AW4TargetedContentTriggerState@1234@PEB_W@Z @ 0x1800991C4 (-ResolveTriggerStateFromName@Internal@TargetedContent@Services@Windows@@YA-AW4TargetedContentTri.c)
 *     ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@AEBV01@@Z @ 0x18009AE78 (--0-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Destroy@?$vector@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@std@@IEAAXPEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@2@0@Z @ 0x18009F9E8 (-_Destroy@-$vector@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@V-$allocator.c)
 *     ?SplitString@StringUtils@CommonHelper@CreativeFramework@@YA?AV?$vector@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@std@@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@5@PEB_W@Z @ 0x1800D0694 (-SplitString@StringUtils@CommonHelper@CreativeFramework@@YA-AV-$vector@V-$basic_string@_WU-$char.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4360 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall Windows::Services::TargetedContent::Internal::EnumerateTriggerStateTransitions(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rcx
  void **v4; // rbx
  void **v5; // r14
  unsigned int v6; // r8d
  const WCHAR *v7; // rax
  HSTRING_HEADER *v8; // rax
  const WCHAR *v9; // rcx
  int v10; // esi
  const WCHAR *v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  HSTRING string; // [rsp+30h] [rbp-79h] BYREF
  int v18; // [rsp+38h] [rbp-71h] BYREF
  const WCHAR *v19; // [rsp+40h] [rbp-69h] BYREF
  __int128 v20; // [rsp+48h] [rbp-61h] BYREF
  __int64 v21; // [rsp+58h] [rbp-51h]
  HSTRING v22; // [rsp+60h] [rbp-49h] BYREF
  void **v23; // [rsp+68h] [rbp-41h] BYREF
  void **v24; // [rsp+70h] [rbp-39h]
  __int64 v25; // [rsp+80h] [rbp-29h]
  _QWORD v26[4]; // [rsp+88h] [rbp-21h] BYREF
  _QWORD v27[4]; // [rsp+A8h] [rbp-1h] BYREF
  HSTRING_HEADER v28; // [rsp+C8h] [rbp+1Fh] BYREF
  __int64 v29; // [rsp+E0h] [rbp+37h]

  v25 = a2;
  std::wstring::wstring((__int64)v27);
  CreativeFramework::CommonHelper::StringUtils::SplitString(&v23, v27, L"|");
  std::wstring::_Tidy(v27, 1, 0LL);
  v4 = v23;
  v5 = v24;
  while ( v4 != v5 )
  {
    std::wstring::wstring((__int64)v26, v4);
    CreativeFramework::CommonHelper::StringUtils::SplitString(&v20, v26, L";");
    v7 = (const WCHAR *)v20;
    if ( *(_QWORD *)(v20 + 24) >= 8uLL )
      v7 = *(const WCHAR **)v20;
    v19 = v7;
    v8 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v28, &v19, v6);
    Windows::Services::TargetedContent::Internal::DecodeBase64String(&string, (__int64)v8[1].Reserved.Reserved1);
    v29 = 0LL;
    v9 = (const WCHAR *)(v20 + 32);
    if ( *(_QWORD *)(v20 + 56) >= 8uLL )
      v9 = *(const WCHAR **)v9;
    v10 = Windows::Services::TargetedContent::Internal::ResolveTriggerStateFromName(v9);
    v11 = (const WCHAR *)(v20 + 64);
    if ( *(_QWORD *)(v20 + 88) >= 8uLL )
      v11 = *(const WCHAR **)v11;
    v12 = Windows::Services::TargetedContent::Internal::ResolveTriggerStateFromName(v11);
    v22 = string;
    v18 = v12;
    LODWORD(v19) = v10;
    v13 = *(_QWORD *)(a2 + 24);
    if ( !v13 )
      std::_Xbad_function_call();
    if ( !(*(unsigned __int8 (__fastcall **)(__int64, HSTRING *, const WCHAR **, int *))(*(_QWORD *)v13 + 16LL))(
            v13,
            &v22,
            &v19,
            &v18) )
    {
      WindowsDeleteString(string);
      string = 0LL;
      if ( (_QWORD)v20 )
      {
        std::vector<std::wstring>::_Destroy(v15, v20, *((_QWORD *)&v20 + 1));
        operator delete((void *)v20);
        v20 = 0LL;
        v21 = 0LL;
      }
      std::wstring::_Tidy(v26, 1, 0LL);
      break;
    }
    WindowsDeleteString(string);
    string = 0LL;
    if ( (_QWORD)v20 )
    {
      std::vector<std::wstring>::_Destroy(v14, v20, *((_QWORD *)&v20 + 1));
      operator delete((void *)v20);
    }
    std::wstring::_Tidy(v26, 1, 0LL);
    v4 += 4;
  }
  if ( v23 )
  {
    std::vector<std::wstring>::_Destroy(v3, v23, v24);
    operator delete(v23);
  }
  return std::function<void (Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *,std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>)>::~function<void (Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *,std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>)>(a2);
}
