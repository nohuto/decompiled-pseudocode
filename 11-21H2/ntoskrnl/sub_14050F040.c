/*
 * XREFs of sub_14050F040 @ 0x14050F040
 * Callers:
 *     sub_14051C22C @ 0x14051C22C (sub_14051C22C.c)
 *     sub_14051C2D8 @ 0x14051C2D8 (sub_14051C2D8.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_14050F040(int a1)
{
  __int64 result; // rax
  int v2; // [rsp+38h] [rbp+10h] BYREF
  int v3; // [rsp+3Ch] [rbp+14h]

  result = 0LL;
  if ( qword_140C4C510 )
  {
    v3 = a1;
    v2 = 2;
    return sub_14042A5E0(&v2, qword_140C4C510);
  }
  return result;
}
