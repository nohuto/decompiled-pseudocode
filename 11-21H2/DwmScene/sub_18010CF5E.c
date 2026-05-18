/*
 * XREFs of sub_18010CF5E @ 0x18010CF5E
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000D620 @ 0x18000D620 (sub_18000D620.c)
 */

_QWORD *__fastcall sub_18010CF5E(__int64 a1, __int64 a2)
{
  _QWORD *result; // rax

  result = (_QWORD *)(*(_DWORD *)(a2 + 48) & 1);
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 48) &= ~1u;
    return sub_18000D620(*(_QWORD **)(a2 + 64));
  }
  return result;
}
