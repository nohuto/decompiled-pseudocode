/*
 * XREFs of ??$?0PEAUITargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@?$AutoValue@PEAUITargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@@XWinRT@@QEAA@AEBQEAUITargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@PEAJ@Z @ 0x1800852BC
 * Callers:
 *     ?InsertAtInternal@?$Vector@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2785@U?$DefaultVectorOptions@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2785@@Internal@Collections@Foundation@Windows@@AEAAJIPEAUITargetedContentTriggerStateTransition@2TargetedContent@Services@5@_N@Z @ 0x1800892F0 (-InsertAtInternal@-$Vector@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Se.c)
 *     ?SetAt@?$Vector@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2785@U?$DefaultVectorOptions@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2785@@Internal@Collections@Foundation@Windows@@UEAAJIPEAUITargetedContentTriggerStateTransition@2TargetedContent@Services@5@@Z @ 0x18008A560 (-SetAt@-$Vector@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Wind.c)
 * Callees:
 *     ??$Construct@UITargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAJPEAPEAUITargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@PEAU23456@@Z @ 0x1800858EC (--$Construct@UITargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@.c)
 */

_QWORD *__fastcall XWinRT::AutoValue<Windows::Services::TargetedContent::Internal::ITargetedContentTriggerStateTransition *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>>::AutoValue<Windows::Services::TargetedContent::Internal::ITargetedContentTriggerStateTransition *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>>(
        _QWORD *a1,
        _QWORD *a2,
        int *a3)
{
  int v5; // eax

  v5 = XWinRT::InterfaceLifetimeTraits::Construct<Windows::Services::TargetedContent::Internal::ITargetedContentTriggerStateTransition>(
         a1,
         *a2);
  *a3 = v5;
  if ( v5 < 0 )
    *a1 = 0LL;
  return a1;
}
