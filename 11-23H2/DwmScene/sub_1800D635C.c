/*
 * XREFs of sub_1800D635C @ 0x1800D635C
 * Callers:
 *     sub_1800C9360 @ 0x1800C9360 (sub_1800C9360.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     memset @ 0x18000C0BC (memset.c)
 *     sub_18000E72C @ 0x18000E72C (sub_18000E72C.c)
 *     sub_18001145C @ 0x18001145C (sub_18001145C.c)
 *     sub_180011520 @ 0x180011520 (sub_180011520.c)
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 *     sub_18006EE5C @ 0x18006EE5C (sub_18006EE5C.c)
 *     sub_1800C589C @ 0x1800C589C (sub_1800C589C.c)
 *     sub_1800C7750 @ 0x1800C7750 (sub_1800C7750.c)
 *     sub_1800C9EC8 @ 0x1800C9EC8 (sub_1800C9EC8.c)
 *     sub_1800D5D0C @ 0x1800D5D0C (sub_1800D5D0C.c)
 *     __RTDynamicCast @ 0x1800E3960 (__RTDynamicCast.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 *__fastcall sub_1800D635C(__int64 *a1, __int64 *a2, int a3, int a4, _QWORD *a5)
{
  int v9; // eax
  _QWORD *v10; // rax
  __int64 v11; // rdi
  int (__fastcall *v12)(__int64, _DWORD *, _QWORD, __int64 *); // rbx
  ULONG_PTR v13; // rbx
  const char *v14; // rdx
  _QWORD *v15; // rax
  __int64 v16; // rdi
  int (__fastcall *v17)(__int64, __int64, _DWORD *, __int64 *); // rbx
  ULONG_PTR v18; // rbx
  const char *v19; // rdx
  _QWORD *v20; // rbx
  __int64 v22; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v23; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v24; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v25; // [rsp+48h] [rbp-B8h] BYREF
  int v26; // [rsp+50h] [rbp-B0h]
  _DWORD v27[6]; // [rsp+58h] [rbp-A8h] BYREF
  __int64 *v28; // [rsp+70h] [rbp-90h]
  _QWORD *v29; // [rsp+78h] [rbp-88h]
  EXCEPTION_RECORD pExceptionRecord; // [rsp+80h] [rbp-80h] BYREF
  EXCEPTION_RECORD v31; // [rsp+120h] [rbp+20h] BYREF
  _DWORD v32[12]; // [rsp+1C0h] [rbp+C0h] BYREF
  void *retaddr; // [rsp+238h] [rbp+138h]

  v28 = a1;
  v29 = a5;
  v26 = 0;
  v9 = sub_1800C9EC8(1, 0);
  v32[0] = a3;
  v32[1] = a4;
  v32[2] = 1;
  v32[3] = 1;
  v32[4] = v9;
  v32[7] = 0;
  v32[8] = 64;
  v32[9] = 0;
  v32[10] = 0;
  v32[5] = 1;
  v32[6] = 0;
  v22 = 0LL;
  v10 = sub_1800C589C(*a2, &v25);
  v11 = *v10;
  v12 = *(int (__fastcall **)(__int64, _DWORD *, _QWORD, __int64 *))(*(_QWORD *)*v10 + 40LL);
  sub_18000E72C(&v22);
  v13 = v12(v11, v32, 0LL, &v22);
  sub_18000E72C(&v25);
  sub_1800C7750(*a2, v13);
  if ( (v13 & 0x80000000) != 0LL )
  {
    memset(&pExceptionRecord, 0, sizeof(pExceptionRecord));
    pExceptionRecord.ExceptionCode = -532265403;
    pExceptionRecord.ExceptionAddress = retaddr;
    pExceptionRecord.NumberParameters = 1;
    pExceptionRecord.ExceptionInformation[0] = v13;
    RaiseFailFastException(&pExceptionRecord, 0LL, 0);
  }
  v14 = (const char *)a5;
  if ( a5[3] >= 0x10uLL )
    v14 = (const char *)*a5;
  sub_18001145C(v22, v14);
  v27[0] = 0;
  v27[1] = 5;
  v27[2] = 0;
  v24 = 0LL;
  v15 = sub_1800C589C(*a2, &v23);
  v16 = *v15;
  v17 = *(int (__fastcall **)(__int64, __int64, _DWORD *, __int64 *))(*(_QWORD *)*v15 + 80LL);
  sub_18000E72C(&v24);
  v18 = v17(v16, v22, v27, &v24);
  sub_18000E72C(&v23);
  sub_1800C7750(*a2, v18);
  if ( (v18 & 0x80000000) != 0LL )
  {
    memset(&v31, 0, sizeof(v31));
    v31.ExceptionCode = -532265403;
    v31.ExceptionAddress = retaddr;
    v31.NumberParameters = 1;
    v31.ExceptionInformation[0] = v18;
    RaiseFailFastException(&v31, 0LL, 0);
  }
  v19 = (const char *)a5;
  if ( a5[3] >= 0x10uLL )
    v19 = (const char *)*a5;
  sub_18001145C(v24, v19);
  sub_18006EE5C(*a2, a1);
  v26 = 1;
  v20 = (_QWORD *)_RTDynamicCast(
                    *a1,
                    0LL,
                    &Spectre::Engine::DeviceDepthBuffer `RTTI Type Descriptor',
                    &Spectre::Engine::D3D11::DepthBufferD3D11 `RTTI Type Descriptor',
                    1);
  v23 = v22;
  sub_180011520(&v23);
  v25 = v24;
  if ( v24 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 8LL))(v24);
  sub_1800D5D0C(v20, &v25, &v23);
  sub_18000E72C(&v24);
  sub_18000E72C(&v22);
  sub_180011B24((__int64)a5);
  return a1;
}
