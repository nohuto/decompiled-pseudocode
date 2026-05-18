/*
 * XREFs of sub_180087E94 @ 0x180087E94
 * Callers:
 *     sub_180086614 @ 0x180086614 (sub_180086614.c)
 *     sub_18008C4A0 @ 0x18008C4A0 (sub_18008C4A0.c)
 * Callees:
 *     sub_18001090C @ 0x18001090C (sub_18001090C.c)
 *     sub_18002F250 @ 0x18002F250 (sub_18002F250.c)
 */

__int64 __fastcall sub_180087E94(__int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v4; // rax
  __int64 result; // rax

  v4 = sub_18002F250(a2);
  result = sub_18001090C(v4);
  *a1 = result;
  a1[1] = result;
  a1[2] = result + 48 * a2;
  return result;
}
