/*
 * XREFs of sub_18005F298 @ 0x18005F298
 * Callers:
 *     sub_18005F1F4 @ 0x18005F1F4 (sub_18005F1F4.c)
 *     sub_18005F298 @ 0x18005F298 (sub_18005F298.c)
 *     sub_1800615A8 @ 0x1800615A8 (sub_1800615A8.c)
 * Callees:
 *     sub_18005F298 @ 0x18005F298 (sub_18005F298.c)
 *     sub_18005F340 @ 0x18005F340 (sub_18005F340.c)
 */

__int64 __fastcall sub_18005F298(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 *i; // rbx
  __int64 *v6; // rdx
  __int64 v7; // rcx
  __int64 result; // rax

  for ( i = a3; !*((_BYTE *)i + 25); result = sub_18005F340(v7, v6) )
  {
    sub_18005F298(a1, a2, i[2]);
    v6 = i;
    i = (__int64 *)*i;
  }
  return result;
}
