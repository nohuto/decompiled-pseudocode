/*
 * XREFs of ?dtor$0@?0??do_transform@?$collate@_W@std@@MEBA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@2@PEB_W0@Z@4HA @ 0x18010326B
 * Callers:
 *     <none>
 * Callees:
 *     sub_18005508C @ 0x18005508C (sub_18005508C.c)
 */

__int64 __fastcall `std::collate<wchar_t>::do_transform'::`1'::dtor$0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 48) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 48) &= ~1u;
    return sub_18005508C(*(__int64 **)(a2 + 104));
  }
  return result;
}
