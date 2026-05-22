/*
 * XREFs of ??1SystemCursorServiceBase@@UEAA@XZ @ 0x1800EB91C
 * Callers:
 *     _SystemCursorService2::SystemCursorService2_::_1_::dtor$1 @ 0x1800EB54A (_SystemCursorService2--SystemCursorService2_--_1_--dtor$1.c)
 * Callees:
 *     ??1?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18002BBF0 (--1-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18004ABE0 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall SystemCursorServiceBase::~SystemCursorServiceBase(SystemCursorServiceBase *this)
{
  void *v1; // rbx

  *(_QWORD *)this = &SystemCursorServiceBase::`vftable';
  v1 = (void *)*((_QWORD *)this + 2);
  if ( v1 )
  {
    wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(*((__int64 **)this + 2));
    operator delete(v1);
  }
}
