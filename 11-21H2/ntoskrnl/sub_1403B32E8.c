/*
 * XREFs of sub_1403B32E8 @ 0x1403B32E8
 * Callers:
 *     sub_1403B8E60 @ 0x1403B8E60 (sub_1403B8E60.c)
 *     sub_140A53F54 @ 0x140A53F54 (sub_140A53F54.c)
 * Callees:
 *     sub_1403B3A6C @ 0x1403B3A6C (sub_1403B3A6C.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

char __fastcall sub_1403B32E8(__int64 a1, __int64 a2)
{
  if ( qword_140C4C530 )
    return sub_14042A5E0(a1, a2);
  else
    return (unsigned __int8)sub_1403B3A6C() != 0;
}
