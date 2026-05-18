/*
 * XREFs of sub_18006A444 @ 0x18006A444
 * Callers:
 *     sub_18006D170 @ 0x18006D170 (sub_18006D170.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800113D0 @ 0x1800113D0 (sub_1800113D0.c)
 *     sub_18001D684 @ 0x18001D684 (sub_18001D684.c)
 *     sub_18001FC4C @ 0x18001FC4C (sub_18001FC4C.c)
 *     sub_1800312A0 @ 0x1800312A0 (sub_1800312A0.c)
 *     sub_180033C90 @ 0x180033C90 (sub_180033C90.c)
 *     sub_18006B5A8 @ 0x18006B5A8 (sub_18006B5A8.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18006A444(__int64 a1)
{
  __int64 *v1; // r14
  __int64 v2; // rdx
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v5; // rdi
  _QWORD *v6; // rax
  char *v8; // [rsp+20h] [rbp-39h] BYREF
  _QWORD v9[2]; // [rsp+28h] [rbp-31h] BYREF
  _QWORD v10[4]; // [rsp+38h] [rbp-21h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+58h] [rbp-1h] BYREF

  v8 = (char *)&Spectre::Engine::ViewerEngine::ViewerSceneData `RTTI Type Descriptor';
  v1 = (__int64 *)(a1 + 200);
  v2 = *(_QWORD *)(sub_1800312A0((__int64 *)(a1 + 200), (__int64)v10, &v8) + 16);
  if ( !*(_BYTE *)(v2 + 25) && (int)_std_type_info_compare(v8 + 8, *(_QWORD *)(v2 + 32) + 8LL) >= 0 )
  {
    sub_1800113D0(
      v10,
      "Scene::AddCustomData() -- cannot add custom data of this type because an instance of the same type already exists");
    sub_18001FC4C(pExceptionObject, (const char *)v10);
    throw (Spectre::Utils::SpectreInvalidArgException *)pExceptionObject;
  }
  v3 = sub_18001D684();
  v4 = v3;
  v9[0] = v3;
  if ( v3 )
  {
    *(_OWORD *)v3 = 0LL;
    *(_DWORD *)(v3 + 8) = 1;
    *(_DWORD *)(v3 + 12) = 1;
    *(_QWORD *)v3 = &std::_Ref_count_obj2<Spectre::Engine::ViewerEngine::ViewerSceneData>::`vftable';
    sub_18006B5A8(v3 + 16);
  }
  else
  {
    v4 = 0LL;
  }
  v5 = v4 + 16;
  v9[0] = v4 + 16;
  v9[1] = v4;
  v6 = (_QWORD *)sub_180033C90(v1, (__int64 *)&v8);
  if ( v4 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
    v5 = v9[0];
  }
  v10[0] = *v6;
  *v6 = v5;
  v10[1] = v6[1];
  v6[1] = v4;
  sub_180010910((__int64)v10);
  sub_180010910((__int64)v9);
  return v4 + 16;
}
