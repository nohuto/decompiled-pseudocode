/*
 * XREFs of ?_LogVisibilityTelemetry@CTaskWindow@@AEAAX_N@Z @ 0x18030BFFC
 * Callers:
 *     ?SetVisibility@CTaskWindow@@UEAAXW4ViewVisibilityState@@@Z @ 0x180159850 (-SetVisibility@CTaskWindow@@UEAAXW4ViewVisibilityState@@@Z.c)
 * Callees:
 *     ?IsEnabled@CAppManagerTelemetry@@SA_NE_K@Z @ 0x1802E56EC (-IsEnabled@CAppManagerTelemetry@@SA_NE_K@Z.c)
 *     ??$SetViewVisibility@AEA_NIAEAI@CAppManagerTelemetry@@SAXAEA_N$$QEAIAEAI@Z @ 0x18030B5C0 (--$SetViewVisibility@AEA_NIAEAI@CAppManagerTelemetry@@SAXAEA_N$$QEAIAEAI@Z.c)
 */

void __fastcall CTaskWindow::_LogVisibilityTelemetry(CTaskWindow *this, char a2)
{
  int *v4; // r8
  char v5; // [rsp+38h] [rbp+10h] BYREF
  int v6; // [rsp+40h] [rbp+18h] BYREF

  v5 = a2;
  if ( CAppManagerTelemetry::IsEnabled((char)this) )
  {
    v4 = (int *)((char *)this + 148);
    if ( !a2 )
      ++*v4;
    v6 = *((_DWORD *)this + 10);
    CAppManagerTelemetry::SetViewVisibility<bool &,unsigned int,unsigned int &>(&v5, &v6, v4);
  }
}
