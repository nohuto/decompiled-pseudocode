/*
 * XREFs of ?OnDetachDevice@Engine@1Spectre@@MEAAXV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x180035280
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall Spectre::Engine::Engine::OnDetachDevice(__int64 a1, __int64 a2)
{
  std::_Ref_count_base *v2; // rcx

  v2 = *(std::_Ref_count_base **)(a2 + 8);
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
}
