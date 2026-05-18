/*
 * XREFs of sub_1800EE3C8 @ 0x1800EE3C8
 * Callers:
 *     sub_1800DF6B0 @ 0x1800DF6B0 (sub_1800DF6B0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     memset @ 0x18000C0CC (memset.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180011AC0 @ 0x180011AC0 (sub_180011AC0.c)
 *     sub_180079C78 @ 0x180079C78 (sub_180079C78.c)
 *     sub_1800DA968 @ 0x1800DA968 (sub_1800DA968.c)
 *     sub_1800DD668 @ 0x1800DD668 (sub_1800DD668.c)
 *     sub_1800E0240 @ 0x1800E0240 (sub_1800E0240.c)
 *     sub_1800ED91C @ 0x1800ED91C (sub_1800ED91C.c)
 *     __RTDynamicCast @ 0x1800FEE97 (__RTDynamicCast.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=11
__int64 *__fastcall sub_1800EE3C8(__int64 *a1, __int64 *a2, int a3, int a4, __int64 a5)
{
  int v9; // eax
  _QWORD *v10; // rax
  __int64 v11; // rbx
  int (__fastcall *v12)(__int64, _DWORD *, _QWORD, __int64 *); // rdi
  __int64 v13; // rcx
  ULONG_PTR v14; // rbx
  __int64 v15; // rcx
  const char *v16; // rdx
  _QWORD *v17; // rax
  __int64 v18; // rbx
  int (__fastcall *v19)(__int64, __int64, int *, __int64 *); // rdi
  __int64 v20; // rcx
  ULONG_PTR v21; // rbx
  __int64 v22; // rcx
  const char *v23; // rdx
  __int64 v24; // rbx
  __int64 v25; // rcx
  __int64 v26; // rcx
  unsigned __int64 v27; // rdx
  __int64 v29; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v30; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v31; // [rsp+40h] [rbp-C0h] BYREF
  int v32; // [rsp+48h] [rbp-B8h]
  __int64 v33; // [rsp+50h] [rbp-B0h] BYREF
  int v34; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v35; // [rsp+5Ch] [rbp-A4h]
  __int64 *v36; // [rsp+70h] [rbp-90h]
  __int64 v37; // [rsp+78h] [rbp-88h]
  EXCEPTION_RECORD pExceptionRecord; // [rsp+80h] [rbp-80h] BYREF
  EXCEPTION_RECORD v39; // [rsp+120h] [rbp+20h] BYREF
  _DWORD v40[5]; // [rsp+1C0h] [rbp+C0h] BYREF
  __int64 v41; // [rsp+1D4h] [rbp+D4h]
  int v42; // [rsp+1DCh] [rbp+DCh]
  __int64 v43; // [rsp+1E0h] [rbp+E0h]
  int v44; // [rsp+1E8h] [rbp+E8h]
  void *retaddr; // [rsp+238h] [rbp+138h]

  v36 = a1;
  v37 = a5;
  v32 = 0;
  v9 = sub_1800E0240(1, 0);
  v40[0] = a3;
  v40[1] = a4;
  v40[2] = 1;
  v40[3] = 1;
  v40[4] = v9;
  v42 = 0;
  v43 = 64LL;
  v44 = 0;
  v41 = 1LL;
  v30 = 0LL;
  v10 = sub_1800DA968(*a2, &v29);
  v11 = *v10;
  v12 = *(int (__fastcall **)(__int64, _DWORD *, _QWORD, __int64 *))(*(_QWORD *)*v10 + 40LL);
  v13 = v30;
  if ( v30 )
  {
    v30 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  v14 = v12(v11, v40, 0LL, &v30);
  v15 = v29;
  if ( v29 )
  {
    v29 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  sub_1800DD668(*a2, v14);
  if ( (v14 & 0x80000000) != 0LL )
  {
    memset(&pExceptionRecord, 0, sizeof(pExceptionRecord));
    pExceptionRecord.ExceptionCode = -532265403;
    pExceptionRecord.ExceptionAddress = retaddr;
    pExceptionRecord.NumberParameters = 1;
    pExceptionRecord.ExceptionInformation[0] = v14;
    RaiseFailFastException(&pExceptionRecord, 0LL, 0);
  }
  v16 = (const char *)a5;
  if ( *(_QWORD *)(a5 + 24) >= 0x10uLL )
    v16 = *(const char **)a5;
  sub_180011AC0(v30, v16);
  v34 = 0;
  v35 = 5LL;
  v31 = 0LL;
  v17 = sub_1800DA968(*a2, &v29);
  v18 = *v17;
  v19 = *(int (__fastcall **)(__int64, __int64, int *, __int64 *))(*(_QWORD *)*v17 + 80LL);
  v20 = v31;
  if ( v31 )
  {
    v31 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  }
  v21 = v19(v18, v30, &v34, &v31);
  v22 = v29;
  if ( v29 )
  {
    v29 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  }
  sub_1800DD668(*a2, v21);
  if ( (v21 & 0x80000000) != 0LL )
  {
    memset(&v39, 0, sizeof(v39));
    v39.ExceptionCode = -532265403;
    v39.ExceptionAddress = retaddr;
    v39.NumberParameters = 1;
    v39.ExceptionInformation[0] = v21;
    RaiseFailFastException(&v39, 0LL, 0);
  }
  v23 = (const char *)a5;
  if ( *(_QWORD *)(a5 + 24) >= 0x10uLL )
    v23 = *(const char **)a5;
  sub_180011AC0(v31, v23);
  sub_180079C78(*a2, a1);
  v32 = 1;
  v24 = _RTDynamicCast(
          *a1,
          0LL,
          &Spectre::Engine::DeviceDepthBuffer `RTTI Type Descriptor',
          &Spectre::Engine::D3D11::DepthBufferD3D11 `RTTI Type Descriptor',
          1);
  v29 = v30;
  if ( v30 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 8LL))(v30);
  v33 = v31;
  if ( v31 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 8LL))(v31);
  sub_1800ED91C(v24, &v33, &v29);
  v25 = v31;
  if ( v31 )
  {
    v31 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
  }
  v26 = v30;
  if ( v30 )
  {
    v30 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
  }
  v27 = *(_QWORD *)(a5 + 24);
  if ( v27 >= 0x10 )
    sub_180010884(*(char **)a5, v27 + 1);
  *(_QWORD *)(a5 + 16) = 0LL;
  *(_QWORD *)(a5 + 24) = 15LL;
  *(_BYTE *)a5 = 0;
  return a1;
}
