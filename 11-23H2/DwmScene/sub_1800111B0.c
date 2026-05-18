/*
 * XREFs of sub_1800111B0 @ 0x1800111B0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     memset @ 0x18000C0BC (memset.c)
 *     sub_18000E72C @ 0x18000E72C (sub_18000E72C.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_18001070C @ 0x18001070C (sub_18001070C.c)
 *     sub_18001071C @ 0x18001071C (sub_18001071C.c)
 *     sub_18001085C @ 0x18001085C (sub_18001085C.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_180011020 @ 0x180011020 (sub_180011020.c)
 *     sub_18001145C @ 0x18001145C (sub_18001145C.c)
 *     sub_180011520 @ 0x180011520 (sub_180011520.c)
 *     sub_180026618 @ 0x180026618 (sub_180026618.c)
 *     sub_180028284 @ 0x180028284 (sub_180028284.c)
 *     sub_180029824 @ 0x180029824 (sub_180029824.c)
 *     sub_18002CB90 @ 0x18002CB90 (sub_18002CB90.c)
 *     sub_1800C589C @ 0x1800C589C (sub_1800C589C.c)
 *     sub_1800C9FBC @ 0x1800C9FBC (sub_1800C9FBC.c)
 *     sub_1800CB76C @ 0x1800CB76C (sub_1800CB76C.c)
 *     __RTDynamicCast @ 0x1800E3960 (__RTDynamicCast.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall sub_1800111B0(__int64 a1, __int64 *a2)
{
  __int64 v4; // r14
  __int64 v5; // rbx
  _QWORD *v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdi
  int (__fastcall *v9)(__int64, __int64, _QWORD, __int64 *); // rbx
  ULONG_PTR v10; // rbx
  int v11; // ebx
  __int64 v12; // rax
  __int64 v14; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v15; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v16; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v17; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v18; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v19; // [rsp+58h] [rbp-A8h]
  __int64 *v20; // [rsp+60h] [rbp-A0h]
  __int128 v21; // [rsp+70h] [rbp-90h] BYREF
  __int64 v22[4]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v23; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v24; // [rsp+A8h] [rbp-58h]
  EXCEPTION_RECORD pExceptionRecord; // [rsp+B0h] [rbp-50h] BYREF
  _DWORD v26[12]; // [rsp+150h] [rbp+50h] BYREF
  void *retaddr; // [rsp+1B8h] [rbp+B8h]

  v20 = a2;
  sub_1800C9FBC(a1, &v23);
  v4 = v23;
  if ( v23 )
  {
    v21 = 0LL;
    if ( sub_18001070C(a2) )
    {
      sub_18001071C(v4, &v18);
      v5 = v18;
      v6 = sub_180010DD0(v22, (__int64)"Output");
      sub_180029824(v5, v6);
      (*(void (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)*a2 + 80LL))(*a2, v26);
      v14 = 0LL;
      v7 = sub_1800C589C(v4, &v15);
      v8 = *(_QWORD *)v7;
      v9 = *(int (__fastcall **)(__int64, __int64, _QWORD, __int64 *))(**(_QWORD **)v7 + 72LL);
      sub_18000E72C(&v14);
      v10 = v9(v8, *a2, 0LL, &v14);
      sub_18000E72C(&v15);
      if ( (v10 & 0x80000000) != 0LL )
      {
        memset(&pExceptionRecord, 0, sizeof(pExceptionRecord));
        pExceptionRecord.ExceptionCode = -532265403;
        pExceptionRecord.ExceptionAddress = retaddr;
        pExceptionRecord.NumberParameters = 1;
        pExceptionRecord.ExceptionInformation[0] = v10;
        RaiseFailFastException(&pExceptionRecord, 0LL, 0);
      }
      sub_18001145C(*a2, "RenderOutput ColorBuffer");
      sub_18001145C(v14, "RenderOutput ColorBuffer");
      v11 = _RTDynamicCast(
              v18,
              0LL,
              &Spectre::Engine::DeviceFrameBuffer `RTTI Type Descriptor',
              &Spectre::Engine::D3D11::RenderTargetD3D11 `RTTI Type Descriptor',
              0);
      v17 = 0LL;
      v16 = *a2;
      sub_180011520(&v16);
      v15 = v14;
      if ( v14 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
      sub_1800CB76C(v11, (unsigned int)&v15, (unsigned int)&v16, (unsigned int)&v17, v26[0], v26[1]);
      v12 = sub_180026618(v4);
      sub_18001085C(v12, v22);
      sub_180011020(&v21, v22);
      if ( v22[1] )
        sub_180010530(v22[1]);
      sub_180028284(v21, &v18);
      sub_18000E72C(&v14);
      if ( v19 )
        sub_180010530(v19);
    }
    *(_OWORD *)v22 = v21;
    sub_18002CB90(a1, v22);
  }
  if ( v24 )
    sub_180010530(v24);
  return sub_18000E72C(a2);
}
