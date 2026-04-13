/*
 * XREFs of ?Initialize@String@Internal@Windows@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x180092760
 * Callers:
 *     ?GetTriggeredItemsForStateAsync@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@UEAAJPEAUHSTRING__@@00PEAPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@@Foundation@5@@Z @ 0x180091EE0 (-GetTriggeredItemsForStateAsync@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Se.c)
 * Callees:
 *     ?FreeAndAssignOnSuccess@String@Internal@Windows@@CAJJPEAUHSTRING__@@PEAPEAU4@@Z @ 0x180032DD0 (-FreeAndAssignOnSuccess@String@Internal@Windows@@CAJJPEAUHSTRING__@@PEAPEAU4@@Z.c)
 */

__int64 __fastcall Windows::Internal::String::Initialize(HSTRING *this, HSTRING *a2)
{
  HRESULT v3; // eax
  HSTRING newString; // [rsp+30h] [rbp+8h] BYREF

  v3 = WindowsDuplicateString(*a2, &newString);
  return Windows::Internal::String::FreeAndAssignOnSuccess(v3, newString, this);
}
