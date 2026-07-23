/*
 * XREFs of sub_14075E074 @ 0x14075E074
 * Callers:
 *     sub_14075D1B4 @ 0x14075D1B4 (sub_14075D1B4.c)
 *     sub_14075DFE4 @ 0x14075DFE4 (sub_14075DFE4.c)
 *     sub_14084E03C @ 0x14084E03C (sub_14084E03C.c)
 *     sub_1409DE730 @ 0x1409DE730 (sub_1409DE730.c)
 *     sub_1409DEB60 @ 0x1409DEB60 (sub_1409DEB60.c)
 * Callees:
 *     sub_140202234 @ 0x140202234 (sub_140202234.c)
 *     memset @ 0x140435E00 (memset.c)
 */

PSLIST_ENTRY __fastcall sub_14075E074(__int64 a1)
{
  PSLIST_ENTRY v2; // rax
  PSLIST_ENTRY v3; // rbx

  v2 = sub_140202234(*(_QWORD *)a1);
  v3 = v2;
  if ( v2 )
  {
    memset(v2, 0, *(unsigned int *)(a1 + 8));
    *((_QWORD *)&v3[1].Next + 1) = 1LL;
    LODWORD(v3[1].Next) = *(_DWORD *)(a1 + 24);
    LODWORD(v3[2].Next) = *(_DWORD *)(a1 + 28);
  }
  return v3;
}
