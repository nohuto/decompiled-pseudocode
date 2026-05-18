/*
 * XREFs of ?Render@SceneNode@Engine@Spectre@@QEBAX_KAEBV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@AEBV?$shared_ptr@$$CBVCamera@Engine@Spectre@@@5@@Z @ 0x18003D264
 * Callers:
 *     ?Render@Scene@Engine@Spectre@@QEBAXV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEBV?$shared_ptr@VCommandList@Engine@Spectre@@@5@AEBV?$shared_ptr@$$CBVCamera@Engine@Spectre@@@5@AEBV?$shared_ptr@VISceneNodeTraversal@Engine@Spectre@@@5@_K@Z @ 0x180041CD0 (-Render@Scene@Engine@Spectre@@QEBAXV-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@s.c)
 * Callees:
 *     ?RenderSymbols@SceneNode@Engine@Spectre@@AEBAX_KAEBV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@AEBV?$shared_ptr@$$CBVCamera@Engine@Spectre@@@5@@Z @ 0x18003D310 (-RenderSymbols@SceneNode@Engine@Spectre@@AEBAX_KAEBV-$shared_ptr@VCommandList@Engine@Spectre@@@s.c)
 *     ?VerifyReadAccess@SceneNode@Engine@Spectre@@QEBAXXZ @ 0x18003E2B0 (-VerifyReadAccess@SceneNode@Engine@Spectre@@QEBAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Spectre::Engine::SceneNode::Render(
        Spectre::Engine::SceneNode *a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4)
{
  _QWORD *v8; // rsi
  _QWORD *i; // rbx
  __int64 result; // rax
  int v11; // ecx

  Spectre::Engine::SceneNode::VerifyReadAccess(a1);
  v8 = (_QWORD *)*((_QWORD *)a1 + 48);
  for ( i = (_QWORD *)*((_QWORD *)a1 + 47); i != v8; i += 2 )
  {
    if ( *(_BYTE *)(*i + 72LL) )
      (*(void (__fastcall **)(_QWORD, __int64, __int64, __int64 *))(*(_QWORD *)*i + 56LL))(*i, a3, a2, a4);
  }
  result = *a4;
  v11 = *(_DWORD *)(*a4 + 440);
  if ( (v11 & 0x10000) != 0 && (v11 & 0x20000) != 0 )
    Spectre::Engine::SceneNode::RenderSymbols(a1);
  return result;
}
