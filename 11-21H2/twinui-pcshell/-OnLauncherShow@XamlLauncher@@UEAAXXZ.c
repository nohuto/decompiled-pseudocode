/*
 * XREFs of ?OnLauncherShow@XamlLauncher@@UEAAXXZ @ 0x18003C5A0
 * Callers:
 *     <none>
 * Callees:
 *     ?PublishLauncherVisibilityState@XamlLauncher@@AEBAX_N@Z @ 0x180117A74 (-PublishLauncherVisibilityState@XamlLauncher@@AEBAX_N@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??1FocusHoldingTank@@QEAA@XZ @ 0x18044D490 (--1FocusHoldingTank@@QEAA@XZ.c)
 */

void __fastcall XamlLauncher::OnLauncherShow(XamlLauncher *this)
{
  FocusHoldingTank *v2; // rdi

  XamlLauncher::PublishLauncherVisibilityState((XamlLauncher *)((char *)this - 72), 1);
  *((_DWORD *)this + 64) = 0;
  v2 = (FocusHoldingTank *)*((_QWORD *)this + 11);
  *((_QWORD *)this + 11) = 0LL;
  if ( v2 )
  {
    FocusHoldingTank::~FocusHoldingTank(v2);
    operator delete(v2, 0x18uLL);
  }
}
