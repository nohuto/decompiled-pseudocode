/*
 * XREFs of sub_180045044 @ 0x180045044
 * Callers:
 *     sub_180045178 @ 0x180045178 (sub_180045178.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800113D0 @ 0x1800113D0 (sub_1800113D0.c)
 *     sub_1800122B0 @ 0x1800122B0 (sub_1800122B0.c)
 *     sub_18003F4DC @ 0x18003F4DC (sub_18003F4DC.c)
 *     sub_1800453E0 @ 0x1800453E0 (sub_1800453E0.c)
 *     sub_180045E9C @ 0x180045E9C (sub_180045E9C.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180045044(__int64 a1, __int64 a2, int a3, __int64 a4, _QWORD *a5)
{
  __int64 v8; // rcx
  _QWORD *v10; // rax
  __int64 v11; // r8
  __int128 v12; // [rsp+30h] [rbp-91h] BYREF
  __int128 v13; // [rsp+40h] [rbp-81h] BYREF
  __int128 v14; // [rsp+50h] [rbp-71h] BYREF
  _QWORD *v15; // [rsp+60h] [rbp-61h]
  _QWORD v16[4]; // [rsp+68h] [rbp-59h] BYREF
  _QWORD v17[4]; // [rsp+88h] [rbp-39h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+A8h] [rbp-19h] BYREF

  v15 = a5;
  v13 = 0LL;
  v8 = a5[1];
  if ( v8 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
    v8 = a5[1];
  }
  *(_QWORD *)&v13 = *a5;
  *((_QWORD *)&v13 + 1) = v8;
  sub_180045E9C(a1, &v14, &v13);
  if ( sub_1800122B0(&v14) )
  {
    sub_1800113D0(v17, "Scene::AddNode() - Parent node could not be found.");
    v10 = sub_1800113D0(
            v16,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\scene.cpp");
    sub_18003F4DC(pExceptionObject, (__int64)v10, v11, (__int64)v17, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v12 = 0LL;
  if ( *((_QWORD *)&v14 + 1) )
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v14 + 1) + 8LL));
  v12 = v14;
  sub_1800453E0(a1, a2, a3, (unsigned int)&v12, (__int64)a5);
  sub_180010910((__int64)&v14);
  sub_180010910((__int64)a5);
  return a2;
}
