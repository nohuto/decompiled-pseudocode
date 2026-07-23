/*
 * XREFs of sub_140287C5C @ 0x140287C5C
 * Callers:
 *     sub_1406FDCD0 @ 0x1406FDCD0 (sub_1406FDCD0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140287C5C(__int64 a1)
{
  _QWORD *v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD **)(a1 + 208);
  result = 0LL;
  if ( v1 )
  {
    if ( v1 != off_140C06A80 )
      return v1[9];
  }
  return result;
}
