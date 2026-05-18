/*
 * XREFs of sub_180058C14 @ 0x180058C14
 * Callers:
 *     sub_180058C14 @ 0x180058C14 (sub_180058C14.c)
 *     sub_1800598B0 @ 0x1800598B0 (sub_1800598B0.c)
 *     sub_18005E7CC @ 0x18005E7CC (sub_18005E7CC.c)
 * Callees:
 *     sub_180058C14 @ 0x180058C14 (sub_180058C14.c)
 *     sub_180058C6C @ 0x180058C6C (sub_180058C6C.c)
 */

__int64 __fastcall sub_180058C14(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 *i; // rbx
  __int64 *v6; // rdx
  __int64 v7; // rcx
  __int64 result; // rax

  for ( i = a3; !*((_BYTE *)i + 25); result = sub_180058C6C(v7, v6) )
  {
    sub_180058C14(a1, a2, i[2]);
    v6 = i;
    i = (__int64 *)*i;
  }
  return result;
}
