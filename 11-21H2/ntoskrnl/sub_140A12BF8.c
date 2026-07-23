/*
 * XREFs of sub_140A12BF8 @ 0x140A12BF8
 * Callers:
 *     sub_14084328C @ 0x14084328C (sub_14084328C.c)
 *     sub_1408432E0 @ 0x1408432E0 (sub_1408432E0.c)
 *     sub_140843334 @ 0x140843334 (sub_140843334.c)
 *     sub_140843388 @ 0x140843388 (sub_140843388.c)
 * Callees:
 *     sub_140A12454 @ 0x140A12454 (sub_140A12454.c)
 */

__int64 __fastcall sub_140A12BF8(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned __int16 a4,
        unsigned __int16 a5,
        unsigned __int16 a6)
{
  unsigned int v9; // ebx
  int v10; // eax
  unsigned int v11; // eax
  unsigned int v12; // eax

  v9 = 0;
  v10 = sub_140A12454(a1, a3, a4);
  if ( v10 == -1 )
  {
    v11 = sub_140A12454(a1, a3, a5);
    if ( v11 == -1 || v11 >= a2 )
    {
      v12 = sub_140A12454(a1, a3, a6);
      if ( v12 == -1 || v12 <= a2 )
        return 1;
    }
  }
  else if ( v10 == a2 )
  {
    return 1;
  }
  return v9;
}
