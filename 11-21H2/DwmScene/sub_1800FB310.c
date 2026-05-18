/*
 * XREFs of sub_1800FB310 @ 0x1800FB310
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_1800FAD50 @ 0x1800FAD50 (sub_1800FAD50.c)
 */

// Hidden C++ exception states: #wind=1
int __fastcall sub_1800FB310(__int64 a1)
{
  struct _Mtx_internal_imp_t *v2; // rbx
  int v3; // eax
  _QWORD pExceptionObject[7]; // [rsp+28h] [rbp-50h] BYREF

  v2 = (struct _Mtx_internal_imp_t *)(a1 + 8);
  v3 = Mtx_lock((_Mtx_t)(a1 + 8));
  if ( v3 )
    std::_Throw_C_error(v3);
  if ( *(_BYTE *)(a1 + 112) )
  {
    sub_1800FAD50(pExceptionObject);
    throw (Spectre::Utils::CancelledException *)pExceptionObject;
  }
  return Mtx_unlock(v2);
}
