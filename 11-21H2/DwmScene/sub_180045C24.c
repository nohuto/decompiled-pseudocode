/*
 * XREFs of sub_180045C24 @ 0x180045C24
 * Callers:
 *     sub_1800424DC @ 0x1800424DC (sub_1800424DC.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800113D0 @ 0x1800113D0 (sub_1800113D0.c)
 *     sub_1800122B0 @ 0x1800122B0 (sub_1800122B0.c)
 *     sub_18003F4DC @ 0x18003F4DC (sub_18003F4DC.c)
 *     sub_180048060 @ 0x180048060 (sub_180048060.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180045C24(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rdx
  _QWORD *v5; // rax
  __int64 v6; // r8
  _QWORD *v7; // [rsp+30h] [rbp-98h] BYREF
  _QWORD v8[4]; // [rsp+40h] [rbp-88h] BYREF
  _QWORD v9[4]; // [rsp+60h] [rbp-68h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+80h] [rbp-48h] BYREF

  v7 = a2;
  if ( sub_1800122B0(a2) )
  {
    sub_1800113D0(v9, "Scene::DeregisterNode() - node must not be null");
    v5 = sub_1800113D0(
           v8,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\scene.cpp");
    sub_18003F4DC(pExceptionObject, (__int64)v5, v6, (__int64)v9, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v7 = *(_QWORD **)(*a2 + 368LL);
  sub_180048060(v3 + 120, &v7);
  return sub_180010910((__int64)a2);
}
