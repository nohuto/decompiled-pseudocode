/*
 * XREFs of ??_EDesktopSystemCursorService@@UEAAPEAXI@Z @ 0x180107070
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UICompositor@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001ACF0 (--1-$com_ptr_t@UICompositor@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800318B4 (--1-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800569E0 (--3@YAXPEAX_K@Z.c)
 */

DesktopSystemCursorService *__fastcall DesktopSystemCursorService::`vector deleting destructor'(
        DesktopSystemCursorService *this,
        char a2)
{
  __int64 *v2; // rdi
  void *v5; // rdi

  v2 = (__int64 *)*((_QWORD *)this + 3);
  if ( v2 )
  {
    wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(v2 + 5);
    wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(v2 + 3);
    wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(v2 + 2);
    operator delete(v2);
  }
  *(_QWORD *)this = &SystemCursorServiceBase::`vftable';
  v5 = (void *)*((_QWORD *)this + 2);
  if ( v5 )
  {
    wil::com_ptr_t<Windows::UI::Composition::ICompositor,wil::err_returncode_policy>::~com_ptr_t<Windows::UI::Composition::ICompositor,wil::err_returncode_policy>(*((__int64 **)this + 2));
    operator delete(v5);
  }
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
