/*
 * XREFs of ?GetSourcesForCycleDetection@CompositionEffectBrush@Composition@UI@Windows@@MEBAXAEAV?$vector@PEBVCompositionBrush@Composition@UI@Windows@@V?$allocator@PEBVCompositionBrush@Composition@UI@Windows@@@std@@@std@@@Z @ 0x180082480
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Emplace_reallocate@PEBVCompositionBrush@Composition@UI@Windows@@@?$vector@PEBVCompositionBrush@Composition@UI@Windows@@V?$allocator@PEBVCompositionBrush@Composition@UI@Windows@@@std@@@std@@QEAAPEAPEBVCompositionBrush@Composition@UI@Windows@@QEAPEBV2345@$$QEAPEBV2345@@Z @ 0x180045264 (--$_Emplace_reallocate@PEBVCompositionBrush@Composition@UI@Windows@@@-$vector@PEBVCompositionBru.c)
 *     ?_Reallocate_exactly@?$vector@PEBVCompositionBrush@Composition@UI@Windows@@V?$allocator@PEBVCompositionBrush@Composition@UI@Windows@@@std@@@std@@AEAAX_K@Z @ 0x180082544 (-_Reallocate_exactly@-$vector@PEBVCompositionBrush@Composition@UI@Windows@@V-$allocator@PEBVComp.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

char *__fastcall Windows::UI::Composition::CompositionEffectBrush::GetSourcesForCycleDetection(__int64 a1, char *a2)
{
  char *result; // rax
  __int64 v5; // rdx
  int v6; // ebp
  __int64 v7; // rsi
  __int64 v8; // rdi
  _BYTE *v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  result = (char *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 168) + 152LL) + 24LL))(*(_QWORD *)(*(_QWORD *)(a1 + 168) + 152LL));
  v5 = *(_QWORD *)a2;
  *((_QWORD *)a2 + 1) = *(_QWORD *)a2;
  v6 = (int)result;
  v7 = (unsigned int)result;
  if ( (unsigned int)result > (unsigned __int64)((*((_QWORD *)a2 + 2) - v5) >> 3) )
    result = (char *)std::vector<Windows::UI::Composition::CompositionBrush const *>::_Reallocate_exactly(
                       a2,
                       (unsigned int)result);
  v8 = 0LL;
  if ( v6 )
  {
    do
    {
      result = *(char **)(a1 + 176);
      v9 = (_BYTE *)*((_QWORD *)a2 + 1);
      v10 = *(_QWORD *)&result[v8];
      v11 = v10;
      if ( v9 == *((_BYTE **)a2 + 2) )
      {
        result = std::vector<Windows::UI::Composition::CompositionBrush const *>::_Emplace_reallocate<Windows::UI::Composition::CompositionBrush const *>(
                   a2,
                   v9,
                   &v11);
      }
      else
      {
        *(_QWORD *)v9 = v10;
        *((_QWORD *)a2 + 1) += 8LL;
      }
      v8 += 8LL;
      --v7;
    }
    while ( v7 );
  }
  return result;
}
