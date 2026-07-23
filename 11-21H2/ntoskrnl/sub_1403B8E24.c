/*
 * XREFs of sub_1403B8E24 @ 0x1403B8E24
 * Callers:
 *     sub_1403B8DA0 @ 0x1403B8DA0 (sub_1403B8DA0.c)
 * Callees:
 *     <none>
 */

ULONG_PTR *__fastcall sub_1403B8E24(int a1)
{
  ULONG_PTR *v1; // rdx
  ULONG_PTR *result; // rax

  if ( dword_140C4EFC0 )
  {
    v1 = (ULONG_PTR *)qword_140C4DE70;
    while ( v1 != &qword_140C4DE70 )
    {
      result = v1;
      v1 = (ULONG_PTR *)*v1;
      if ( !a1 || *((_DWORD *)result + 56) == a1 )
        return result;
    }
  }
  return 0LL;
}
