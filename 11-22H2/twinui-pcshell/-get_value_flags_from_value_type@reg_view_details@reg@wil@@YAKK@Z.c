/*
 * XREFs of ?get_value_flags_from_value_type@reg_view_details@reg@wil@@YAKK@Z @ 0x1801F0F3C
 * Callers:
 *     ??$try_get_value@I@?$reg_view_t@Uerr_exception_policy@wil@@@reg_view_details@reg@wil@@QEBA?AV?$optional@I@std@@PEBG0K@Z @ 0x1801E7CEC (--$try_get_value@I@-$reg_view_t@Uerr_exception_policy@wil@@@reg_view_details@reg@wil@@QEBA-AV-$o.c)
 *     ??$try_get_value@_K@?$reg_view_t@Uerr_exception_policy@wil@@@reg_view_details@reg@wil@@QEBA?AV?$optional@_K@std@@PEBG0K@Z @ 0x1801E7DA4 (--$try_get_value@_K@-$reg_view_t@Uerr_exception_policy@wil@@@reg_view_details@reg@wil@@QEBA-AV-$.c)
 *     _lambda_9e570927e665d205f933b0ae213f3c70_::operator() @ 0x1801E932C (_lambda_9e570927e665d205f933b0ae213f3c70_--operator().c)
 *     ?AuditWebSearchExtensions@UndockedSearchAppExperienceManager@@CAXXZ @ 0x1801EA284 (-AuditWebSearchExtensions@UndockedSearchAppExperienceManager@@CAXXZ.c)
 *     ??$get_value_with_type@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@Uerr_returncode_policy@2@@?$reg_view_t@Uerr_returncode_policy@wil@@@reg_view_details@reg@wil@@AEBAJPEBG0AEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@3@K@Z @ 0x180230134 (--$get_value_with_type@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoT.c)
 *     ?IsAutomaticInstallAllowedByPolicy@LockScreenWidgetPackageHelperBase@@IEAA_NXZ @ 0x18023EC74 (-IsAutomaticInstallAllowedByPolicy@LockScreenWidgetPackageHelperBase@@IEAA_NXZ.c)
 *     ?IsCTAUpdateAllowed@LockScreenWidgetPackageHelperBase@@IEAA_NXZ @ 0x18023ED28 (-IsCTAUpdateAllowed@LockScreenWidgetPackageHelperBase@@IEAA_NXZ.c)
 *     ?IsInCTARegion@LockScreenWidgetPackageHelperBase@@IEAA_NXZ @ 0x18023F1F0 (-IsInCTARegion@LockScreenWidgetPackageHelperBase@@IEAA_NXZ.c)
 *     ??$get_value_with_type@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@Uerr_returncode_policy@wil@@@?$reg_view_t@Uerr_exception_policy@wil@@@reg_view_details@reg@wil@@AEBAJPEBG0AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@K@Z @ 0x18025E460 (--$get_value_with_type@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@Uerr_return.c)
 *     ?SendPressAndHoldStopSignalIfNeeded@CopilotHotkeyManager@@AEAA_NXZ @ 0x180273118 (-SendPressAndHoldStopSignalIfNeeded@CopilotHotkeyManager@@AEAA_NXZ.c)
 *     ?try_get_value_string@reg@wil@@YA?AV?$optional@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@PEAUHKEY__@@PEBG1@Z @ 0x180275E14 (-try_get_value_string@reg@wil@@YA-AV-$optional@V-$basic_string@GU-$char_traits@G@std@@V-$allocat.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::reg::reg_view_details::get_value_flags_from_value_type(wil::reg::reg_view_details *this)
{
  switch ( (_DWORD)this )
  {
    case 1:
      return 268435462LL;
    case 2:
      return 6LL;
    case 3:
      return 8LL;
    case 4:
      return 16LL;
    case 7:
      return 32LL;
    case 0xB:
      return 64LL;
  }
  return (unsigned int)this;
}
