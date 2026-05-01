/*
 * XREFs of ??1?$unique_ptr@U_ITEMIDLIST@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAA@XZ @ 0x1803D48EC
 * Callers:
 *     _BroadcastDVRComponent::ApplyGameRelatedForGameModeProcess_::_1_::dtor$0 @ 0x1803D58C5 (_BroadcastDVRComponent--ApplyGameRelatedForGameModeProcess_--_1_--dtor$0.c)
 *     _winrt::Windows::Internal::Shell::implementation::PinManager::CopyShortcut_::_1_::dtor$2 @ 0x1806A0439 (_winrt--Windows--Internal--Shell--implementation--PinManager--CopyShortcut_--_1_--dtor$2.c)
 *     _GetPinnablePidl_::_1_::dtor$1 @ 0x1806A2228 (_GetPinnablePidl_--_1_--dtor$1.c)
 *     _GetUnpackagedAppPinnableItem_::_1_::dtor$2 @ 0x1806A2A15 (_GetUnpackagedAppPinnableItem_--_1_--dtor$2.c)
 *     _winrt::Windows::Internal::Shell::implementation::PinManager::IsItemPinned_::_1_::dtor$4 @ 0x1806A349F (_winrt--Windows--Internal--Shell--implementation--PinManager--IsItemPinned_--_1_--dtor$4.c)
 *     _CTaskbandPin::v_IsAcceptableTarget_::_1_::dtor$6 @ 0x1807507BC (_CTaskbandPin--v_IsAcceptableTarget_--_1_--dtor$6.c)
 *     _CTaskbandPin::v_IsAcceptableTarget_::_1_::dtor$7 @ 0x1807507C8 (_CTaskbandPin--v_IsAcceptableTarget_--_1_--dtor$7.c)
 *     _CPinnedList::ApplyReorderTaskbarLayout_::_1_::dtor$4 @ 0x180752A2E (_CPinnedList--ApplyReorderTaskbarLayout_--_1_--dtor$4.c)
 *     _CBackupLocationManager::CreateTombstoneLnk_::_1_::dtor$0 @ 0x180753649 (_CBackupLocationManager--CreateTombstoneLnk_--_1_--dtor$0.c)
 *     _CBackupLocationManager::CreateTombstoneLnk_::_1_::dtor$2 @ 0x180753655 (_CBackupLocationManager--CreateTombstoneLnk_--_1_--dtor$2.c)
 *     _CBackupLocationManager::CreateTombstoneLnk_::_1_::dtor$4 @ 0x180753661 (_CBackupLocationManager--CreateTombstoneLnk_--_1_--dtor$4.c)
 *     _CPinnedList::InternalModify_::_1_::dtor$7 @ 0x180758089 (_CPinnedList--InternalModify_--_1_--dtor$7.c)
 *     _CPinnedList::IsEmpty_::_1_::dtor$1 @ 0x180758577 (_CPinnedList--IsEmpty_--_1_--dtor$1.c)
 *     _CPinList::_CreateTombstone_::_1_::dtor$1 @ 0x18075D84E (_CPinList--_CreateTombstone_--_1_--dtor$1.c)
 *     _CPinList::_CreateTombstone_::_1_::dtor$4 @ 0x18075D88D (_CPinList--_CreateTombstone_--_1_--dtor$4.c)
 * Callees:
 *     <none>
 */

void __fastcall wistd::unique_ptr<_ITEMIDLIST,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<_ITEMIDLIST,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(
        void **a1)
{
  void *v1; // rax

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
    CoTaskMemFree(v1);
}
