/*
 * XREFs of sub_14055EBC8 @ 0x14055EBC8
 * Callers:
 *     sub_1403DB720 @ 0x1403DB720 (sub_1403DB720.c)
 *     sub_14055E2F4 @ 0x14055E2F4 (sub_14055E2F4.c)
 *     sub_14055E880 @ 0x14055E880 (sub_14055E880.c)
 *     sub_14055EDD4 @ 0x14055EDD4 (sub_14055EDD4.c)
 * Callees:
 *     sub_140555FF0 @ 0x140555FF0 (sub_140555FF0.c)
 */

NTSTATUS __fastcall sub_14055EBC8(int a1, __int64 a2, __int64 a3)
{
  NTSTATUS result; // eax

  if ( (byte_140C474F8 & 4) != 0 )
    return sub_140555FF0(qword_140C044F0, (const EVENT_DESCRIPTOR *)qword_1400385C8, a3, a1);
  return result;
}
