/*
 * XREFs of sub_140551A30 @ 0x140551A30
 * Callers:
 *     sub_1405519D0 @ 0x1405519D0 (sub_1405519D0.c)
 * Callees:
 *     sub_1405517A0 @ 0x1405517A0 (sub_1405517A0.c)
 *     sub_140551AA0 @ 0x140551AA0 (sub_140551AA0.c)
 */

__int64 __fastcall sub_140551A30(__int64 a1)
{
  __int64 result; // rax

  if ( byte_140C54D4A )
  {
    sub_1405517A0();
    if ( dword_140C54D50 != 2 )
      VidCleanUp();
    dword_140C54D50 = 2;
    qword_140D01888 = a1;
    return sub_140551AA0();
  }
  else
  {
    dword_140C54D50 = 2;
    qword_140D01888 = a1;
  }
  return result;
}
