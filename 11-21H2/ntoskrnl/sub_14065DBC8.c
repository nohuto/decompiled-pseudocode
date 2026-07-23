/*
 * XREFs of sub_14065DBC8 @ 0x14065DBC8
 * Callers:
 *     sub_14065D114 @ 0x14065D114 (sub_14065D114.c)
 *     sub_14065D7C4 @ 0x14065D7C4 (sub_14065D7C4.c)
 *     sub_14091FCD8 @ 0x14091FCD8 (sub_14091FCD8.c)
 * Callees:
 *     sub_14053FFEC @ 0x14053FFEC (sub_14053FFEC.c)
 *     sub_140718AE8 @ 0x140718AE8 (sub_140718AE8.c)
 */

__int64 __fastcall sub_14065DBC8(ULONG_PTR BugCheckParameter3, __int64 a2, __int64 a3)
{
  __int16 v3; // r9
  unsigned __int16 v4; // r9
  __int64 result; // rax
  __int64 v6; // r10
  __int64 v7; // r11

  v3 = *(_WORD *)(BugCheckParameter3 + 2);
  if ( (*(_BYTE *)(BugCheckParameter3 + 16) & 1) != 0 )
  {
    v4 = 2 * v3;
    *(_WORD *)a2 = v4;
    if ( v4 > 0x7FFFu )
      sub_14053FFEC(0x31uLL, 1uLL, BugCheckParameter3, v4);
    result = sub_140718AE8(a3, 0x7FFFLL, BugCheckParameter3 + 20, *(unsigned __int16 *)(BugCheckParameter3 + 2));
    *(_QWORD *)(v6 + 8) = v7;
    *(_WORD *)(v6 + 2) = 0x7FFF;
  }
  else
  {
    result = BugCheckParameter3 + 20;
    *(_WORD *)a2 = v3;
    *(_QWORD *)(a2 + 8) = BugCheckParameter3 + 20;
    *(_WORD *)(a2 + 2) = v3;
  }
  return result;
}
