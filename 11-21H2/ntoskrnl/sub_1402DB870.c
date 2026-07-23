/*
 * XREFs of sub_1402DB870 @ 0x1402DB870
 * Callers:
 *     sub_1402DB738 @ 0x1402DB738 (sub_1402DB738.c)
 *     sub_140A880B0 @ 0x140A880B0 (sub_140A880B0.c)
 *     sub_140A8B450 @ 0x140A8B450 (sub_140A8B450.c)
 *     sub_140A91AD0 @ 0x140A91AD0 (sub_140A91AD0.c)
 *     sub_140A91EDC @ 0x140A91EDC (sub_140A91EDC.c)
 *     sub_140A9F0C0 @ 0x140A9F0C0 (sub_140A9F0C0.c)
 *     sub_140A9F1DC @ 0x140A9F1DC (sub_140A9F1DC.c)
 *     sub_140AA144C @ 0x140AA144C (sub_140AA144C.c)
 *     sub_140AA1590 @ 0x140AA1590 (sub_140AA1590.c)
 *     sub_140AA16A4 @ 0x140AA16A4 (sub_140AA16A4.c)
 *     sub_140AA71F0 @ 0x140AA71F0 (sub_140AA71F0.c)
 * Callees:
 *     sub_1402DB890 @ 0x1402DB890 (sub_1402DB890.c)
 */

__int64 __fastcall sub_1402DB870(_SLIST_ENTRY *a1)
{
  KeGetCurrentIrql();
  return sub_1402DB890(a1);
}
