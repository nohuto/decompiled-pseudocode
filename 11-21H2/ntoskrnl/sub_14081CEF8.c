/*
 * XREFs of sub_14081CEF8 @ 0x14081CEF8
 * Callers:
 *     sub_1407FEC6C @ 0x1407FEC6C (sub_1407FEC6C.c)
 *     sub_140A494E8 @ 0x140A494E8 (sub_140A494E8.c)
 *     sub_140B026CC @ 0x140B026CC (sub_140B026CC.c)
 * Callees:
 *     <none>
 */

void sub_14081CEF8()
{
  dword_140C227EC = 1;
  dword_140C227E0 = 0;
  dword_140C227E8 = 0;
  byte_140C227DD = 0;
  if ( (byte_140C227C0 & 2) == 0 )
  {
    LOBYTE(byte_140C227C0) = 0;
    byte_140C227C2 = 0;
    qword_140C227C4 = 0LL;
    dword_140C227D0 = 0;
    byte_140C227DC = 0;
    dword_140C227D4 = 16;
    dword_140C227CC = 268435459;
  }
}
