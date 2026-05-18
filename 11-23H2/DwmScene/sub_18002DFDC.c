/*
 * XREFs of sub_18002DFDC @ 0x18002DFDC
 * Callers:
 *     sub_180034924 @ 0x180034924 (sub_180034924.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_18001E424 @ 0x18001E424 (sub_18001E424.c)
 *     sub_18002A404 @ 0x18002A404 (sub_18002A404.c)
 *     sub_18002EB98 @ 0x18002EB98 (sub_18002EB98.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18002DFDC(__int64 a1)
{
  __int64 v2; // rax
  void *v4; // [rsp+20h] [rbp-78h] BYREF
  _QWORD v5[4]; // [rsp+28h] [rbp-70h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+48h] [rbp-50h] BYREF

  sub_18002A404(a1 + 16);
  v4 = &Spectre::Engine::Engine::EngineSceneData `RTTI Type Descriptor';
  v2 = sub_18002EB98(a1 + 200, &v4);
  if ( v2 == *(_QWORD *)(a1 + 200) )
  {
    sub_180010DD0(
      v5,
      (__int64)"Scene::GetCustomData() -- could not find custom data of this type -- AddCustomData<T>() must be called be"
               "fore GetCustomData<T>()");
    sub_18001E424(pExceptionObject, (const char *)v5);
    throw (Spectre::Utils::SpectreInvalidArgException *)pExceptionObject;
  }
  return *(_QWORD *)(v2 + 40);
}
