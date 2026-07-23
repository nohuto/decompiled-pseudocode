/*
 * XREFs of sub_140847B10 @ 0x140847B10
 * Callers:
 *     sub_1408476A0 @ 0x1408476A0 (sub_1408476A0.c)
 * Callees:
 *     sub_140847B58 @ 0x140847B58 (sub_140847B58.c)
 */

__int64 __fastcall sub_140847B10(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  _BYTE *v4; // r9
  __int64 result; // rax
  char v6; // cl

  if ( (a2 & 0xF000000) != 0x6000000 )
    return 3221225485LL;
  v3 = sub_140847B58(a1, a2, a3, a3);
  if ( !v3 )
    return 3221226021LL;
  v6 = *(_BYTE *)(*(unsigned int *)(v3 + 4) + v3);
  result = 0LL;
  *v4 = v6;
  return result;
}
