/*
 * XREFs of sub_1800419A0 @ 0x1800419A0
 * Callers:
 *     sub_18003D504 @ 0x18003D504 (sub_18003D504.c)
 *     sub_18004093C @ 0x18004093C (sub_18004093C.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010574 @ 0x180010574 (sub_180010574.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_180011DD0 @ 0x180011DD0 (sub_180011DD0.c)
 *     sub_180015604 @ 0x180015604 (sub_180015604.c)
 *     sub_18003AF58 @ 0x18003AF58 (sub_18003AF58.c)
 *     sub_18003F750 @ 0x18003F750 (sub_18003F750.c)
 *     sub_18003F970 @ 0x18003F970 (sub_18003F970.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_1800419A0(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rdx
  _QWORD *v5; // rax
  __int64 v6; // r8
  _QWORD *v7; // rax
  __int64 v8; // r8
  __int64 result; // rax
  __int64 v10; // rcx
  _QWORD v11[2]; // [rsp+30h] [rbp-69h] BYREF
  volatile signed __int32 *v12; // [rsp+40h] [rbp-59h]
  _QWORD *v13; // [rsp+50h] [rbp-49h]
  __int64 v14; // [rsp+58h] [rbp-41h] BYREF
  volatile signed __int32 *v15; // [rsp+60h] [rbp-39h]
  _QWORD v16[4]; // [rsp+78h] [rbp-21h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+98h] [rbp-1h] BYREF

  v13 = a2;
  if ( sub_180011DD0(a2) )
  {
    sub_180010DD0(&v14, (__int64)"Scene::RegisterNode() - node must not be null");
    v5 = sub_180010DD0(
           v11,
           (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\scene.cpp");
    sub_18003AF58(pExceptionObject, (__int64)v5, v6, (__int64)&v14, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  if ( *(_QWORD *)(*(_QWORD *)v4 + 368LL) )
  {
    v16[0] = *(_QWORD *)(*(_QWORD *)v4 + 368LL);
    if ( *sub_18003F970((_QWORD *)(a1 + 120), &v14, (__int64)v16) != *(_QWORD *)(a1 + 128) )
    {
      sub_180010DD0(v16, (__int64)"Scene::RegisterNode() - node id already exists");
      v7 = sub_180010DD0(
             v11,
             (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\scene.cpp");
      sub_18003AF58(pExceptionObject, (__int64)v7, v8, (__int64)v16, 0);
      throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
    }
  }
  sub_180015604(&v14, a2);
  v11[0] = *(_QWORD *)(*a2 + 368LL);
  v11[1] = v14;
  v12 = v15;
  v14 = 0LL;
  v15 = 0LL;
  result = sub_18003F750((float *)(a1 + 120), (__int64)v16, v11);
  if ( v12 )
    result = sub_180010574(v12);
  v10 = a2[1];
  if ( v10 )
    return sub_180010530(v10);
  return result;
}
