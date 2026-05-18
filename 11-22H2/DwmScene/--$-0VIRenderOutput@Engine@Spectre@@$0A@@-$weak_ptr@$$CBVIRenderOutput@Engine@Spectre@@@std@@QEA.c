/*
 * XREFs of ??$?0VIRenderOutput@Engine@Spectre@@$0A@@?$weak_ptr@$$CBVIRenderOutput@Engine@Spectre@@@std@@QEAA@AEBV?$weak_ptr@VIRenderOutput@Engine@Spectre@@@1@@Z @ 0x180056C00
 * Callers:
 *     ?RenderInternal@Display@Engine@Spectre@@AEAAXXZ @ 0x180057BA4 (-RenderInternal@Display@Engine@Spectre@@AEAAXXZ.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Incref_nz@_Ref_count_base@std@@QEAA_NXZ @ 0x180011A3C (-_Incref_nz@_Ref_count_base@std@@QEAA_NXZ.c)
 */

__int64 __fastcall std::weak_ptr<Spectre::Engine::IRenderOutput const>::weak_ptr<Spectre::Engine::IRenderOutput const>(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rax
  _QWORD *v4; // r8
  std::_Ref_count_base *v5; // rcx

  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  v3 = *(_QWORD *)(a2 + 8);
  if ( v3 )
  {
    *(_QWORD *)(a1 + 8) = v3;
    _InterlockedIncrement((volatile signed __int32 *)(v3 + 12));
    if ( std::_Ref_count_base::_Incref_nz(*(std::_Ref_count_base **)(a1 + 8)) )
    {
      v5 = *(std::_Ref_count_base **)(a1 + 8);
      *(_QWORD *)a1 = *v4;
      std::_Ref_count_base::_Decref(v5);
    }
  }
  return a1;
}
