/*
 * XREFs of ??1?$_Tidy_guard@V?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@std@@QEAA@XZ @ 0x18019BBD0
 * Callers:
 *     ??0?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@QEAA@AEBV01@@Z @ 0x18019B7B0 (--0-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@QEAA@AEBV01@@Z.c)
 * Callees:
 *     ?_Tidy@?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@AEAAXXZ @ 0x18022B92C (-_Tidy@-$vector@UCRect@Geometry@@V-$allocator@UCRect@Geometry@@@std@@@std@@AEAAXXZ.c)
 */

__int64 __fastcall std::_Tidy_guard<std::vector<tagRECT>>::~_Tidy_guard<std::vector<tagRECT>>(__int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return std::vector<Geometry::CRect>::_Tidy(v1);
  return result;
}
