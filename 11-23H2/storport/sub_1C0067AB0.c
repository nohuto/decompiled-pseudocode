/*
 * XREFs of sub_1C0067AB0 @ 0x1C0067AB0
 * Callers:
 *     sub_1C0067DA0 @ 0x1C0067DA0 (sub_1C0067DA0.c)
 * Callees:
 *     sub_1C0007798 @ 0x1C0007798 (sub_1C0007798.c)
 */

bool __fastcall sub_1C0067AB0(__int64 a1, char a2)
{
  __int64 v2; // rax
  char v4; // si
  char v5; // bp
  char v6; // di

  v2 = *(_QWORD *)(a1 + 568);
  v4 = byte_1C0093BD8;
  v5 = byte_1C0093BDA;
  v6 = byte_1C0093BD9;
  if ( v2 && *(_QWORD *)(v2 + 176) && ((*(_BYTE *)(a1 + 109) & 2) != 0) != a2
    || (unsigned int)sub_1C0007798(a1, 20) && ((*(_BYTE *)(a1 + 110) & 8) != 0) != v6
    || (unsigned int)sub_1C0007798(a1, 20) && ((*(_BYTE *)(a1 + 110) & 0x10) != 0) != v5 )
  {
    return 1;
  }
  if ( (unsigned int)sub_1C0007798(a1, 20) )
    return ((*(_BYTE *)(a1 + 110) & 0x20) != 0) != v4;
  return 0;
}
