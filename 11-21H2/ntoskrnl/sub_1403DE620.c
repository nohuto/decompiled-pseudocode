/*
 * XREFs of sub_1403DE620 @ 0x1403DE620
 * Callers:
 *     <none>
 * Callees:
 *     sub_140A47CF8 @ 0x140A47CF8 (sub_140A47CF8.c)
 *     sub_140A48330 @ 0x140A48330 (sub_140A48330.c)
 */

__int64 __fastcall sub_1403DE620(_QWORD *a1, _DWORD *a2, int a3)
{
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r9

  v6 = -1073741811;
  sub_140A48330(a1, a2);
  v9 = 0x46D1DFA4833A6B62LL - *a1;
  if ( *a1 == 0x46D1DFA4833A6B62LL )
    v9 = 0xD629D0349EE0F882uLL - a1[1];
  if ( !v9 && a3 == 4 && a2 )
  {
    byte_140C23304 = *a2 != 0;
    v6 = 0;
  }
  sub_140A47CF8(v8, v7);
  return v6;
}
