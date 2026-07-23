/*
 * XREFs of sub_14091F960 @ 0x14091F960
 * Callers:
 *     sub_14091EEC4 @ 0x14091EEC4 (sub_14091EEC4.c)
 *     sub_140920AB4 @ 0x140920AB4 (sub_140920AB4.c)
 * Callees:
 *     sub_14053FFEC @ 0x14053FFEC (sub_14053FFEC.c)
 *     sub_140718AE8 @ 0x140718AE8 (sub_140718AE8.c)
 */

__int64 __fastcall sub_14091F960(ULONG_PTR BugCheckParameter3, __int64 a2, _WORD *a3)
{
  __int16 v4; // dx
  unsigned __int16 v5; // dx
  __int64 result; // rax
  __int64 v7; // r10
  __int64 v8; // r11

  v4 = *(_WORD *)(BugCheckParameter3 + 72);
  if ( (*(_BYTE *)(BugCheckParameter3 + 2) & 0x20) != 0 )
  {
    v5 = 2 * v4;
    *(_WORD *)a2 = v5;
    if ( v5 > 0x200u )
      sub_14053FFEC(0x31uLL, 0LL, BugCheckParameter3, v5);
    result = sub_140718AE8(
               a3,
               0x200u,
               (unsigned __int8 *)(BugCheckParameter3 + 76),
               *(unsigned __int16 *)(BugCheckParameter3 + 72));
    *(_QWORD *)(v7 + 8) = v8;
    *(_WORD *)(v7 + 2) = 512;
  }
  else
  {
    *(_WORD *)a2 = v4;
    *(_QWORD *)(a2 + 8) = BugCheckParameter3 + 76;
    result = *(unsigned __int16 *)(BugCheckParameter3 + 52);
    *(_WORD *)(a2 + 2) = result;
  }
  return result;
}
