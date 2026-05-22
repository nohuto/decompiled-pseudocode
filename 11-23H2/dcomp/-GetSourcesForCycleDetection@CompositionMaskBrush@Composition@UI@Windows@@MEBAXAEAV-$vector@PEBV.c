/*
 * XREFs of ?GetSourcesForCycleDetection@CompositionMaskBrush@Composition@UI@Windows@@MEBAXAEAV?$vector@PEBVCompositionBrush@Composition@UI@Windows@@V?$allocator@PEBVCompositionBrush@Composition@UI@Windows@@@std@@@std@@@Z @ 0x180172AE0
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Emplace_reallocate@PEBVCompositionBrush@Composition@UI@Windows@@@?$vector@PEBVCompositionBrush@Composition@UI@Windows@@V?$allocator@PEBVCompositionBrush@Composition@UI@Windows@@@std@@@std@@QEAAPEAPEBVCompositionBrush@Composition@UI@Windows@@QEAPEBV2345@$$QEAPEBV2345@@Z @ 0x180045264 (--$_Emplace_reallocate@PEBVCompositionBrush@Composition@UI@Windows@@@-$vector@PEBVCompositionBru.c)
 */

char *__fastcall Windows::UI::Composition::CompositionMaskBrush::GetSourcesForCycleDetection(__int64 a1, __int64 a2)
{
  _BYTE *v4; // rdx
  char *v5; // rax
  _BYTE *v6; // rdx
  char *result; // rax
  char *v8; // [rsp+30h] [rbp+8h] BYREF

  v4 = *(_BYTE **)a2;
  *(_QWORD *)(a2 + 8) = v4;
  v5 = *(char **)(a1 + 176);
  v8 = v5;
  if ( v4 == *(_BYTE **)(a2 + 16) )
  {
    std::vector<Windows::UI::Composition::CompositionBrush const *>::_Emplace_reallocate<Windows::UI::Composition::CompositionBrush const *>(
      (char *)a2,
      v4,
      &v8);
  }
  else
  {
    *(_QWORD *)v4 = v5;
    *(_QWORD *)(a2 + 8) += 8LL;
  }
  v6 = *(_BYTE **)(a2 + 8);
  result = *(char **)(a1 + 168);
  v8 = result;
  if ( v6 == *(_BYTE **)(a2 + 16) )
    return std::vector<Windows::UI::Composition::CompositionBrush const *>::_Emplace_reallocate<Windows::UI::Composition::CompositionBrush const *>(
             (char *)a2,
             v6,
             &v8);
  *(_QWORD *)v6 = result;
  *(_QWORD *)(a2 + 8) += 8LL;
  return result;
}
