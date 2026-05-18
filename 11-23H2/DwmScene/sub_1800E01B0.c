/*
 * XREFs of sub_1800E01B0 @ 0x1800E01B0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180011C7C @ 0x180011C7C (sub_180011C7C.c)
 *     sub_1800DFE88 @ 0x1800DFE88 (sub_1800DFE88.c)
 */

// Hidden C++ exception states: #wind=1
int __fastcall sub_1800E01B0(__int64 a1)
{
  struct _Mtx_internal_imp_t *v2; // rbx
  _QWORD pExceptionObject[7]; // [rsp+28h] [rbp-50h] BYREF

  v2 = (struct _Mtx_internal_imp_t *)(a1 + 8);
  sub_180011C7C((struct _Mtx_internal_imp_t *)(a1 + 8));
  if ( *(_BYTE *)(a1 + 112) )
  {
    sub_1800DFE88(pExceptionObject);
    throw (Spectre::Utils::CancelledException *)pExceptionObject;
  }
  return Mtx_unlock(v2);
}
