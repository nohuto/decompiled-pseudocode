/*
 * XREFs of sub_1800E1120 @ 0x1800E1120
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     memset @ 0x18000C0CC (memset.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180010D08 @ 0x180010D08 (sub_180010D08.c)
 *     sub_180017748 @ 0x180017748 (sub_180017748.c)
 *     sub_18002EDF0 @ 0x18002EDF0 (sub_18002EDF0.c)
 *     sub_1800DA7BC @ 0x1800DA7BC (sub_1800DA7BC.c)
 *     sub_1800DA968 @ 0x1800DA968 (sub_1800DA968.c)
 *     sub_1800DD668 @ 0x1800DD668 (sub_1800DD668.c)
 *     sub_1800E0240 @ 0x1800E0240 (sub_1800E0240.c)
 *     sub_1800E0390 @ 0x1800E0390 (sub_1800E0390.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 *__fastcall sub_1800E1120(_QWORD *a1, __int64 *a2)
{
  __int64 v4; // r13
  _QWORD *v5; // rsi
  __int64 v6; // r14
  __int64 (__fastcall *v7)(__int64, __int64, _QWORD, _QWORD, int, _DWORD); // rsi
  int v8; // ebx
  char v9; // al
  int v10; // edi
  unsigned int v11; // ebx
  unsigned int v12; // eax
  int v13; // eax
  ULONG_PTR v14; // rbx
  __int64 v15; // rdi
  __int64 (__fastcall *v16)(__int64, _QWORD, void *, __int64 *); // rbx
  __int64 *v17; // rax
  int v18; // eax
  ULONG_PTR v19; // rbx
  __int64 v20; // rcx
  int v21; // ebx
  char v22; // al
  __int64 *v23; // rbx
  void (__fastcall *v24)(__int64 *, const IID *, __int64 *); // rdi
  __int64 *v25; // rax
  void (__fastcall *v26)(_QWORD *, __int64, __int64 *, _DWORD *, _QWORD *); // rdi
  __int64 v27; // rcx
  __int64 *v28; // rbx
  __int64 v29; // rcx
  __int64 v31; // [rsp+40h] [rbp-C0h] BYREF
  __int64 *v32; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v33[2]; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v34[2]; // [rsp+60h] [rbp-A0h] BYREF
  EXCEPTION_RECORD pExceptionRecord; // [rsp+70h] [rbp-90h] BYREF
  EXCEPTION_RECORD v36; // [rsp+110h] [rbp+10h] BYREF
  _DWORD v37[4]; // [rsp+1B0h] [rbp+B0h] BYREF
  __int64 v38; // [rsp+1C0h] [rbp+C0h]
  int v39; // [rsp+1C8h] [rbp+C8h]
  int v40; // [rsp+1CCh] [rbp+CCh]
  int v41; // [rsp+1D0h] [rbp+D0h]
  int v42; // [rsp+1D4h] [rbp+D4h]
  __int64 v43; // [rsp+1D8h] [rbp+D8h]
  void *retaddr; // [rsp+228h] [rbp+128h]

  v32 = a2;
  sub_1800E0390((__int64)a1, v34);
  v4 = v34[0];
  if ( !v34[0] )
    goto LABEL_32;
  v5 = a1 + 63;
  if ( sub_180010D08(a1 + 63) )
  {
    v6 = *v5;
    v7 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, int, _DWORD))(*(_QWORD *)*v5 + 104LL);
    v8 = (*(__int64 (__fastcall **)(_QWORD *, __int64))(*a1 + 264LL))(a1, 2LL);
    v9 = (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 296LL))(a1);
    v10 = sub_1800E0240(v8, v9 != 0);
    v11 = (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 88LL))(a1);
    v12 = (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 80LL))(a1);
    v13 = v7(v6, 2LL, v12, v11, v10, 0);
    v14 = v13;
    sub_1800DD668(v4, v13);
    if ( (v14 & 0x80000000) != 0LL )
    {
      memset(&pExceptionRecord, 0, sizeof(pExceptionRecord));
      pExceptionRecord.ExceptionCode = -532265403;
      pExceptionRecord.ExceptionAddress = retaddr;
      pExceptionRecord.NumberParameters = 1;
      pExceptionRecord.ExceptionInformation[0] = v14;
      RaiseFailFastException(&pExceptionRecord, 0LL, 0);
    }
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4) )
      sub_18002EDF0((__int64)a1);
    v5 = a1 + 63;
  }
  else
  {
    v42 = 0;
    v43 = 3LL;
    v39 = 32;
    v40 = 2;
    v21 = (*(__int64 (__fastcall **)(_QWORD *, __int64))(*a1 + 264LL))(a1, 2LL);
    v22 = (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 296LL))(a1);
    v37[2] = sub_1800E0240(v21, v22 != 0);
    v37[1] = (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 88LL))(a1);
    v37[0] = (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 80LL))(a1);
    v38 = 1LL;
    v41 = 0;
    v37[3] = 0;
    v31 = 0LL;
    sub_1800E0390((__int64)a1, v33);
    if ( v33[0] )
    {
      sub_1800DA7BC(v33[0], &v32);
      sub_180010910((__int64)v33);
      v23 = v32;
    }
    else
    {
      sub_180010910((__int64)v33);
      v32 = 0LL;
      v23 = 0LL;
    }
    v24 = *(void (__fastcall **)(__int64 *, const IID *, __int64 *))(*v23 + 48);
    v25 = sub_180017748(&v31);
    v24(v23, &stru_1801BB820, v25);
    if ( v23 )
      (*(void (__fastcall **)(__int64 *))(*v23 + 16))(v23);
    v26 = *(void (__fastcall **)(_QWORD *, __int64, __int64 *, _DWORD *, _QWORD *))(*a1 + 408LL);
    v27 = *v5;
    if ( *v5 )
    {
      *v5 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
    }
    sub_1800E0390((__int64)a1, v33);
    if ( v33[0] )
    {
      sub_1800DA968(v33[0], &v32);
      sub_180010910((__int64)v33);
      v28 = v32;
    }
    else
    {
      sub_180010910((__int64)v33);
      v32 = 0LL;
      v28 = 0LL;
    }
    v26(a1, v31, v28, v37, a1 + 63);
    if ( v28 )
      (*(void (__fastcall **)(__int64 *))(*v28 + 16))(v28);
    v29 = v31;
    if ( v31 )
    {
      v31 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
    }
  }
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4) )
  {
    (*(void (__fastcall **)(_QWORD *))(*a1 + 416LL))(a1);
    v31 = 0LL;
    v15 = *v5;
    v16 = *(__int64 (__fastcall **)(__int64, _QWORD, void *, __int64 *))(*(_QWORD *)*v5 + 72LL);
    v17 = sub_180017748(&v31);
    v18 = v16(v15, 0LL, &unk_1801BBAA0, v17);
    v19 = v18;
    if ( v18 < 0 )
    {
      memset(&v36, 0, sizeof(v36));
      v36.ExceptionCode = -532265403;
      v36.ExceptionAddress = retaddr;
      v36.NumberParameters = 1;
      v36.ExceptionInformation[0] = v19;
      RaiseFailFastException(&v36, 0LL, 0);
    }
    *a2 = 0LL;
    if ( a2 == &v31 )
    {
      v20 = v31;
    }
    else
    {
      *a2 = v31;
      v20 = 0LL;
      v31 = 0LL;
    }
    if ( v20 )
    {
      v31 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    }
    sub_180010910((__int64)v34);
  }
  else
  {
LABEL_32:
    sub_180010910((__int64)v34);
    *a2 = 0LL;
  }
  return a2;
}
