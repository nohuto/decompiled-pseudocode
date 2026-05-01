/*
 * XREFs of _std::filesystem::filesystem_error::_Pretty_message_::_1_::dtor$0 @ 0x180581E88
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@XZ @ 0x1800899B0 (--1-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@XZ.c)
 */

void __fastcall std::filesystem::filesystem_error::_Pretty_message_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 56) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 56) &= ~1u;
    std::string::~string(*(_QWORD *)(a2 + 48));
  }
}
