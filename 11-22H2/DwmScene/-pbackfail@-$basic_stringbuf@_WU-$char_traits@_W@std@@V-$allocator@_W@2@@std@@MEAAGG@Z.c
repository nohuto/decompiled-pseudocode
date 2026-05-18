/*
 * XREFs of ?pbackfail@?$basic_stringbuf@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@MEAAGG@Z @ 0x180038A90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall std::wstringbuf::pbackfail(__int64 a1, unsigned __int16 a2)
{
  unsigned __int64 v4; // rsi

  v4 = std::wstreambuf::gptr(a1);
  if ( !v4
    || v4 <= std::wstreambuf::eback(a1)
    || a2 != 0xFFFF && a2 != *(_WORD *)(v4 - 2) && (*(_BYTE *)(a1 + 112) & 2) != 0 )
  {
    return 0xFFFFLL;
  }
  std::wstreambuf::gbump(a1, 0xFFFFFFFFLL);
  if ( a2 == 0xFFFF )
    return 0;
  else
    *(_WORD *)std::wstreambuf::gptr(a1) = a2;
  return a2;
}
