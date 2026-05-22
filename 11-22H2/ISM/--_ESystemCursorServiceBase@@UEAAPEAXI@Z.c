/*
 * XREFs of ??_ESystemCursorServiceBase@@UEAAPEAXI@Z @ 0x1801132C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UICompositor@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001B620 (--1-$com_ptr_t@UICompositor@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180057770 (--3@YAXPEAX_K@Z.c)
 */

SystemCursorServiceBase *__fastcall SystemCursorServiceBase::`vector deleting destructor'(
        SystemCursorServiceBase *this,
        char a2)
{
  void *v4; // rdi

  *(_QWORD *)this = &SystemCursorServiceBase::`vftable';
  v4 = (void *)*((_QWORD *)this + 2);
  if ( v4 )
  {
    wil::com_ptr_t<Windows::UI::Composition::ICompositor,wil::err_returncode_policy>::~com_ptr_t<Windows::UI::Composition::ICompositor,wil::err_returncode_policy>(*((__int64 **)this + 2));
    operator delete(v4);
  }
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
