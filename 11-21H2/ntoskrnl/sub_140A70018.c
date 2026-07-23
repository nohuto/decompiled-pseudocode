/*
 * XREFs of sub_140A70018 @ 0x140A70018
 * Callers:
 *     sub_1402DAB78 @ 0x1402DAB78 (sub_1402DAB78.c)
 * Callees:
 *     sub_140A7042C @ 0x140A7042C (sub_140A7042C.c)
 */

char __fastcall sub_140A70018(unsigned __int64 a1, unsigned __int64 a2)
{
  char v2; // si
  _DWORD *v3; // rbx
  unsigned int i; // edi

  v2 = 0;
  v3 = &unk_140C33EC0;
  for ( i = 0; i < 0x20; ++i )
  {
    if ( (v3[8] & 1) != 0 && *(_QWORD *)v3 >= a1 && *(_QWORD *)v3 <= a2 && (unsigned __int8)sub_140A7042C(i + 1) )
      v2 = 1;
    v3 += 10;
  }
  return v2;
}
