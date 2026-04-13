/*
 * XREFs of ?GetTaskNameForTrigger@Internal@TargetedContent@Services@Windows@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x180097F88
 * Callers:
 *     ?RegisterTimerTrigger@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerInternal@1234@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x180098760 (-RegisterTimerTrigger@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerI.c)
 *     ?RegisterWnfTrigger@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerInternal@1234@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x180098970 (-RegisterWnfTrigger@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerInt.c)
 *     ?UnRegisterTriggerTask@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerInternal@1234@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x180099348 (-UnRegisterTriggerTask@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTrigger.c)
 * Callees:
 *     __security_check_cookie @ 0x1800224C0 (__security_check_cookie.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180042C64 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180043300 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@$$QEAV01@@Z @ 0x180051870 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@$$QEAV01@@Z.c)
 *     ?_Tidy@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX_N_K@Z @ 0x180062764 (-_Tidy@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX_N_K@Z.c)
 *     ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@PEB_W@Z @ 0x18008F74C (--0-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@PEB_W@Z.c)
 *     ?GetNameForTrigger@Internal@TargetedContent@Services@Windows@@YA?AVHString@Wrappers@WRL@Microsoft@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x180097CBC (-GetNameForTrigger@Internal@TargetedContent@Services@Windows@@YA-AVHString@Wrappers@WRL@Microsof.c)
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAAJPEB_WZZ @ 0x1800984C8 (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAA.c)
 *     ?NormalizedString@Internal@TargetedContent@Services@Windows@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEB_W00@Z @ 0x1800986D4 (-NormalizedString@Internal@TargetedContent@Services@Windows@@YA-AV-$basic_string@_WU-$char_trait.c)
 *     ?ResolveNameFromTrigger@Internal@TargetedContent@Services@Windows@@YAPEB_WW4TargetedContentKnownTrigger@1234@@Z @ 0x180098D08 (-ResolveNameFromTrigger@Internal@TargetedContent@Services@Windows@@YAPEB_WW4TargetedContentKnown.c)
 *     ?ResolveTriggerRegistrationOption@Internal@TargetedContent@Services@Windows@@YA?AW4TriggerRegistrationOption@1234@W4TargetedContentKnownTrigger@1234@@Z @ 0x1800990C4 (-ResolveTriggerRegistrationOption@Internal@TargetedContent@Services@Windows@@YA-AW4TriggerRegist.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4310 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall Windows::Services::TargetedContent::Internal::GetTaskNameForTrigger(__int64 a1, __int64 a2)
{
  int v4; // eax
  PCWSTR StringRawBuffer; // rax
  __int64 (__fastcall *v6)(__int64, HSTRING *); // rbx
  int v7; // eax
  __int64 (__fastcall *v8)(__int64, HSTRING *); // rbx
  int v9; // eax
  const char *v10; // rbx
  __int64 v11; // rax
  int *v12; // rcx
  int v13; // eax
  int v14; // eax
  PCWSTR v15; // rax
  int v16; // eax
  __int64 v17; // rax
  int v19; // [rsp+20h] [rbp-79h]
  int v20; // [rsp+20h] [rbp-79h]
  HSTRING v21; // [rsp+40h] [rbp-59h] BYREF
  HSTRING v22; // [rsp+48h] [rbp-51h] BYREF
  unsigned int v23; // [rsp+50h] [rbp-49h] BYREF
  HSTRING string; // [rsp+58h] [rbp-41h] BYREF
  __int64 v25; // [rsp+60h] [rbp-39h] BYREF
  __int64 v26; // [rsp+68h] [rbp-31h]
  __int64 v27; // [rsp+70h] [rbp-29h]
  _QWORD v28[4]; // [rsp+78h] [rbp-21h] BYREF
  _QWORD v29[3]; // [rsp+98h] [rbp-1h] BYREF
  int v30[2]; // [rsp+B8h] [rbp+1Fh] BYREF
  unsigned __int64 v31; // [rsp+D0h] [rbp+37h]
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]

  string = (HSTRING)a1;
  v4 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)a2 + 80LL))(a2, &v23);
  if ( v4 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xB0,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
      (const char *)(unsigned int)v4,
      v19);
  Windows::Services::TargetedContent::Internal::GetNameForTrigger(&string, a2);
  StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
  Windows::Services::TargetedContent::Internal::NormalizedString(v30, StringRawBuffer);
  v21 = 0LL;
  if ( (Windows::Services::TargetedContent::Internal::ResolveTriggerRegistrationOption(v23) & 0x100) == 0 )
  {
    v6 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a2 + 96LL);
    WindowsDeleteString(v21);
    v21 = 0LL;
    v7 = v6(a2, &v21);
    if ( v7 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xB7,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
        (const char *)(unsigned int)v7,
        v19);
  }
  v22 = 0LL;
  v8 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a2 + 144LL);
  WindowsDeleteString(0LL);
  v22 = 0LL;
  v9 = v8(a2, &v22);
  if ( v9 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xBB,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
      (const char *)(unsigned int)v9,
      v19);
  if ( WindowsIsStringEmpty(v22) )
    v10 = L"Initial";
  else
    LODWORD(v10) = (unsigned int)WindowsGetStringRawBuffer(v22, 0LL);
  v11 = Windows::Services::TargetedContent::Internal::ResolveNameFromTrigger(v23);
  memset(v28, 0, 24);
  v12 = v30;
  if ( v31 >= 8 )
    v12 = *(int **)v30;
  v13 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::InitializeFormat(
          v28,
          L"%s%s%s",
          v11,
          L":",
          v12);
  if ( v13 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xC2,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
      (const char *)(unsigned int)v13,
      v20);
  v25 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  if ( WindowsIsStringEmpty(v21) )
  {
    v14 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::InitializeFormat(
            &v25,
            L"%s%s%s",
            v28[0],
            L"-");
    if ( v14 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xC9,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
        (const char *)(unsigned int)v14,
        (int)v10);
  }
  else
  {
    v15 = WindowsGetStringRawBuffer(v21, 0LL);
    Windows::Services::TargetedContent::Internal::NormalizedString(v29, v15);
    v16 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::InitializeFormat(
            &v25,
            L"%s%s%s%s%s",
            v28[0]);
    if ( v16 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xCE,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
        (const char *)(unsigned int)v16,
        (int)v10);
    std::wstring::_Tidy(v29, 1, 0LL);
  }
  v25 = 0LL;
  v27 = 0LL;
  v26 = 0LL;
  v17 = std::wstring::wstring((__int64)v29);
  std::wstring::wstring(a1, v17);
  std::wstring::_Tidy(v29, 1, 0LL);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v25);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v28);
  WindowsDeleteString(v22);
  v22 = 0LL;
  WindowsDeleteString(v21);
  v21 = 0LL;
  std::wstring::_Tidy(v30, 1, 0LL);
  WindowsDeleteString(string);
  return a1;
}
