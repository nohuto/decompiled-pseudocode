/*
 * XREFs of sub_14086448C @ 0x14086448C
 * Callers:
 *     sub_140A544B0 @ 0x140A544B0 (sub_140A544B0.c)
 * Callees:
 *     sub_1402E2D20 @ 0x1402E2D20 (sub_1402E2D20.c)
 *     sub_140A54598 @ 0x140A54598 (sub_140A54598.c)
 */

__int64 __fastcall sub_14086448C(__int64 *a1)
{
  unsigned __int64 v2; // rax
  unsigned int v3; // ebx

  v2 = sub_140A54598(1LL);
  v3 = 0;
  if ( v2 )
    sub_1402E2D20(v2, *a1, 0, 0, v2 + 64);
  else
    return (unsigned int)-1073741670;
  return v3;
}
