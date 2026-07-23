/*
 * XREFs of sub_140337F0C @ 0x140337F0C
 * Callers:
 *     sub_140231A68 @ 0x140231A68 (sub_140231A68.c)
 *     sub_14028C82C @ 0x14028C82C (sub_14028C82C.c)
 *     sub_140327C60 @ 0x140327C60 (sub_140327C60.c)
 *     sub_140334C40 @ 0x140334C40 (sub_140334C40.c)
 *     sub_140337B00 @ 0x140337B00 (sub_140337B00.c)
 *     sub_140337F60 @ 0x140337F60 (sub_140337F60.c)
 *     sub_140369180 @ 0x140369180 (sub_140369180.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140337F0C(__int64 a1)
{
  unsigned __int64 v1; // rdx

  v1 = *(_QWORD *)(a1 + 8) | 0x8000000000000000uLL;
  if ( v1 > 0xFFFFF6BFFFFFFF78uLL || v1 < 0xFFFFF68000000000uLL )
    return 0LL;
  else
    return (*(unsigned __int8 *)(a1 + 35) >> 5) & 1;
}
