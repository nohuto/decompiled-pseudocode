/*
 * XREFs of BmlGetPixelFormatPreference @ 0x1C01B2AFC
 * Callers:
 *     BmlCompareSourceModes @ 0x1C01B26E0 (BmlCompareSourceModes.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BmlGetPixelFormatPreference(int a1, int a2)
{
  bool v3; // zf
  unsigned int v4; // ecx

  if ( !a1 )
  {
    WdLogSingleEntry0(1LL);
    return 0xFFFFFFFFLL;
  }
  if ( a1 <= 19 )
    return 0xFFFFFFFFLL;
  if ( a1 <= 21 )
    return 4LL;
  switch ( a1 )
  {
    case 22:
      return 0xFFFFFFFFLL;
    case 32:
      return 1LL;
    case 35:
      v3 = a2 == 1;
      break;
    case 23:
      return 3LL;
    case 41:
      return 2LL;
    case 113:
      v3 = a2 == 2;
      break;
    default:
      return 0xFFFFFFFFLL;
  }
  v4 = 5;
  if ( !v3 )
    return (unsigned int)-1;
  return v4;
}
