/*
 * XREFs of ?OnFlyoutInstancePointerEntered@SnapFlyoutHost@@AEAAXAEBUSnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@Z @ 0x18067B880
 * Callers:
 *     <none>
 * Callees:
 *     ?CancelDismissTimer@SnapFlyoutHost@@AEAAXAEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x1802E98D6 (-CancelDismissTimer@SnapFlyoutHost@@AEAAXAEBV-$unique_any_t@V-$unique_storage@U-$resource_policy.c)
 */

void __fastcall SnapFlyoutHost::OnFlyoutInstancePointerEntered(
        RTL_SRWLOCK *this,
        const struct winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstance *a2)
{
  RTL_SRWLOCK *v3; // rdi
  __int64 v4; // rdx

  v3 = this + 22;
  AcquireSRWLockExclusive(this + 22);
  SnapFlyoutHost::CancelDismissTimer((__int64)this, v4);
  if ( v3 )
    ReleaseSRWLockExclusive(v3);
}
