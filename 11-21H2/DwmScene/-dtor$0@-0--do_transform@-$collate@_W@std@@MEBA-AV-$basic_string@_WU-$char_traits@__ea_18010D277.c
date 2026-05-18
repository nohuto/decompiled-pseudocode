/*
 * XREFs of ?dtor$0@?0??do_transform@?$collate@_W@std@@MEBA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@2@PEB_W0@Z@4HA_0 @ 0x18010D277
 * Callers:
 *     <none>
 * Callees:
 *     sub_180020828 @ 0x180020828 (sub_180020828.c)
 */

__int64 __fastcall `std::collate<wchar_t>::do_transform'::`1'::dtor$0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 48) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 48) &= ~1u;
    return sub_180020828(*(_QWORD *)(a2 + 104));
  }
  return result;
}
