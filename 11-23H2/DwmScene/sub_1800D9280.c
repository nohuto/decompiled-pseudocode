/*
 * XREFs of sub_1800D9280 @ 0x1800D9280
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     memset @ 0x18000C0BC (memset.c)
 *     sub_18000E72C @ 0x18000E72C (sub_18000E72C.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011DE0 @ 0x180011DE0 (sub_180011DE0.c)
 *     sub_1800C3064 @ 0x1800C3064 (sub_1800C3064.c)
 *     sub_1800C589C @ 0x1800C589C (sub_1800C589C.c)
 *     sub_1800D91AC @ 0x1800D91AC (sub_1800D91AC.c)
 *     sub_1800D97D0 @ 0x1800D97D0 (sub_1800D97D0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
char __fastcall sub_1800D9280(_QWORD *a1)
{
  char result; // al
  int v3; // eax
  ULONG_PTR v4; // rbx
  __int64 v5; // rdi
  __int64 (__fastcall *v6)(__int64, __int64, _QWORD *); // rbx
  int v7; // eax
  ULONG_PTR v8; // rbx
  __int64 v9; // rsi
  __int64 (__fastcall *v10)(__int64, _QWORD, _QWORD *); // rdi
  int v11; // eax
  ULONG_PTR v12; // rbx
  __int64 v13; // [rsp+20h] [rbp-E0h] BYREF
  __int64 (__fastcall ***v14)(_QWORD, void *, __int64 *); // [rsp+28h] [rbp-D8h] BYREF
  __int64 v15; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v16; // [rsp+38h] [rbp-C8h]
  EXCEPTION_RECORD pExceptionRecord; // [rsp+40h] [rbp-C0h] BYREF
  EXCEPTION_RECORD v18; // [rsp+E0h] [rbp-20h] BYREF
  EXCEPTION_RECORD v19; // [rsp+180h] [rbp+80h] BYREF
  void *retaddr; // [rsp+258h] [rbp+158h]

  sub_1800D91AC((__int64)a1);
  result = sub_180011DE0(a1 + 67);
  if ( result )
  {
    sub_1800D97D0(a1, &v15);
    sub_1800C589C(v15, &v14);
    v13 = 0LL;
    v3 = sub_1800C3064(&v14, &v13);
    v4 = v3;
    if ( v3 < 0 )
    {
      memset(&pExceptionRecord, 0, sizeof(pExceptionRecord));
      pExceptionRecord.ExceptionCode = -532265403;
      pExceptionRecord.ExceptionAddress = retaddr;
      pExceptionRecord.NumberParameters = 1;
      pExceptionRecord.ExceptionInformation[0] = v4;
      RaiseFailFastException(&pExceptionRecord, 0LL, 0);
    }
    v5 = a1[64];
    v6 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD *))(*(_QWORD *)v5 + 216LL);
    sub_18000E72C(a1 + 65);
    v7 = v6(v5, v13, a1 + 65);
    v8 = v7;
    if ( v7 < 0 )
    {
      memset(&v18, 0, sizeof(v18));
      v18.ExceptionCode = -532265403;
      v18.ExceptionAddress = retaddr;
      v18.NumberParameters = 1;
      v18.ExceptionInformation[0] = v8;
      RaiseFailFastException(&v18, 0LL, 0);
    }
    v9 = a1[65];
    v10 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD *))(*(_QWORD *)v9 + 88LL);
    sub_18000E72C(a1 + 66);
    v11 = v10(v9, 0LL, a1 + 66);
    v12 = v11;
    if ( v11 < 0 )
    {
      memset(&v19, 0, sizeof(v19));
      v19.ExceptionCode = -532265403;
      v19.ExceptionAddress = retaddr;
      v19.NumberParameters = 1;
      v19.ExceptionInformation[0] = v12;
      RaiseFailFastException(&v19, 0LL, 0);
    }
    (*(void (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)a1[67] + 8LL))(a1[67], a1);
    sub_18000E72C(&v13);
    result = sub_18000E72C((__int64 *)&v14);
    if ( v16 )
      return sub_180010530(v16);
  }
  return result;
}
