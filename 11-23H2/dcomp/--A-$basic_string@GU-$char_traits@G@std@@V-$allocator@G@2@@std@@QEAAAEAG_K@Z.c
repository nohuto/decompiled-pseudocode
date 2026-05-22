/*
 * XREFs of ??A?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAG_K@Z @ 0x1800A3548
 * Callers:
 *     ?do_transform@?$collate@G@std@@MEBA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@PEBG0@Z @ 0x180150920 (-do_transform@-$collate@G@std@@MEBA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@2@.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::wstring::operator[](_QWORD *a1)
{
  if ( a1[3] >= 8uLL )
    return (_QWORD *)*a1;
  return a1;
}
