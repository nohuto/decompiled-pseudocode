/*
 * XREFs of sub_1406827E8 @ 0x1406827E8
 * Callers:
 *     sub_1406822EC @ 0x1406822EC (sub_1406822EC.c)
 *     sub_140685A20 @ 0x140685A20 (sub_140685A20.c)
 * Callees:
 *     sub_140300B40 @ 0x140300B40 (sub_140300B40.c)
 *     sub_1409B00F8 @ 0x1409B00F8 (sub_1409B00F8.c)
 */

__int64 __fastcall sub_1406827E8(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  signed __int32 v3; // r9d
  int v4; // r10d
  signed __int32 v6; // eax

  v3 = sub_140300B40(a2);
  if ( v4 == v3 )
    return 0LL;
  if ( v4 == -1
    && ((v6 = _InterlockedCompareExchange((volatile signed __int32 *)(v2 + 576), v3, -1), v6 == -1) || v6 == v3) )
  {
    return 0LL;
  }
  else
  {
    return sub_1409B00F8(v2, 0LL);
  }
}
