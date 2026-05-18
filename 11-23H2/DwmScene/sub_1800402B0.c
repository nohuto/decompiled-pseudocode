/*
 * XREFs of sub_1800402B0 @ 0x1800402B0
 * Callers:
 *     sub_1800403BC @ 0x1800403BC (sub_1800403BC.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_180011DD0 @ 0x180011DD0 (sub_180011DD0.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_18003AF58 @ 0x18003AF58 (sub_18003AF58.c)
 *     sub_1800405C8 @ 0x1800405C8 (sub_1800405C8.c)
 *     sub_180040E74 @ 0x180040E74 (sub_180040E74.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800402B0(__int64 a1, __int64 a2, int a3, __int64 a4, _QWORD *a5)
{
  _QWORD *v8; // rax
  _QWORD *v9; // rax
  __int64 v10; // r8
  unsigned int v11; // eax
  __int64 v12; // rcx
  _QWORD v14[4]; // [rsp+30h] [rbp-91h] BYREF
  __int64 v15; // [rsp+50h] [rbp-71h] BYREF
  __int64 v16; // [rsp+58h] [rbp-69h]
  __int64 v17; // [rsp+60h] [rbp-61h] BYREF
  _QWORD v18[4]; // [rsp+70h] [rbp-51h] BYREF
  _QWORD v19[4]; // [rsp+90h] [rbp-31h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+B0h] [rbp-11h] BYREF

  v14[3] = a5;
  v8 = sub_18001246C(&v17, a5);
  sub_180040E74(a1, &v15, v8);
  if ( sub_180011DD0(&v15) )
  {
    sub_180010DD0(v19, (__int64)"Scene::AddNode() - Parent node could not be found.");
    v9 = sub_180010DD0(
           v18,
           (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\scene.cpp");
    sub_18003AF58(pExceptionObject, (__int64)v9, v10, (__int64)v19, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v11 = (unsigned int)sub_18001246C(v14, &v15);
  sub_1800405C8(a1, a2, a3, v11, (__int64)a5);
  if ( v16 )
    sub_180010530(v16);
  v12 = a5[1];
  if ( v12 )
    sub_180010530(v12);
  return a2;
}
