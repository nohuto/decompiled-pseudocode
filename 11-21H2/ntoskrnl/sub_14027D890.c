/*
 * XREFs of sub_14027D890 @ 0x14027D890
 * Callers:
 *     sub_14031EAA0 @ 0x14031EAA0 (sub_14031EAA0.c)
 *     sub_1406A4140 @ 0x1406A4140 (sub_1406A4140.c)
 *     sub_1406F4650 @ 0x1406F4650 (sub_1406F4650.c)
 *     sub_1407BBF50 @ 0x1407BBF50 (sub_1407BBF50.c)
 *     sub_1407BCB30 @ 0x1407BCB30 (sub_1407BCB30.c)
 *     sub_1407BD420 @ 0x1407BD420 (sub_1407BD420.c)
 *     sub_140A4FFC0 @ 0x140A4FFC0 (sub_140A4FFC0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14027D890(unsigned __int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rax

  if ( (dword_140D06880 & 0xC00000) != 0
    && *(_BYTE *)(*((_QWORD *)KeGetCurrentThread() + 23) + 912LL) != 1
    && (a2 & 1) != 0
    && ((a2 & 0x20) == 0 || (a2 & 0x42) == 0) )
  {
    v3 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1928LL);
    if ( v3 )
    {
      v4 = *(_QWORD *)(v3 + 8 * ((a1 >> 3) & 0x1FF));
      if ( (v4 & 0x20) != 0 )
        a2 |= 0x20uLL;
      if ( (v4 & 0x42) != 0 )
        return a2 | 0x42;
    }
  }
  return a2;
}
