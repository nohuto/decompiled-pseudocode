/*
 * XREFs of ??$_Destroy_range@V?$allocator@VStoredFailureInfo@wil@@@std@@@std@@YAXPEAVStoredFailureInfo@wil@@QEAV12@AEAV?$allocator@VStoredFailureInfo@wil@@@0@@Z @ 0x1800F1D04
 * Callers:
 *     ??1?$test_common_data@$0A@@details@tip@@QEAA@XZ @ 0x180013500 (--1-$test_common_data@$0A@@details@tip@@QEAA@XZ.c)
 *     ??$_Uninitialized_move@PEAVStoredFailureInfo@wil@@V?$allocator@VStoredFailureInfo@wil@@@std@@@std@@YAPEAVStoredFailureInfo@wil@@QEAV12@0PEAV12@AEAV?$allocator@VStoredFailureInfo@wil@@@0@@Z @ 0x1800F25A0 (--$_Uninitialized_move@PEAVStoredFailureInfo@wil@@V-$allocator@VStoredFailureInfo@wil@@@std@@@st.c)
 *     ?_Change_array@?$vector@VStoredFailureInfo@wil@@V?$allocator@VStoredFailureInfo@wil@@@std@@@std@@AEAAXQEAVStoredFailureInfo@wil@@_K1@Z @ 0x1800F5E24 (-_Change_array@-$vector@VStoredFailureInfo@wil@@V-$allocator@VStoredFailureInfo@wil@@@std@@@std@.c)
 * Callees:
 *     ?reset@shared_buffer@details@wil@@QEAAXXZ @ 0x180096A20 (-reset@shared_buffer@details@wil@@QEAAXXZ.c)
 */

void __fastcall std::_Destroy_range<std::allocator<wil::StoredFailureInfo>>(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      wil::details::shared_buffer::reset((volatile signed __int32 **)(v3 + 152));
      v3 += 168LL;
    }
    while ( v3 != a2 );
  }
}
