/*
 * XREFs of sub_140401B84 @ 0x140401B84
 * Callers:
 *     sub_140401C90 @ 0x140401C90 (sub_140401C90.c)
 * Callees:
 *     sub_140401368 @ 0x140401368 (sub_140401368.c)
 */

__int64 __fastcall sub_140401B84(__int64 a1)
{
  int v1; // ebx

  v1 = *(_DWORD *)(a1 + 16);
  return v1 * (4480 * v1 + 64 < (unsigned int)((v1 << 8) + 64) ? 256 : 4480)
       + (unsigned int)sub_140401368(*(_QWORD *)(a1 + 112))
       + 64;
}
