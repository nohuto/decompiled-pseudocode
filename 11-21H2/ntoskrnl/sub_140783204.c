/*
 * XREFs of sub_140783204 @ 0x140783204
 * Callers:
 *     sub_14078314C @ 0x14078314C (sub_14078314C.c)
 * Callees:
 *     sub_140783394 @ 0x140783394 (sub_140783394.c)
 */

__int64 __fastcall sub_140783204(__int64 a1, __int64 a2)
{
  int v4; // r9d
  int v5; // r9d
  int v7; // [rsp+30h] [rbp+10h] BYREF

  v7 = 0;
  if ( !(unsigned __int8)sub_140783394(a1, a2, 8LL) )
    return 3221225485LL;
  if ( !(unsigned __int8)sub_140783394(a1 + 18, &v7, (unsigned int)(v4 - 41)) )
    return 3221225485LL;
  *(_WORD *)(a2 + 4) = v7;
  if ( !(unsigned __int8)sub_140783394(a1 + 28, &v7, (unsigned int)(v5 - 41)) )
    return 3221225485LL;
  *(_WORD *)(a2 + 6) = v7;
  if ( !(unsigned __int8)sub_140783394(a1 + 38, &v7, 2LL) )
    return 3221225485LL;
  *(_BYTE *)(a2 + 8) = v7;
  if ( !(unsigned __int8)sub_140783394(a1 + 42, &v7, 2LL) )
    return 3221225485LL;
  *(_BYTE *)(a2 + 9) = v7;
  if ( !(unsigned __int8)sub_140783394(a1 + 48, &v7, 2LL) )
    return 3221225485LL;
  *(_BYTE *)(a2 + 10) = v7;
  if ( !(unsigned __int8)sub_140783394(a1 + 52, &v7, 2LL) )
    return 3221225485LL;
  *(_BYTE *)(a2 + 11) = v7;
  if ( !(unsigned __int8)sub_140783394(a1 + 56, &v7, 2LL) )
    return 3221225485LL;
  *(_BYTE *)(a2 + 12) = v7;
  if ( !(unsigned __int8)sub_140783394(a1 + 60, &v7, 2LL) )
    return 3221225485LL;
  *(_BYTE *)(a2 + 13) = v7;
  if ( !(unsigned __int8)sub_140783394(a1 + 64, &v7, 2LL) )
    return 3221225485LL;
  *(_BYTE *)(a2 + 14) = v7;
  if ( !(unsigned __int8)sub_140783394(a1 + 68, &v7, 2LL) )
    return 3221225485LL;
  *(_BYTE *)(a2 + 15) = v7;
  return 0LL;
}
