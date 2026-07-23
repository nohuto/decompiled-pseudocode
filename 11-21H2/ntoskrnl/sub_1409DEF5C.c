/*
 * XREFs of sub_1409DEF5C @ 0x1409DEF5C
 * Callers:
 *     sub_1409AC180 @ 0x1409AC180 (sub_1409AC180.c)
 * Callees:
 *     sub_140204738 @ 0x140204738 (sub_140204738.c)
 *     sub_1403DD97C @ 0x1403DD97C (sub_1403DD97C.c)
 *     sub_14084EB98 @ 0x14084EB98 (sub_14084EB98.c)
 *     sub_140851114 @ 0x140851114 (sub_140851114.c)
 *     sub_1409E026C @ 0x1409E026C (sub_1409E026C.c)
 */

__int64 __fastcall sub_1409DEF5C(__int64 a1)
{
  unsigned int v2; // eax
  int v3; // ebx
  PVOID *v4; // rax

  v2 = sub_1403DD97C();
  v3 = sub_14084EB98(a1, v2);
  if ( v3 < 0 || (v3 = sub_140851114(a1, 0LL), v3 < 0) )
  {
    v4 = (PVOID *)sub_140204738(a1);
    sub_1409E026C(v4[108]);
  }
  return (unsigned int)v3;
}
