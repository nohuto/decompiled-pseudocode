/*
 * XREFs of sub_18004871C @ 0x18004871C
 * Callers:
 *     sub_180052D40 @ 0x180052D40 (sub_180052D40.c)
 *     sub_1800532F0 @ 0x1800532F0 (sub_1800532F0.c)
 *     sub_180062060 @ 0x180062060 (sub_180062060.c)
 *     sub_180066258 @ 0x180066258 (sub_180066258.c)
 *     sub_1800664E8 @ 0x1800664E8 (sub_1800664E8.c)
 *     sub_18008E1E0 @ 0x18008E1E0 (sub_18008E1E0.c)
 *     sub_18008E70C @ 0x18008E70C (sub_18008E70C.c)
 *     sub_18008E85C @ 0x18008E85C (sub_18008E85C.c)
 *     sub_1800A5B30 @ 0x1800A5B30 (sub_1800A5B30.c)
 *     sub_1800AC370 @ 0x1800AC370 (sub_1800AC370.c)
 *     sub_1800B7A1C @ 0x1800B7A1C (sub_1800B7A1C.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 */

_OWORD *__fastcall sub_18004871C(__int64 a1, _OWORD *a2)
{
  __int64 v2; // r8
  signed __int32 v4; // eax
  signed __int32 v5; // ett
  __int128 v6; // kr00_16
  __int128 v8; // [rsp+20h] [rbp-18h] BYREF

  v2 = *(_QWORD *)(a1 + 64);
  v8 = 0LL;
  if ( v2 )
  {
    v4 = *(_DWORD *)(v2 + 8);
    while ( v4 )
    {
      v5 = v4;
      v4 = _InterlockedCompareExchange((volatile signed __int32 *)(v2 + 8), v4 + 1, v4);
      if ( v5 == v4 )
      {
        v6 = *(_OWORD *)(a1 + 56);
        goto LABEL_6;
      }
    }
  }
  v6 = v8;
LABEL_6:
  *a2 = v6;
  v8 = 0LL;
  sub_180010910((__int64)&v8);
  return a2;
}
