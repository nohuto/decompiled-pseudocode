/*
 * XREFs of ??$?0PEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@?$AutoValue@V?$GitStorageType@UITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@detail@XWinRT@@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Internal@Collections@Foundation@Windows@@@XWinRT@@QEAA@AEBQEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@PEAJ@Z @ 0x18008BD90
 * Callers:
 *     ?InsertAtInternal@?$Vector@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@2785@U?$VectorOptions@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@$0A@$00$0A@@2785@@Internal@Collections@Foundation@Windows@@AEAAJIPEAUITargetedContentTriggerInternal@2TargetedContent@Services@5@_N@Z @ 0x180092800 (-InsertAtInternal@-$Vector@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@.c)
 *     ?SetAt@?$Vector@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@2785@U?$VectorOptions@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@$0A@$00$0A@@2785@@Internal@Collections@Foundation@Windows@@UEAAJIPEAUITargetedContentTriggerInternal@2TargetedContent@Services@5@@Z @ 0x180094940 (-SetAt@-$Vector@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@U-.c)
 * Callees:
 *     ?Initialize@?$GitStorageType@UITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@detail@XWinRT@@QEAAJPEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Z @ 0x180092698 (-Initialize@-$GitStorageType@UITargetedContentTriggerInternal@Internal@TargetedContent@Services@.c)
 */

__int64 __fastcall XWinRT::AutoValue<XWinRT::detail::GitStorageType<Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>>::AutoValue<XWinRT::detail::GitStorageType<Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>>(
        __int64 a1,
        _QWORD *a2,
        int *a3)
{
  int v5; // eax

  *(_QWORD *)a1 = 0LL;
  *(_BYTE *)(a1 + 8) = 0;
  v5 = XWinRT::detail::GitStorageType<Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal>::Initialize(
         a1,
         *a2);
  *a3 = v5;
  if ( v5 < 0 )
  {
    *(_QWORD *)a1 = 0LL;
    *(_BYTE *)(a1 + 8) = 0;
  }
  return a1;
}
