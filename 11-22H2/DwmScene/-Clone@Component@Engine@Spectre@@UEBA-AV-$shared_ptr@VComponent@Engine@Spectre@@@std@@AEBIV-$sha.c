/*
 * XREFs of ?Clone@Component@Engine@Spectre@@UEBA?AV?$shared_ptr@VComponent@Engine@Spectre@@@std@@AEBIV?$shared_ptr@VSceneNode@Engine@Spectre@@@5@@Z @ 0x180081190
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     __std_type_info_name @ 0x18000BEFE (__std_type_info_name.c)
 *     _CxxThrowException_0 @ 0x18000CA79 (_CxxThrowException_0.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ??$?HDU?$char_traits@D@std@@V?$allocator@D@1@@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@$$QEAV10@QEBD@Z @ 0x18001C59C (--$-HDU-$char_traits@D@std@@V-$allocator@D@1@@std@@YA-AV-$basic_string@DU-$char_tra_ea_18001C59C.c)
 *     ??$?HDU?$char_traits@D@std@@V?$allocator@D@1@@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@QEBDAEBV10@@Z @ 0x18001C6CC (--$-HDU-$char_traits@D@std@@V-$allocator@D@1@@std@@YA-AV-$basic_string@DU-$char_tra_ea_18001C6CC.c)
 *     ??0EngineNotImplException@Engine@Spectre@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBV34@_N@Z @ 0x18004AC7C (--0EngineNotImplException@Engine@Spectre@@QEAA@V-$basic_string@DU-$char_traits@D@std@@V-$allocat.c)
 */

// Hidden C++ exception states: #wind=5
_QWORD *__fastcall Spectre::Engine::Component::Clone(__int64 a1, _QWORD *a2, _DWORD *a3, __int64 a4)
{
  std::_Ref_count_base *v6; // rcx
  __int64 v8; // rbx
  char *v9; // rax
  _QWORD *v10; // rax
  _QWORD *v11; // rax
  _QWORD *v12; // rbx
  _QWORD *v13; // rax
  __int64 v14; // r8
  _QWORD v15[4]; // [rsp+48h] [rbp-F0h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+68h] [rbp-D0h] BYREF
  char v17[32]; // [rsp+A0h] [rbp-98h] BYREF
  _QWORD v18[4]; // [rsp+C0h] [rbp-78h] BYREF
  _QWORD v19[4]; // [rsp+E0h] [rbp-58h] BYREF
  _QWORD v20[4]; // [rsp+100h] [rbp-38h] BYREF

  if ( (*a3 & 0x10000) == 0 )
  {
    __RTtypeid(a1);
    v8 = _std_type_info_name();
    v9 = std::operator+<char>(v17, "Component::Clone() -- component '", (_QWORD *)(a1 + 24));
    v10 = std::operator+<char>(v18, v9, (__int64)"' of type ");
    v11 = std::operator+<char>(v19, v10, v8);
    v12 = std::operator+<char>(v20, v11, (__int64)" does not support cloning.");
    v13 = std::string::string(
            v15,
            (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engin"
                     "e\\component.cpp");
    Spectre::Engine::EngineNotImplException::EngineNotImplException(pExceptionObject, (__int64)v13, v14, (__int64)v12);
    throw (Spectre::Engine::EngineNotImplException *)pExceptionObject;
  }
  *a2 = 0LL;
  a2[1] = 0LL;
  v6 = *(std::_Ref_count_base **)(a4 + 8);
  if ( v6 )
    std::_Ref_count_base::_Decref(v6);
  return a2;
}
