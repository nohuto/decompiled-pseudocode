/*
 * XREFs of ?Duplicate@String@Internal@Windows@@QEAAJAEBV123@@Z @ 0x1800313A0
 * Callers:
 *     ?AddThumbnailToCacheAsync@ThumbnailCacheHelper@ContentManagement@@UEAAJPEAUHSTRING__@@IPEAPEAUIAsyncAction@Foundation@Windows@@@Z @ 0x18002FB40 (-AddThumbnailToCacheAsync@ThumbnailCacheHelper@ContentManagement@@UEAAJPEAUHSTRING__@@IPEAPEAUIA.c)
 *     ?ProcessCreativeEventAsync@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventType@2@PEAUHSTRING__@@111PEAU?$ITypedEventHandler@PEAUIInspectable@@PEAUHSTRING__@@@Foundation@Windows@@PEAUICreativeEventReportedCache@2@PEAPEAUIAsyncAction@67@@Z @ 0x18005BBA0 (-ProcessCreativeEventAsync@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventType@.c)
 *     ?ResolveLayoutBindingsAsync@ContentManagementService@ContentManagement@@UEAAJPEAUHSTRING__@@PEAPEAUIAsyncAction@Foundation@Windows@@@Z @ 0x18005D600 (-ResolveLayoutBindingsAsync@ContentManagementService@ContentManagement@@UEAAJPEAUHSTRING__@@PEAP.c)
 * Callees:
 *     ?FreeAndAssignOnSuccess@String@Internal@Windows@@CAJJPEAUHSTRING__@@PEAPEAU4@@Z @ 0x180032DD0 (-FreeAndAssignOnSuccess@String@Internal@Windows@@CAJJPEAUHSTRING__@@PEAPEAU4@@Z.c)
 */

__int64 __fastcall Windows::Internal::String::Duplicate(HSTRING *this, HSTRING *a2)
{
  HRESULT v3; // eax
  HSTRING newString; // [rsp+30h] [rbp+8h] BYREF

  v3 = WindowsDuplicateString(*a2, &newString);
  return Windows::Internal::String::FreeAndAssignOnSuccess(v3, newString, this);
}
