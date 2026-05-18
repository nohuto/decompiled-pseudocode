/*
 * XREFs of sub_18008ACE0 @ 0x18008ACE0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 *     sub_180011DD0 @ 0x180011DD0 (sub_180011DD0.c)
 *     sub_1800124F8 @ 0x1800124F8 (sub_1800124F8.c)
 *     sub_180017648 @ 0x180017648 (sub_180017648.c)
 *     sub_180026650 @ 0x180026650 (sub_180026650.c)
 *     sub_180029550 @ 0x180029550 (sub_180029550.c)
 *     sub_18003890C @ 0x18003890C (sub_18003890C.c)
 *     sub_180054270 @ 0x180054270 (sub_180054270.c)
 *     sub_18006EDE8 @ 0x18006EDE8 (sub_18006EDE8.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
char __fastcall sub_18008ACE0(__int64 a1, __int64 *a2)
{
  char result; // al
  int v5; // ebx
  __int64 v6; // r8
  __int64 v7; // rax
  _QWORD *v8; // rax
  __int64 v9; // r8
  _QWORD *v10; // [rsp+30h] [rbp-79h] BYREF
  __int64 v11; // [rsp+38h] [rbp-71h] BYREF
  __int64 v12; // [rsp+40h] [rbp-69h]
  __int64 v13; // [rsp+58h] [rbp-51h] BYREF
  __int64 v14; // [rsp+60h] [rbp-49h]
  _QWORD v15[4]; // [rsp+68h] [rbp-41h] BYREF
  _QWORD v16[4]; // [rsp+88h] [rbp-21h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+A8h] [rbp-1h] BYREF

  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*a2 + 32LL))(*a2);
  if ( !result )
  {
    sub_180029550(a1, a2);
    sub_18003890C(a1 + 120, &v13);
    if ( !v13 )
    {
      sub_180010DD0(
        v16,
        (__int64)"Shader::AttachDevice() -- shader program no longer available for creating new device shader");
      v10 = sub_180010DD0(
              v15,
              (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shader.cpp");
      v8 = sub_180017648(&v11, (__int64)v10);
      sub_18006EDE8(pExceptionObject, (__int64)v8, v9, -2147418113, (const char *)v16, 0);
      pExceptionObject[0] = &Spectre::Engine::EngineUnexpectedException::`vftable';
      sub_180011B24((__int64)v10);
      throw (Spectre::Engine::EngineUnexpectedException *)pExceptionObject;
    }
    v5 = sub_180026650(*a2);
    (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64 *))(*(_QWORD *)a1 + 48LL))(a1, &v11, v6, a2);
    LODWORD(v10) = v5;
    v7 = sub_180054270((__int64 *)(a1 + 136), (__int64)v15, (unsigned int *)&v10);
    sub_1800124F8((__int64 *)(*(_QWORD *)v7 + 40LL), &v11);
    result = sub_180011DD0(&v11);
    if ( result )
      *(_BYTE *)(a1 + 152) = 0;
    if ( v12 )
      result = sub_180010530(v12);
    if ( v14 )
      return sub_180010530(v14);
  }
  return result;
}
