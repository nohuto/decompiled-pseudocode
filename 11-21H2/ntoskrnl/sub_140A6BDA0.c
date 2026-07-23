/*
 * XREFs of sub_140A6BDA0 @ 0x140A6BDA0
 * Callers:
 *     sub_140A4B9E0 @ 0x140A4B9E0 (sub_140A4B9E0.c)
 *     sub_140A6BE04 @ 0x140A6BE04 (sub_140A6BE04.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_140A6BDA0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( qword_140CE2070 )
    return sub_14042A5E0(*((_QWORD *)qword_140CE2070 + 2), a2);
  return result;
}
