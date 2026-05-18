/*
 * XREFs of sub_1800B3360 @ 0x1800B3360
 * Callers:
 *     sub_18002E0C0 @ 0x18002E0C0 (sub_18002E0C0.c)
 * Callees:
 *     sub_1800441D8 @ 0x1800441D8 (sub_1800441D8.c)
 */

__int64 __fastcall sub_1800B3360(__int64 a1)
{
  unsigned __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r10

  if ( *(_BYTE *)sub_1800441D8(a1 + 184) && v1 <= *(_QWORD *)(v3 + 192) )
    return sub_1800B3248(v3, v1, v2);
  else
    return 4LL;
}
