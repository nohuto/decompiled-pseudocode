/*
 * XREFs of ?reset@?$unique_ptr@VFocusHoldingTank@@U?$default_delete@VFocusHoldingTank@@@wistd@@@wistd@@QEAAXPEAVFocusHoldingTank@@@Z @ 0x180502958
 * Callers:
 *     ?UnsubscribeFromServices@XamlLauncher@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800F54E0 (-UnsubscribeFromServices@XamlLauncher@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1FocusHoldingTank@@QEAA@XZ @ 0x180503884 (--1FocusHoldingTank@@QEAA@XZ.c)
 */

void __fastcall wistd::unique_ptr<FocusHoldingTank,wistd::default_delete<FocusHoldingTank>>::reset(
        FocusHoldingTank **a1,
        FocusHoldingTank *a2)
{
  FocusHoldingTank *v2; // rbx

  v2 = *a1;
  *a1 = a2;
  if ( v2 )
  {
    FocusHoldingTank::~FocusHoldingTank(v2);
    operator delete(v2);
  }
}
