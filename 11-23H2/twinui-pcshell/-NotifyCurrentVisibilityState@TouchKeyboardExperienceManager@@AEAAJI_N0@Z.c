/*
 * XREFs of ?NotifyCurrentVisibilityState@TouchKeyboardExperienceManager@@AEAAJI_N0@Z @ 0x180513744
 * Callers:
 *     _lambda_259a1410ba958232e2f70f54c5d031d1_::operator() @ 0x180207090 (_lambda_259a1410ba958232e2f70f54c5d031d1_--operator().c)
 *     ?DestroyView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z @ 0x18050F280 (-DestroyView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z.c)
 *     ?HideInputView@TouchKeyboardExperienceManager@@AEAAJI_N@Z @ 0x1805113EC (-HideInputView@TouchKeyboardExperienceManager@@AEAAJI_N@Z.c)
 * Callees:
 *     ?SendKeyboardSetVisible@IhmNotification@@YAX_N0@Z @ 0x18074B410 (-SendKeyboardSetVisible@IhmNotification@@YAX_N0@Z.c)
 */

__int64 __fastcall TouchKeyboardExperienceManager::NotifyCurrentVisibilityState(
        TouchKeyboardExperienceManager *this,
        int a2,
        bool a3,
        bool a4)
{
  if ( a2 == *(_DWORD *)(*((_QWORD *)this + 73) + 480LL) )
    IhmNotification::SendKeyboardSetVisible(0LL, a4, a3);
  return 0LL;
}
