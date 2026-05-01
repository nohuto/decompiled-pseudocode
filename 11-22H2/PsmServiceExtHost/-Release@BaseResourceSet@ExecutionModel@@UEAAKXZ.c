/*
 * XREFs of ?Release@BaseResourceSet@ExecutionModel@@UEAAKXZ @ 0x18003E840
 * Callers:
 *     ?Release@ExternalResourceSet@ExecutionModel@@UEAAKXZ @ 0x18003DD10 (-Release@ExternalResourceSet@ExecutionModel@@UEAAKXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180049550 (__security_check_cookie.c)
 *     memset_0 @ 0x1800536FA (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180053740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ExecutionModel::BaseResourceSet::Release(ExecutionModel::BaseResourceSet *this)
{
  int v1; // ebx
  struct _EXCEPTION_RECORD pExceptionRecord; // [rsp+20h] [rbp-B8h] BYREF

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 9);
  if ( v1 < 0 )
  {
    memset_0(&pExceptionRecord.ExceptionRecord, 0, 0x90uLL);
    pExceptionRecord.ExceptionCode = -1073741675;
    pExceptionRecord.ExceptionFlags = 1;
    RaiseFailFastException(&pExceptionRecord, 0LL, 0);
  }
  else if ( !v1 && this )
  {
    (*(void (__fastcall **)(ExecutionModel::BaseResourceSet *, __int64))(*(_QWORD *)this + 24LL))(this, 1LL);
  }
  return (unsigned int)v1;
}
