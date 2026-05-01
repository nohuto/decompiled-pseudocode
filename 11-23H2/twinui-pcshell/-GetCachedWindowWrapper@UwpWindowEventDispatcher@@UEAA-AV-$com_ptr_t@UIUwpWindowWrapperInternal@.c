/*
 * XREFs of ?GetCachedWindowWrapper@UwpWindowEventDispatcher@@UEAA?AV?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@UUwpWindowContextId@UwpWindowLifecycleManagement@Shell@Internal@Windows@@@Z @ 0x18009E590
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCachedView@UwpWindowEventDispatcher@@AEAA?AV?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@I@Z @ 0x18009E5B8 (-GetCachedView@UwpWindowEventDispatcher@@AEAA-AV-$com_ptr_t@UIUwpWindowWrapperInter_ea_18009E5B8.c)
 */

__int64 __fastcall UwpWindowEventDispatcher::GetCachedWindowWrapper(__int64 a1, __int64 a2, __int64 a3)
{
  UwpWindowEventDispatcher::GetCachedView(a1 - 16, a2, a3);
  return a2;
}
