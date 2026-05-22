/*
 * XREFs of ??1?$unique_ptr@VWindowsCompositionGlobals@SystemCursors@@U?$default_delete@VWindowsCompositionGlobals@SystemCursors@@@std@@@std@@QEAA@XZ @ 0x180112E70
 * Callers:
 *     ?InitializeBase@SystemCursorServiceBase@@IEAAJXZ @ 0x1800459F0 (-InitializeBase@SystemCursorServiceBase@@IEAAJXZ.c)
 *     _SystemCursorServiceBase::InitializeBase_::_1_::dtor$0 @ 0x180082A7F (_SystemCursorServiceBase--InitializeBase_--_1_--dtor$0.c)
 * Callees:
 *     ??1?$com_ptr_t@UICompositor@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001B620 (--1-$com_ptr_t@UICompositor@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180057770 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall std::unique_ptr<SystemCursors::WindowsCompositionGlobals>::~unique_ptr<SystemCursors::WindowsCompositionGlobals>(
        __int64 **a1)
{
  __int64 *v1; // rbx

  v1 = *a1;
  if ( *a1 )
  {
    wil::com_ptr_t<Windows::UI::Composition::ICompositor,wil::err_returncode_policy>::~com_ptr_t<Windows::UI::Composition::ICompositor,wil::err_returncode_policy>(*a1);
    operator delete(v1);
  }
}
