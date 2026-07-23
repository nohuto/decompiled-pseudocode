/*
 * XREFs of sub_140A12454 @ 0x140A12454
 * Callers:
 *     sub_140A12BF8 @ 0x140A12BF8 (sub_140A12BF8.c)
 * Callees:
 *     sub_140792CCC @ 0x140792CCC (sub_140792CCC.c)
 *     sub_1407ECF5C @ 0x1407ECF5C (sub_1407ECF5C.c)
 */

__int64 __fastcall sub_140A12454(__int64 a1, __int64 a2, unsigned __int16 a3)
{
  unsigned int v3; // edi
  unsigned int v5; // ebx
  unsigned int v6; // eax

  v3 = a3;
  v5 = -1;
  v6 = sub_140792CCC(a1, a2, a3);
  if ( v6 )
    return (unsigned int)sub_1407ECF5C(a1, v6, v3);
  return v5;
}
