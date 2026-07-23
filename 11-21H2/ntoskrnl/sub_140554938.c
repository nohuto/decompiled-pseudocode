/*
 * XREFs of sub_140554938 @ 0x140554938
 * Callers:
 *     KeCapturePersistentThreadState @ 0x1405558E0 (KeCapturePersistentThreadState.c)
 * Callees:
 *     sub_14028FBF0 @ 0x14028FBF0 (sub_14028FBF0.c)
 */

__int64 __fastcall sub_140554938(unsigned __int64 a1, unsigned int a2)
{
  unsigned int v2; // edi
  unsigned int v3; // ebx

  v2 = a2;
  v3 = 0;
  if ( a1 < a2 )
    v2 = a1;
  if ( v2 )
  {
    do
    {
      if ( !sub_14028FBF0(a1 - v3) )
        break;
      ++v3;
    }
    while ( v3 < v2 );
  }
  return v3;
}
