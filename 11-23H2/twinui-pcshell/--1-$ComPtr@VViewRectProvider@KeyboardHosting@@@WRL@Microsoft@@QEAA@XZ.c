/*
 * XREFs of ??1?$ComPtr@VViewRectProvider@KeyboardHosting@@@WRL@Microsoft@@QEAA@XZ @ 0x18050BFC4
 * Callers:
 *     _KeyboardHosting::TabTipAdapterPolicy::TabTipAdapterPolicy_::_1_::dtor$3 @ 0x1802B8A3E (_KeyboardHosting--TabTipAdapterPolicy--TabTipAdapterPolicy_--_1_--dtor$3.c)
 *     _KeyboardHosting::TabTipAdapterPolicy::TabTipAdapterPolicy_::_1_::dtor$4 @ 0x1802B8A57 (_KeyboardHosting--TabTipAdapterPolicy--TabTipAdapterPolicy_--_1_--dtor$4.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<KeyboardHosting::ViewRectProvider>::~ComPtr<KeyboardHosting::ViewRectProvider>(
        volatile int **a1)
{
  return Microsoft::WRL::ComPtr<KeyboardHosting::PositionAndSizeOptionsProvider>::InternalRelease(a1);
}
