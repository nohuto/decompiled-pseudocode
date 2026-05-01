/*
 * XREFs of ??1?$ComPtr@VNotificationDispatcher@@@WRL@Microsoft@@QEAA@XZ @ 0x18030F874
 * Callers:
 *     _NotificationDispatcher::WndProc_::_1_::dtor$0 @ 0x18021A1FD (_NotificationDispatcher--WndProc_--_1_--dtor$0.c)
 *     _CMultitaskingViewManager_CreateInstance_::_1_::dtor$0 @ 0x18021FB61 (_CMultitaskingViewManager_CreateInstance_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<NotificationDispatcher>::~ComPtr<NotificationDispatcher>(
        volatile signed __int32 **a1)
{
  return Microsoft::WRL::ComPtr<NotificationDispatcher>::InternalRelease(a1);
}
