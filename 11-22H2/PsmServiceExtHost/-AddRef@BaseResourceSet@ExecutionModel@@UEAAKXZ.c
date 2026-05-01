/*
 * XREFs of ?AddRef@BaseResourceSet@ExecutionModel@@UEAAKXZ @ 0x180010310
 * Callers:
 *     ?AddRef@ExternalResourceSet@ExecutionModel@@UEAAKXZ @ 0x18003DD20 (-AddRef@ExternalResourceSet@ExecutionModel@@UEAAKXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180049550 (__security_check_cookie.c)
 *     memset_0 @ 0x1800536FA (memset_0.c)
 */

__int64 __fastcall ExecutionModel::BaseResourceSet::AddRef(ExecutionModel::BaseResourceSet *this)
{
  unsigned __int32 v1; // ebx
  struct _EXCEPTION_RECORD pExceptionRecord; // [rsp+20h] [rbp-B8h] BYREF

  v1 = _InterlockedIncrement((volatile signed __int32 *)this + 9);
  if ( v1 < 2 )
  {
    memset_0(&pExceptionRecord.ExceptionRecord, 0, 0x90uLL);
    pExceptionRecord.ExceptionCode = -1073741675;
    pExceptionRecord.ExceptionFlags = 1;
    RaiseFailFastException(&pExceptionRecord, 0LL, 0);
  }
  return v1;
}
