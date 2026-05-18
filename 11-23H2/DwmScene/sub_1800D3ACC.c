/*
 * XREFs of sub_1800D3ACC @ 0x1800D3ACC
 * Callers:
 *     sub_1800D43D0 @ 0x1800D43D0 (sub_1800D43D0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_18000E72C @ 0x18000E72C (sub_18000E72C.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_18006EDE8 @ 0x18006EDE8 (sub_18006EDE8.c)
 *     sub_1800C589C @ 0x1800C589C (sub_1800C589C.c)
 *     sub_1800C7750 @ 0x1800C7750 (sub_1800C7750.c)
 *     sub_1800D3C28 @ 0x1800D3C28 (sub_1800D3C28.c)
 *     sub_1800D465C @ 0x1800D465C (sub_1800D465C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800D3ACC(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5)
{
  __int64 v9; // rbx
  __int64 (__fastcall *v10)(__int64, __int64, _QWORD); // r13
  int v11; // ebx
  _QWORD *v12; // rax
  __int64 v13; // r8
  __int64 v15; // [rsp+40h] [rbp-91h] BYREF
  __int64 v16; // [rsp+48h] [rbp-89h] BYREF
  __int64 v17; // [rsp+50h] [rbp-81h] BYREF
  _QWORD v18[4]; // [rsp+58h] [rbp-79h] BYREF
  _QWORD v19[4]; // [rsp+78h] [rbp-59h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+98h] [rbp-39h] BYREF

  sub_1800C589C(a2, &v17);
  v15 = 0LL;
  v9 = v17;
  v10 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v17 + 88LL);
  sub_18000E72C(&v15);
  sub_1800D465C(a5);
  v11 = v10(v9, a3, a4);
  sub_1800C7750(a2, v11);
  if ( v11 < 0 )
  {
    sub_180010DD0(v19, (__int64)"VertexLayoutD3D11::Create() -- Direct3D could not create the input layout");
    v12 = sub_180010DD0(
            v18,
            (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\source\\vertexlayoutd3d11.cpp");
    sub_18006EDE8(pExceptionObject, (__int64)v12, v13, v11, (const char *)v19, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  v16 = v15;
  v15 = 0LL;
  sub_1800D3C28(a1, &v16);
  sub_18000E72C(&v15);
  return sub_18000E72C(&v17);
}
