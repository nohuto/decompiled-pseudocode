/*
 * XREFs of sub_140B30EE0 @ 0x140B30EE0
 * Callers:
 *     sub_140B020A4 @ 0x140B020A4 (sub_140B020A4.c)
 * Callees:
 *     sub_1402F89B0 @ 0x1402F89B0 (sub_1402F89B0.c)
 *     sub_1406AD624 @ 0x1406AD624 (sub_1406AD624.c)
 *     sub_140757130 @ 0x140757130 (sub_140757130.c)
 */

__int64 sub_140B30EE0()
{
  __int64 result; // rax
  __int64 v1; // rbx

  result = (__int64)sub_1406AD624(0);
  v1 = result;
  if ( result )
  {
    result = sub_140757130(*(signed __int64 **)(result - 8));
    qword_140C50640 = *(_QWORD *)(v1 + 24);
    if ( result )
      return sub_1402F89B0(*(signed __int64 **)(v1 - 8), result, 0x64537350u);
  }
  return result;
}
