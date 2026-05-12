/*
 * XREFs of sub_1C007FF28 @ 0x1C007FF28
 * Callers:
 *     sub_1C0080710 @ 0x1C0080710 (sub_1C0080710.c)
 * Callees:
 *     sub_1C0080710 @ 0x1C0080710 (sub_1C0080710.c)
 *     sub_1C0080A58 @ 0x1C0080A58 (sub_1C0080A58.c)
 */

__int64 __fastcall sub_1C007FF28(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rsi
  __int64 result; // rax
  char v6; // [rsp+38h] [rbp+10h] BYREF
  int v7; // [rsp+40h] [rbp+18h] BYREF

  v7 = 0;
  v2 = (_QWORD *)(a2 + 16);
  *(_DWORD *)(a2 + 12) = 0;
  v6 = 0;
  while ( 1 )
  {
    result = sub_1C0080A58(a1, &v6, &v7);
    if ( (_DWORD)result )
      break;
    if ( v6 == -15 )
      goto LABEL_7;
    result = sub_1C0080710(a1, v2);
    if ( (int)result < 0 )
      return result;
    ++*(_DWORD *)(a2 + 12);
    v2 = (_QWORD *)*v2;
  }
  if ( (int)result < 0 )
    return result;
LABEL_7:
  ++*(_DWORD *)(a1 + 12);
  return result;
}
