/*
 * XREFs of ??1?$out_param_t@V?$unique_ptr@$$CFAU_ITEMIDLIST@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@@details@wil@@QEAA@XZ @ 0x1803D4860
 * Callers:
 *     _BroadcastDVRComponent::ApplyGameRelatedForGameModeProcess_::_1_::dtor$1 @ 0x1803D58D1 (_BroadcastDVRComponent--ApplyGameRelatedForGameModeProcess_--_1_--dtor$1.c)
 *     _winrt::Windows::Internal::Shell::implementation::PinManager::CopyShortcut_::_1_::dtor$3 @ 0x1806A0445 (_winrt--Windows--Internal--Shell--implementation--PinManager--CopyShortcut_--_1_--dtor$3.c)
 *     _GetPinnablePidl_::_1_::dtor$2 @ 0x1806A224F (_GetPinnablePidl_--_1_--dtor$2.c)
 *     _GetUnpackagedAppPinnableItem_::_1_::dtor$3 @ 0x1806A2A21 (_GetUnpackagedAppPinnableItem_--_1_--dtor$3.c)
 *     _winrt::Windows::Internal::Shell::implementation::PinManager::IsItemPinned_::_1_::dtor$5 @ 0x1806A34AB (_winrt--Windows--Internal--Shell--implementation--PinManager--IsItemPinned_--_1_--dtor$5.c)
 *     _CTaskbandPin::v_IsAcceptableTarget_::_1_::dtor$8 @ 0x1807507D4 (_CTaskbandPin--v_IsAcceptableTarget_--_1_--dtor$8.c)
 *     _CPinnedList::ApplyReorderTaskbarLayout_::_1_::dtor$5 @ 0x180752A3A (_CPinnedList--ApplyReorderTaskbarLayout_--_1_--dtor$5.c)
 *     _CPinnedList::InternalModify_::_1_::dtor$8 @ 0x180758095 (_CPinnedList--InternalModify_--_1_--dtor$8.c)
 *     _CPinnedList::IsEmpty_::_1_::dtor$2 @ 0x180758583 (_CPinnedList--IsEmpty_--_1_--dtor$2.c)
 *     _CPinList::_CreateTombstone_::_1_::dtor$2 @ 0x18075D85A (_CPinList--_CreateTombstone_--_1_--dtor$2.c)
 *     _CPinList::_CreateTombstone_::_1_::dtor$3 @ 0x18075D881 (_CPinList--_CreateTombstone_--_1_--dtor$3.c)
 *     _CPinList::_CreateTombstone_::_1_::dtor$5 @ 0x18075D899 (_CPinList--_CreateTombstone_--_1_--dtor$5.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::out_param_t<wistd::unique_ptr<_ITEMIDLIST __unaligned,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_ITEMIDLIST __unaligned,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>(
        __int64 a1)
{
  void *v1; // r8

  if ( *(_BYTE *)(a1 + 16) )
  {
    v1 = **(void ***)a1;
    **(_QWORD **)a1 = *(_QWORD *)(a1 + 8);
    if ( v1 )
      CoTaskMemFree(v1);
  }
}
