/*
 * XREFs of ??$_Uninitialized_move@PEAU?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@YAPEAU?$pair@PEBGPEBG@0@QEAU10@0PEAU10@AEAV?$allocator@U?$pair@PEBGPEBG@std@@@0@@Z @ 0x180316E84
 * Callers:
 *     ??$_Emplace_reallocate@U?$pair@PEBGPEBG@std@@@?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@QEAAPEAU?$pair@PEBGPEBG@1@QEAU21@$$QEAU21@@Z @ 0x180316D60 (--$_Emplace_reallocate@U-$pair@PEBGPEBG@std@@@-$vector@U-$pair@PEBGPEBG@std@@V-$allocator@U-$pai.c)
 * Callees:
 *     <none>
 */

_OWORD *__fastcall std::_Uninitialized_move<std::pair<unsigned short const *,unsigned short const *> *,std::allocator<std::pair<unsigned short const *,unsigned short const *>>>(
        _OWORD *a1,
        _OWORD *a2,
        _OWORD *a3)
{
  while ( a1 != a2 )
    *a3++ = *a1++;
  return a3;
}
