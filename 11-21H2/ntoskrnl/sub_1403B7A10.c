/*
 * XREFs of sub_1403B7A10 @ 0x1403B7A10
 * Callers:
 *     sub_1403B7624 @ 0x1403B7624 (sub_1403B7624.c)
 *     sub_140582D7C @ 0x140582D7C (sub_140582D7C.c)
 *     sub_14058617C @ 0x14058617C (sub_14058617C.c)
 *     sub_140586A44 @ 0x140586A44 (sub_140586A44.c)
 *     sub_140588F74 @ 0x140588F74 (sub_140588F74.c)
 *     sub_1405BFE08 @ 0x1405BFE08 (sub_1405BFE08.c)
 *     sub_140968AF4 @ 0x140968AF4 (sub_140968AF4.c)
 *     sub_140AF5478 @ 0x140AF5478 (sub_140AF5478.c)
 *     sub_140AF5940 @ 0x140AF5940 (sub_140AF5940.c)
 *     sub_140AF5C0C @ 0x140AF5C0C (sub_140AF5C0C.c)
 *     sub_140AF5F74 @ 0x140AF5F74 (sub_140AF5F74.c)
 *     sub_140AF6408 @ 0x140AF6408 (sub_140AF6408.c)
 *     sub_140B2920C @ 0x140B2920C (sub_140B2920C.c)
 * Callees:
 *     sub_1402C1550 @ 0x1402C1550 (sub_1402C1550.c)
 *     sub_1405A6950 @ 0x1405A6950 (sub_1405A6950.c)
 */

ULONG_PTR __fastcall sub_1403B7A10(ULONG_PTR BugCheckParameter2, ULONG_PTR a2)
{
  ULONG_PTR v4; // rcx
  ULONG_PTR v6; // rdx
  ULONG_PTR v7; // rcx

  v4 = sub_1402C1550(BugCheckParameter2)[2];
  if ( BugCheckParameter2 + a2 > v4 )
    a2 = v4 - BugCheckParameter2;
  if ( qword_140C50710 )
  {
    v6 = *(_QWORD *)(sub_1405A6950(BugCheckParameter2) + 16);
    v7 = v6 - BugCheckParameter2;
    if ( BugCheckParameter2 + a2 <= v6 )
      return a2;
    return v7;
  }
  return a2;
}
