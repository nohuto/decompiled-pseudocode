/*
 * XREFs of sub_14062C558 @ 0x14062C558
 * Callers:
 *     sub_14062AAC8 @ 0x14062AAC8 (sub_14062AAC8.c)
 *     sub_14062BA64 @ 0x14062BA64 (sub_14062BA64.c)
 *     sub_14062BE2C @ 0x14062BE2C (sub_14062BE2C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14062C558(__int64 a1)
{
  _QWORD *v1; // rdx
  __int64 result; // rax
  _QWORD *v3; // rcx

  v1 = (_QWORD *)(a1 + 40);
  result = 0LL;
  v3 = *(_QWORD **)(a1 + 40);
  while ( v3 != v1 )
  {
    v3 = (_QWORD *)*v3;
    ++result;
  }
  return result;
}
