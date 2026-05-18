/*
 * XREFs of sub_1800E1690 @ 0x1800E1690
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     memset @ 0x18000C0CC (memset.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800DA968 @ 0x1800DA968 (sub_1800DA968.c)
 *     sub_1800DD668 @ 0x1800DD668 (sub_1800DD668.c)
 *     sub_1800E0240 @ 0x1800E0240 (sub_1800E0240.c)
 *     sub_1800E0390 @ 0x1800E0390 (sub_1800E0390.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 *__fastcall sub_1800E1690(__int64 a1, __int64 *a2)
{
  int v4; // ebx
  char v5; // al
  __int64 v6; // rbx
  int (__fastcall *v7)(__int64, _DWORD *, _QWORD, __int64 *); // rsi
  __int64 v8; // rcx
  ULONG_PTR v9; // rsi
  __int64 *v10; // rax
  __int64 v12; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v13[4]; // [rsp+40h] [rbp-C0h] BYREF
  EXCEPTION_RECORD pExceptionRecord; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD v15[12]; // [rsp+100h] [rbp+0h] BYREF
  void *retaddr; // [rsp+168h] [rbp+68h]

  v13[2] = (__int64)a2;
  v15[9] = 0;
  v15[3] = 1;
  v15[8] = 32;
  v4 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 264LL))(a1, 2LL);
  v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 296LL))(a1);
  v15[4] = sub_1800E0240(v4, v5 != 0);
  v15[0] = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 80LL))(a1);
  v15[1] = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 88LL))(a1);
  v15[2] = 1;
  v15[5] = 1;
  v15[6] = 0;
  v15[10] = 512;
  v15[7] = 0;
  *a2 = 0LL;
  sub_1800E0390(a1, v13);
  if ( v13[0] )
  {
    sub_1800DA968(v13[0], &v12);
    sub_180010910((__int64)v13);
    v6 = v12;
  }
  else
  {
    sub_180010910((__int64)v13);
    v12 = 0LL;
    v6 = 0LL;
  }
  v7 = *(int (__fastcall **)(__int64, _DWORD *, _QWORD, __int64 *))(*(_QWORD *)v6 + 40LL);
  v8 = *a2;
  if ( *a2 )
  {
    *a2 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  v9 = v7(v6, v15, 0LL, a2);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  v10 = sub_1800E0390(a1, v13);
  sub_1800DD668(*v10, v9);
  sub_180010910((__int64)v13);
  if ( (v9 & 0x80000000) != 0LL )
  {
    memset(&pExceptionRecord, 0, sizeof(pExceptionRecord));
    pExceptionRecord.ExceptionCode = -532265403;
    pExceptionRecord.ExceptionAddress = retaddr;
    pExceptionRecord.NumberParameters = 1;
    pExceptionRecord.ExceptionInformation[0] = v9;
    RaiseFailFastException(&pExceptionRecord, 0LL, 0);
  }
  return a2;
}
