/*
 * XREFs of _lambda_c0bbf621b4662329ff8f927a7da19c87_::operator() @ 0x18009B7B8
 * Callers:
 *     std::_Func_impl_std::_Callable_obj__lambda_c0bbf621b4662329ff8f927a7da19c87__0__std::allocator_std::_Func_class_bool_std::shared_ptr_CreativeFramework::CommonHelper::ISettingsContainer__CreativeFramework::Triggers::PropertySetHelper_&_std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil____bool_std::shared_ptr_CreativeFramework::CommonHelper::ISettingsContainer__CreativeFramework::Triggers::PropertySetHelper_&_std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil_::_Do_call @ 0x18009FA60 (std--_Func_impl_std--_Callable_obj__lambda_c0bbf621b4662329ff8f927a7da19c87__0__std_ea_18009FA60.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180004724 (--2@YAPEAX_K@Z.c)
 *     ?_Xbad_alloc@std@@YAXXZ @ 0x180004938 (-_Xbad_alloc@std@@YAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180043300 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180060444 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?ResolveTriggerStateFromName@Internal@TargetedContent@Services@Windows@@YA?AW4TargetedContentTriggerState@1234@PEB_W@Z @ 0x180099174 (-ResolveTriggerStateFromName@Internal@TargetedContent@Services@Windows@@YA-AW4TargetedContentTri.c)
 *     ?EnumerateTriggerStateTransitions@Internal@TargetedContent@Services@Windows@@YAXPEB_WV?$function@$$A6A_NPEAUHSTRING__@@W4TargetedContentTriggerState@Internal@TargetedContent@Services@Windows@@1@Z@std@@@Z @ 0x18009CBEC (-EnumerateTriggerStateTransitions@Internal@TargetedContent@Services@Windows@@YAXPEB_WV-$function.c)
 *     ?GetStringValue@Internal@TargetedContent@Services@Windows@@YA_NAEAVPropertySetHelper@Triggers@CreativeFramework@@PEB_WPEAPEAUHSTRING__@@@Z @ 0x18009D1E0 (-GetStringValue@Internal@TargetedContent@Services@Windows@@YA_NAEAVPropertySetHelper@Triggers@Cr.c)
 */

// Hidden C++ exception states: #wind=5
char __fastcall lambda_c0bbf621b4662329ff8f927a7da19c87_::operator()(
        _QWORD *a1,
        __int64 a2,
        Windows::Services::TargetedContent::Internal *a3)
{
  HSTRING *v6; // r9
  HSTRING *v7; // r9
  const WCHAR *StringRawBuffer; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  char *v11; // rax
  PCWSTR v12; // rax
  std::_Ref_count_base *v13; // rcx
  HSTRING string; // [rsp+20h] [rbp-29h] BYREF
  HSTRING v16[2]; // [rsp+28h] [rbp-21h] BYREF
  _BYTE v17[24]; // [rsp+38h] [rbp-11h] BYREF
  char *v18; // [rsp+50h] [rbp+7h]
  __int128 v19; // [rsp+58h] [rbp+Fh]
  __int128 v20; // [rsp+68h] [rbp+1Fh]
  __int128 v21; // [rsp+78h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+5Fh]
  int v23; // [rsp+C8h] [rbp+7Fh] BYREF

  WindowsDeleteString(0LL);
  string = 0LL;
  if ( Windows::Services::TargetedContent::Internal::GetStringValue(
         a3,
         (struct CreativeFramework::Triggers::PropertySetHelper *)L"StateTransitions",
         (const wchar_t *)&string,
         v6) )
  {
    v16[0] = 0LL;
    WindowsDeleteString(0LL);
    v16[0] = 0LL;
    if ( !Windows::Services::TargetedContent::Internal::GetStringValue(
            a3,
            (struct CreativeFramework::Triggers::PropertySetHelper *)L"triggerState",
            (const wchar_t *)v16,
            v7) )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x23F,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
        (const char *)0x80070490LL,
        (int)string);
    StringRawBuffer = WindowsGetStringRawBuffer(v16[0], 0LL);
    v23 = Windows::Services::TargetedContent::Internal::ResolveTriggerStateFromName(StringRawBuffer);
    v16[1] = (HSTRING)v17;
    v9 = a1[2];
    v10 = a1[1];
    *(_QWORD *)&v19 = *a1;
    *((_QWORD *)&v19 + 1) = &v23;
    *(_QWORD *)&v20 = v10;
    *((_QWORD *)&v20 + 1) = a3;
    *(_QWORD *)&v21 = v9;
    *((_QWORD *)&v21 + 1) = a2;
    v18 = 0LL;
    v11 = (char *)operator new(0x40uLL);
    if ( !v11 )
      std::_Xbad_alloc();
    *(_QWORD *)v11 = off_1800E93A0;
    *(_OWORD *)(v11 + 8) = v19;
    *(_OWORD *)(v11 + 24) = v20;
    *(_OWORD *)(v11 + 40) = v21;
    v18 = v11;
    v12 = WindowsGetStringRawBuffer(string, 0LL);
    Windows::Services::TargetedContent::Internal::EnumerateTriggerStateTransitions(v12, v17);
    WindowsDeleteString(v16[0]);
    v16[0] = 0LL;
    WindowsDeleteString(string);
    string = 0LL;
  }
  else
  {
    WindowsDeleteString(string);
    string = 0LL;
  }
  v13 = *(std::_Ref_count_base **)(a2 + 8);
  if ( v13 )
    std::_Ref_count_base::_Decref(v13);
  return 1;
}
