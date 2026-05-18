/*
 * XREFs of sub_1800C95E0 @ 0x1800C95E0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     memset @ 0x18000C0BC (memset.c)
 *     sub_18000E72C @ 0x18000E72C (sub_18000E72C.c)
 *     sub_180011520 @ 0x180011520 (sub_180011520.c)
 *     sub_1800163D0 @ 0x1800163D0 (sub_1800163D0.c)
 *     sub_1800C87B8 @ 0x1800C87B8 (sub_1800C87B8.c)
 *     sub_1800C94A0 @ 0x1800C94A0 (sub_1800C94A0.c)
 *     sub_1800C9D74 @ 0x1800C9D74 (sub_1800C9D74.c)
 *     sub_1800C9E5C @ 0x1800C9E5C (sub_1800C9E5C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800C95E0(__int64 *a1, __int64 *a2)
{
  _QWORD *v4; // r15
  int v5; // eax
  ULONG_PTR v6; // rdi
  __int64 *v7; // rax
  __int64 v8; // rsi
  __int64 (__fastcall *v9)(__int64, _QWORD, int *, __int64 *); // rdi
  int v10; // eax
  ULONG_PTR v11; // rbx
  __int64 v13[2]; // [rsp+30h] [rbp-D0h] BYREF
  EXCEPTION_RECORD pExceptionRecord; // [rsp+40h] [rbp-C0h] BYREF
  EXCEPTION_RECORD v15; // [rsp+E0h] [rbp-20h] BYREF
  int v16; // [rsp+180h] [rbp+80h] BYREF
  __int64 v17; // [rsp+184h] [rbp+84h]
  int v18; // [rsp+18Ch] [rbp+8Ch]
  int v19; // [rsp+190h] [rbp+90h]
  int v20; // [rsp+194h] [rbp+94h]
  int v21; // [rsp+198h] [rbp+98h]
  void *retaddr; // [rsp+1D8h] [rbp+D8h]

  v13[1] = (__int64)a2;
  v13[0] = *a2;
  sub_180011520(v13);
  sub_1800C94A0((__int64)a1, v13);
  v4 = a1 + 213;
  v5 = sub_1800C87B8((__int64 (__fastcall ****)(_QWORD, void *, __int64 *))a2, a1 + 213);
  v6 = v5;
  if ( v5 < 0 )
  {
    memset(&pExceptionRecord, 0, sizeof(pExceptionRecord));
    pExceptionRecord.ExceptionCode = -532265403;
    pExceptionRecord.ExceptionAddress = retaddr;
    pExceptionRecord.NumberParameters = 1;
    pExceptionRecord.ExceptionInformation[0] = v6;
    RaiseFailFastException(&pExceptionRecord, 0LL, 0);
  }
  sub_1800C9D74(*v4, "BackBufferSurface");
  v7 = sub_1800163D0(a1 + 215);
  D2D1CreateFactory(D2D1_FACTORY_TYPE_SINGLE_THREADED, &riid, 0LL, (void **)v7);
  v13[0] = (unsigned int)sub_1800C9E5C(a1) | 0x100000000LL;
  v16 = 0;
  v17 = v13[0];
  v18 = 0;
  v19 = 0;
  v20 = 2;
  v21 = 0;
  v8 = a1[215];
  v9 = *(__int64 (__fastcall **)(__int64, _QWORD, int *, __int64 *))(*(_QWORD *)v8 + 120LL);
  sub_18000E72C(a1 + 214);
  v10 = v9(v8, *v4, &v16, a1 + 214);
  v11 = v10;
  if ( v10 < 0 )
  {
    memset(&v15, 0, sizeof(v15));
    v15.ExceptionCode = -532265403;
    v15.ExceptionAddress = retaddr;
    v15.NumberParameters = 1;
    v15.ExceptionInformation[0] = v11;
    RaiseFailFastException(&v15, 0LL, 0);
  }
  return sub_18000E72C(a2);
}
