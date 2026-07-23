/*
 * XREFs of sub_140A4E360 @ 0x140A4E360
 * Callers:
 *     sub_1403A78F0 @ 0x1403A78F0 (sub_1403A78F0.c)
 *     sub_140800338 @ 0x140800338 (sub_140800338.c)
 * Callees:
 *     sub_140AAB038 @ 0x140AAB038 (sub_140AAB038.c)
 *     sub_140AAB6EC @ 0x140AAB6EC (sub_140AAB6EC.c)
 */

__int64 sub_140A4E360()
{
  __int64 result; // rax

  if ( !qword_140C547D8 )
    return sub_140AAB6EC();
  sub_140AAB038();
  qword_140C547D8 = 0LL;
  result = sub_140AAB6EC();
  byte_140C547E0 = 0;
  return result;
}
