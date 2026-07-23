/*
 * XREFs of sub_140783394 @ 0x140783394
 * Callers:
 *     sub_140783204 @ 0x140783204 (sub_140783204.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_140783394(_WORD *a1, _DWORD *a2, unsigned int a3, unsigned __int16 a4)
{
  int v5; // r10d
  unsigned int i; // r11d
  int v7; // r8d
  int v8; // r10d

  v5 = 0;
  for ( i = 0; i < a3; ++a1 )
  {
    v7 = (unsigned __int16)*a1;
    if ( (unsigned __int16)(v7 - 48) > 9u )
    {
      if ( (unsigned __int16)(v7 - 65) <= 5u )
      {
        v8 = 16 * v5 - 55;
      }
      else
      {
        if ( (unsigned __int16)(v7 - 97) > 5u )
          return 0;
        v8 = 16 * v5 - 87;
      }
    }
    else
    {
      v8 = 16 * v5 - 48;
    }
    v5 = v7 + v8;
    ++i;
  }
  *a2 = v5;
  return !a4 || *a1 == a4;
}
