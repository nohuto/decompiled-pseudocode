/*
 * XREFs of ?GetCachedWindowWrapper@UwpWindowEventDispatcher@@UEAA?AV?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@UUwpWindowContextId@UwpWindowLifecycleManagement@Shell@Internal@Windows@@@Z @ 0x1803EDD00
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCachedView@UwpWindowEventDispatcher@@AEAA?AV?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@I@Z @ 0x1803EDB40 (-GetCachedView@UwpWindowEventDispatcher@@AEAA-AV-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exc.c)
 */

_QWORD *__fastcall UwpWindowEventDispatcher::GetCachedWindowWrapper(__int64 a1, _QWORD *a2, int a3)
{
  __int64 v4; // rcx
  _QWORD *result; // rax

  v4 = a1 - 16;
  try
  {
    UwpWindowEventDispatcher::GetCachedView(v4, a2, a3);
    result = a2;
  }
  catch ( ... )
  {
    result = a2;
    *a2 = 0LL;
  }
  return result;
}
