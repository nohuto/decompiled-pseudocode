/*
 * XREFs of sub_14033C33C @ 0x14033C33C
 * Callers:
 *     sub_140249930 @ 0x140249930 (sub_140249930.c)
 *     sub_14024DD20 @ 0x14024DD20 (sub_14024DD20.c)
 *     sub_140277580 @ 0x140277580 (sub_140277580.c)
 *     sub_14027D03C @ 0x14027D03C (sub_14027D03C.c)
 *     sub_14028CF90 @ 0x14028CF90 (sub_14028CF90.c)
 *     sub_1402E5708 @ 0x1402E5708 (sub_1402E5708.c)
 *     sub_140316400 @ 0x140316400 (sub_140316400.c)
 *     sub_14033B770 @ 0x14033B770 (sub_14033B770.c)
 *     sub_14037E338 @ 0x14037E338 (sub_14037E338.c)
 *     sub_1403B770C @ 0x1403B770C (sub_1403B770C.c)
 *     sub_1403C9B18 @ 0x1403C9B18 (sub_1403C9B18.c)
 *     sub_14058D990 @ 0x14058D990 (sub_14058D990.c)
 *     sub_1405A032C @ 0x1405A032C (sub_1405A032C.c)
 *     sub_1405ADCD4 @ 0x1405ADCD4 (sub_1405ADCD4.c)
 *     sub_1405AED7C @ 0x1405AED7C (sub_1405AED7C.c)
 *     sub_1405B0B24 @ 0x1405B0B24 (sub_1405B0B24.c)
 *     sub_1405B4024 @ 0x1405B4024 (sub_1405B4024.c)
 *     sub_140B09B18 @ 0x140B09B18 (sub_140B09B18.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_14033C33C(__int64 a1, char a2, int a3)
{
  unsigned __int64 v4; // r9
  unsigned __int64 result; // rax
  signed __int64 v6; // rdx
  bool i; // zf
  unsigned __int64 v8; // rcx

  v4 = (unsigned __int64)(a2 & 7) << 59;
  if ( a3 )
  {
    result = v4 | *(_QWORD *)(a1 + 24) & 0xC7FFFFFFFFFFFFFFuLL;
    *(_QWORD *)(a1 + 24) = result;
  }
  else
  {
    v6 = *(_QWORD *)(a1 + 24);
    result = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 24), v4 | v6 & 0xC7FFFFFFFFFFFFFFuLL, v6);
    for ( i = v6 == result; !i; i = v8 == result )
    {
      v8 = result;
      result = _InterlockedCompareExchange64(
                 (volatile signed __int64 *)(a1 + 24),
                 v4 | result & 0xC7FFFFFFFFFFFFFFuLL,
                 result);
    }
  }
  return result;
}
