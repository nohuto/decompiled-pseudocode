/*
 * XREFs of sub_1800DF960 @ 0x1800DF960
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     memset @ 0x18000C0CC (memset.c)
 *     sub_180017748 @ 0x180017748 (sub_180017748.c)
 *     sub_1800DF800 @ 0x1800DF800 (sub_1800DF800.c)
 *     sub_1800E0240 @ 0x1800E0240 (sub_1800E0240.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall sub_1800DF960(_QWORD *a1, __int64 (__fastcall ****a2)(_QWORD, void *, _QWORD *))
{
  _QWORD *v4; // r14
  __int64 (__fastcall ***v5)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v6)(_QWORD, void *, _QWORD *); // rdi
  __int64 v7; // rcx
  int v8; // eax
  ULONG_PTR v9; // rbx
  __int64 v10; // rdi
  void (__fastcall *v11)(__int64, void *, _QWORD, const char *); // rbx
  unsigned int v12; // eax
  __int64 *v13; // rax
  unsigned int v14; // ebx
  char v15; // al
  int v16; // eax
  __int64 v17; // rbx
  __int64 (__fastcall *v18)(__int64, _QWORD, __int128 *, _QWORD *); // rdi
  __int64 v19; // rcx
  int v20; // eax
  ULONG_PTR v21; // rbx
  __int64 (__fastcall ***v22)(_QWORD, _QWORD, _QWORD); // rcx
  __int64 (__fastcall ***v23)(_QWORD, _QWORD, _QWORD); // [rsp+30h] [rbp-D0h] BYREF
  __int128 v24; // [rsp+38h] [rbp-C8h]
  __int64 v25; // [rsp+48h] [rbp-B8h]
  __int64 (__fastcall ****v26)(_QWORD, _QWORD, _QWORD); // [rsp+58h] [rbp-A8h]
  EXCEPTION_RECORD pExceptionRecord; // [rsp+60h] [rbp-A0h] BYREF
  EXCEPTION_RECORD v28; // [rsp+100h] [rbp+0h] BYREF
  __int128 v29; // [rsp+1A0h] [rbp+A0h] BYREF
  __int64 v30; // [rsp+1B0h] [rbp+B0h]
  int v31; // [rsp+1B8h] [rbp+B8h]
  void *retaddr; // [rsp+1F8h] [rbp+F8h]

  v26 = (__int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD))a2;
  v23 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))*a2;
  if ( v23 )
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v23)[1])(v23);
  sub_1800DF800((__int64)a1, (__int64 *)&v23);
  v4 = a1 + 213;
  v5 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))*a2;
  v6 = ***a2;
  v7 = a1[213];
  if ( v7 )
  {
    *v4 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  v8 = v6(v5, &unk_1801BBA80, a1 + 213);
  v9 = v8;
  if ( v8 < 0 )
  {
    memset(&pExceptionRecord, 0, sizeof(pExceptionRecord));
    pExceptionRecord.ExceptionCode = -532265403;
    pExceptionRecord.ExceptionAddress = retaddr;
    pExceptionRecord.NumberParameters = 1;
    pExceptionRecord.ExceptionInformation[0] = v9;
    RaiseFailFastException(&pExceptionRecord, 0LL, 0);
  }
  v10 = *v4;
  if ( *v4 )
  {
    v11 = *(void (__fastcall **)(__int64, void *, _QWORD, const char *))(*(_QWORD *)v10 + 24LL);
    v12 = strnlen("BackBufferSurface", 0xFFuLL);
    v11(v10, &unk_180127F58, v12, "BackBufferSurface");
  }
  v13 = sub_180017748(a1 + 215);
  D2D1CreateFactory(D2D1_FACTORY_TYPE_SINGLE_THREADED, &riid, 0LL, (void **)v13);
  v14 = (*(__int64 (__fastcall **)(_QWORD *, __int64))(*a1 + 264LL))(a1, 2LL);
  v15 = (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 296LL))(a1);
  v16 = sub_1800E0240(v14, v15 != 0);
  LODWORD(v24) = 0;
  DWORD1(v24) = v16;
  *((_QWORD *)&v24 + 1) = 1LL;
  v25 = 0x200000000LL;
  v29 = v24;
  v30 = 0x200000000LL;
  v31 = 0;
  v17 = a1[215];
  v18 = *(__int64 (__fastcall **)(__int64, _QWORD, __int128 *, _QWORD *))(*(_QWORD *)v17 + 120LL);
  v19 = a1[214];
  if ( v19 )
  {
    a1[214] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  }
  v20 = v18(v17, *v4, &v29, a1 + 214);
  v21 = v20;
  if ( v20 < 0 )
  {
    memset(&v28, 0, sizeof(v28));
    v28.ExceptionCode = -532265403;
    v28.ExceptionAddress = retaddr;
    v28.NumberParameters = 1;
    v28.ExceptionInformation[0] = v21;
    RaiseFailFastException(&v28, 0LL, 0);
  }
  v22 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))*a2;
  if ( *a2 )
  {
    *a2 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v22)[2])(v22);
  }
}
