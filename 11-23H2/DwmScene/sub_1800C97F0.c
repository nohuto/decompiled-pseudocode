/*
 * XREFs of sub_1800C97F0 @ 0x1800C97F0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     memset @ 0x18000C0BC (memset.c)
 *     sub_18000E72C @ 0x18000E72C (sub_18000E72C.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_1800163D0 @ 0x1800163D0 (sub_1800163D0.c)
 *     sub_18002C000 @ 0x18002C000 (sub_18002C000.c)
 *     sub_1800C9FBC @ 0x1800C9FBC (sub_1800C9FBC.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_1800C97F0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  __int64 result; // rax
  __int64 v10; // rdi
  __int64 (__fastcall *v11)(__int64, void *, __int64 *); // rbx
  __int64 *v12; // rax
  int v13; // eax
  ULONG_PTR v14; // rbx
  __int64 (__fastcall ***v15)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v16)(_QWORD, _DWORD *, __int64 *); // rdi
  int v17; // eax
  ULONG_PTR v18; // rbx
  int v19; // eax
  ULONG_PTR v20; // rbx
  void (__fastcall *v21)(_QWORD, __int64); // rbx
  __int64 v22; // rax
  __int64 v23; // [rsp+40h] [rbp-C0h] BYREF
  __int64 (__fastcall ***v24)(_QWORD, _DWORD *, __int64 *); // [rsp+48h] [rbp-B8h] BYREF
  __int64 v25; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v26; // [rsp+58h] [rbp-A8h]
  __int128 v27; // [rsp+60h] [rbp-A0h] BYREF
  EXCEPTION_RECORD pExceptionRecord; // [rsp+80h] [rbp-80h] BYREF
  EXCEPTION_RECORD v29; // [rsp+120h] [rbp+20h] BYREF
  EXCEPTION_RECORD v30; // [rsp+1C0h] [rbp+C0h] BYREF
  void *retaddr; // [rsp+2B8h] [rbp+1B8h]

  result = sub_1800C9FBC(a1, &v25);
  if ( v25 )
  {
    *(_DWORD *)(a4 + 36) = 3;
    v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 368LL))(a1);
    v24 = 0LL;
    v11 = *(__int64 (__fastcall **)(__int64, void *, __int64 *))(*(_QWORD *)v10 + 24LL);
    v12 = sub_1800163D0((__int64 *)&v24);
    v13 = v11(v10, &unk_180199AD0, v12);
    v14 = v13;
    if ( v13 < 0 )
    {
      memset(&pExceptionRecord, 0, sizeof(pExceptionRecord));
      pExceptionRecord.ExceptionCode = -532265403;
      pExceptionRecord.ExceptionAddress = retaddr;
      pExceptionRecord.NumberParameters = 1;
      pExceptionRecord.ExceptionInformation[0] = v14;
      RaiseFailFastException(&pExceptionRecord, 0LL, 0);
    }
    v23 = 0LL;
    v15 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v24;
    v16 = **v24;
    sub_18000E72C(&v23);
    v17 = v16(v15, dword_1801065E0, &v23);
    v18 = v17;
    if ( v17 < 0 )
    {
      memset(&v29, 0, sizeof(v29));
      v29.ExceptionCode = -532265403;
      v29.ExceptionAddress = retaddr;
      v29.NumberParameters = 1;
      v29.ExceptionInformation[0] = v18;
      RaiseFailFastException(&v29, 0LL, 0);
    }
    v19 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD, _QWORD *))(*(_QWORD *)a2 + 128LL))(
            a2,
            a3,
            v23,
            a4,
            0LL,
            a5);
    v20 = v19;
    if ( v19 < 0 )
    {
      memset(&v30, 0, sizeof(v30));
      v30.ExceptionCode = -532265403;
      v30.ExceptionAddress = retaddr;
      v30.NumberParameters = 1;
      v30.ExceptionInformation[0] = v20;
      RaiseFailFastException(&v30, 0LL, 0);
    }
    v21 = (void (__fastcall *)(_QWORD, __int64))*((_QWORD *)sub_18002C000(a1, &v27) + 2);
    if ( v21 )
    {
      v22 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 368LL))(a1);
      v21(*a5, v22);
    }
    sub_18000E72C(&v23);
    result = sub_18000E72C((__int64 *)&v24);
  }
  if ( v26 )
    return sub_180010530(v26);
  return result;
}
