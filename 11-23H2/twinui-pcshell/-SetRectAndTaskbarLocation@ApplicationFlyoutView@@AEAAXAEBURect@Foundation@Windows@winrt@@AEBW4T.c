/*
 * XREFs of ?SetRectAndTaskbarLocation@ApplicationFlyoutView@@AEAAXAEBURect@Foundation@Windows@winrt@@AEBW4TaskbarLocation@Shell@UI@WindowsUdk@5@@Z @ 0x1806C5D64
 * Callers:
 *     ApplicationFlyoutView::Show$_ResumeCoro$1 @ 0x180255C40 (ApplicationFlyoutView--Show$_ResumeCoro$1.c)
 * Callees:
 *     <none>
 */

void __fastcall ApplicationFlyoutView::SetRectAndTaskbarLocation(
        ApplicationFlyoutView *this,
        const struct winrt::Windows::Foundation::Rect *a2,
        const enum winrt::WindowsUdk::UI::Shell::TaskbarLocation *a3)
{
  RTL_SRWLOCK *v3; // rbp

  v3 = (RTL_SRWLOCK *)((char *)this + 64);
  AcquireSRWLockExclusive((PSRWLOCK)this + 8);
  *(_OWORD *)((char *)this + 72) = *(_OWORD *)a2;
  *((_DWORD *)this + 22) = *(_DWORD *)a3;
  if ( v3 )
    ReleaseSRWLockExclusive(v3);
}
