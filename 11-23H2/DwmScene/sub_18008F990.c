/*
 * XREFs of sub_18008F990 @ 0x18008F990
 * Callers:
 *     sub_18008FDC8 @ 0x18008FDC8 (sub_18008FDC8.c)
 *     sub_1800900BC @ 0x1800900BC (sub_1800900BC.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_180011020 @ 0x180011020 (sub_180011020.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_180013300 @ 0x180013300 (sub_180013300.c)
 *     sub_180016268 @ 0x180016268 (sub_180016268.c)
 *     sub_180026650 @ 0x180026650 (sub_180026650.c)
 *     sub_180029824 @ 0x180029824 (sub_180029824.c)
 *     sub_18003655C @ 0x18003655C (sub_18003655C.c)
 *     sub_18004ACFC @ 0x18004ACFC (sub_18004ACFC.c)
 *     sub_180055EA0 @ 0x180055EA0 (sub_180055EA0.c)
 *     sub_18008141C @ 0x18008141C (sub_18008141C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18008F990(__int64 a1)
{
  __int64 v2; // rax
  _QWORD *v3; // rbx
  __int64 v4; // rsi
  __int64 v5; // rcx
  __int64 v6; // rcx
  _QWORD *v8; // rax
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 *v11; // rax
  __int64 *v12; // rsi
  __int64 v13; // rbx
  void **v14; // rax
  __int64 v16; // [rsp+58h] [rbp-59h] BYREF
  __int64 v17; // [rsp+60h] [rbp-51h]
  __int64 v18[3]; // [rsp+70h] [rbp-41h] BYREF
  _QWORD v19[4]; // [rsp+88h] [rbp-29h] BYREF
  _QWORD v20[4]; // [rsp+A8h] [rbp-9h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+C8h] [rbp+17h] BYREF

  v2 = sub_18008141C(a1);
  sub_18003655C(v2, v18);
  v3 = (_QWORD *)v18[0];
  v4 = v18[1];
  while ( v3 != (_QWORD *)v4 )
  {
    sub_18001246C(&v16, v3);
    if ( (unsigned int)sub_180026650(v16)
      && !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 96LL))(v5, 1LL) )
    {
      v6 = *(_QWORD *)(a1 + 144);
      if ( !v6 || ((v6 - 1) & v6) != 0 )
      {
        sub_180010DD0(
          v20,
          (__int64)"ColorTransform::CreateResources() -- volume texture must be power of two below feature level 10.0");
        v8 = sub_180010DD0(
               v19,
               (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\en"
                        "gine\\colortransform.cpp");
        sub_18004ACFC(pExceptionObject, (__int64)v8, v9, (__int64)v20);
        throw (Spectre::Engine::EngineNotImplException *)pExceptionObject;
      }
    }
    if ( v17 )
      sub_180010530(v17);
    v3 += 2;
  }
  v10 = sub_18008141C(a1);
  v11 = sub_180016268(v10, &v16);
  v12 = (__int64 *)(a1 + 96);
  sub_180011020((_QWORD *)(a1 + 96), v11);
  if ( v17 )
    sub_180010530(v17);
  v13 = *v12;
  v14 = (void **)sub_180010DD0(v20, (__int64)"ColorTransform");
  sub_180029824(v13, v14);
  sub_180055EA0(
    *v12,
    *(_DWORD *)(a1 + 144),
    *(_DWORD *)(a1 + 144),
    *(_DWORD *)(a1 + 144),
    16,
    0,
    1,
    *(const void **)(a1 + 112),
    (*(_QWORD *)(a1 + 120) - *(_QWORD *)(a1 + 112)) & 0xFFFFFFFC,
    0LL);
  return sub_180013300((__int64)v18);
}
