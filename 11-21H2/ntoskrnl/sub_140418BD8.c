/*
 * XREFs of sub_140418BD8 @ 0x140418BD8
 * Callers:
 *     sub_1403BFE70 @ 0x1403BFE70 (sub_1403BFE70.c)
 *     sub_1403D5E00 @ 0x1403D5E00 (sub_1403D5E00.c)
 *     sub_140418CD8 @ 0x140418CD8 (sub_140418CD8.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x1403C03A0 (HviIsAnyHypervisorPresent.c)
 */

_BOOL8 __fastcall sub_140418BD8(__int64 a1)
{
  return *(_BYTE *)(a1 + 141) == 1
      && (qword_140D06958 & 0x1000000) == 0
      && (HviIsAnyHypervisorPresent() || *(_BYTE *)(a1 + 64) != 25);
}
