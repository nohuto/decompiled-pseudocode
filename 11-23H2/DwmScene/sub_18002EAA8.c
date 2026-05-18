/*
 * XREFs of sub_18002EAA8 @ 0x18002EAA8
 * Callers:
 *     sub_18002EAA8 @ 0x18002EAA8 (sub_18002EAA8.c)
 *     sub_1800318EC @ 0x1800318EC (sub_1800318EC.c)
 * Callees:
 *     sub_18002EAA8 @ 0x18002EAA8 (sub_18002EAA8.c)
 *     sub_18002F224 @ 0x18002F224 (sub_18002F224.c)
 */

__int64 __fastcall sub_18002EAA8(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 *i; // rbx
  __int64 *v6; // rdx
  __int64 v7; // rcx
  __int64 result; // rax

  for ( i = a3; !*((_BYTE *)i + 25); result = sub_18002F224(v7, v6) )
  {
    sub_18002EAA8(a1, a2, i[2]);
    v6 = i;
    i = (__int64 *)*i;
  }
  return result;
}
