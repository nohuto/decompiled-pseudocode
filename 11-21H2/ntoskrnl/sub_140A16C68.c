/*
 * XREFs of sub_140A16C68 @ 0x140A16C68
 * Callers:
 *     sub_140A11E1C @ 0x140A11E1C (sub_140A11E1C.c)
 * Callees:
 *     sub_14075B1B8 @ 0x14075B1B8 (sub_14075B1B8.c)
 *     sub_14075B444 @ 0x14075B444 (sub_14075B444.c)
 *     sub_140A16BE4 @ 0x140A16BE4 (sub_140A16BE4.c)
 *     sub_140A16D28 @ 0x140A16D28 (sub_140A16D28.c)
 *     sub_140A16EE4 @ 0x140A16EE4 (sub_140A16EE4.c)
 */

__int64 __fastcall sub_140A16C68(__int64 a1, PVOID **a2, _WORD *a3)
{
  PVOID *v6; // rax
  PVOID *v7; // rbx
  int v9; // edi

  *a2 = 0LL;
  v6 = (PVOID *)sub_14075B444(a1, 0x20uLL);
  v7 = v6;
  if ( !v6 )
    return 3221225495LL;
  v6[2] = 0LL;
  v6[3] = 0LL;
  v6[1] = v6;
  *v6 = v6;
  v9 = sub_14075B1B8(v6 + 3, a3);
  if ( v9 < 0 || (v9 = sub_140A16EE4(v7[3], v7), v9 < 0) || (v7[2] = *v7, v9 = sub_140A16D28(a1, v7), v9 < 0) )
    sub_140A16BE4(v7);
  else
    *a2 = v7;
  return (unsigned int)v9;
}
