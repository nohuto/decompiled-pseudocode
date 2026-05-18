/*
 * XREFs of sub_1800F1F50 @ 0x1800F1F50
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     memset @ 0x18000C0CC (memset.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800122C0 @ 0x1800122C0 (sub_1800122C0.c)
 *     sub_1800DA968 @ 0x1800DA968 (sub_1800DA968.c)
 *     sub_1800F1E58 @ 0x1800F1E58 (sub_1800F1E58.c)
 *     sub_1800F27A8 @ 0x1800F27A8 (sub_1800F27A8.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
char __fastcall sub_1800F1F50(_QWORD *a1)
{
  char result; // al
  __int64 (__fastcall ***v3)(_QWORD, void *, _QWORD *); // rbx
  int v4; // eax
  ULONG_PTR v5; // rsi
  __int64 v6; // r14
  __int64 (__fastcall *v7)(__int64, __int64, _QWORD *); // r12
  _QWORD *v8; // rsi
  __int64 v9; // rcx
  int v10; // eax
  ULONG_PTR v11; // r14
  __int64 v12; // r14
  __int64 (__fastcall *v13)(__int64, _QWORD, _QWORD *); // r12
  __int64 v14; // rcx
  int v15; // eax
  ULONG_PTR v16; // rsi
  __int64 v17; // rcx
  __int64 v18; // [rsp+20h] [rbp-E0h] BYREF
  __int64 (__fastcall ***v19)(_QWORD, void *, __int64 *); // [rsp+28h] [rbp-D8h] BYREF
  __int64 v20[2]; // [rsp+30h] [rbp-D0h] BYREF
  EXCEPTION_RECORD pExceptionRecord; // [rsp+40h] [rbp-C0h] BYREF
  EXCEPTION_RECORD v22; // [rsp+E0h] [rbp-20h] BYREF
  EXCEPTION_RECORD v23; // [rsp+180h] [rbp+80h] BYREF
  void *retaddr; // [rsp+258h] [rbp+158h]

  sub_1800F1E58((__int64)a1);
  result = sub_1800122C0(a1 + 67);
  if ( result )
  {
    sub_1800F27A8(a1, v20);
    sub_1800DA968(v20[0], &v19);
    v18 = 0LL;
    v3 = v19;
    v4 = (**v19)(v19, &unk_1801BB810, &v18);
    v5 = v4;
    if ( v4 < 0 )
    {
      memset(&pExceptionRecord, 0, sizeof(pExceptionRecord));
      pExceptionRecord.ExceptionCode = -532265403;
      pExceptionRecord.ExceptionAddress = retaddr;
      pExceptionRecord.NumberParameters = 1;
      pExceptionRecord.ExceptionInformation[0] = v5;
      RaiseFailFastException(&pExceptionRecord, 0LL, 0);
    }
    v6 = a1[64];
    v7 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD *))(*(_QWORD *)v6 + 216LL);
    v8 = a1 + 65;
    v9 = a1[65];
    if ( v9 )
    {
      *v8 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
    v10 = v7(v6, v18, a1 + 65);
    v11 = v10;
    if ( v10 < 0 )
    {
      memset(&v22, 0, sizeof(v22));
      v22.ExceptionCode = -532265403;
      v22.ExceptionAddress = retaddr;
      v22.NumberParameters = 1;
      v22.ExceptionInformation[0] = v11;
      RaiseFailFastException(&v22, 0LL, 0);
    }
    v12 = *v8;
    v13 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD *))(*(_QWORD *)*v8 + 88LL);
    v14 = a1[66];
    if ( v14 )
    {
      a1[66] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    }
    v15 = v13(v12, 0LL, a1 + 66);
    v16 = v15;
    if ( v15 < 0 )
    {
      memset(&v23, 0, sizeof(v23));
      v23.ExceptionCode = -532265403;
      v23.ExceptionAddress = retaddr;
      v23.NumberParameters = 1;
      v23.ExceptionInformation[0] = v16;
      RaiseFailFastException(&v23, 0LL, 0);
    }
    (*(void (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)a1[67] + 8LL))(a1[67], a1);
    v17 = v18;
    if ( v18 )
    {
      v18 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    }
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, void *, _QWORD *)))(*v3)[2])(v3);
    return sub_180010910((__int64)v20);
  }
  return result;
}
