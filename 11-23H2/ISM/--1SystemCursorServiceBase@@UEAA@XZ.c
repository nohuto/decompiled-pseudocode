/*
 * XREFs of ??1SystemCursorServiceBase@@UEAA@XZ @ 0x180104568
 * Callers:
 *     _SystemCursorService2::SystemCursorService2_::_1_::dtor$1 @ 0x180104196 (_SystemCursorService2--SystemCursorService2_--_1_--dtor$1.c)
 * Callees:
 *     ??1?$com_ptr_t@UICompositor@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001ACF0 (--1-$com_ptr_t@UICompositor@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800569E0 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall SystemCursorServiceBase::~SystemCursorServiceBase(SystemCursorServiceBase *this)
{
  void *v1; // rbx

  *(_QWORD *)this = &SystemCursorServiceBase::`vftable';
  v1 = (void *)*((_QWORD *)this + 2);
  if ( v1 )
  {
    wil::com_ptr_t<Windows::UI::Composition::ICompositor,wil::err_returncode_policy>::~com_ptr_t<Windows::UI::Composition::ICompositor,wil::err_returncode_policy>(*((__int64 **)this + 2));
    operator delete(v1);
  }
}
