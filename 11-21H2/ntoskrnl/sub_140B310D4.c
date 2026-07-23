/*
 * XREFs of sub_140B310D4 @ 0x140B310D4
 * Callers:
 *     sub_140B026CC @ 0x140B026CC (sub_140B026CC.c)
 * Callees:
 *     sub_1402D6B0C @ 0x1402D6B0C (sub_1402D6B0C.c)
 *     sub_140B5323C @ 0x140B5323C (sub_140B5323C.c)
 */

__int64 sub_140B310D4()
{
  __int64 result; // rax

  qword_140C20B40 = 0LL;
  qword_140C20B48 = 0LL;
  *(__int128 *)((char *)&xmmword_140C20B50 + 8) = 0LL;
  xmmword_140C20B50 = 0LL;
  *(_QWORD *)&xmmword_140C20B50 = 0LL;
  if ( byte_140C5AC3C )
  {
    sub_140B5323C();
    result = sub_1402D6B0C((__int64)&unk_140D01178, 0x135B67Bu, 0, 0, (__int64)&qword_14003ABC8, 0);
    LOBYTE(qword_140C20B40) = 0;
  }
  return result;
}
