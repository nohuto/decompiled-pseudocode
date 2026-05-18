/*
 * XREFs of sub_1800C9C20 @ 0x1800C9C20
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     memset @ 0x18000C0BC (memset.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_18002C000 @ 0x18002C000 (sub_18002C000.c)
 *     sub_1800C9FBC @ 0x1800C9FBC (sub_1800C9FBC.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_OWORD *__fastcall sub_1800C9C20(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  _OWORD *result; // rax
  int v10; // eax
  ULONG_PTR v11; // rbx
  __int64 (__fastcall *v12)(_QWORD, __int64); // rbx
  __int64 v13; // rax
  __int64 v14; // [rsp+30h] [rbp-108h] BYREF
  __int64 v15; // [rsp+38h] [rbp-100h]
  __int128 v16; // [rsp+40h] [rbp-F8h] BYREF
  EXCEPTION_RECORD pExceptionRecord; // [rsp+60h] [rbp-D8h] BYREF
  void *retaddr; // [rsp+138h] [rbp+0h]

  result = (_OWORD *)sub_1800C9FBC(a1, &v14);
  if ( v14 )
  {
    *(_DWORD *)(a4 + 36) = 3;
    v10 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD, _QWORD *))(*(_QWORD *)a2 + 192LL))(
            a2,
            a3,
            a4,
            0LL,
            a5);
    v11 = v10;
    if ( v10 < 0 )
    {
      memset(&pExceptionRecord, 0, sizeof(pExceptionRecord));
      pExceptionRecord.ExceptionCode = -532265403;
      pExceptionRecord.ExceptionAddress = retaddr;
      pExceptionRecord.NumberParameters = 1;
      pExceptionRecord.ExceptionInformation[0] = v11;
      RaiseFailFastException(&pExceptionRecord, 0LL, 0);
    }
    result = sub_18002C000(a1, &v16);
    v12 = (__int64 (__fastcall *)(_QWORD, __int64))*((_QWORD *)result + 2);
    if ( v12 )
    {
      v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 368LL))(a1);
      result = (_OWORD *)v12(*a5, v13);
    }
  }
  if ( v15 )
    return (_OWORD *)sub_180010530(v15);
  return result;
}
