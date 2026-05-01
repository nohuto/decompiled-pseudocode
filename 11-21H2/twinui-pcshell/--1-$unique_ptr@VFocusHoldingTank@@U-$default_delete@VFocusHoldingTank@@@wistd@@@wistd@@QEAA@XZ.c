/*
 * XREFs of ??1?$unique_ptr@VFocusHoldingTank@@U?$default_delete@VFocusHoldingTank@@@wistd@@@wistd@@QEAA@XZ @ 0x18044A56C
 * Callers:
 *     _XamlLauncher::XamlLauncher_::_1_::dtor$3 @ 0x18021749D (_XamlLauncher--XamlLauncher_--_1_--dtor$3.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??1FocusHoldingTank@@QEAA@XZ @ 0x18044D490 (--1FocusHoldingTank@@QEAA@XZ.c)
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
