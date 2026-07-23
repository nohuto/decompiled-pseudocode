/*
 * XREFs of sub_140274508 @ 0x140274508
 * Callers:
 *     sub_14021372C @ 0x14021372C (sub_14021372C.c)
 *     sub_14023EB78 @ 0x14023EB78 (sub_14023EB78.c)
 *     sub_14024076C @ 0x14024076C (sub_14024076C.c)
 *     sub_140245DF4 @ 0x140245DF4 (sub_140245DF4.c)
 *     sub_140249930 @ 0x140249930 (sub_140249930.c)
 *     sub_14024C5E0 @ 0x14024C5E0 (sub_14024C5E0.c)
 *     sub_14026F180 @ 0x14026F180 (sub_14026F180.c)
 *     sub_14026FA0C @ 0x14026FA0C (sub_14026FA0C.c)
 *     sub_14027449C @ 0x14027449C (sub_14027449C.c)
 *     sub_14027FE9C @ 0x14027FE9C (sub_14027FE9C.c)
 *     sub_14027FEF8 @ 0x14027FEF8 (sub_14027FEF8.c)
 *     sub_1402BE8E0 @ 0x1402BE8E0 (sub_1402BE8E0.c)
 *     sub_140312BB0 @ 0x140312BB0 (sub_140312BB0.c)
 *     sub_140327C60 @ 0x140327C60 (sub_140327C60.c)
 *     sub_14033F41C @ 0x14033F41C (sub_14033F41C.c)
 *     sub_140399444 @ 0x140399444 (sub_140399444.c)
 *     sub_140581D58 @ 0x140581D58 (sub_140581D58.c)
 *     sub_140591F50 @ 0x140591F50 (sub_140591F50.c)
 *     sub_1405954F4 @ 0x1405954F4 (sub_1405954F4.c)
 *     sub_14059B62C @ 0x14059B62C (sub_14059B62C.c)
 *     sub_1405A032C @ 0x1405A032C (sub_1405A032C.c)
 *     sub_1405A0B10 @ 0x1405A0B10 (sub_1405A0B10.c)
 *     sub_1405A4940 @ 0x1405A4940 (sub_1405A4940.c)
 *     sub_1405B85F8 @ 0x1405B85F8 (sub_1405B85F8.c)
 *     sub_1405BB938 @ 0x1405BB938 (sub_1405BB938.c)
 *     sub_1405C3C6C @ 0x1405C3C6C (sub_1405C3C6C.c)
 * Callees:
 *     sub_140337EA0 @ 0x140337EA0 (sub_140337EA0.c)
 *     sub_140337F60 @ 0x140337F60 (sub_140337F60.c)
 */

__int64 __fastcall sub_140274508(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // r9d
  unsigned int v5; // r10d

  if ( (a2 & 1) == 0 && *(_WORD *)(a1 + 32) >= 0x7FFFu )
    return 0LL;
  if ( (unsigned int)sub_140337EA0(a1, a2, a3, 1LL) )
  {
    v4 = sub_140337F60(a1, v5);
    if ( !v4 )
      return 0LL;
  }
  ++*(_WORD *)(a1 + 32);
  return v4;
}
