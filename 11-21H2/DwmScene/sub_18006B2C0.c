/*
 * XREFs of sub_18006B2C0 @ 0x18006B2C0
 * Callers:
 *     sub_18006E9E4 @ 0x18006E9E4 (sub_18006E9E4.c)
 *     sub_18006FE60 @ 0x18006FE60 (sub_18006FE60.c)
 *     sub_1800706E0 @ 0x1800706E0 (sub_1800706E0.c)
 *     sub_180070790 @ 0x180070790 (sub_180070790.c)
 *     sub_1800716B0 @ 0x1800716B0 (sub_1800716B0.c)
 *     sub_180071988 @ 0x180071988 (sub_180071988.c)
 *     sub_180071A08 @ 0x180071A08 (sub_180071A08.c)
 *     sub_180075490 @ 0x180075490 (sub_180075490.c)
 *     sub_180076154 @ 0x180076154 (sub_180076154.c)
 *     sub_180077414 @ 0x180077414 (sub_180077414.c)
 *     sub_180078514 @ 0x180078514 (sub_180078514.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_1800113D0 @ 0x1800113D0 (sub_1800113D0.c)
 *     sub_18001FC4C @ 0x18001FC4C (sub_18001FC4C.c)
 *     sub_18002C7C4 @ 0x18002C7C4 (sub_18002C7C4.c)
 *     sub_1800312A0 @ 0x1800312A0 (sub_1800312A0.c)
 */

__int64 __fastcall sub_18006B2C0(__int64 a1)
{
  __int64 *v1; // rdi
  __int64 v2; // rbx
  void *v4; // [rsp+20h] [rbp-78h] BYREF
  _QWORD v5[2]; // [rsp+28h] [rbp-70h] BYREF
  __int64 v6; // [rsp+38h] [rbp-60h]
  _QWORD pExceptionObject[7]; // [rsp+48h] [rbp-50h] BYREF

  v1 = (__int64 *)(a1 + 200);
  sub_18002C7C4(a1 + 16);
  v4 = &Spectre::Engine::ViewerEngine::ViewerSceneData `RTTI Type Descriptor';
  sub_1800312A0(v1, (__int64)v5, &v4);
  v2 = v6;
  if ( *(_BYTE *)(v6 + 25) || (int)_std_type_info_compare(&qword_1801EB928, *(_QWORD *)(v6 + 32) + 8LL) < 0 )
    v2 = *v1;
  if ( v2 == *v1 )
  {
    sub_1800113D0(
      v5,
      "Scene::GetCustomData() -- could not find custom data of this type -- AddCustomData<T>() must be called before GetCustomData<T>()");
    sub_18001FC4C(pExceptionObject, (const char *)v5);
    throw (Spectre::Utils::SpectreInvalidArgException *)pExceptionObject;
  }
  return *(_QWORD *)(v2 + 40);
}
