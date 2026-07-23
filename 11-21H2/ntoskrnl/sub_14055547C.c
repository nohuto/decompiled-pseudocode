/*
 * XREFs of sub_14055547C @ 0x14055547C
 * Callers:
 *     KeCapturePersistentThreadState @ 0x1405558E0 (KeCapturePersistentThreadState.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_14055547C(unsigned int a1, unsigned int *a2)
{
  unsigned int v3; // r9d

  if ( a1 + *a2 < 0x3FFFC )
    return 1;
  if ( a1 >= 0x3FFFC )
    v3 = 0;
  else
    v3 = 262140 - a1;
  *a2 = v3;
  return 0;
}
