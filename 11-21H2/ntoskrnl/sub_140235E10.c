/*
 * XREFs of sub_140235E10 @ 0x140235E10
 * Callers:
 *     sub_140235D34 @ 0x140235D34 (sub_140235D34.c)
 *     StartRoutine @ 0x14026C240 (StartRoutine.c)
 *     sub_14026C4CC @ 0x14026C4CC (sub_14026C4CC.c)
 *     sub_140277580 @ 0x140277580 (sub_140277580.c)
 *     sub_140278960 @ 0x140278960 (sub_140278960.c)
 *     sub_1402CA5E0 @ 0x1402CA5E0 (sub_1402CA5E0.c)
 *     sub_1403872A4 @ 0x1403872A4 (sub_1403872A4.c)
 *     sub_1403D6C20 @ 0x1403D6C20 (sub_1403D6C20.c)
 *     sub_140589B90 @ 0x140589B90 (sub_140589B90.c)
 *     sub_14058CF54 @ 0x14058CF54 (sub_14058CF54.c)
 *     sub_14058D990 @ 0x14058D990 (sub_14058D990.c)
 *     sub_1405AF1CC @ 0x1405AF1CC (sub_1405AF1CC.c)
 *     sub_1405B2A90 @ 0x1405B2A90 (sub_1405B2A90.c)
 *     sub_1405BF718 @ 0x1405BF718 (sub_1405BF718.c)
 *     sub_1405C0D40 @ 0x1405C0D40 (sub_1405C0D40.c)
 *     sub_1405C11C0 @ 0x1405C11C0 (sub_1405C11C0.c)
 *     sub_1405C1CE0 @ 0x1405C1CE0 (sub_1405C1CE0.c)
 *     sub_1405C2478 @ 0x1405C2478 (sub_1405C2478.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140235E10(__int64 a1)
{
  __int64 result; // rax

  if ( !_bittest64((const signed __int64 *)(a1 + 40), 0x28u) )
    return 0xFFFFFFFFLL;
  result = 3 - (*(_BYTE *)(a1 + 36) & 3u);
  if ( (_DWORD)result == 3 )
    return 0xFFFFFFFFLL;
  return result;
}
