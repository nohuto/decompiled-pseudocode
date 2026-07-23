/*
 * XREFs of sub_1406545B0 @ 0x1406545B0
 * Callers:
 *     sub_140AA8ED0 @ 0x140AA8ED0 (sub_140AA8ED0.c)
 *     sub_140AA9660 @ 0x140AA9660 (sub_140AA9660.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

char __fastcall sub_1406545B0(unsigned int a1)
{
  __int64 v1; // rbx
  char result; // al

  if ( a1 >= 4 || !*((_QWORD *)&unk_140D04CF0 + 5 * a1) )
    return 0;
  v1 = 5LL * a1;
  result = *((_BYTE *)&unk_140D04CF0 + 40 * a1 + 33);
  if ( !result )
  {
    result = (unsigned int)sub_14042A5E0((char *)&unk_140D04CF0 + 40 * a1, (char *)&unk_140D04CF0 + 40 * a1 + 32) == 0;
    *((_BYTE *)&unk_140D04CF0 + 8 * v1 + 33) = result;
  }
  return result;
}
