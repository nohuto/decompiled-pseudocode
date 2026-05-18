/*
 * XREFs of sub_1800D9750 @ 0x1800D9750
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 */

_QWORD *__fastcall sub_1800D9750(_QWORD *a1, char a2)
{
  *a1 = &std::_Ref_count_obj2<Spectre::Engine::D3D11::SamplerD3D11>::`vftable';
  if ( (a2 & 1) != 0 )
    sub_18000B998(a1);
  return a1;
}
