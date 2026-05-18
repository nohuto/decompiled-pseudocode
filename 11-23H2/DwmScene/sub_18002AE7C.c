/*
 * XREFs of sub_18002AE7C @ 0x18002AE7C
 * Callers:
 *     sub_18002AE4C @ 0x18002AE4C (sub_18002AE4C.c)
 *     sub_18002AE7C @ 0x18002AE7C (sub_18002AE7C.c)
 *     sub_180074318 @ 0x180074318 (sub_180074318.c)
 * Callees:
 *     sub_18002AE7C @ 0x18002AE7C (sub_18002AE7C.c)
 *     sub_18002AF2C @ 0x18002AF2C (sub_18002AF2C.c)
 */

__int64 __fastcall sub_18002AE7C(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 *i; // rbx
  __int64 *v6; // rdx
  __int64 v7; // rcx
  __int64 result; // rax

  for ( i = a3; !*((_BYTE *)i + 25); result = sub_18002AF2C(v7, v6) )
  {
    sub_18002AE7C(a1, a2, i[2]);
    v6 = i;
    i = (__int64 *)*i;
  }
  return result;
}
