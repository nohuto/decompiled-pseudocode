/*
 * XREFs of sub_18002C460 @ 0x18002C460
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010574 @ 0x180010574 (sub_180010574.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_180011C50 @ 0x180011C50 (sub_180011C50.c)
 *     sub_18006ED7C @ 0x18006ED7C (sub_18006ED7C.c)
 *     sub_1800727D0 @ 0x1800727D0 (sub_1800727D0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18002C460(_QWORD *a1)
{
  __int64 v2; // rax
  __int64 result; // rax
  unsigned int v4; // eax
  int v5; // r8d
  _BYTE v6[8]; // [rsp+30h] [rbp-A8h] BYREF
  volatile signed __int32 *v7; // [rsp+38h] [rbp-A0h]
  __int64 v8; // [rsp+40h] [rbp-98h] BYREF
  __int64 v9; // [rsp+48h] [rbp-90h]
  _QWORD v10[4]; // [rsp+50h] [rbp-88h] BYREF
  _QWORD v11[4]; // [rsp+70h] [rbp-68h] BYREF
  _BYTE pExceptionObject[56]; // [rsp+90h] [rbp-48h] BYREF

  v2 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(*a1 + 376LL))(a1, v6);
  sub_180011C50(v2, &v8);
  if ( v7 )
    sub_180010574(v7);
  if ( !v8 )
  {
    sub_180010DD0(v11, (__int64)"RenderDevice was removed");
    v4 = (unsigned int)sub_180010DD0(
                         v10,
                         (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\"
                                  "source\\engine\\renderoutput.cpp");
    sub_18006ED7C((unsigned int)pExceptionObject, v4, v5, (unsigned int)v11, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  result = sub_1800727D0(a1[26]);
  if ( v9 )
    return sub_180010530(v9);
  return result;
}
