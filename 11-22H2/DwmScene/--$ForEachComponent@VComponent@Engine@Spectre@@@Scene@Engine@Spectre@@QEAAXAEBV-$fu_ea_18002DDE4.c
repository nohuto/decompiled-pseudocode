/*
 * XREFs of ??$ForEachComponent@VComponent@Engine@Spectre@@@Scene@Engine@Spectre@@QEAAXAEBV?$function@$$A6AXAEBV?$shared_ptr@VComponent@Engine@Spectre@@@std@@@Z@std@@AEBV?$shared_ptr@VSceneNode@Engine@Spectre@@@4@@Z @ 0x18002DDE4
 * Callers:
 *     ??$ForEachComponent@VComponent@Engine@Spectre@@@Scene@Engine@Spectre@@QEAAXAEBV?$function@$$A6AXAEBV?$shared_ptr@VComponent@Engine@Spectre@@@std@@@Z@std@@AEBV?$shared_ptr@VSceneNode@Engine@Spectre@@@4@@Z @ 0x18002DDE4 (--$ForEachComponent@VComponent@Engine@Spectre@@@Scene@Engine@Spectre@@QEAAXAEBV-$fu_ea_18002DDE4.c)
 *     ??$ForEachComponent@VComponent@Engine@Spectre@@@Scene@Engine@Spectre@@QEAAXAEBV?$function@$$A6AXAEBV?$shared_ptr@VComponent@Engine@Spectre@@@std@@@Z@std@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@4@@Z @ 0x18002DEB4 (--$ForEachComponent@VComponent@Engine@Spectre@@@Scene@Engine@Spectre@@QEAAXAEBV-$fu_ea_18002DEB4.c)
 * Callees:
 *     ?VerifyReadAccess@Lockable@Engine@Spectre@@QEBAXXZ @ 0x18002A2FC (-VerifyReadAccess@Lockable@Engine@Spectre@@QEBAXXZ.c)
 *     ??$ForEachComponent@VComponent@Engine@Spectre@@@Scene@Engine@Spectre@@QEAAXAEBV?$function@$$A6AXAEBV?$shared_ptr@VComponent@Engine@Spectre@@@std@@@Z@std@@AEBV?$shared_ptr@VSceneNode@Engine@Spectre@@@4@@Z @ 0x18002DDE4 (--$ForEachComponent@VComponent@Engine@Spectre@@@Scene@Engine@Spectre@@QEAAXAEBV-$fu_ea_18002DDE4.c)
 *     ?VerifyReadAccess@SceneNode@Engine@Spectre@@QEBAXXZ @ 0x18003E2B0 (-VerifyReadAccess@SceneNode@Engine@Spectre@@QEBAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall Spectre::Engine::Scene::ForEachComponent<Spectre::Engine::Component>(
        __int64 a1,
        __int64 a2,
        Spectre::Engine::SceneNode **a3)
{
  Spectre::Engine::SceneNode *v6; // rbx
  __int64 v7; // rdi
  __int64 i; // rbx
  __int64 v9; // rcx
  Spectre::Engine::SceneNode *v10; // rbx

  Spectre::Engine::Lockable::VerifyReadAccess((Spectre::Engine::Lockable *)(a1 + 16));
  v6 = *a3;
  Spectre::Engine::SceneNode::VerifyReadAccess(*a3);
  v7 = *((_QWORD *)v6 + 47);
  i = *((_QWORD *)v6 + 48);
  while ( v7 != i )
  {
    v9 = *(_QWORD *)(a2 + 56);
    if ( !v9 )
    {
      std::_Xbad_function_call();
      __debugbreak();
      goto LABEL_7;
    }
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 16LL))(v9, v7);
    v7 += 16LL;
  }
  v10 = *a3;
  Spectre::Engine::SceneNode::VerifyReadAccess(*a3);
  v7 = *((_QWORD *)v10 + 5);
  for ( i = *((_QWORD *)v10 + 4); i != v7; i += 16LL )
LABEL_7:
    Spectre::Engine::Scene::ForEachComponent<Spectre::Engine::Component>(a1, a2, i);
}
