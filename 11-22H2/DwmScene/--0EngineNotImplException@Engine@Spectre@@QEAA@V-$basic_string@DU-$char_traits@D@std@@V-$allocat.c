/*
 * XREFs of ??0EngineNotImplException@Engine@Spectre@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBV34@_N@Z @ 0x18004AC7C
 * Callers:
 *     ?CloneInternal@MeshInstance@Engine@Spectre@@EEBAXV?$shared_ptr@VComponent@Engine@Spectre@@@std@@AEBI@Z @ 0x18004B500 (-CloneInternal@MeshInstance@Engine@Spectre@@EEBAXV-$shared_ptr@VComponent@Engine@Spectre@@@std@@.c)
 *     ?Clone@Component@Engine@Spectre@@UEBA?AV?$shared_ptr@VComponent@Engine@Spectre@@@std@@AEBIV?$shared_ptr@VSceneNode@Engine@Spectre@@@5@@Z @ 0x180081190 (-Clone@Component@Engine@Spectre@@UEBA-AV-$shared_ptr@VComponent@Engine@Spectre@@@std@@AEBIV-$sha.c)
 *     ?AttachDevice@ColorTransform@Engine@Spectre@@UEAAXV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x18008F650 (-AttachDevice@ColorTransform@Engine@Spectre@@UEAAXV-$shared_ptr@VRenderDevice@Engine@Spectre@@@s.c)
 *     ?CreateTexture@ColorTransform@Engine@Spectre@@AEAAXXZ @ 0x18008F910 (-CreateTexture@ColorTransform@Engine@Spectre@@AEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x180011B24 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@AEBV01@@Z @ 0x180017648 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@AEBV01@@Z.c)
 *     ??0EngineException@Engine@Spectre@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HJAEBV34@_N@Z @ 0x18006ED68 (--0EngineException@Engine@Spectre@@QEAA@V-$basic_string@DU-$char_traits@D@std@@V-$a_ea_18006ED68.c)
 */

_QWORD *__fastcall Spectre::Engine::EngineNotImplException::EngineNotImplException(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int v7; // eax
  int v8; // r8d
  _QWORD v10[5]; // [rsp+38h] [rbp-40h] BYREF

  v10[4] = a2;
  v7 = (unsigned int)std::string::string(v10, a2);
  Spectre::Engine::EngineException::EngineException((_DWORD)a1, v7, v8, -2147467263, a4, 0);
  *a1 = &Spectre::Engine::EngineNotImplException::`vftable';
  std::string::_Tidy_deallocate(a2);
  return a1;
}
