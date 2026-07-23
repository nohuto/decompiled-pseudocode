/*
 * XREFs of sub_140368FC4 @ 0x140368FC4
 * Callers:
 *     sub_140368F70 @ 0x140368F70 (sub_140368F70.c)
 * Callees:
 *     sub_1402D6254 @ 0x1402D6254 (sub_1402D6254.c)
 *     sub_1402D62A8 @ 0x1402D62A8 (sub_1402D62A8.c)
 *     sub_1402D6B0C @ 0x1402D6B0C (sub_1402D6B0C.c)
 */

__int64 __fastcall sub_140368FC4(int a1)
{
  __int64 result; // rax

  if ( !byte_140C5AC3C )
    result = sub_1402D6B0C((__int64)&unk_140CE2050, 0x16F54A4u, 0, 0, (__int64)&qword_14000EFB0, 1);
  if ( a1 == 2 )
  {
    if ( dword_140C09830 )
    {
      _InterlockedOr(&dword_140C1FC20, 4u);
      sub_1402D6254(128);
      return sub_1402D62A8();
    }
  }
  return result;
}
