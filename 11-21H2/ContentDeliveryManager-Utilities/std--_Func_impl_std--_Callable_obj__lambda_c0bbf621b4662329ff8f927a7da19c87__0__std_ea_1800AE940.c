/*
 * XREFs of std::_Func_impl_std::_Callable_obj__lambda_c0bbf621b4662329ff8f927a7da19c87__0__std::allocator_std::_Func_class_bool_std::shared_ptr_CreativeFramework::CommonHelper::ISettingsContainer__CreativeFramework::Triggers::PropertySetHelper_&_std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil____bool_std::shared_ptr_CreativeFramework::CommonHelper::ISettingsContainer__CreativeFramework::Triggers::PropertySetHelper_&_std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil_::_Do_call @ 0x1800AE940
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180004094 (--2@YAPEAX_K@Z.c)
 *     ?_Xbad_alloc@std@@YAXXZ @ 0x1800042A8 (-_Xbad_alloc@std@@YAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048430 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@XZ @ 0x180057E48 (--1-$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@XZ.c)
 *     ?ResolveTriggerStateFromName@Internal@TargetedContent@Services@Windows@@YA?AW4TargetedContentTriggerState@1234@PEB_W@Z @ 0x1800A6D00 (-ResolveTriggerStateFromName@Internal@TargetedContent@Services@Windows@@YA-AW4TargetedContentTri.c)
 *     ?EnumerateTriggerStateTransitions@Internal@TargetedContent@Services@Windows@@YAXPEB_WV?$function@$$A6A_NPEAUHSTRING__@@W4TargetedContentTriggerState@Internal@TargetedContent@Services@Windows@@1@Z@std@@@Z @ 0x1800AAB30 (-EnumerateTriggerStateTransitions@Internal@TargetedContent@Services@Windows@@YAXPEB_WV-$function.c)
 *     ?GetStringValue@Internal@TargetedContent@Services@Windows@@YA_NAEAVPropertySetHelper@Triggers@CreativeFramework@@PEB_WPEAPEAUHSTRING__@@@Z @ 0x1800AB584 (-GetStringValue@Internal@TargetedContent@Services@Windows@@YA_NAEAVPropertySetHelper@Triggers@Cr.c)
 */

// Hidden C++ exception states: #wind=4
char __fastcall std::_Func_impl_std::_Callable_obj__lambda_c0bbf621b4662329ff8f927a7da19c87__0__std::allocator_std::_Func_class_bool_std::shared_ptr_CreativeFramework::CommonHelper::ISettingsContainer__CreativeFramework::Triggers::PropertySetHelper___std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil____bool_std::shared_ptr_CreativeFramework::CommonHelper::ISettingsContainer__CreativeFramework::Triggers::PropertySetHelper___std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil_::_Do_call(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  __int128 v3; // rcx
  HSTRING *v5; // r9
  HSTRING *v6; // r9
  const WCHAR *StringRawBuffer; // rax
  __int64 v8; // rdx
  char *v9; // rax
  char *v10; // rax
  int v12; // [rsp+20h] [rbp-29h]
  __int128 v13; // [rsp+28h] [rbp-21h] BYREF
  _BYTE v14[24]; // [rsp+38h] [rbp-11h] BYREF
  char *v15; // [rsp+50h] [rbp+7h]
  __int128 v16; // [rsp+58h] [rbp+Fh]
  __int128 v17; // [rsp+68h] [rbp+1Fh]
  __int128 v18; // [rsp+78h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+5Fh]
  int v20; // [rsp+B0h] [rbp+67h] BYREF
  HSTRING v21; // [rsp+B8h] [rbp+6Fh] BYREF
  HSTRING string; // [rsp+C0h] [rbp+77h] BYREF
  __int128 *v23; // [rsp+C8h] [rbp+7Fh]

  *((_QWORD *)&v3 + 1) = a3;
  v13 = 0LL;
  if ( &v13 != (__int128 *)a2 )
  {
    *((_QWORD *)&v13 + 1) = *(_QWORD *)(a2 + 8);
    *(_QWORD *)(a2 + 8) = 0LL;
    *(_QWORD *)&v13 = *(_QWORD *)a2;
    *(_QWORD *)a2 = 0LL;
  }
  v23 = &v13;
  v21 = 0LL;
  WindowsDeleteString(0LL);
  v21 = 0LL;
  if ( Windows::Services::TargetedContent::Internal::GetStringValue(
         *((Windows::Services::TargetedContent::Internal **)&v3 + 1),
         (struct CreativeFramework::Triggers::PropertySetHelper *)L"StateTransitions",
         (const wchar_t *)&v21,
         v5) )
  {
    string = 0LL;
    WindowsDeleteString(0LL);
    string = 0LL;
    if ( !Windows::Services::TargetedContent::Internal::GetStringValue(
            *((Windows::Services::TargetedContent::Internal **)&v3 + 1),
            (struct CreativeFramework::Triggers::PropertySetHelper *)L"triggerState",
            (const wchar_t *)&string,
            v6) )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        575LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
        (const char *)0x80070490LL,
        v12);
    StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
    v20 = Windows::Services::TargetedContent::Internal::ResolveTriggerStateFromName(StringRawBuffer);
    v8 = a1[3];
    *(_QWORD *)&v3 = a1[2];
    *(_QWORD *)&v16 = a1[1];
    *((_QWORD *)&v16 + 1) = &v20;
    v17 = v3;
    *(_QWORD *)&v18 = v8;
    *((_QWORD *)&v18 + 1) = &v13;
    v15 = 0LL;
    v9 = (char *)operator new(0x40uLL);
    if ( !v9 )
      std::_Xbad_alloc();
    *(_QWORD *)v9 = off_180106638;
    *(_OWORD *)(v9 + 8) = v16;
    *(_OWORD *)(v9 + 24) = v17;
    *(_OWORD *)(v9 + 40) = v18;
    v15 = v9;
    v10 = (char *)WindowsGetStringRawBuffer(v21, 0LL);
    Windows::Services::TargetedContent::Internal::EnumerateTriggerStateTransitions(v10, (__int64)v14);
    WindowsDeleteString(string);
    string = 0LL;
  }
  WindowsDeleteString(v21);
  v21 = 0LL;
  std::shared_ptr<CreativeFramework::Actions::PublishSystemStateService>::~shared_ptr<CreativeFramework::Actions::PublishSystemStateService>((__int64)&v13);
  return 1;
}
