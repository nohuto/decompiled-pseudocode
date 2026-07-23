/*
 * XREFs of sub_140864BF0 @ 0x140864BF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140A47CF8 @ 0x140A47CF8 (sub_140A47CF8.c)
 *     sub_140A48330 @ 0x140A48330 (sub_140A48330.c)
 */

__int64 __fastcall sub_140864BF0(int a1, int *a2, int a3)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx

  if ( a3 == 4 && (unsigned int)*a2 <= 1 )
  {
    v4 = 0;
    sub_140A48330(a1);
    dword_140C2331C = *a2;
    sub_140A47CF8(v6, v5);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v4;
}
