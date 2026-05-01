/*
 * XREFs of ?v_OnViewVisibilityChanged@UwpWindowWrapper@@EEAAXW4EventPhase@@W4Visibility@@@Z @ 0x1804067C0
 * Callers:
 *     <none>
 * Callees:
 *     ?VisibilityChanged@UwpWindowReadyState@@QEAAXW4EventPhase@@W4Visibility@@@Z @ 0x18041A98C (-VisibilityChanged@UwpWindowReadyState@@QEAAXW4EventPhase@@W4Visibility@@@Z.c)
 */

__int64 __fastcall UwpWindowWrapper::v_OnViewVisibilityChanged(__int64 a1, __int64 a2, __int64 a3)
{
  return UwpWindowReadyState::VisibilityChanged(a1 + 352, a2, a3);
}
