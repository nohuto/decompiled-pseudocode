/*
 * XREFs of sub_14059673C @ 0x14059673C
 * Callers:
 *     sub_14058DCA8 @ 0x14058DCA8 (sub_14058DCA8.c)
 *     sub_140597560 @ 0x140597560 (sub_140597560.c)
 *     sub_140A48B0C @ 0x140A48B0C (sub_140A48B0C.c)
 *     sub_140A5B810 @ 0x140A5B810 (sub_140A5B810.c)
 * Callees:
 *     sub_1403867F4 @ 0x1403867F4 (sub_1403867F4.c)
 */

__int64 __fastcall sub_14059673C(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 16600);
  if ( byte_140C53444 )
  {
    ++*(_DWORD *)(result + 28);
    return sub_1403867F4(a1, 4);
  }
  return result;
}
