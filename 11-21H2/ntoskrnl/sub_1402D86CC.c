/*
 * XREFs of sub_1402D86CC @ 0x1402D86CC
 * Callers:
 *     sub_1402D8724 @ 0x1402D8724 (sub_1402D8724.c)
 *     sub_140A8ABF8 @ 0x140A8ABF8 (sub_140A8ABF8.c)
 *     sub_140A93724 @ 0x140A93724 (sub_140A93724.c)
 *     sub_140A93A60 @ 0x140A93A60 (sub_140A93A60.c)
 * Callees:
 *     sub_1402D81DC @ 0x1402D81DC (sub_1402D81DC.c)
 *     sub_1402D8518 @ 0x1402D8518 (sub_1402D8518.c)
 */

PVOID __fastcall sub_1402D86CC(unsigned __int64 a1)
{
  PVOID v1; // rbx
  __int128 v3; // [rsp+20h] [rbp-18h] BYREF

  v1 = 0LL;
  if ( !dword_140C1ACBC && dword_140C1B200 )
  {
    v3 = 0LL;
    v1 = sub_1402D8518((__int64 *)&unk_140C1B220, (__int64)&v3, a1, 1LL);
    sub_1402D81DC((__int64)&v3);
  }
  return v1;
}
