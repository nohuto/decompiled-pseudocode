/*
 * XREFs of sub_1800D7480 @ 0x1800D7480
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_18000E72C @ 0x18000E72C (sub_18000E72C.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_180011C50 @ 0x180011C50 (sub_180011C50.c)
 *     sub_18001DB68 @ 0x18001DB68 (sub_18001DB68.c)
 *     sub_1800297B0 @ 0x1800297B0 (sub_1800297B0.c)
 *     sub_18003AF58 @ 0x18003AF58 (sub_18003AF58.c)
 *     sub_180047AFC @ 0x180047AFC (sub_180047AFC.c)
 *     sub_180050C40 @ 0x180050C40 (sub_180050C40.c)
 *     sub_1800C589C @ 0x1800C589C (sub_1800C589C.c)
 *     sub_1800C7750 @ 0x1800C7750 (sub_1800C7750.c)
 *     sub_1800D465C @ 0x1800D465C (sub_1800D465C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
char __fastcall sub_1800D7480(__int64 a1, __int64 *a2)
{
  _QWORD *v4; // rax
  __int64 v5; // r8
  __int64 v6; // rbx
  __int64 (__fastcall *v7)(__int64, __int64, __int64, _QWORD, __int64); // r15
  __int64 v8; // rax
  __int64 v9; // rdx
  int v10; // ebx
  const char *v11; // rbx
  __int64 v12; // r14
  void (__fastcall *v13)(__int64, void *, _QWORD, const char *); // r15
  unsigned int v14; // eax
  __int64 v15; // rax
  __int64 v17; // [rsp+30h] [rbp-59h] BYREF
  __int64 v18; // [rsp+38h] [rbp-51h] BYREF
  __int64 v19; // [rsp+40h] [rbp-49h]
  __int64 v20; // [rsp+58h] [rbp-31h] BYREF
  __int64 v21; // [rsp+60h] [rbp-29h]
  _QWORD pExceptionObject[7]; // [rsp+78h] [rbp-11h] BYREF

  if ( *(_BYTE *)(a1 + 96) )
  {
    sub_180010DD0(
      &v20,
      (__int64)"GeometryShaderD3D11::Load() -- this function can only be called once per shader instance");
    v4 = sub_180010DD0(
           &v18,
           (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\source\\geometryshaderd3d11.cpp");
    sub_18003AF58(pExceptionObject, (__int64)v4, v5, (__int64)&v20, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  if ( !sub_180050C40((__int64)a2) )
  {
    sub_180011C50(a1 + 72, &v18);
    sub_180047AFC(&v20, &v18);
    sub_1800C589C(v20, &v17);
    v6 = v17;
    v7 = *(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD, __int64))(*(_QWORD *)v17 + 104LL);
    sub_18000E72C((__int64 *)(a1 + 104));
    v8 = sub_1800D465C((__int64)a2);
    v9 = *a2;
    if ( *a2 == a2[1] )
      v9 = a2[3];
    v10 = v7(v6, v9, v8, 0LL, a1 + 104);
    sub_1800C7750(v20, v10);
    if ( v10 < 0 )
    {
      sub_18001DB68(&stru_1801C8588, 5, "ERROR: Failed to create Geometry shader.\n");
    }
    else
    {
      *(_BYTE *)(a1 + 96) = 1;
      v11 = (const char *)(a1 + 8);
      if ( *(_QWORD *)(a1 + 32) >= 0x10uLL )
        v11 = *(const char **)v11;
      v12 = *(_QWORD *)(a1 + 104);
      if ( v12 )
      {
        v13 = *(void (__fastcall **)(__int64, void *, _QWORD, const char *))(*(_QWORD *)v12 + 40LL);
        if ( v11 )
          v14 = strnlen(v11, 0x7FFFFFFFuLL);
        else
          v14 = 0;
        v13(v12, &unk_180105FA0, v14, v11);
      }
      v15 = sub_1800D465C((__int64)a2);
      sub_1800297B0(a1, v15, 8);
    }
    sub_18000E72C(&v17);
    if ( v21 )
      sub_180010530(v21);
    if ( v19 )
      sub_180010530(v19);
  }
  return *(_BYTE *)(a1 + 96);
}
