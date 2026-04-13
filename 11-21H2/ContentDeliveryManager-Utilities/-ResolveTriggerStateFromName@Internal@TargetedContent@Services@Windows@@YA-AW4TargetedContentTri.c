/*
 * XREFs of ?ResolveTriggerStateFromName@Internal@TargetedContent@Services@Windows@@YA?AW4TargetedContentTriggerState@1234@PEB_W@Z @ 0x1800A6D00
 * Callers:
 *     ?EnumerateTriggerStateTransitions@Internal@TargetedContent@Services@Windows@@YAXPEB_WV?$function@$$A6A_NPEAUHSTRING__@@W4TargetedContentTriggerState@Internal@TargetedContent@Services@Windows@@1@Z@std@@@Z @ 0x1800AAB30 (-EnumerateTriggerStateTransitions@Internal@TargetedContent@Services@Windows@@YAXPEB_WV-$function.c)
 *     std::_Func_impl_std::_Callable_obj__lambda_c0bbf621b4662329ff8f927a7da19c87__0__std::allocator_std::_Func_class_bool_std::shared_ptr_CreativeFramework::CommonHelper::ISettingsContainer__CreativeFramework::Triggers::PropertySetHelper_&_std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil____bool_std::shared_ptr_CreativeFramework::CommonHelper::ISettingsContainer__CreativeFramework::Triggers::PropertySetHelper_&_std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil_::_Do_call @ 0x1800AE940 (std--_Func_impl_std--_Callable_obj__lambda_c0bbf621b4662329ff8f927a7da19c87__0__std_ea_1800AE940.c)
 * Callees:
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x180027420 (--$verify_hresult@J@wil@@YAJJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048430 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall Windows::Services::TargetedContent::Internal::ResolveTriggerStateFromName(const WCHAR *a1)
{
  LPCWCH *v2; // rbx
  unsigned int v4; // eax
  BOOL bIgnoreCase; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = (LPCWCH *)&unk_180111CB0;
  while ( CompareStringOrdinal(v2[1], -1, a1, -1, 1) != 2 )
  {
    v2 += 2;
    if ( v2 == (LPCWCH *)&off_180111CF0 )
    {
      v4 = wil::verify_hresult<long>(0x80070490);
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        690LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
        (const char *)v4,
        bIgnoreCase);
    }
  }
  return *(unsigned int *)v2;
}
