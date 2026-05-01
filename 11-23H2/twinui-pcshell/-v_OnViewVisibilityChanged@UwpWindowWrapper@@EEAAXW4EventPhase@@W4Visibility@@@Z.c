/*
 * XREFs of ?v_OnViewVisibilityChanged@UwpWindowWrapper@@EEAAXW4EventPhase@@W4Visibility@@@Z @ 0x18009FFE0
 * Callers:
 *     <none>
 * Callees:
 *     ?VisibilityChanged@UwpWindowReadyState@@QEAAXW4EventPhase@@W4Visibility@@@Z @ 0x1800A0000 (-VisibilityChanged@UwpWindowReadyState@@QEAAXW4EventPhase@@W4Visibility@@@Z.c)
 */

__int64 __fastcall UwpWindowWrapper::v_OnViewVisibilityChanged(__int64 a1, __int64 a2, __int64 a3)
{
  return UwpWindowReadyState::VisibilityChanged(a1 + 360, a2, a3);
}
