/*
 * XREFs of ?IsOOM@@YA_NJ@Z @ 0x18001C074
 * Callers:
 *     ?MilFailFastForHR@@YAXJPEBX@Z @ 0x18001C0A0 (-MilFailFastForHR@@YAXJPEBX@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall IsOOM()
{
  char v0; // dl
  unsigned int i; // ecx

  v0 = 0;
  for ( i = 0; i < 9; ++i )
  {
    if ( dword_1801069E0[i] == -2147024882 )
      return 1;
  }
  return v0;
}
