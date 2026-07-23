/*
 * XREFs of sub_1408638B0 @ 0x1408638B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1407EED48 @ 0x1407EED48 (sub_1407EED48.c)
 *     sub_14083248C @ 0x14083248C (sub_14083248C.c)
 *     sub_140A47CF8 @ 0x140A47CF8 (sub_140A47CF8.c)
 *     sub_140A48330 @ 0x140A48330 (sub_140A48330.c)
 */

__int64 __fastcall sub_1408638B0(_QWORD *a1, int *a2, int a3)
{
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r9
  int v10; // eax

  v6 = -1073741811;
  sub_140A48330((_DWORD)a1);
  v9 = 0x4A702988C36F0EB4LL - *a1;
  if ( *a1 == 0x4A702988C36F0EB4LL )
    v9 = 0x33242CFC8408EE8ELL - a1[1];
  if ( !v9 && a3 == 4 && a2 )
  {
    dword_140D06C04 = *a2;
    v10 = dword_140D06C04;
    if ( !dword_140D06C04 )
      v10 = -1;
    if ( v10 != dword_140C0C7F4 )
    {
      dword_140C0C7F4 = v10;
      sub_14083248C();
    }
    sub_1407EED48();
    v6 = 0;
  }
  sub_140A47CF8(v8, v7);
  return v6;
}
