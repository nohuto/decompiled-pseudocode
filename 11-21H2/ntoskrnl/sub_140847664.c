/*
 * XREFs of sub_140847664 @ 0x140847664
 * Callers:
 *     sub_1408476A0 @ 0x1408476A0 (sub_1408476A0.c)
 * Callees:
 *     sub_140847B58 @ 0x140847B58 (sub_140847B58.c)
 */

__int64 __fastcall sub_140847664(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  _QWORD *v5; // r8
  __int64 result; // rax
  __int64 v7; // rcx

  if ( (a2 & 0xF000000) != 0x5000000 )
    return 3221225485LL;
  v4 = sub_140847B58(a1, a2, a3, a4);
  if ( !v4 )
    return 3221226021LL;
  v7 = *(_QWORD *)(*(unsigned int *)(v4 + 4) + v4);
  result = 0LL;
  *v5 = v7;
  return result;
}
