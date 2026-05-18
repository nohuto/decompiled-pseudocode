/*
 * XREFs of sub_1800D4730 @ 0x1800D4730
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_18000E72C @ 0x18000E72C (sub_18000E72C.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 *     sub_180011C50 @ 0x180011C50 (sub_180011C50.c)
 *     sub_18002963C @ 0x18002963C (sub_18002963C.c)
 *     sub_1800297B0 @ 0x1800297B0 (sub_1800297B0.c)
 *     sub_18003AF58 @ 0x18003AF58 (sub_18003AF58.c)
 *     sub_180047AFC @ 0x180047AFC (sub_180047AFC.c)
 *     sub_180050C40 @ 0x180050C40 (sub_180050C40.c)
 *     sub_1800C589C @ 0x1800C589C (sub_1800C589C.c)
 *     sub_1800C7750 @ 0x1800C7750 (sub_1800C7750.c)
 *     sub_1800D465C @ 0x1800D465C (sub_1800D465C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
char __fastcall sub_1800D4730(__int64 a1, __int64 *a2)
{
  _QWORD *v4; // rax
  __int64 v5; // r8
  __int64 v6; // rbx
  __int64 (__fastcall *v7)(__int64, __int64, __int64, _QWORD, __int64); // r15
  __int64 v8; // rax
  __int64 v9; // rdx
  int v10; // ebx
  const char *v11; // rax
  const char *v12; // rbx
  __int64 v13; // r14
  void (__fastcall *v14)(__int64, void *, _QWORD, const char *); // r15
  unsigned int v15; // eax
  __int64 v16; // rax
  __int64 v18; // [rsp+30h] [rbp-59h] BYREF
  __int64 v19; // [rsp+38h] [rbp-51h] BYREF
  __int64 v20; // [rsp+40h] [rbp-49h]
  __int64 v21; // [rsp+58h] [rbp-31h] BYREF
  __int64 v22; // [rsp+60h] [rbp-29h]
  _QWORD pExceptionObject[7]; // [rsp+78h] [rbp-11h] BYREF

  if ( *(_BYTE *)(a1 + 96) )
  {
    sub_180010DD0(
      &v21,
      (__int64)"VertexShaderD3D11::Load() -- this function can only be called once per shader instance");
    v4 = sub_180010DD0(
           &v19,
           (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\source\\vertexshaderd3d11.cpp");
    sub_18003AF58(pExceptionObject, (__int64)v4, v5, (__int64)&v21, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  if ( !sub_180050C40((__int64)a2) )
  {
    sub_180011C50(a1 + 72, &v19);
    sub_180047AFC(&v21, &v19);
    sub_1800C589C(v21, &v18);
    v6 = v18;
    v7 = *(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD, __int64))(*(_QWORD *)v18 + 96LL);
    sub_18000E72C((__int64 *)(a1 + 104));
    v8 = sub_1800D465C((__int64)a2);
    v9 = *a2;
    if ( *a2 == a2[1] )
      v9 = a2[3];
    v10 = v7(v6, v9, v8, 0LL, a1 + 104);
    sub_1800C7750(v21, v10);
    if ( v10 >= 0 )
    {
      *(_BYTE *)(a1 + 96) = 1;
      v11 = (const char *)sub_18002963C(a1, pExceptionObject);
      v12 = v11;
      if ( *((_QWORD *)v11 + 3) >= 0x10uLL )
        v12 = *(const char **)v11;
      v13 = *(_QWORD *)(a1 + 104);
      if ( v13 )
      {
        v14 = *(void (__fastcall **)(__int64, void *, _QWORD, const char *))(*(_QWORD *)v13 + 40LL);
        if ( v12 )
          v15 = strnlen(v12, 0x7FFFFFFFuLL);
        else
          v15 = 0;
        v14(v13, &unk_180105FA0, v15, v12);
      }
      sub_180011B24((__int64)pExceptionObject);
      v16 = sub_1800D465C((__int64)a2);
      sub_1800297B0(a1, v16, 8);
    }
    sub_18000E72C(&v18);
    if ( v22 )
      sub_180010530(v22);
    if ( v20 )
      sub_180010530(v20);
  }
  return *(_BYTE *)(a1 + 96);
}
