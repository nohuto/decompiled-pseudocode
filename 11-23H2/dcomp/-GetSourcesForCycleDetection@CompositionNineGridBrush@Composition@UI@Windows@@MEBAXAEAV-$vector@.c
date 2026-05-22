/*
 * XREFs of ?GetSourcesForCycleDetection@CompositionNineGridBrush@Composition@UI@Windows@@MEBAXAEAV?$vector@PEBVCompositionBrush@Composition@UI@Windows@@V?$allocator@PEBVCompositionBrush@Composition@UI@Windows@@@std@@@std@@@Z @ 0x180045220
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Emplace_reallocate@PEBVCompositionBrush@Composition@UI@Windows@@@?$vector@PEBVCompositionBrush@Composition@UI@Windows@@V?$allocator@PEBVCompositionBrush@Composition@UI@Windows@@@std@@@std@@QEAAPEAPEBVCompositionBrush@Composition@UI@Windows@@QEAPEBV2345@$$QEAPEBV2345@@Z @ 0x180045264 (--$_Emplace_reallocate@PEBVCompositionBrush@Composition@UI@Windows@@@-$vector@PEBVCompositionBru.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionNineGridBrush::GetSourcesForCycleDetection(
        __int64 a1,
        _QWORD **a2)
{
  __int64 result; // rax
  _QWORD *v3; // rdx
  __int64 v4; // r8
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  result = (__int64)a2;
  v3 = *a2;
  *(_QWORD *)(result + 8) = v3;
  v4 = *(_QWORD *)(a1 + 168);
  v5 = v4;
  if ( v3 == *(_QWORD **)(result + 16) )
    return std::vector<Windows::UI::Composition::CompositionBrush const *>::_Emplace_reallocate<Windows::UI::Composition::CompositionBrush const *>(
             result,
             v3,
             &v5);
  *v3 = v4;
  *(_QWORD *)(result + 8) += 8LL;
  return result;
}
