/*
 * XREFs of ?Attach@?$ComPtr@VTargetedContentTriggerStateTransitionImpl@Internal@TargetedContent@Services@Windows@@@WRL@Microsoft@@QEAAXPEAVTargetedContentTriggerStateTransitionImpl@Internal@TargetedContent@Services@Windows@@@Z @ 0x180048E58
 * Callers:
 *     ??$MakeAndInitialize@VTargetedContentTriggerStateTransitionImpl@Internal@TargetedContent@Services@Windows@@UIInspectable@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@@Z @ 0x180047B14 (--$MakeAndInitialize@VTargetedContentTriggerStateTransitionImpl@Internal@TargetedContent@Service.c)
 *     ??$MakeAndInitialize@VTargetedContentTriggerStateTransitionImpl@Internal@TargetedContent@Services@Windows@@V12345@AEAPEAUHSTRING__@@AEAW4TargetedContentTriggerState@2345@AEAW472345@@Details@WRL@Microsoft@@YAJPEAPEAVTargetedContentTriggerStateTransitionImpl@Internal@TargetedContent@Services@Windows@@AEAPEAUHSTRING__@@AEAW4TargetedContentTriggerState@4567@2@Z @ 0x1800867E0 (--$MakeAndInitialize@VTargetedContentTriggerStateTransitionImpl@Internal@TargetedCo_ea_1800867E0.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4310 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransitionImpl>::Attach(
        __int64 *a1,
        __int64 a2)
{
  __int64 v4; // rcx
  __int64 result; // rax

  v4 = *a1;
  if ( v4 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  *a1 = a2;
  return result;
}
