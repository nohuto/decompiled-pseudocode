/*
 * XREFs of WindowsInternal::ComposableShell::Experiences::Switcher::AnimationCompletedEventHandler::AnimationCompletedEventHandler__lambda_ef4126646d7c3b67819dc4e9d2cf7836___ @ 0x1805FF098
 * Callers:
 *     ?AnimateDismissView@XamlSnapAssistViewHost@@UEAAJXZ @ 0x180601280 (-AnimateDismissView@XamlSnapAssistViewHost@@UEAAJXZ.c)
 * Callees:
 *     ??0__abi_FTMWeakRefData@@QEAA@PE$AAVObject@Platform@@W4CallbackContext@2@@Z @ 0x1800132F4 (--0__abi_FTMWeakRefData@@QEAA@PE$AAVObject@Platform@@W4CallbackContext@2@@Z.c)
 *     ?InternalRelease@WeakReference@Platform@@AEAAXXZ @ 0x180033140 (-InternalRelease@WeakReference@Platform@@AEAAXXZ.c)
 *     _lambda_ef4126646d7c3b67819dc4e9d2cf7836_::_lambda_ef4126646d7c3b67819dc4e9d2cf7836_ @ 0x180600048 (_lambda_ef4126646d7c3b67819dc4e9d2cf7836_--_lambda_ef4126646d7c3b67819dc4e9d2cf7836_.c)
 */

// Hidden C++ exception states: #wind=5
_QWORD *__fastcall WindowsInternal::ComposableShell::Experiences::Switcher::AnimationCompletedEventHandler::AnimationCompletedEventHandler__lambda_ef4126646d7c3b67819dc4e9d2cf7836___(
        _QWORD *a1,
        Platform::WeakReference *a2)
{
  _QWORD *v4; // rdi
  Platform::WeakReference *v5; // rbx
  _QWORD *v7; // [rsp+20h] [rbp-28h] BYREF

  Platform::Delegate::Delegate(a1 + 2);
  *a1 = &WindowsInternal::ComposableShell::Experiences::Switcher::AnimationCompletedEventHandler::`vftable'{for `__abi_IUnknown'};
  a1[1] = &WindowsInternal::ComposableShell::Experiences::Switcher::AnimationCompletedEventHandler::`vftable'{for `Platform::Object'};
  a1[2] = &WindowsInternal::ComposableShell::Experiences::Switcher::AnimationCompletedEventHandler::`vftable';
  __abi_FTMWeakRefData::__abi_FTMWeakRefData((__int64)(a1 + 3));
  v4 = a1 + 5;
  a1[37] = a1 + 5;
  v7 = a1 + 5;
  if ( a1 != (_QWORD *)-40LL )
  {
    v5 = (Platform::WeakReference *)lambda_ef4126646d7c3b67819dc4e9d2cf7836_::_lambda_ef4126646d7c3b67819dc4e9d2cf7836_(
                                      &v7,
                                      a2);
    *v4 = &off_1807B0528;
    lambda_ef4126646d7c3b67819dc4e9d2cf7836_::_lambda_ef4126646d7c3b67819dc4e9d2cf7836_(a1 + 6, v5);
    Platform::WeakReference::InternalRelease(v5);
  }
  a1[37] = v4;
  Platform::WeakReference::InternalRelease(a2);
  return a1;
}
