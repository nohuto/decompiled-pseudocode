/*
 * XREFs of sub_140A508C0 @ 0x140A508C0
 * Callers:
 *     sub_140A5072C @ 0x140A5072C (sub_140A5072C.c)
 * Callees:
 *     <none>
 */

__int64 sub_140A508C0()
{
  __int64 result; // rax

  for ( result = qword_140C4BC90; (__int64 *)result != &qword_140C4BC90; result = *(_QWORD *)result )
    *(_BYTE *)(result + 216) = 0;
  return result;
}
