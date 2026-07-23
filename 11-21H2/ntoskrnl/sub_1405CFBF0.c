/*
 * XREFs of sub_1405CFBF0 @ 0x1405CFBF0
 * Callers:
 *     sub_1405CFB5C @ 0x1405CFB5C (sub_1405CFB5C.c)
 *     sub_14098F180 @ 0x14098F180 (sub_14098F180.c)
 * Callees:
 *     sub_1402E2D20 @ 0x1402E2D20 (sub_1402E2D20.c)
 *     sub_140369B48 @ 0x140369B48 (sub_140369B48.c)
 */

__int64 sub_1405CFBF0()
{
  __int64 result; // rax

  if ( (byte_140C23908 & 1) != 0 )
  {
    sub_140369B48(3LL, (__int64)"PopCoalescing: Coalescing timer activated\n");
    result = sub_1402E2D20(
               (unsigned __int64)&stru_140C238C0,
               -10000000LL * dword_140C0C804,
               0,
               0,
               (__int64)&dword_140C23860);
    _interlockedbittestandset((volatile signed __int32 *)&stru_140C238C0, 9u);
  }
  return result;
}
