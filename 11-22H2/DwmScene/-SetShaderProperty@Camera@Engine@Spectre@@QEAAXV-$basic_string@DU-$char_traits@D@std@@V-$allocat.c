/*
 * XREFs of ?SetShaderProperty@Camera@Engine@Spectre@@QEAAXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UVector4@Math@Utils@3@H@Z @ 0x18005D3F0
 * Callers:
 *     ?AddRenderPass@Camera@Engine@Spectre@@QEAAH_K0V?$shared_ptr@VISceneNodeTraversal@Engine@Spectre@@@std@@0@Z @ 0x180059E28 (-AddRenderPass@Camera@Engine@Spectre@@QEAAH_K0V-$shared_ptr@VISceneNodeTraversal@Engine@Spectre@.c)
 *     ?UpdatePlanarReflection@ViewerEngine@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@IAEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@@Z @ 0x18006D03C (-UpdatePlanarReflection@ViewerEngine@Engine@Spectre@@AEAAXAEBV-$shared_ptr@VScene@Engine@Spectre.c)
 *     ?ApplyRenderState@ShadowMapCamera@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x18008DB9C (-ApplyRenderState@ShadowMapCamera@Engine@Spectre@@AEAAXAEBV-$shared_ptr@VRenderDevice@Engine@Spe.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x180011B24 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@AEBV01@@Z @ 0x180017648 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@AEBV01@@Z.c)
 *     ??$_Try_emplace@AEBU?$pair@HV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@$$V@?$map@U?$pair@HV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@UVector4@Math@Utils@Spectre@@U?$less@U?$pair@HV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@2@V?$allocator@U?$pair@$$CBU?$pair@HV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@UVector4@Math@Utils@Spectre@@@std@@@2@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBU?$pair@HV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@UVector4@Math@Utils@Spectre@@@std@@PEAX@std@@_N@1@AEBU?$pair@HV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@1@@Z @ 0x180058D64 (--$_Try_emplace@AEBU-$pair@HV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@@std@@.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall Spectre::Engine::Camera::SetShaderProperty(__int64 a1, __int64 a2, _DWORD *a3, int a4)
{
  _DWORD *v7; // rdx
  _BYTE v8[16]; // [rsp+28h] [rbp-50h] BYREF
  __int64 v9; // [rsp+38h] [rbp-40h]
  int v10; // [rsp+40h] [rbp-38h] BYREF
  _QWORD v11[4]; // [rsp+48h] [rbp-30h] BYREF

  v9 = a2;
  v10 = a4;
  std::string::string(v11, a2);
  v7 = *(_DWORD **)std::map<std::pair<int,std::string>,Spectre::Utils::Math::Vector4>::_Try_emplace<std::pair<int,std::string> const &,>(
                     (_QWORD *)(a1 + 1616),
                     (__int64)v8,
                     &v10);
  v7[18] = *a3;
  v7[19] = a3[1];
  v7[20] = a3[2];
  v7[21] = a3[3];
  std::string::_Tidy_deallocate((__int64)v11);
  std::string::_Tidy_deallocate(a2);
}
