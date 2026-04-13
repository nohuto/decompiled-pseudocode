/*
 * XREFs of ??$QueryInterface@UIAgileObject@@@IUnknown@@QEAAJPEAPEAUIAgileObject@@@Z @ 0x18007BF68
 * Callers:
 *     ?Initialize@?$GitStorageType@UIAppInstallInfoRecord@ContentManagement@@@detail@XWinRT@@QEAAJPEAUIAppInstallInfoRecord@ContentManagement@@@Z @ 0x180081FA4 (-Initialize@-$GitStorageType@UIAppInstallInfoRecord@ContentManagement@@@detail@XWinRT@@QEAAJPEAU.c)
 *     ?Initialize@?$GitStorageType@UITargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@detail@XWinRT@@QEAAJPEAUITargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@Z @ 0x1800891F8 (-Initialize@-$GitStorageType@UITargetedContentTriggerStateTransition@Internal@TargetedContent@Se.c)
 *     ?Initialize@?$GitStorageType@UITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@detail@XWinRT@@QEAAJPEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Z @ 0x180092698 (-Initialize@-$GitStorageType@UITargetedContentTriggerInternal@Internal@TargetedContent@Services@.c)
 *     ?Initialize@?$GitStorageType@UIInspectable@@@detail@XWinRT@@QEAAJPEAUIInspectable@@@Z @ 0x1800C9F68 (-Initialize@-$GitStorageType@UIInspectable@@@detail@XWinRT@@QEAAJPEAUIInspectable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IUnknown::QueryInterface<IAgileObject>(
        __int64 (__fastcall ***a1)(_QWORD, GUID *, __int64),
        __int64 a2)
{
  return (**a1)(a1, &GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90, a2);
}
