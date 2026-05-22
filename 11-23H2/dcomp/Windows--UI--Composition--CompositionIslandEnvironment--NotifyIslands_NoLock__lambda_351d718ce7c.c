/*
 * XREFs of Windows::UI::Composition::CompositionIslandEnvironment::NotifyIslands_NoLock__lambda_351d718ce7c9cc2194c2d1b1baf93fda___ @ 0x180113D98
 * Callers:
 *     ?ChangeValues_NoLock@CompositionIslandEnvironment@Composition@UI@Windows@@QEAAXUfloat3@Numerics@Foundation@4@MM@Z @ 0x180088E74 (-ChangeValues_NoLock@CompositionIslandEnvironment@Composition@UI@Windows@@QEAAXUfloat3@Numerics@.c)
 * Callees:
 *     _lambda_351d718ce7c9cc2194c2d1b1baf93fda_::operator() @ 0x180113EB8 (_lambda_351d718ce7c9cc2194c2d1b1baf93fda_--operator().c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionIslandEnvironment::NotifyIslands_NoLock__lambda_351d718ce7c9cc2194c2d1b1baf93fda___(
        __int64 a1,
        __int64 *a2,
        __int64 a3)
{
  __int64 i; // rbx
  __int64 result; // rax

  for ( i = *a2; i != a2[1]; i += 8LL )
  {
    if ( (*(_BYTE *)(*(_QWORD *)i + 32LL) & 2) != 0 )
      result = lambda_351d718ce7c9cc2194c2d1b1baf93fda_::operator()(a3);
  }
  return result;
}
