/*
 * XREFs of ??1SystemCursorServiceBase@@UEAA@XZ @ 0x1801130A8
 * Callers:
 *     _SystemCursorService2::SystemCursorService2_::_1_::dtor$1 @ 0x180112CD6 (_SystemCursorService2--SystemCursorService2_--_1_--dtor$1.c)
 * Callees:
 *     ??1?$com_ptr_t@UICompositor@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001B620 (--1-$com_ptr_t@UICompositor@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180057770 (--3@YAXPEAX_K@Z.c)
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
