/*
 * XREFs of ??$_Uninitialized_move@PEAVStoredFailureInfo@wil@@V?$allocator@VStoredFailureInfo@wil@@@std@@@std@@YAPEAVStoredFailureInfo@wil@@QEAV12@0PEAV12@AEAV?$allocator@VStoredFailureInfo@wil@@@0@@Z @ 0x180414960
 * Callers:
 *     ??$_Emplace_reallocate@AEBUFailureInfo@wil@@@?$vector@VStoredFailureInfo@wil@@V?$allocator@VStoredFailureInfo@wil@@@std@@@std@@QEAAPEAVStoredFailureInfo@wil@@QEAV23@AEBUFailureInfo@3@@Z @ 0x1804141C8 (--$_Emplace_reallocate@AEBUFailureInfo@wil@@@-$vector@VStoredFailureInfo@wil@@V-$allocator@VStor.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@VStoredFailureInfo@wil@@V?$allocator@VStoredFailureInfo@wil@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1804147EC (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@VStoredFailureInfo@wil@@V-$allocator@VStor.c)
 * Callees:
 *     ??0StoredFailureInfo@wil@@QEAA@$$QEAV01@@Z @ 0x180024400 (--0StoredFailureInfo@wil@@QEAA@$$QEAV01@@Z.c)
 *     ??$_Destroy_range@V?$allocator@VStoredFailureInfo@wil@@@std@@@std@@YAXPEAVStoredFailureInfo@wil@@QEAV12@AEAV?$allocator@VStoredFailureInfo@wil@@@0@@Z @ 0x18041418C (--$_Destroy_range@V-$allocator@VStoredFailureInfo@wil@@@std@@@std@@YAXPEAVStoredFailureInfo@wil@.c)
 */

wil::StoredFailureInfo *__fastcall std::_Uninitialized_move<wil::StoredFailureInfo *>(
        __int64 a1,
        __int64 a2,
        wil::StoredFailureInfo *a3)
{
  __int64 v5; // rdx
  __int64 v6; // r10
  __int64 v7; // rdx
  __int64 v8; // r8

  v5 = a1;
  if ( a1 != a2 )
  {
    do
    {
      wil::StoredFailureInfo::StoredFailureInfo((__int64)a3, v5);
      a3 = (wil::StoredFailureInfo *)((char *)a3 + v6);
      v5 = v6 + v7;
    }
    while ( v5 != v8 );
  }
  std::_Destroy_range<std::allocator<wil::StoredFailureInfo>>(a3, a3);
  return a3;
}
