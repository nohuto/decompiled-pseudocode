/*
 * XREFs of ??$_Uninitialized_move@PEAVStoredFailureInfo@wil@@V?$allocator@VStoredFailureInfo@wil@@@std@@@std@@YAPEAVStoredFailureInfo@wil@@QEAV12@0PEAV12@AEAV?$allocator@VStoredFailureInfo@wil@@@0@@Z @ 0x1800F25A0
 * Callers:
 *     ??$_Emplace_reallocate@AEBUFailureInfo@wil@@@?$vector@VStoredFailureInfo@wil@@V?$allocator@VStoredFailureInfo@wil@@@std@@@std@@QEAAPEAVStoredFailureInfo@wil@@QEAV23@AEBUFailureInfo@3@@Z @ 0x1800F1E50 (--$_Emplace_reallocate@AEBUFailureInfo@wil@@@-$vector@VStoredFailureInfo@wil@@V-$allocator@VStor.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@VStoredFailureInfo@wil@@@std@@@std@@YAXPEAVStoredFailureInfo@wil@@QEAV12@AEAV?$allocator@VStoredFailureInfo@wil@@@0@@Z @ 0x1800F1D04 (--$_Destroy_range@V-$allocator@VStoredFailureInfo@wil@@@std@@@std@@YAXPEAVStoredFailureInfo@wil@.c)
 */

__int64 __fastcall std::_Uninitialized_move<wil::StoredFailureInfo *>(_QWORD *a1, _QWORD *a2, __int64 a3)
{
  __int64 v3; // rbx
  _QWORD *v4; // r9
  __int64 v5; // r8

  v3 = a3;
  if ( a1 != a2 )
  {
    v4 = a1 + 19;
    v5 = a3 - (_QWORD)a1;
    do
    {
      *(_OWORD *)v3 = *(_OWORD *)(v4 - 19);
      *(_OWORD *)(v3 + 16) = *(_OWORD *)(v4 - 17);
      *(_OWORD *)(v3 + 32) = *(_OWORD *)(v4 - 15);
      *(_OWORD *)(v3 + 48) = *(_OWORD *)(v4 - 13);
      *(_OWORD *)(v3 + 64) = *(_OWORD *)(v4 - 11);
      *(_OWORD *)(v3 + 80) = *(_OWORD *)(v4 - 9);
      *(_OWORD *)(v3 + 96) = *(_OWORD *)(v4 - 7);
      *(_OWORD *)(v3 + 112) = *(_OWORD *)(v4 - 5);
      *(_OWORD *)(v3 + 128) = *(_OWORD *)(v4 - 3);
      *(_QWORD *)(v3 + 144) = *(v4 - 1);
      v3 += 168LL;
      *(_QWORD *)((char *)v4 + v5) = *v4;
      *(_QWORD *)((char *)v4 + v5 + 8) = v4[1];
      *v4 = 0LL;
      v4[1] = 0LL;
      v4 += 21;
    }
    while ( v4 - 19 != a2 );
  }
  std::_Destroy_range<std::allocator<wil::StoredFailureInfo>>(v3, v3);
  return v3;
}
