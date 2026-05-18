/*
 * XREFs of sub_1800E2680 @ 0x1800E2680
 * Callers:
 *     sub_1800DF800 @ 0x1800DF800 (sub_1800DF800.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     memset @ 0x18000C0CC (memset.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010D18 @ 0x180010D18 (sub_180010D18.c)
 *     sub_180011AC0 @ 0x180011AC0 (sub_180011AC0.c)
 *     sub_180012190 @ 0x180012190 (sub_180012190.c)
 *     sub_18002BC44 @ 0x18002BC44 (sub_18002BC44.c)
 *     sub_1800DA968 @ 0x1800DA968 (sub_1800DA968.c)
 *     sub_1800DD668 @ 0x1800DD668 (sub_1800DD668.c)
 *     sub_1800E0240 @ 0x1800E0240 (sub_1800E0240.c)
 *     sub_1800E201C @ 0x1800E201C (sub_1800E201C.c)
 *     __RTDynamicCast @ 0x1800FEE97 (__RTDynamicCast.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=11
__int64 *__fastcall sub_1800E2680(__int64 *a1, __int64 *a2, int a3, int a4, __int64 *a5, __int64 a6)
{
  const char *v10; // rdx
  _QWORD *v11; // rax
  __int64 v12; // rbx
  int (__fastcall *v13)(__int64, __int128 *, _QWORD, __int64 *); // r12
  __int64 v14; // rcx
  ULONG_PTR v15; // rbx
  __int64 v16; // rcx
  _QWORD *v17; // rax
  __int64 v18; // rbx
  int (__fastcall *v19)(__int64, __int64, _QWORD, __int64 *); // r12
  __int64 v20; // rcx
  ULONG_PTR v21; // rbx
  __int64 v22; // rcx
  const char *v23; // rdx
  __int64 v24; // rbx
  __int64 v25; // rbx
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rcx
  unsigned __int64 v29; // rdx
  __int64 v31; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v32; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v33; // [rsp+40h] [rbp-C0h] BYREF
  int v34; // [rsp+48h] [rbp-B8h]
  int v35; // [rsp+4Ch] [rbp-B4h]
  __int64 v36; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v37; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v38; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v39[20]; // [rsp+70h] [rbp-90h]
  int v40; // [rsp+84h] [rbp-7Ch]
  __int64 *v41; // [rsp+90h] [rbp-70h]
  __int64 v42; // [rsp+98h] [rbp-68h]
  EXCEPTION_RECORD pExceptionRecord; // [rsp+A0h] [rbp-60h] BYREF
  EXCEPTION_RECORD v44; // [rsp+140h] [rbp+40h] BYREF
  __int128 v45; // [rsp+1E0h] [rbp+E0h] BYREF
  _BYTE v46[20]; // [rsp+1F0h] [rbp+F0h]
  __int64 v47; // [rsp+204h] [rbp+104h]
  _OWORD v48[2]; // [rsp+210h] [rbp+110h] BYREF
  __int64 v49; // [rsp+230h] [rbp+130h]
  int v50; // [rsp+238h] [rbp+138h]
  void *retaddr; // [rsp+298h] [rbp+198h]

  v35 = a4;
  v41 = a1;
  v42 = a6;
  v34 = 0;
  v10 = (const char *)a6;
  if ( *(_QWORD *)(a6 + 24) >= 0x10uLL )
    v10 = *(const char **)a6;
  sub_180011AC0(*a5, v10);
  v40 = 0;
  *(_DWORD *)v39 = sub_1800E0240(16, 0);
  *(_QWORD *)&v38 = __PAIR64__(a4, a3);
  *((_QWORD *)&v38 + 1) = 0x100000001LL;
  *(_OWORD *)&v39[4] = 1uLL;
  v45 = v38;
  *(_OWORD *)v46 = *(_OWORD *)v39;
  v47 = 0x20000LL;
  *(_QWORD *)&v46[12] = 3LL;
  v33 = 0LL;
  v11 = sub_1800DA968(*a2, &v31);
  v12 = *v11;
  v13 = *(int (__fastcall **)(__int64, __int128 *, _QWORD, __int64 *))(*(_QWORD *)*v11 + 40LL);
  v14 = v33;
  if ( v33 )
  {
    v33 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  v15 = v13(v12, &v45, 0LL, &v33);
  v16 = v31;
  if ( v31 )
  {
    v31 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
  sub_1800DD668(*a2, v15);
  if ( (v15 & 0x80000000) != 0LL )
  {
    memset(&pExceptionRecord, 0, sizeof(pExceptionRecord));
    pExceptionRecord.ExceptionCode = -532265403;
    pExceptionRecord.ExceptionAddress = retaddr;
    pExceptionRecord.NumberParameters = 1;
    pExceptionRecord.ExceptionInformation[0] = v15;
    RaiseFailFastException(&pExceptionRecord, 0LL, 0);
  }
  sub_180011AC0(v33, "BackBufferStaging");
  v32 = 0LL;
  v17 = sub_1800DA968(*a2, &v31);
  v18 = *v17;
  v19 = *(int (__fastcall **)(__int64, __int64, _QWORD, __int64 *))(*(_QWORD *)*v17 + 72LL);
  v20 = v32;
  if ( v32 )
  {
    v32 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  }
  v21 = v19(v18, *a5, 0LL, &v32);
  v22 = v31;
  if ( v31 )
  {
    v31 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  }
  sub_1800DD668(*a2, v21);
  if ( (v21 & 0x80000000) != 0LL )
  {
    memset(&v44, 0, sizeof(v44));
    v44.ExceptionCode = -532265403;
    v44.ExceptionAddress = retaddr;
    v44.NumberParameters = 1;
    v44.ExceptionInformation[0] = v21;
    RaiseFailFastException(&v44, 0LL, 0);
  }
  v23 = (const char *)a6;
  if ( *(_QWORD *)(a6 + 24) >= 0x10uLL )
    v23 = *(const char **)a6;
  sub_180011AC0(v32, v23);
  sub_180010D18(*a2, a1);
  v34 = 1;
  v24 = *a1;
  *(_QWORD *)v39 = 0LL;
  *(_QWORD *)&v39[8] = 15LL;
  LOBYTE(v38) = 0;
  sub_180012190((__int64 *)&v38, "Output", 6uLL);
  sub_18002BC44(v24, (__int64 *)&v38);
  v25 = _RTDynamicCast(
          *a1,
          0LL,
          &Spectre::Engine::DeviceFrameBuffer `RTTI Type Descriptor',
          &Spectre::Engine::D3D11::RenderTargetD3D11 `RTTI Type Descriptor',
          1);
  v31 = v33;
  if ( v33 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 8LL))(v33);
  v26 = *a5;
  v36 = v26;
  if ( v26 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 8LL))(v26);
  v37 = v32;
  if ( v32 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 8LL))(v32);
  sub_1800E201C(v25, &v37, &v36, &v31, a3, v35);
  memset(v48, 0, sizeof(v48));
  v49 = 0LL;
  v50 = 0;
  (*(void (__fastcall **)(__int64, _OWORD *))(*(_QWORD *)*a5 + 80LL))(*a5, v48);
  v27 = v32;
  if ( v32 )
  {
    v32 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
  }
  v28 = v33;
  if ( v33 )
  {
    v33 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
  }
  v29 = *(_QWORD *)(a6 + 24);
  if ( v29 >= 0x10 )
    sub_180010884(*(char **)a6, v29 + 1);
  *(_QWORD *)(a6 + 16) = 0LL;
  *(_QWORD *)(a6 + 24) = 15LL;
  *(_BYTE *)a6 = 0;
  return a1;
}
