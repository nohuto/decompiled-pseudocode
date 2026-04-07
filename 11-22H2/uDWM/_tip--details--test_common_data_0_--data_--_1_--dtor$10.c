/*
 * XREFs of _tip::details::test_common_data_0_::data_::_1_::dtor$10 @ 0x1800F2DF2
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@XZ @ 0x1800F1154 (--1-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@XZ.c)
 */

__int64 __fastcall tip::details::test_common_data_0_::data_::_1_::dtor_10(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 36) & 4;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 36) &= ~4u;
    return std::string::~string(*(_QWORD *)(a2 + 72));
  }
  return result;
}
