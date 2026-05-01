/*
 * XREFs of ??$_Resize@U_Value_init_tag@std@@@?$vector@VStoredFailureInfo@wil@@V?$allocator@VStoredFailureInfo@wil@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1803494A4
 * Callers:
 *     ??$load@VJSONInputArchive@cereal@@VStoredFailureInfo@wil@@V?$allocator@VStoredFailureInfo@wil@@@std@@@cereal@@YAXAEAVJSONInputArchive@0@AEAV?$vector@VStoredFailureInfo@wil@@V?$allocator@VStoredFailureInfo@wil@@@std@@@std@@@Z @ 0x180349E64 (--$load@VJSONInputArchive@cereal@@VStoredFailureInfo@wil@@V-$allocator@VStoredFailureInfo@wil@@@.c)
 * Callees:
 *     memset_0 @ 0x180188F60 (memset_0.c)
 *     ??$_Destroy_range@V?$allocator@VStoredFailureInfo@wil@@@std@@@std@@YAXPEAVStoredFailureInfo@wil@@QEAV12@AEAV?$allocator@VStoredFailureInfo@wil@@@0@@Z @ 0x180348AEC (--$_Destroy_range@V-$allocator@VStoredFailureInfo@wil@@@std@@@std@@YAXPEAVStoredFailureInfo@wil@.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@VStoredFailureInfo@wil@@V?$allocator@VStoredFailureInfo@wil@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1803496E0 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@VStoredFailureInfo@wil@@V-$allocator@VStor.c)
 */

void __fastcall std::vector<wil::StoredFailureInfo>::_Resize<std::_Value_init_tag>(_QWORD *a1, unsigned __int64 a2)
{
  _QWORD *v2; // rdi
  unsigned __int64 v4; // rcx
  __int64 v5; // rbx
  unsigned __int64 v6; // rbx

  v2 = (_QWORD *)a1[1];
  v4 = 0xCF3CF3CF3CF3CF3DuLL * (((__int64)v2 - *a1) >> 3);
  if ( a2 >= v4 )
  {
    if ( a2 > v4 )
    {
      if ( a2 <= 0xCF3CF3CF3CF3CF3DuLL * ((__int64)(a1[2] - *a1) >> 3) )
      {
        v6 = a2 - v4;
        if ( a2 != v4 )
        {
          do
          {
            v2[19] = 0LL;
            v2[20] = 0LL;
            memset_0(v2, 0, 0x98uLL);
            v2 += 21;
            --v6;
          }
          while ( v6 );
        }
        std::_Destroy_range<std::allocator<wil::StoredFailureInfo>>((__int64)v2, (__int64)v2);
        a1[1] = v2;
      }
      else
      {
        std::vector<wil::StoredFailureInfo>::_Resize_reallocate<std::_Value_init_tag>(a1, a2);
      }
    }
  }
  else
  {
    v5 = *a1 + 168 * a2;
    std::_Destroy_range<std::allocator<wil::StoredFailureInfo>>(v5, (__int64)v2);
    a1[1] = v5;
  }
}
