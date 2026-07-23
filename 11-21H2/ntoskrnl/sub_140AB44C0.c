/*
 * XREFs of sub_140AB44C0 @ 0x140AB44C0
 * Callers:
 *     sub_14065A848 @ 0x14065A848 (sub_14065A848.c)
 *     sub_140689848 @ 0x140689848 (sub_140689848.c)
 *     sub_140689900 @ 0x140689900 (sub_140689900.c)
 *     sub_14068C0C4 @ 0x14068C0C4 (sub_14068C0C4.c)
 *     sub_14068C154 @ 0x14068C154 (sub_14068C154.c)
 *     sub_14068C544 @ 0x14068C544 (sub_14068C544.c)
 *     sub_14068C820 @ 0x14068C820 (sub_14068C820.c)
 *     sub_14068CEA0 @ 0x14068CEA0 (sub_14068CEA0.c)
 *     sub_1406D59B8 @ 0x1406D59B8 (sub_1406D59B8.c)
 *     sub_14071F300 @ 0x14071F300 (sub_14071F300.c)
 *     sub_14079AE04 @ 0x14079AE04 (sub_14079AE04.c)
 *     sub_14079B0D0 @ 0x14079B0D0 (sub_14079B0D0.c)
 *     sub_14079B3A0 @ 0x14079B3A0 (sub_14079B3A0.c)
 *     sub_14079B518 @ 0x14079B518 (sub_14079B518.c)
 *     sub_14079BD98 @ 0x14079BD98 (sub_14079BD98.c)
 *     sub_14079C290 @ 0x14079C290 (sub_14079C290.c)
 *     sub_14079C440 @ 0x14079C440 (sub_14079C440.c)
 *     sub_14079C578 @ 0x14079C578 (sub_14079C578.c)
 *     sub_14079CC20 @ 0x14079CC20 (sub_14079CC20.c)
 *     sub_1407C8130 @ 0x1407C8130 (sub_1407C8130.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_14083D244 @ 0x14083D244 (sub_14083D244.c)
 *     sub_14091AAA0 @ 0x14091AAA0 (sub_14091AAA0.c)
 *     sub_1409221F4 @ 0x1409221F4 (sub_1409221F4.c)
 *     sub_140AB4C18 @ 0x140AB4C18 (sub_140AB4C18.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140AB44C0(__int64 a1, unsigned int a2)
{
  __int64 v2; // rax

  v2 = a1 + 632LL * (a2 >> 31);
  if ( a2 + (a2 >> 31 << 31) >= *(_DWORD *)(v2 + 280) )
    return 0LL;
  else
    return *(_QWORD *)(*(_QWORD *)(v2 + 288) + 8LL * ((a2 >> 21) & 0x3FF)) + 24LL * ((a2 >> 12) & 0x1FF);
}
