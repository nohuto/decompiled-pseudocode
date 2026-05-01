/*
 * XREFs of ?GetCachedWindowWrapper@WindowEventDispatcher@@UEAA?AV?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@UAppViewId@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x18017FA20
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCachedView@WindowEventDispatcher@@AEAA?AV?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@I@Z @ 0x180074904 (-GetCachedView@WindowEventDispatcher@@AEAA-AV-$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception.c)
 */

__int64 *__fastcall WindowEventDispatcher::GetCachedWindowWrapper(__int64 a1, __int64 *a2, int a3)
{
  WindowEventDispatcher::GetCachedView(a1 - 16, a2, a3);
  return a2;
}
