/*
 * XREFs of ?OnLauncherShow@XamlLauncher@@UEAAXXZ @ 0x18006B0E0
 * Callers:
 *     <none>
 * Callees:
 *     ?PublishLauncherVisibilityState@XamlLauncher@@AEBAX_N@Z @ 0x180106170 (-PublishLauncherVisibilityState@XamlLauncher@@AEBAX_N@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1FocusHoldingTank@@QEAA@XZ @ 0x180503884 (--1FocusHoldingTank@@QEAA@XZ.c)
 */

void __fastcall XamlLauncher::OnLauncherShow(XamlLauncher *this)
{
  FocusHoldingTank *v2; // rdi

  XamlLauncher::PublishLauncherVisibilityState((XamlLauncher *)((char *)this - 72), 1);
  *((_DWORD *)this + 76) = 0;
  v2 = (FocusHoldingTank *)*((_QWORD *)this + 10);
  *((_QWORD *)this + 10) = 0LL;
  if ( v2 )
  {
    FocusHoldingTank::~FocusHoldingTank(v2);
    operator delete(v2, 0x18uLL);
  }
}
