/*
 * XREFs of ?pbackfail@?$basic_stringbuf@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@MEAAHH@Z @ 0x1800F35A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall std::stringbuf::pbackfail(__int64 a1, unsigned int a2)
{
  unsigned __int64 v4; // rbp
  bool v5; // zf
  _BYTE *v6; // rax

  v4 = std::streambuf::gptr(a1);
  if ( !v4
    || v4 <= std::streambuf::eback(a1)
    || a2 != -1 && (_BYTE)a2 != *(_BYTE *)(v4 - 1) && (*(_BYTE *)(a1 + 112) & 2) != 0 )
  {
    return 0xFFFFFFFFLL;
  }
  std::streambuf::gbump(a1, 0xFFFFFFFFLL);
  v5 = a2 == -1;
  if ( a2 != -1 )
  {
    v6 = (_BYTE *)std::streambuf::gptr(a1);
    v5 = a2 == -1;
    *v6 = a2;
  }
  if ( v5 )
    return 0;
  return a2;
}
