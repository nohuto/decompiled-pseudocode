/*
 * XREFs of sub_1800628C8 @ 0x1800628C8
 * Callers:
 *     sub_180065CC0 @ 0x180065CC0 (sub_180065CC0.c)
 *     sub_180066720 @ 0x180066720 (sub_180066720.c)
 *     sub_180066D90 @ 0x180066D90 (sub_180066D90.c)
 *     sub_180066E20 @ 0x180066E20 (sub_180066E20.c)
 *     sub_180067B80 @ 0x180067B80 (sub_180067B80.c)
 *     sub_180067DC0 @ 0x180067DC0 (sub_180067DC0.c)
 *     sub_180067EB0 @ 0x180067EB0 (sub_180067EB0.c)
 *     sub_18006B29C @ 0x18006B29C (sub_18006B29C.c)
 *     sub_18006BEB0 @ 0x18006BEB0 (sub_18006BEB0.c)
 *     sub_18006D0BC @ 0x18006D0BC (sub_18006D0BC.c)
 *     sub_18006DE34 @ 0x18006DE34 (sub_18006DE34.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_18001E424 @ 0x18001E424 (sub_18001E424.c)
 *     sub_18002A404 @ 0x18002A404 (sub_18002A404.c)
 *     sub_18002EB98 @ 0x18002EB98 (sub_18002EB98.c)
 */

__int64 __fastcall sub_1800628C8(__int64 a1)
{
  __int64 v2; // rax
  void *v4; // [rsp+20h] [rbp-78h] BYREF
  _QWORD v5[4]; // [rsp+28h] [rbp-70h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+48h] [rbp-50h] BYREF

  sub_18002A404(a1 + 16);
  v4 = &Spectre::Engine::ViewerEngine::ViewerSceneData `RTTI Type Descriptor';
  v2 = sub_18002EB98(a1 + 200, (__int64)&v4);
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
