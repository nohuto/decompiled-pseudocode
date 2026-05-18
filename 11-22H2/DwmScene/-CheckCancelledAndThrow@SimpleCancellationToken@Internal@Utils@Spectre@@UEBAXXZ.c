/*
 * XREFs of ?CheckCancelledAndThrow@SimpleCancellationToken@Internal@Utils@Spectre@@UEBAXXZ @ 0x1800E0130
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException_0 @ 0x18000CA79 (_CxxThrowException_0.c)
 *     ?lock@_Mutex_base@std@@QEAAXXZ @ 0x180011C7C (-lock@_Mutex_base@std@@QEAAXXZ.c)
 *     ??0CancelledException@Utils@Spectre@@QEAA@XZ @ 0x1800DFE08 (--0CancelledException@Utils@Spectre@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Spectre::Utils::Internal::SimpleCancellationToken::CheckCancelledAndThrow(
        Spectre::Utils::Internal::SimpleCancellationToken *this)
{
  struct _Mtx_internal_imp_t *v2; // rbx
  _BYTE pExceptionObject[56]; // [rsp+28h] [rbp-50h] BYREF

  v2 = (Spectre::Utils::Internal::SimpleCancellationToken *)((char *)this + 8);
  std::_Mutex_base::lock((Spectre::Utils::Internal::SimpleCancellationToken *)((char *)this + 8));
  if ( *((_BYTE *)this + 112) )
  {
    Spectre::Utils::CancelledException::CancelledException((Spectre::Utils::CancelledException *)pExceptionObject);
    throw (Spectre::Utils::CancelledException *)pExceptionObject;
  }
  _Mtx_unlock(v2);
}
