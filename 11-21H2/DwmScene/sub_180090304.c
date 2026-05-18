/*
 * XREFs of sub_180090304 @ 0x180090304
 * Callers:
 *     sub_18004A774 @ 0x18004A774 (sub_18004A774.c)
 *     sub_18004B9DC @ 0x18004B9DC (sub_18004B9DC.c)
 *     sub_18004C088 @ 0x18004C088 (sub_18004C088.c)
 *     sub_18004C5C4 @ 0x18004C5C4 (sub_18004C5C4.c)
 *     sub_18004C658 @ 0x18004C658 (sub_18004C658.c)
 *     sub_180058180 @ 0x180058180 (sub_180058180.c)
 *     sub_180068E10 @ 0x180068E10 (sub_180068E10.c)
 *     sub_18008AF50 @ 0x18008AF50 (sub_18008AF50.c)
 *     sub_18008BE10 @ 0x18008BE10 (sub_18008BE10.c)
 *     sub_18008C410 @ 0x18008C410 (sub_18008C410.c)
 *     sub_18008CCE4 @ 0x18008CCE4 (sub_18008CCE4.c)
 *     sub_180092984 @ 0x180092984 (sub_180092984.c)
 *     sub_18010675B @ 0x18010675B (sub_18010675B.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800113D0 @ 0x1800113D0 (sub_1800113D0.c)
 *     sub_18003F4DC @ 0x18003F4DC (sub_18003F4DC.c)
 *     sub_180056B94 @ 0x180056B94 (sub_180056B94.c)
 *     sub_18009010C @ 0x18009010C (sub_18009010C.c)
 *     sub_180090928 @ 0x180090928 (sub_180090928.c)
 *     sub_1800909C8 @ 0x1800909C8 (sub_1800909C8.c)
 *     sub_180092DD8 @ 0x180092DD8 (sub_180092DD8.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180090304(__int64 a1)
{
  __int64 result; // rax
  _QWORD *v3; // rax
  __int64 v4; // rax
  _QWORD *v5; // rax
  __int64 v6; // r8
  _BYTE v7[16]; // [rsp+30h] [rbp-98h] BYREF
  _QWORD v8[4]; // [rsp+40h] [rbp-88h] BYREF
  _QWORD v9[4]; // [rsp+60h] [rbp-68h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+80h] [rbp-48h] BYREF

  if ( *(_DWORD *)(a1 + 1168) )
  {
    sub_1800113D0(v9, "ShaderPropertyLayout::EndDeclaration() -- this function must only be called once");
    v5 = sub_1800113D0(
           v8,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shaderp"
           "ropertylayout.cpp");
    sub_18003F4DC(pExceptionObject, (__int64)v5, v6, (__int64)v9, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  *(_BYTE *)(a1 + 1242) = *(_QWORD *)(a1 + 56) == *(_QWORD *)(a1 + 64);
  sub_180090928(a1, 16LL);
  sub_18009010C(a1);
  result = sub_180090928(a1, 0LL);
  *(_DWORD *)(a1 + 1168) = 1;
  if ( *(_BYTE *)(a1 + 1241) )
  {
    v3 = sub_180056B94(*(_QWORD *)(a1 + 1152), v8);
    v4 = sub_180092DD8(*v3, v7);
    sub_1800909C8(a1, v4);
    return sub_180010910((__int64)v8);
  }
  return result;
}
