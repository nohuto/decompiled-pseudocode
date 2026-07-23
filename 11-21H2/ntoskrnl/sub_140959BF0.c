/*
 * XREFs of sub_140959BF0 @ 0x140959BF0
 * Callers:
 *     sub_140959BF0 @ 0x140959BF0 (sub_140959BF0.c)
 *     sub_14095A02C @ 0x14095A02C (sub_14095A02C.c)
 * Callees:
 *     sub_140959B60 @ 0x140959B60 (sub_140959B60.c)
 *     sub_140959BF0 @ 0x140959BF0 (sub_140959BF0.c)
 */

__int64 __fastcall sub_140959BF0(ULONG_PTR a1)
{
  __int64 result; // rax
  _QWORD *i; // rbx

  result = sub_140959B60(a1);
  for ( i = *(_QWORD **)(a1 + 8); i; i = (_QWORD *)*i )
    result = sub_140959BF0(i);
  return result;
}
