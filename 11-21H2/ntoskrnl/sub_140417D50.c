/*
 * XREFs of sub_140417D50 @ 0x140417D50
 * Callers:
 *     sub_1404183E0 @ 0x1404183E0 (sub_1404183E0.c)
 *     sub_14073A450 @ 0x14073A450 (sub_14073A450.c)
 * Callees:
 *     sub_14020C420 @ 0x14020C420 (sub_14020C420.c)
 *     sub_140459D9C @ 0x140459D9C (sub_140459D9C.c)
 */

__int64 __fastcall sub_140417D50(__int64 a1, _OWORD *a2)
{
  __int64 v4; // r8
  __int64 v5; // r9
  _WORD *v7; // rax

  if ( !(unsigned __int8)sub_140459D9C(a1, 9LL) )
    return 3221225659LL;
  v7 = sub_14020C420(a1, 9, v4, v5);
  if ( !v7 )
    return 3221225626LL;
  *((_OWORD *)v7 + 4) = *a2;
  return 0LL;
}
