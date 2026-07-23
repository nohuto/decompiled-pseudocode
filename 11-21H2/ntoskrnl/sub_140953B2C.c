/*
 * XREFs of sub_140953B2C @ 0x140953B2C
 * Callers:
 *     sub_140953CF8 @ 0x140953CF8 (sub_140953CF8.c)
 * Callees:
 *     sub_1406E34FC @ 0x1406E34FC (sub_1406E34FC.c)
 *     sub_140953970 @ 0x140953970 (sub_140953970.c)
 */

__int64 __fastcall sub_140953B2C(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  PVOID *v3; // rax
  PVOID *v4; // rcx
  PVOID **v5; // rdx
  PVOID **v6; // r8
  PVOID **v7; // rdx

  v2 = 0;
  v3 = (PVOID *)sub_1406E34FC(a1, a2, 0);
  if ( v3 )
  {
    v4 = (PVOID *)*v3;
    if ( *((PVOID **)*v3 + 1) != v3
      || (v5 = (PVOID **)v3[1], *v5 != v3)
      || (*v5 = v4, v4[1] = v5, v6 = (PVOID **)v3[2], v6[1] != v3 + 2)
      || (v7 = (PVOID **)v3[3], *v7 != v3 + 2) )
    {
      __fastfail(3u);
    }
    *v7 = (PVOID *)v6;
    v6[1] = (PVOID *)v7;
    sub_140953970(v3);
  }
  else
  {
    return (unsigned int)-1073741275;
  }
  return v2;
}
