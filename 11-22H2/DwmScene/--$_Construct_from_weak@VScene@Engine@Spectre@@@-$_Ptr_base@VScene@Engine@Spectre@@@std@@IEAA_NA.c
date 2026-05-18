/*
 * XREFs of ??$_Construct_from_weak@VScene@Engine@Spectre@@@?$_Ptr_base@VScene@Engine@Spectre@@@std@@IEAA_NAEBV?$weak_ptr@VScene@Engine@Spectre@@@1@@Z @ 0x180010974
 * Callers:
 *     ?lock@?$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA?AV?$shared_ptr@VRenderDevice@Engine@Spectre@@@2@XZ @ 0x180011C50 (-lock@-$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA-AV-$shared_ptr@VRenderDevice@Engine@Sp.c)
 *     ?shared_from_this@?$enable_shared_from_this@VScene@Engine@Spectre@@@std@@QEAA?AV?$shared_ptr@VScene@Engine@Spectre@@@2@XZ @ 0x180011D4C (-shared_from_this@-$enable_shared_from_this@VScene@Engine@Spectre@@@std@@QEAA-AV-$shared_ptr@VSc.c)
 *     ?GetScene@SceneNode@Engine@Spectre@@QEBA?AV?$shared_ptr@VScene@Engine@Spectre@@@std@@XZ @ 0x18001265C (-GetScene@SceneNode@Engine@Spectre@@QEBA-AV-$shared_ptr@VScene@Engine@Spectre@@@std@@XZ.c)
 * Callees:
 *     ?_Incref_nz@_Ref_count_base@std@@QEAA_NXZ @ 0x180011A3C (-_Incref_nz@_Ref_count_base@std@@QEAA_NXZ.c)
 */

char __fastcall std::_Ptr_base<Spectre::Engine::Scene>::_Construct_from_weak<Spectre::Engine::Scene>(
        __int64 a1,
        __int64 a2)
{
  std::_Ref_count_base *v2; // rcx
  _QWORD *v3; // r8
  _QWORD *v4; // r9

  v2 = *(std::_Ref_count_base **)(a2 + 8);
  if ( !v2 || !std::_Ref_count_base::_Incref_nz(v2) )
    return 0;
  *v4 = *v3;
  v4[1] = v3[1];
  return 1;
}
