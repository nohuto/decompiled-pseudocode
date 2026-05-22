/*
 * XREFs of _CursorNotificationProcessor::ProcessAppClipChangedNotification_::_1_::dtor$1 @ 0x18010C8CE
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CursorNotificationProcessor::ProcessAppClipChangedNotification_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  std::vector<Microsoft::WRL::ComPtr<IInputTarget>>::~vector<Microsoft::WRL::ComPtr<IInputTarget>>(a2 + 32);
}
