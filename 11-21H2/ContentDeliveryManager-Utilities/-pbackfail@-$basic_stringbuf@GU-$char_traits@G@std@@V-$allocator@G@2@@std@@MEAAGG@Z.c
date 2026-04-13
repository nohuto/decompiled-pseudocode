/*
 * XREFs of ?pbackfail@?$basic_stringbuf@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@MEAAGG@Z @ 0x18006BEB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall std::basic_stringbuf<unsigned short>::pbackfail(__int64 a1, unsigned __int16 a2)
{
  unsigned __int64 v3; // rdx

  v3 = **(_QWORD **)(a1 + 56);
  if ( !v3
    || v3 <= **(_QWORD **)(a1 + 24)
    || a2 != 0xFFFF && a2 != *(_WORD *)(v3 - 2) && (*(_BYTE *)(a1 + 112) & 2) != 0 )
  {
    return 0xFFFFLL;
  }
  ++**(_DWORD **)(a1 + 80);
  **(_QWORD **)(a1 + 56) -= 2LL;
  if ( a2 == 0xFFFF )
    return 0;
  else
    ***(_WORD ***)(a1 + 56) = a2;
  return a2;
}
