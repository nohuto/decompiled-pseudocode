/*
 * XREFs of ??_ESystemCursorServiceBase@@UEAAPEAXI@Z @ 0x1800EBB30
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18002BBF0 (--1-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18004ABE0 (--3@YAXPEAX_K@Z.c)
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
    wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(*((__int64 **)this + 2));
    operator delete(v4);
  }
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
