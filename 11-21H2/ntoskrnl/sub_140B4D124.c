/*
 * XREFs of sub_140B4D124 @ 0x140B4D124
 * Callers:
 *     sub_140AF8974 @ 0x140AF8974 (sub_140AF8974.c)
 * Callees:
 *     sub_1403BF3B8 @ 0x1403BF3B8 (sub_1403BF3B8.c)
 *     sub_140B4CF2C @ 0x140B4CF2C (sub_140B4CF2C.c)
 *     sub_140B4CFB4 @ 0x140B4CFB4 (sub_140B4CFB4.c)
 *     sub_140B4D08C @ 0x140B4D08C (sub_140B4D08C.c)
 *     sub_140B4D1B8 @ 0x140B4D1B8 (sub_140B4D1B8.c)
 *     sub_140B4D20C @ 0x140B4D20C (sub_140B4D20C.c)
 */

__int64 sub_140B4D124()
{
  __int64 v0; // rbx
  __int64 result; // rax
  __int64 v2; // rax
  __int64 v3; // r9
  __int64 v4; // rdi
  unsigned __int64 v5; // rax

  v0 = sub_140B4CF2C(1);
  if ( !v0 )
    return 3221225495LL;
  v2 = sub_140B4CF2C(1);
  LOBYTE(v3) = 1;
  v4 = v2;
  v5 = sub_1403BF3B8(v0, 1LL, 1u, v3, 4u);
  if ( !v5 )
    return 3221225495LL;
  qword_140C4ABF8 = v0;
  qword_140C4AC00 = v4;
  qword_140D68740 = v5;
  result = sub_140B4CFB4();
  if ( (int)result >= 0 )
  {
    result = sub_140B4D08C();
    if ( (int)result >= 0 )
    {
      result = sub_140B4D1B8();
      if ( (int)result >= 0 )
        return sub_140B4D20C();
    }
  }
  return result;
}
