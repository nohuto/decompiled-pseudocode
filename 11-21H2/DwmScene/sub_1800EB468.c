/*
 * XREFs of sub_1800EB468 @ 0x1800EB468
 * Callers:
 *     sub_1800EBE50 @ 0x1800EBE50 (sub_1800EBE50.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_1800113D0 @ 0x1800113D0 (sub_1800113D0.c)
 *     sub_18001FB60 @ 0x18001FB60 (sub_18001FB60.c)
 *     sub_180079BE8 @ 0x180079BE8 (sub_180079BE8.c)
 *     sub_1800DA968 @ 0x1800DA968 (sub_1800DA968.c)
 *     sub_1800DD668 @ 0x1800DD668 (sub_1800DD668.c)
 *     sub_1800EB5EC @ 0x1800EB5EC (sub_1800EB5EC.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_1800EB468(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5)
{
  __int64 v9; // rbx
  __int64 (__fastcall *v10)(__int64, __int64, _QWORD, __int64, __int64, __int64 *); // r11
  __int64 v11; // rax
  __int64 v12; // rdx
  int v13; // edi
  __int64 v14; // rcx
  _QWORD *v16; // rax
  __int64 v17; // r8
  __int64 v18; // [rsp+40h] [rbp-81h] BYREF
  __int64 v19; // [rsp+48h] [rbp-79h] BYREF
  __int64 v20; // [rsp+50h] [rbp-71h] BYREF
  _QWORD v21[4]; // [rsp+58h] [rbp-69h] BYREF
  _QWORD v22[4]; // [rsp+78h] [rbp-49h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+98h] [rbp-29h] BYREF

  sub_1800DA968(a2, &v20);
  v18 = 0LL;
  v9 = v20;
  v10 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, __int64, __int64 *))(*(_QWORD *)v20 + 88LL);
  if ( *(_QWORD *)a5 == *(_QWORD *)(a5 + 8) )
  {
    v12 = (unsigned int)(*(_DWORD *)(a5 + 32) - *(_DWORD *)(a5 + 24));
    v11 = *(_QWORD *)(a5 + 24);
  }
  else
  {
    v11 = sub_18001FB60(*(_QWORD *)a5);
  }
  v13 = v10(v9, a3, a4, v11, v12, &v18);
  sub_1800DD668(a2, v13);
  if ( v13 < 0 )
  {
    sub_1800113D0(v22, "VertexLayoutD3D11::Create() -- Direct3D could not create the input layout");
    v16 = sub_1800113D0(
            v21,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\source\\vertexlayoutd3d11.cpp");
    sub_180079BE8(pExceptionObject, (__int64)v16, v17, v13, (const char *)v22, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  v19 = v18;
  v18 = 0LL;
  sub_1800EB5EC(a1, &v19);
  v14 = v18;
  if ( v18 )
  {
    v18 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
}
