/*
 * XREFs of ?GetTaskNameForTrigger@Internal@TargetedContent@Services@Windows@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x1800A55A0
 * Callers:
 *     ?RegisterTimerTrigger@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerInternal@1234@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x1800A5F50 (-RegisterTimerTrigger@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerI.c)
 *     ?RegisterWnfTrigger@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerInternal@1234@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x1800A61C0 (-RegisterWnfTrigger@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerInt.c)
 *     ?UnRegisterTriggerTask@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerInternal@1234@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x1800A6E94 (-UnRegisterTriggerTask@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTrigger.c)
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAAJPEB_WZZ @ 0x180039F6C (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAA.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048430 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Assign_rv@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z @ 0x180066A7C (-_Assign_rv@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x1800A42B8 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     ?GetNameForTrigger@Internal@TargetedContent@Services@Windows@@YA?AVHString@Wrappers@WRL@Microsoft@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x1800A5250 (-GetNameForTrigger@Internal@TargetedContent@Services@Windows@@YA-AVHString@Wrappers@WRL@Microsof.c)
 *     ?NormalizedString@Internal@TargetedContent@Services@Windows@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEB_W00@Z @ 0x1800A5E7C (-NormalizedString@Internal@TargetedContent@Services@Windows@@YA-AV-$basic_string@_WU-$char_trait.c)
 *     ?ResolveNameFromTrigger@Internal@TargetedContent@Services@Windows@@YAPEB_WW4TargetedContentKnownTrigger@1234@@Z @ 0x1800A66A8 (-ResolveNameFromTrigger@Internal@TargetedContent@Services@Windows@@YAPEB_WW4TargetedContentKnown.c)
 *     ?ResolveTriggerRegistrationOption@Internal@TargetedContent@Services@Windows@@YA?AW4TriggerRegistrationOption@1234@W4TargetedContentKnownTrigger@1234@@Z @ 0x1800A6C0C (-ResolveTriggerRegistrationOption@Internal@TargetedContent@Services@Windows@@YA-AW4TriggerRegist.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
HSTRING __fastcall Windows::Services::TargetedContent::Internal::GetTaskNameForTrigger(HSTRING a1, __int64 a2)
{
  int v4; // eax
  __int64 (__fastcall *v5)(__int64, HSTRING *); // rbx
  int v6; // eax
  __int64 (__fastcall *v7)(__int64, HSTRING *); // rbx
  int v8; // eax
  const char *v9; // rbx
  __int64 v10; // rax
  int *v11; // rcx
  int v12; // eax
  void *v13; // rbx
  int v14; // eax
  int v15; // eax
  char *v16; // rdx
  unsigned __int64 v17; // r8
  int v19; // [rsp+20h] [rbp-79h]
  int v20; // [rsp+20h] [rbp-79h]
  int v21; // [rsp+20h] [rbp-79h]
  int v22; // [rsp+20h] [rbp-79h]
  HSTRING v23; // [rsp+40h] [rbp-59h] BYREF
  HSTRING v24; // [rsp+48h] [rbp-51h] BYREF
  unsigned int v25; // [rsp+50h] [rbp-49h] BYREF
  HSTRING string; // [rsp+58h] [rbp-41h] BYREF
  void *Src; // [rsp+60h] [rbp-39h] BYREF
  __int64 v28; // [rsp+68h] [rbp-31h]
  __int64 v29; // [rsp+70h] [rbp-29h]
  LPVOID pv[3]; // [rsp+78h] [rbp-21h] BYREF
  void *v31[2]; // [rsp+90h] [rbp-9h] BYREF
  __int64 v32; // [rsp+A0h] [rbp+7h]
  unsigned __int64 v33; // [rsp+A8h] [rbp+Fh]
  int v34[2]; // [rsp+B0h] [rbp+17h] BYREF
  __int64 v35; // [rsp+C0h] [rbp+27h]
  unsigned __int64 v36; // [rsp+C8h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]

  string = a1;
  v4 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)a2 + 80LL))(a2, &v25);
  if ( v4 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      176LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
      (const char *)(unsigned int)v4,
      v19);
  Windows::Services::TargetedContent::Internal::GetNameForTrigger(&string, a2);
  WindowsGetStringRawBuffer(string, 0LL);
  Windows::Services::TargetedContent::Internal::NormalizedString(v34);
  v23 = 0LL;
  if ( (Windows::Services::TargetedContent::Internal::ResolveTriggerRegistrationOption(v25) & 0x100) == 0 )
  {
    v5 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a2 + 96LL);
    WindowsDeleteString(v23);
    v23 = 0LL;
    v6 = v5(a2, &v23);
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        183LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
        (const char *)(unsigned int)v6,
        v19);
  }
  v24 = 0LL;
  v7 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a2 + 144LL);
  WindowsDeleteString(0LL);
  v24 = 0LL;
  v8 = v7(a2, &v24);
  if ( v8 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      187LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
      (const char *)(unsigned int)v8,
      v19);
  if ( WindowsIsStringEmpty(v24) )
    v9 = L"Initial";
  else
    LODWORD(v9) = (unsigned int)WindowsGetStringRawBuffer(v24, 0LL);
  v10 = Windows::Services::TargetedContent::Internal::ResolveNameFromTrigger(v25);
  memset(pv, 0, sizeof(pv));
  v11 = v34;
  if ( v36 >= 8 )
    v11 = *(int **)v34;
  v12 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::InitializeFormat(
          (__int64)pv,
          L"%s%s%s",
          v10,
          L":",
          v11);
  if ( v12 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      194LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
      (const char *)(unsigned int)v12,
      v20);
  Src = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  if ( WindowsIsStringEmpty(v23) )
  {
    v21 = (int)v9;
    v13 = pv[0];
    v14 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::InitializeFormat(
            (__int64)&Src,
            L"%s%s%s",
            pv[0],
            L"-");
    if ( v14 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        201LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
        (const char *)(unsigned int)v14,
        v21);
  }
  else
  {
    WindowsGetStringRawBuffer(v23, 0LL);
    Windows::Services::TargetedContent::Internal::NormalizedString(v31);
    v22 = (int)v9;
    v13 = pv[0];
    v15 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::InitializeFormat(
            (__int64)&Src,
            L"%s%s%s%s%s",
            pv[0]);
    if ( v15 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        206LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
        (const char *)(unsigned int)v15,
        v22);
    if ( v33 >= 8 )
      operator delete(v31[0]);
  }
  v16 = (char *)Src;
  Src = 0LL;
  v29 = 0LL;
  v28 = 0LL;
  v33 = 7LL;
  v32 = 0LL;
  LOWORD(v31[0]) = 0;
  if ( *(_WORD *)v16 )
  {
    v17 = -1LL;
    do
      ++v17;
    while ( *(_WORD *)&v16[2 * v17] );
  }
  else
  {
    v17 = 0LL;
  }
  std::wstring::assign((unsigned __int64 *)v31, v16, v17);
  *((_QWORD *)a1 + 3) = 7LL;
  *((_QWORD *)a1 + 2) = 0LL;
  *(_WORD *)a1 = 0;
  std::wstring::_Assign_rv(a1, v31);
  if ( v33 >= 8 )
    operator delete(v31[0]);
  v33 = 7LL;
  v32 = 0LL;
  LOWORD(v31[0]) = 0;
  if ( v13 )
    CoTaskMemFree(v13);
  WindowsDeleteString(v24);
  v24 = 0LL;
  WindowsDeleteString(v23);
  v23 = 0LL;
  if ( v36 >= 8 )
    operator delete(*(void **)v34);
  v36 = 7LL;
  v35 = 0LL;
  LOWORD(v34[0]) = 0;
  WindowsDeleteString(string);
  return a1;
}
