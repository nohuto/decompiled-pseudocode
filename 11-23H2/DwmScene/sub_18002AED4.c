/*
 * XREFs of sub_18002AED4 @ 0x18002AED4
 * Callers:
 *     sub_18002AED4 @ 0x18002AED4 (sub_18002AED4.c)
 *     sub_18002B860 @ 0x18002B860 (sub_18002B860.c)
 * Callees:
 *     sub_18002AED4 @ 0x18002AED4 (sub_18002AED4.c)
 *     sub_18002AF58 @ 0x18002AF58 (sub_18002AF58.c)
 */

__int64 __fastcall sub_18002AED4(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 *i; // rbx
  __int64 *v6; // rdx
  __int64 v7; // rcx
  __int64 result; // rax

  for ( i = a3; !*((_BYTE *)i + 25); result = sub_18002AF58(v7, v6) )
  {
    sub_18002AED4(a1, a2, i[2]);
    v6 = i;
    i = (__int64 *)*i;
  }
  return result;
}
