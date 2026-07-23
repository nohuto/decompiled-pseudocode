/*
 * XREFs of sub_1406543F8 @ 0x1406543F8
 * Callers:
 *     sub_140AA8ED0 @ 0x140AA8ED0 (sub_140AA8ED0.c)
 *     sub_140AA9660 @ 0x140AA9660 (sub_140AA9660.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

char __fastcall sub_1406543F8(unsigned int a1, _BYTE *a2)
{
  if ( a1 < 4 && *((_QWORD *)&unk_140D04CF0 + 5 * a1) )
  {
    if ( *((_BYTE *)&unk_140D04CF0 + 40 * a1 + 33) )
    {
      *a2 = *((_BYTE *)&unk_140D04CF0 + 40 * a1 + 32);
      *((_BYTE *)&unk_140D04CF0 + 40 * a1 + 33) = 0;
      return 1;
    }
    if ( !(unsigned int)sub_14042A5E0((char *)&unk_140D04CF0 + 40 * a1, a2) )
      return 1;
  }
  return 0;
}
