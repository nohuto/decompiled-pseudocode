/*
 * XREFs of ?AnimateClipChangedElement@SwitchItemCloseAnimationCoordinator@@MEAAXAEBUClipChangedInfo@ItemAnimationCoordinatorBase@@@Z @ 0x18058AC30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall SwitchItemCloseAnimationCoordinator::AnimateClipChangedElement(
        SwitchItemCloseAnimationCoordinator *this,
        const struct ItemAnimationCoordinatorBase::ClipChangedInfo *a2)
{
  (*(void (__fastcall **)(_QWORD, char *, __int64))(**(_QWORD **)a2 + 104LL))(*(_QWORD *)a2, (char *)a2 + 8, 19LL);
}
