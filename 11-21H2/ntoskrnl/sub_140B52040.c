/*
 * XREFs of sub_140B52040 @ 0x140B52040
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402D9A20 @ 0x1402D9A20 (sub_1402D9A20.c)
 */

__int64 __fastcall sub_140B52040(unsigned __int64 a1)
{
  __int64 *v2; // rcx
  __int64 *i; // rdx
  unsigned __int64 v4; // r8

  v2 = 0LL;
  for ( i = *(__int64 **)(qword_140D068D0 + 16); i != (__int64 *)(qword_140D068D0 + 16); i = (__int64 *)*i )
  {
    v4 = i[6];
    if ( a1 >= v4 && a1 < v4 + *((unsigned int *)i + 16) )
    {
      v2 = i;
      return sub_1402D9A20((void *)v2[6]);
    }
  }
  return sub_1402D9A20((void *)v2[6]);
}
