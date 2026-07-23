/*
 * XREFs of sub_140A91728 @ 0x140A91728
 * Callers:
 *     sub_140A8B840 @ 0x140A8B840 (sub_140A8B840.c)
 * Callees:
 *     sub_1402D81DC @ 0x1402D81DC (sub_1402D81DC.c)
 *     sub_1402D8518 @ 0x1402D8518 (sub_1402D8518.c)
 *     sub_14045F6C8 @ 0x14045F6C8 (sub_14045F6C8.c)
 */

char sub_140A91728()
{
  char result; // al
  unsigned __int64 v1; // r8
  volatile signed __int32 *v2; // rax
  __int128 v3; // [rsp+20h] [rbp-18h] BYREF

  result = dword_140C29FC0;
  v3 = 0LL;
  if ( (dword_140C29FC0 & 0x10) != 0 )
  {
    sub_14045F6C8((__int64)&v3, 1);
    v2 = (volatile signed __int32 *)sub_1402D8518(qword_140D58A38, (__int64)&v3, v1, 0LL);
    if ( v2 )
      _InterlockedOr(v2 + 4, 2u);
    return sub_1402D81DC((__int64)&v3);
  }
  return result;
}
