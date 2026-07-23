/*
 * XREFs of sub_14038B860 @ 0x14038B860
 * Callers:
 *     sub_1407FEC6C @ 0x1407FEC6C (sub_1407FEC6C.c)
 *     sub_1407FF440 @ 0x1407FF440 (sub_1407FF440.c)
 *     sub_140808500 @ 0x140808500 (sub_140808500.c)
 *     sub_140A494E8 @ 0x140A494E8 (sub_140A494E8.c)
 * Callees:
 *     sub_1402D5F7C @ 0x1402D5F7C (sub_1402D5F7C.c)
 *     sub_1402D6004 @ 0x1402D6004 (sub_1402D6004.c)
 */

__int64 __fastcall sub_14038B860(char a1)
{
  __int64 result; // rax

  if ( byte_140C227C1 != a1 )
  {
    byte_140C227C1 = a1;
    if ( a1 )
      return sub_1402D5F7C(5u);
    else
      return sub_1402D6004(5u);
  }
  return result;
}
