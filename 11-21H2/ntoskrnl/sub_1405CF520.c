/*
 * XREFs of sub_1405CF520 @ 0x1405CF520
 * Callers:
 *     sub_140306100 @ 0x140306100 (sub_140306100.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_1405CF520(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  int v4; // [rsp+40h] [rbp+8h] BYREF
  __int64 v5; // [rsp+48h] [rbp+10h]
  __int64 v6; // [rsp+50h] [rbp+18h]

  v6 = 0LL;
  v2 = *(_QWORD *)(a1 + 40);
  v5 = 0LL;
  v4 = 0;
  if ( !*(_BYTE *)(a1 + 33) )
    return sub_14042A5E0(v2, &v4);
  sub_14042A5E0(v2, 0LL);
  *(_QWORD *)(a1 + 16) = v5;
  result = v6;
  *(_QWORD *)(a1 + 8) = v6;
  return result;
}
