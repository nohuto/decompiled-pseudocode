/*
 * XREFs of sub_1800CAB90 @ 0x1800CAB90
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     memset @ 0x18000C0BC (memset.c)
 *     sub_18000E72C @ 0x18000E72C (sub_18000E72C.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_18001070C @ 0x18001070C (sub_18001070C.c)
 *     sub_1800163D0 @ 0x1800163D0 (sub_1800163D0.c)
 *     sub_18002C9D8 @ 0x18002C9D8 (sub_18002C9D8.c)
 *     sub_1800C570C @ 0x1800C570C (sub_1800C570C.c)
 *     sub_1800C7750 @ 0x1800C7750 (sub_1800C7750.c)
 *     sub_1800C9E00 @ 0x1800C9E00 (sub_1800C9E00.c)
 *     sub_1800C9E5C @ 0x1800C9E5C (sub_1800C9E5C.c)
 *     sub_1800C9FBC @ 0x1800C9FBC (sub_1800C9FBC.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 *__fastcall sub_1800CAB90(__int64 *a1, __int64 *a2)
{
  __int64 v4; // r13
  __int64 *v5; // rsi
  __int64 v6; // r14
  __int64 (__fastcall *v7)(__int64, __int64, _QWORD, _QWORD, int, _DWORD); // rsi
  int v8; // edi
  unsigned int v9; // ebx
  unsigned int v10; // eax
  int v11; // eax
  ULONG_PTR v12; // rbx
  __int64 v13; // rdi
  __int64 (__fastcall *v14)(__int64, _QWORD, void *, __int64 *); // rbx
  __int64 *v15; // rax
  int v16; // eax
  ULONG_PTR v17; // rbx
  __int64 v18; // rbx
  void (__fastcall *v19)(__int64, const IID *, __int64 *); // rdi
  __int64 *v20; // rax
  void (__fastcall *v21)(__int64 *, __int64, _QWORD, _DWORD *, __int64 *); // rbx
  _QWORD *v22; // rax
  __int64 v24; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v25[2]; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v26; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v27; // [rsp+60h] [rbp-A0h]
  __int64 v28; // [rsp+68h] [rbp-98h] BYREF
  __int64 v29; // [rsp+70h] [rbp-90h]
  EXCEPTION_RECORD pExceptionRecord; // [rsp+80h] [rbp-80h] BYREF
  EXCEPTION_RECORD v31; // [rsp+120h] [rbp+20h] BYREF
  _DWORD v32[4]; // [rsp+1C0h] [rbp+C0h] BYREF
  __int64 v33; // [rsp+1D0h] [rbp+D0h]
  int v34; // [rsp+1D8h] [rbp+D8h]
  int v35; // [rsp+1DCh] [rbp+DCh]
  int v36; // [rsp+1E0h] [rbp+E0h]
  int v37; // [rsp+1E4h] [rbp+E4h]
  __int64 v38; // [rsp+1E8h] [rbp+E8h]
  void *retaddr; // [rsp+238h] [rbp+138h]

  v25[0] = (__int64)a2;
  sub_1800C9FBC((__int64)a1, &v28);
  v4 = v28;
  if ( !v28 )
    goto LABEL_23;
  v5 = a1 + 63;
  if ( sub_18001070C(a1 + 63) )
  {
    v6 = *v5;
    v7 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, int, _DWORD))(*(_QWORD *)*v5 + 104LL);
    v8 = sub_1800C9E5C((__int64)a1);
    v9 = (*(__int64 (__fastcall **)(__int64 *))(*a1 + 88))(a1);
    v10 = (*(__int64 (__fastcall **)(__int64 *))(*a1 + 80))(a1);
    v11 = v7(v6, 2LL, v10, v9, v8, 0);
    v12 = v11;
    sub_1800C7750(v4, v11);
    if ( (v12 & 0x80000000) != 0LL )
    {
      memset(&pExceptionRecord, 0, sizeof(pExceptionRecord));
      pExceptionRecord.ExceptionCode = -532265403;
      pExceptionRecord.ExceptionAddress = retaddr;
      pExceptionRecord.NumberParameters = 1;
      pExceptionRecord.ExceptionInformation[0] = v12;
      RaiseFailFastException(&pExceptionRecord, 0LL, 0);
    }
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4) )
      sub_18002C9D8((__int64)a1);
    v5 = a1 + 63;
  }
  else
  {
    v37 = 0;
    v38 = 3LL;
    v34 = 32;
    v35 = 2;
    v32[2] = sub_1800C9E5C((__int64)a1);
    v32[1] = (*(__int64 (__fastcall **)(__int64 *))(*a1 + 88))(a1);
    v32[0] = (*(__int64 (__fastcall **)(__int64 *))(*a1 + 80))(a1);
    v33 = 1LL;
    v36 = 0;
    v32[3] = 0;
    v25[0] = 0LL;
    sub_1800C9FBC((__int64)a1, &v26);
    if ( v26 )
    {
      sub_1800C570C(v26, &v24);
      if ( v27 )
        sub_180010530(v27);
      v18 = v24;
    }
    else
    {
      if ( v27 )
        sub_180010530(v27);
      v24 = 0LL;
      v18 = 0LL;
    }
    v19 = *(void (__fastcall **)(__int64, const IID *, __int64 *))(*(_QWORD *)v18 + 48LL);
    v20 = sub_1800163D0(v25);
    v19(v18, &stru_180199840, v20);
    sub_18000E72C(&v24);
    v21 = *(void (__fastcall **)(__int64 *, __int64, _QWORD, _DWORD *, __int64 *))(*a1 + 408);
    sub_18000E72C(a1 + 63);
    v22 = sub_1800C9E00((__int64)a1, &v24);
    v21(a1, v25[0], *v22, v32, a1 + 63);
    sub_18000E72C(&v24);
    sub_18000E72C(v25);
  }
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4) )
  {
    (*(void (__fastcall **)(__int64 *))(*a1 + 416))(a1);
    v24 = 0LL;
    v13 = *v5;
    v14 = *(__int64 (__fastcall **)(__int64, _QWORD, void *, __int64 *))(*(_QWORD *)*v5 + 72LL);
    v15 = sub_1800163D0(&v24);
    v16 = v14(v13, 0LL, &unk_180199AC0, v15);
    v17 = v16;
    if ( v16 < 0 )
    {
      memset(&v31, 0, sizeof(v31));
      v31.ExceptionCode = -532265403;
      v31.ExceptionAddress = retaddr;
      v31.NumberParameters = 1;
      v31.ExceptionInformation[0] = v17;
      RaiseFailFastException(&v31, 0LL, 0);
    }
    *a2 = 0LL;
    if ( a2 != &v24 )
    {
      *a2 = v24;
      v24 = 0LL;
    }
    sub_18000E72C(&v24);
    if ( v29 )
      sub_180010530(v29);
  }
  else
  {
LABEL_23:
    if ( v29 )
      sub_180010530(v29);
    *a2 = 0LL;
  }
  return a2;
}
