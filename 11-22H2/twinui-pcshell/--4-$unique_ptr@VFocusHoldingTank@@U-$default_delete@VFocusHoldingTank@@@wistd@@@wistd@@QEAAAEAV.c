/*
 * XREFs of ??4?$unique_ptr@VFocusHoldingTank@@U?$default_delete@VFocusHoldingTank@@@wistd@@@wistd@@QEAAAEAV01@$$QEAV01@@Z @ 0x1804FFE6C
 * Callers:
 *     ?ShowStartView@XamlLauncherState@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x18003BB20 (-ShowStartView@XamlLauncherState@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLA.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1FocusHoldingTank@@QEAA@XZ @ 0x180503884 (--1FocusHoldingTank@@QEAA@XZ.c)
 */

FocusHoldingTank **__fastcall wistd::unique_ptr<FocusHoldingTank,wistd::default_delete<FocusHoldingTank>>::operator=(
        FocusHoldingTank **a1,
        FocusHoldingTank **a2)
{
  FocusHoldingTank *v2; // rax
  FocusHoldingTank *v4; // rdi

  v2 = *a2;
  *a2 = 0LL;
  v4 = *a1;
  *a1 = v2;
  if ( v4 )
  {
    FocusHoldingTank::~FocusHoldingTank(v4);
    operator delete(v4);
  }
  return a1;
}
