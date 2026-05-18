/*
 * XREFs of sub_180061DF8 @ 0x180061DF8
 * Callers:
 *     sub_180064EF0 @ 0x180064EF0 (sub_180064EF0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_18001E424 @ 0x18001E424 (sub_18001E424.c)
 *     sub_18002F9F0 @ 0x18002F9F0 (sub_18002F9F0.c)
 *     sub_1800386C4 @ 0x1800386C4 (sub_1800386C4.c)
 *     sub_180063804 @ 0x180063804 (sub_180063804.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180061DF8(__int64 a1)
{
  __int64 *v1; // rbx
  __int64 v2; // rdx
  __int64 v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // rcx
  void *v7; // [rsp+20h] [rbp-29h] BYREF
  __int64 v8; // [rsp+28h] [rbp-21h] BYREF
  __int64 v9; // [rsp+30h] [rbp-19h]
  _QWORD v10[4]; // [rsp+38h] [rbp-11h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+58h] [rbp+Fh] BYREF

  v7 = &Spectre::Engine::ViewerEngine::ViewerSceneData `RTTI Type Descriptor';
  v1 = (__int64 *)(a1 + 200);
  if ( sub_1800386C4((__int64 *)(a1 + 200), &v7) )
  {
    sub_180010DD0(
      v10,
      (__int64)"Scene::AddCustomData() -- cannot add custom data of this type because an instance of the same type already exists");
    sub_18001E424(pExceptionObject, (const char *)v10);
    throw (Spectre::Utils::SpectreInvalidArgException *)pExceptionObject;
  }
  sub_180063804(&v8);
  v2 = *(_QWORD *)sub_18002F9F0(v1, (__int64)v10, &v7);
  v3 = v9;
  if ( v9 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
    v3 = v9;
  }
  v4 = v8;
  *(_QWORD *)(v2 + 40) = v8;
  v5 = *(_QWORD *)(v2 + 48);
  *(_QWORD *)(v2 + 48) = v3;
  if ( v5 )
    sub_180010530(v5);
  if ( v3 )
    sub_180010530(v3);
  return v4;
}
