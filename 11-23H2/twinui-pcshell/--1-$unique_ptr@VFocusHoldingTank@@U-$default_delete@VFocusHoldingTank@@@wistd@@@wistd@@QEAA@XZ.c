/*
 * XREFs of ??1?$unique_ptr@VFocusHoldingTank@@U?$default_delete@VFocusHoldingTank@@@wistd@@@wistd@@QEAA@XZ @ 0x1804FFE38
 * Callers:
 *     ?ShowStartView@XamlLauncherState@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x18003BB20 (-ShowStartView@XamlLauncherState@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLA.c)
 *     _XamlLauncher::XamlLauncher_::_1_::dtor$3 @ 0x1802BC8A0 (_XamlLauncher--XamlLauncher_--_1_--dtor$3.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1FocusHoldingTank@@QEAA@XZ @ 0x180503884 (--1FocusHoldingTank@@QEAA@XZ.c)
 */

void __fastcall wistd::unique_ptr<FocusHoldingTank,wistd::default_delete<FocusHoldingTank>>::~unique_ptr<FocusHoldingTank,wistd::default_delete<FocusHoldingTank>>(
        FocusHoldingTank **a1)
{
  FocusHoldingTank *v1; // rbx

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
  {
    FocusHoldingTank::~FocusHoldingTank(v1);
    operator delete(v1);
  }
}
