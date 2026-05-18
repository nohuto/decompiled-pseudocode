/*
 * XREFs of sub_180011740 @ 0x180011740
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     memset @ 0x18000C0CC (memset.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180010D08 @ 0x180010D08 (sub_180010D08.c)
 *     sub_180010D18 @ 0x180010D18 (sub_180010D18.c)
 *     sub_180010EC0 @ 0x180010EC0 (sub_180010EC0.c)
 *     sub_180011AC0 @ 0x180011AC0 (sub_180011AC0.c)
 *     sub_180012190 @ 0x180012190 (sub_180012190.c)
 *     sub_18002850C @ 0x18002850C (sub_18002850C.c)
 *     sub_18002A08C @ 0x18002A08C (sub_18002A08C.c)
 *     sub_18002BC44 @ 0x18002BC44 (sub_18002BC44.c)
 *     sub_18002F050 @ 0x18002F050 (sub_18002F050.c)
 *     sub_1800DA968 @ 0x1800DA968 (sub_1800DA968.c)
 *     sub_1800E0390 @ 0x1800E0390 (sub_1800E0390.c)
 *     sub_1800E201C @ 0x1800E201C (sub_1800E201C.c)
 *     __RTDynamicCast @ 0x1800FEE97 (__RTDynamicCast.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall sub_180011740(__int64 a1, _QWORD *a2)
{
  __int64 v4; // r14
  __m128i v5; // xmm6
  __int64 v6; // rbx
  _QWORD *v7; // rax
  ULONG_PTR v8; // rbx
  __int64 v9; // rdx
  int v10; // ebx
  __int64 v11; // rcx
  __int64 v12; // rax
  __m128i v13; // kr00_16
  __int64 v14; // rcx
  __int64 result; // rax
  __int64 v16; // rcx
  __int64 v17; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v18; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v19; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v20; // [rsp+50h] [rbp-B8h] BYREF
  __m128i v21; // [rsp+58h] [rbp-B0h] BYREF
  __m128i v22; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v23; // [rsp+78h] [rbp-90h]
  __int64 v24; // [rsp+80h] [rbp-88h]
  __m128i v25; // [rsp+88h] [rbp-80h] BYREF
  _QWORD v26[3]; // [rsp+98h] [rbp-70h] BYREF
  _QWORD v27[3]; // [rsp+B0h] [rbp-58h] BYREF
  EXCEPTION_RECORD pExceptionRecord; // [rsp+C8h] [rbp-40h] BYREF
  _DWORD v29[12]; // [rsp+168h] [rbp+60h] BYREF
  void *retaddr; // [rsp+1E0h] [rbp+D8h]

  v26[2] = a2;
  sub_1800E0390(a1, v27);
  v4 = v27[0];
  if ( v27[0] )
  {
    v5 = 0LL;
    v21 = 0LL;
    if ( sub_180010D08(a2) )
    {
      sub_180010D18(v4, v26);
      v6 = v26[0];
      v23 = 0LL;
      v24 = 15LL;
      v22.m128i_i8[0] = 0;
      sub_180012190(&v22, "Output", 6uLL);
      sub_18002BC44(v6, &v22);
      (*(void (__fastcall **)(_QWORD, _DWORD *))(*(_QWORD *)*a2 + 80LL))(*a2, v29);
      v17 = 0LL;
      v7 = (_QWORD *)sub_1800DA968(v4, &v18);
      v8 = (*(int (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64 *))(*(_QWORD *)*v7 + 72LL))(*v7, *a2, 0LL, &v17);
      v9 = v18;
      if ( v18 )
      {
        v18 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      }
      if ( (v8 & 0x80000000) != 0LL )
      {
        memset(&pExceptionRecord, 0, sizeof(pExceptionRecord));
        pExceptionRecord.ExceptionCode = -532265403;
        pExceptionRecord.ExceptionAddress = retaddr;
        pExceptionRecord.NumberParameters = 1;
        pExceptionRecord.ExceptionInformation[0] = v8;
        RaiseFailFastException(&pExceptionRecord, 0LL, 0);
      }
      sub_180011AC0(*a2, "RenderOutput ColorBuffer");
      sub_180011AC0(v17, "RenderOutput ColorBuffer");
      v10 = _RTDynamicCast(
              v26[0],
              0LL,
              &Spectre::Engine::DeviceFrameBuffer `RTTI Type Descriptor',
              &Spectre::Engine::D3D11::RenderTargetD3D11 `RTTI Type Descriptor',
              0);
      v18 = 0LL;
      v11 = *a2;
      v19 = v11;
      if ( v11 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
      v20 = v17;
      if ( v17 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 8LL))(v17);
      sub_1800E201C(v10, (unsigned int)&v20, (unsigned int)&v19, (unsigned int)&v18, v29[0], v29[1]);
      v12 = sub_18002850C(v4);
      sub_180010EC0(v12, &v25);
      v13 = v25;
      v25 = 0LL;
      v22 = 0uLL;
      v21 = v13;
      sub_180010910((__int64)&v22);
      sub_180010910((__int64)&v25);
      sub_18002A08C(v13.m128i_i64[0], v26);
      v14 = v17;
      if ( v17 )
      {
        v17 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
      }
      sub_180010910((__int64)v26);
      v5 = _mm_load_si128(&v21);
    }
    v22 = v5;
    v21 = 0LL;
    sub_18002F050(a1, &v22);
    sub_180010910((__int64)&v21);
  }
  result = sub_180010910((__int64)v27);
  v16 = *a2;
  if ( *a2 )
  {
    *a2 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
  return result;
}
