/*
 * XREFs of sub_1800CBBFC @ 0x1800CBBFC
 * Callers:
 *     sub_1800C94A0 @ 0x1800C94A0 (sub_1800C94A0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     memset @ 0x18000C0BC (memset.c)
 *     sub_18000E72C @ 0x18000E72C (sub_18000E72C.c)
 *     sub_18001071C @ 0x18001071C (sub_18001071C.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_18001145C @ 0x18001145C (sub_18001145C.c)
 *     sub_180011520 @ 0x180011520 (sub_180011520.c)
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 *     sub_180029824 @ 0x180029824 (sub_180029824.c)
 *     sub_1800C589C @ 0x1800C589C (sub_1800C589C.c)
 *     sub_1800C7750 @ 0x1800C7750 (sub_1800C7750.c)
 *     sub_1800C9EC8 @ 0x1800C9EC8 (sub_1800C9EC8.c)
 *     sub_1800CB76C @ 0x1800CB76C (sub_1800CB76C.c)
 *     __RTDynamicCast @ 0x1800E3960 (__RTDynamicCast.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 *__fastcall sub_1800CBBFC(__int64 *a1, __int64 *a2, int a3, int a4, __int64 *a5, _QWORD *a6)
{
  const char *v10; // rdx
  _QWORD *v11; // rax
  __int64 v12; // rdi
  int (__fastcall *v13)(__int64, __int128 *, _QWORD, __int64 *); // rbx
  ULONG_PTR v14; // rbx
  _QWORD *v15; // rax
  __int64 v16; // rdi
  int (__fastcall *v17)(__int64, __int64, _QWORD, __int64 *); // rbx
  ULONG_PTR v18; // rbx
  const char *v19; // rdx
  __int64 v20; // rbx
  void **v21; // rax
  _QWORD *v22; // rbx
  __int64 v24; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v25; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v26; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v27; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v28; // [rsp+50h] [rbp-B0h] BYREF
  int v29; // [rsp+58h] [rbp-A8h]
  int v30; // [rsp+5Ch] [rbp-A4h]
  __int128 v31; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v32[20]; // [rsp+70h] [rbp-90h]
  int v33; // [rsp+84h] [rbp-7Ch]
  __int64 *v34; // [rsp+90h] [rbp-70h]
  _QWORD *v35; // [rsp+98h] [rbp-68h]
  EXCEPTION_RECORD pExceptionRecord; // [rsp+A0h] [rbp-60h] BYREF
  EXCEPTION_RECORD v37; // [rsp+140h] [rbp+40h] BYREF
  __int128 v38; // [rsp+1E0h] [rbp+E0h] BYREF
  _BYTE v39[20]; // [rsp+1F0h] [rbp+F0h]
  __int64 v40; // [rsp+204h] [rbp+104h]
  _OWORD v41[2]; // [rsp+210h] [rbp+110h] BYREF
  __int64 v42; // [rsp+230h] [rbp+130h]
  int v43; // [rsp+238h] [rbp+138h]
  void *retaddr; // [rsp+298h] [rbp+198h]

  v30 = a4;
  v34 = a1;
  v35 = a6;
  v29 = 0;
  v10 = (const char *)a6;
  if ( a6[3] >= 0x10uLL )
    v10 = (const char *)*a6;
  sub_18001145C(*a5, v10);
  v33 = 0;
  *(_DWORD *)v32 = sub_1800C9EC8(16, 0);
  *(_QWORD *)&v31 = __PAIR64__(a4, a3);
  *((_QWORD *)&v31 + 1) = 0x100000001LL;
  *(_OWORD *)&v32[4] = 1uLL;
  v38 = v31;
  *(_OWORD *)v39 = *(_OWORD *)v32;
  v40 = 0x20000LL;
  *(_QWORD *)&v39[12] = 3LL;
  v26 = 0LL;
  v11 = sub_1800C589C(*a2, &v27);
  v12 = *v11;
  v13 = *(int (__fastcall **)(__int64, __int128 *, _QWORD, __int64 *))(*(_QWORD *)*v11 + 40LL);
  sub_18000E72C(&v26);
  v14 = v13(v12, &v38, 0LL, &v26);
  sub_18000E72C(&v27);
  sub_1800C7750(*a2, v14);
  if ( (v14 & 0x80000000) != 0LL )
  {
    memset(&pExceptionRecord, 0, sizeof(pExceptionRecord));
    pExceptionRecord.ExceptionCode = -532265403;
    pExceptionRecord.ExceptionAddress = retaddr;
    pExceptionRecord.NumberParameters = 1;
    pExceptionRecord.ExceptionInformation[0] = v14;
    RaiseFailFastException(&pExceptionRecord, 0LL, 0);
  }
  sub_18001145C(v26, "BackBufferStaging");
  v25 = 0LL;
  v15 = sub_1800C589C(*a2, &v24);
  v16 = *v15;
  v17 = *(int (__fastcall **)(__int64, __int64, _QWORD, __int64 *))(*(_QWORD *)*v15 + 72LL);
  sub_18000E72C(&v25);
  v18 = v17(v16, *a5, 0LL, &v25);
  sub_18000E72C(&v24);
  sub_1800C7750(*a2, v18);
  if ( (v18 & 0x80000000) != 0LL )
  {
    memset(&v37, 0, sizeof(v37));
    v37.ExceptionCode = -532265403;
    v37.ExceptionAddress = retaddr;
    v37.NumberParameters = 1;
    v37.ExceptionInformation[0] = v18;
    RaiseFailFastException(&v37, 0LL, 0);
  }
  v19 = (const char *)a6;
  if ( a6[3] >= 0x10uLL )
    v19 = (const char *)*a6;
  sub_18001145C(v25, v19);
  sub_18001071C(*a2, a1);
  v29 = 1;
  v20 = *a1;
  v21 = (void **)sub_180010DD0(&v31, (__int64)"Output");
  sub_180029824(v20, v21);
  v22 = (_QWORD *)_RTDynamicCast(
                    *a1,
                    0LL,
                    &Spectre::Engine::DeviceFrameBuffer `RTTI Type Descriptor',
                    &Spectre::Engine::D3D11::RenderTargetD3D11 `RTTI Type Descriptor',
                    1);
  v24 = v26;
  sub_180011520(&v24);
  v28 = *a5;
  sub_180011520(&v28);
  v27 = v25;
  if ( v25 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 8LL))(v25);
  sub_1800CB76C(v22, &v27, &v28, &v24, a3, v30);
  memset(v41, 0, sizeof(v41));
  v42 = 0LL;
  v43 = 0;
  (*(void (__fastcall **)(__int64, _OWORD *))(*(_QWORD *)*a5 + 80LL))(*a5, v41);
  sub_18000E72C(&v25);
  sub_18000E72C(&v26);
  sub_180011B24((__int64)a6);
  return a1;
}
