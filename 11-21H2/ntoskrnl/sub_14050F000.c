/*
 * XREFs of sub_14050F000 @ 0x14050F000
 * Callers:
 *     sub_140A500C0 @ 0x140A500C0 (sub_140A500C0.c)
 *     sub_140A5A7C8 @ 0x140A5A7C8 (sub_140A5A7C8.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 sub_14050F000()
{
  __int64 result; // rax
  __int64 v1; // [rsp+38h] [rbp+10h] BYREF

  result = 0LL;
  v1 = 0LL;
  if ( qword_140C4C510 )
  {
    LODWORD(v1) = 1;
    BYTE4(v1) = 1;
    return sub_14042A5E0(&v1, qword_140C4C510);
  }
  return result;
}
