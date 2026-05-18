/*
 * XREFs of sub_1800680DC @ 0x1800680DC
 * Callers:
 *     sub_180089750 @ 0x180089750 (sub_180089750.c)
 *     sub_18008AF50 @ 0x18008AF50 (sub_18008AF50.c)
 *     sub_18008C870 @ 0x18008C870 (sub_18008C870.c)
 *     sub_18008D920 @ 0x18008D920 (sub_18008D920.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_1800113D0 @ 0x1800113D0 (sub_1800113D0.c)
 *     sub_18003F4DC @ 0x18003F4DC (sub_18003F4DC.c)
 *     sub_180054AD8 @ 0x180054AD8 (sub_180054AD8.c)
 *     sub_180055760 @ 0x180055760 (sub_180055760.c)
 *     sub_180055F60 @ 0x180055F60 (sub_180055F60.c)
 *     sub_180056C78 @ 0x180056C78 (sub_180056C78.c)
 *     sub_180067498 @ 0x180067498 (sub_180067498.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800680DC(__int64 a1, __int64 *a2)
{
  unsigned int v4; // esi
  __int64 v5; // rdi
  __int64 *v6; // rax
  _QWORD *v8; // rax
  __int64 v9; // r8
  __int64 v10[2]; // [rsp+30h] [rbp-A8h] BYREF
  _QWORD v11[4]; // [rsp+40h] [rbp-98h] BYREF
  _QWORD v12[4]; // [rsp+60h] [rbp-78h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+80h] [rbp-58h] BYREF

  if ( *(_DWORD *)(a1 + 432) )
  {
    sub_1800113D0(v12, "ShaderFamily::AddOption() -- Cannot add option after the shader family has ended declaration");
    v8 = sub_1800113D0(
           v11,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shaderfamily.cpp");
    sub_18003F4DC(pExceptionObject, (__int64)v8, v9, (__int64)v12, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v4 = sub_180055F60(*(_QWORD *)(a1 + 440), a2);
  sub_180054AD8((__int64 *)(a1 + 48), (__int64)v10, a2);
  v5 = *(_QWORD *)(a1 + 440);
  v6 = sub_180067498(v10, (_QWORD *)(a1 + 48));
  *(_QWORD *)(a1 + 64) = sub_180056C78(v5, v6);
  *(_DWORD *)sub_180055760((__int64 *)(a1 + 80), a2) = v4;
  return v4;
}
