/*
 * XREFs of _std::basic_stringstream_char_std::char_traits_char__std::allocator_char___::str_::_1_::dtor$1 @ 0x1800E4A0B
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@M@std@@QEAA@XZ @ 0x180010F30 (--1-$pair@$$CBV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@M@std@@QEAA@XZ.c)
 */

void __fastcall std::basic_stringstream_char_std::char_traits_char__std::allocator_char___::str_::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 2) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~2u;
    std::pair<std::string const,float>::~pair<std::string const,float>(*(void **)(a2 + 40));
  }
}
