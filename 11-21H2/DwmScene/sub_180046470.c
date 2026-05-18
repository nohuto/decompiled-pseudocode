/*
 * XREFs of sub_180046470 @ 0x180046470
 * Callers:
 *     sub_180013140 @ 0x180013140 (sub_180013140.c)
 *     sub_180015E00 @ 0x180015E00 (sub_180015E00.c)
 *     sub_180019460 @ 0x180019460 (sub_180019460.c)
 *     sub_18001D4DC @ 0x18001D4DC (sub_18001D4DC.c)
 *     sub_180045304 @ 0x180045304 (sub_180045304.c)
 *     sub_18006FE60 @ 0x18006FE60 (sub_18006FE60.c)
 *     sub_180077414 @ 0x180077414 (sub_180077414.c)
 *     sub_18007DB98 @ 0x18007DB98 (sub_18007DB98.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800113D0 @ 0x1800113D0 (sub_1800113D0.c)
 *     sub_1800122B0 @ 0x1800122B0 (sub_1800122B0.c)
 *     sub_1800129F4 @ 0x1800129F4 (sub_1800129F4.c)
 *     sub_18001DC84 @ 0x18001DC84 (sub_18001DC84.c)
 *     sub_18001DD3C @ 0x18001DD3C (sub_18001DD3C.c)
 *     sub_18002C73C @ 0x18002C73C (sub_18002C73C.c)
 *     sub_1800306A0 @ 0x1800306A0 (sub_1800306A0.c)
 *     sub_18003F4DC @ 0x18003F4DC (sub_18003F4DC.c)
 *     sub_18004614C @ 0x18004614C (sub_18004614C.c)
 *     sub_1800465B0 @ 0x1800465B0 (sub_1800465B0.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_180046470(__int64 a1, __int64 a2, char **a3)
{
  __int64 *v6; // rax
  unsigned __int64 v7; // rdx
  __int64 *v9; // rax
  void *v10; // rax
  __int64 v11; // rbx
  _QWORD *v12; // rax
  __int64 v13; // r8
  _QWORD v14[2]; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v15[4]; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v16[5]; // [rsp+68h] [rbp-98h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v18[4]; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE v19[32]; // [rsp+E8h] [rbp-18h] BYREF
  _BYTE v20[32]; // [rsp+108h] [rbp+8h] BYREF

  v16[4] = a3;
  sub_18002C73C(a1 + 16);
  v6 = sub_1800129F4(v15, (__int64)a3);
  sub_18004614C(a1, v14, (char *)v6);
  if ( sub_1800122B0(v14) )
  {
    v9 = sub_1800306A0(v18, a3);
    v10 = (void *)sub_18001DD3C((__int64)v19, (__int64)"Scene::GetRootNode() - layer ", v9);
    v11 = sub_18001DC84((__int64)v20, v10);
    v12 = sub_1800113D0(
            v16,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\scene.cpp");
    sub_18003F4DC(pExceptionObject, (__int64)v12, v13, v11, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  sub_1800465B0(v14[0], a2);
  sub_180010910((__int64)v14);
  v7 = (unsigned __int64)a3[3];
  if ( v7 >= 8 )
    sub_180010884(*a3, 2 * v7 + 2);
  a3[2] = 0LL;
  a3[3] = (char *)7;
  *(_WORD *)a3 = 0;
  return a2;
}
