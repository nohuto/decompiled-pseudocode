/*
 * XREFs of sub_180056EE0 @ 0x180056EE0
 * Callers:
 *     sub_180056EE0 @ 0x180056EE0 (sub_180056EE0.c)
 *     sub_1800572B0 @ 0x1800572B0 (sub_1800572B0.c)
 *     sub_18005851C @ 0x18005851C (sub_18005851C.c)
 * Callees:
 *     sub_180056EE0 @ 0x180056EE0 (sub_180056EE0.c)
 *     sub_180056F38 @ 0x180056F38 (sub_180056F38.c)
 */

__int64 __fastcall sub_180056EE0(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 *i; // rbx
  __int64 *v6; // rdx
  __int64 v7; // rcx
  __int64 result; // rax

  for ( i = a3; !*((_BYTE *)i + 25); result = sub_180056F38(v7, v6) )
  {
    sub_180056EE0(a1, a2, i[2]);
    v6 = i;
    i = (__int64 *)*i;
  }
  return result;
}
