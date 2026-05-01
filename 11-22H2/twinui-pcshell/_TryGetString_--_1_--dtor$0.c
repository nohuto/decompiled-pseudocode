/*
 * XREFs of _TryGetString_::_1_::dtor$0 @ 0x1802C54F7
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$value_iterator_data@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@reg@wil@@QEAA@XZ @ 0x1800A8D90 (--1-$value_iterator_data@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@reg@wil@.c)
 */

void __fastcall TryGetString_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 68) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 68) &= ~1u;
    wil::reg::value_iterator_data<std::wstring>::~value_iterator_data<std::wstring>(*(void **)(a2 + 112), a2);
  }
}
