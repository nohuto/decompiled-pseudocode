/*
 * XREFs of ?GetRectAndTaskbarLocation@ApplicationFlyoutView@@AEAA?AU?$pair@URect@Foundation@Windows@winrt@@W4TaskbarLocation@Shell@UI@WindowsUdk@4@@std@@XZ @ 0x1806C5818
 * Callers:
 *     ?TryShowHideWindow@ApplicationFlyoutView@@AEAAXPEAUHWND__@@_N@Z @ 0x1806C6210 (-TryShowHideWindow@ApplicationFlyoutView@@AEAAXPEAUHWND__@@_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ApplicationFlyoutView::GetRectAndTaskbarLocation(__int64 a1, __int64 a2)
{
  RTL_SRWLOCK *v2; // rsi

  v2 = (RTL_SRWLOCK *)(a1 + 64);
  AcquireSRWLockShared((PSRWLOCK)(a1 + 64));
  *(_DWORD *)(a2 + 16) = *(_DWORD *)(a1 + 88);
  *(_OWORD *)a2 = *(_OWORD *)(a1 + 72);
  if ( v2 )
    ReleaseSRWLockShared(v2);
  return a2;
}
