/*
 * XREFs of sub_140AB451C @ 0x140AB451C
 * Callers:
 *     sub_14065A848 @ 0x14065A848 (sub_14065A848.c)
 *     sub_14068C0C4 @ 0x14068C0C4 (sub_14068C0C4.c)
 *     sub_14068C544 @ 0x14068C544 (sub_14068C544.c)
 *     sub_14079AE04 @ 0x14079AE04 (sub_14079AE04.c)
 *     sub_14079B0D0 @ 0x14079B0D0 (sub_14079B0D0.c)
 *     sub_14079B3A0 @ 0x14079B3A0 (sub_14079B3A0.c)
 *     sub_14079BD98 @ 0x14079BD98 (sub_14079BD98.c)
 *     sub_14079C290 @ 0x14079C290 (sub_14079C290.c)
 *     sub_14079C578 @ 0x14079C578 (sub_14079C578.c)
 *     sub_14079CC20 @ 0x14079CC20 (sub_14079CC20.c)
 *     sub_1407C8130 @ 0x1407C8130 (sub_1407C8130.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 *     sub_1407C9904 @ 0x1407C9904 (sub_1407C9904.c)
 *     sub_14083D244 @ 0x14083D244 (sub_14083D244.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_140AB451C(__int64 a1, __int64 a2, _WORD *a3)
{
  __int64 v3; // rax

  v3 = *(_QWORD *)(a2 + 8);
  *a3 |= 1u;
  return v3 & 0xFFFFFFFFFFFFFFF0uLL;
}
