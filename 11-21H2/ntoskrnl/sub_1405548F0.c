/*
 * XREFs of sub_1405548F0 @ 0x1405548F0
 * Callers:
 *     KeCapturePersistentThreadState @ 0x1405558E0 (KeCapturePersistentThreadState.c)
 * Callees:
 *     sub_14028FBF0 @ 0x14028FBF0 (sub_14028FBF0.c)
 */

__int64 __fastcall sub_1405548F0(__int64 a1, unsigned int a2)
{
  unsigned int i; // ebx

  for ( i = 0; i < a2; ++i )
  {
    if ( !sub_14028FBF0(a1 + i) )
      break;
  }
  return i;
}
