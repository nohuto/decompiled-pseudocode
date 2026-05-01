/*
 * XREFs of ?AnimateClipChangedElement@SwitchItemCloseAnimationCoordinator@@MEAAXAEBUClipChangedInfo@ItemAnimationCoordinatorBase@@@Z @ 0x1804D3290
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall SwitchItemCloseAnimationCoordinator::AnimateClipChangedElement(
        SwitchItemCloseAnimationCoordinator *this,
        const struct ItemAnimationCoordinatorBase::ClipChangedInfo *a2)
{
  (*(void (__fastcall **)(_QWORD, char *, __int64))(**(_QWORD **)a2 + 104LL))(*(_QWORD *)a2, (char *)a2 + 8, 19LL);
}
