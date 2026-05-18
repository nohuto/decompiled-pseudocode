/*
 * XREFs of sub_180048FB0 @ 0x180048FB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 */

_QWORD *__fastcall sub_180048FB0(_QWORD *a1, char a2)
{
  *a1 = &std::_Ref_count_obj2<Spectre::Engine::MaterialInternal::TextureAsyncCompletionHandler>::`vftable';
  if ( (a2 & 1) != 0 )
    sub_18000B998(a1);
  return a1;
}
