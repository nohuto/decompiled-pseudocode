/*
 * XREFs of sub_1800DFF70 @ 0x1800DFF70
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     memset @ 0x18000C0CC (memset.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800DFF70(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v8; // rax
  __int64 v9; // rsi
  int v10; // eax
  ULONG_PTR v11; // rdi
  EXCEPTION_RECORD pExceptionRecord; // [rsp+40h] [rbp-D8h] BYREF
  void *retaddr; // [rsp+118h] [rbp+0h]

  v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 368LL))(a1);
  *(_DWORD *)(a4 + 36) = 4;
  v9 = v8;
  if ( (*(int (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD, _QWORD, __int64))(*(_QWORD *)a2 + 120LL))(
         a2,
         a3,
         v8,
         a4,
         0LL,
         0LL,
         a5) < 0 )
  {
    *(_DWORD *)(a4 + 36) = 0;
    v10 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD, _QWORD, __int64))(*(_QWORD *)a2 + 120LL))(
            a2,
            a3,
            v9,
            a4,
            0LL,
            0LL,
            a5);
    v11 = v10;
    if ( v10 < 0 )
    {
      memset(&pExceptionRecord, 0, sizeof(pExceptionRecord));
      pExceptionRecord.ExceptionAddress = retaddr;
      pExceptionRecord.ExceptionCode = -532265403;
      pExceptionRecord.NumberParameters = 1;
      pExceptionRecord.ExceptionInformation[0] = v11;
      RaiseFailFastException(&pExceptionRecord, 0LL, 0);
    }
  }
  return (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a2 + 64LL))(a2, v9, 2LL);
}
