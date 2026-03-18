/*
 * XREFs of RestoreGammaRamp @ 0x1C0113940
 * Callers:
 *     xxxSwitchDesktopWithFade @ 0x1C01137BC (xxxSwitchDesktopWithFade.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RestoreGammaRamp(unsigned int *a1)
{
  unsigned int i; // edi
  __int64 v3; // rcx

  for ( i = 0; i < *a1; ++i )
  {
    v3 = *(_QWORD *)&a1[386 * i + 386];
    if ( v3 )
      GreDeleteDC(v3);
  }
  return Win32FreePool(a1);
}
