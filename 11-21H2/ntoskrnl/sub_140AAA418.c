/*
 * XREFs of sub_140AAA418 @ 0x140AAA418
 * Callers:
 *     sub_140AA8D9C @ 0x140AA8D9C (sub_140AA8D9C.c)
 *     sub_140AA8ED0 @ 0x140AA8ED0 (sub_140AA8ED0.c)
 *     sub_140AA9594 @ 0x140AA9594 (sub_140AA9594.c)
 *     sub_140AA9660 @ 0x140AA9660 (sub_140AA9660.c)
 *     sub_140AAA178 @ 0x140AAA178 (sub_140AAA178.c)
 *     sub_140AAA2B0 @ 0x140AAA2B0 (sub_140AAA2B0.c)
 *     sub_140AAA374 @ 0x140AAA374 (sub_140AAA374.c)
 * Callees:
 *     sub_14065461C @ 0x14065461C (sub_14065461C.c)
 */

char __fastcall sub_140AAA418(_BYTE *a1, __int64 a2)
{
  char result; // al
  _BYTE *v3; // rbx

  result = *a1;
  v3 = a1;
  while ( result )
  {
    LOBYTE(a2) = result;
    sub_14065461C(*((_DWORD *)qword_140D01468 + 14), a2);
    result = *++v3;
  }
  return result;
}
