/*
 * XREFs of ?NlsGetCurrentInputMode@@YAEPEAE@Z @ 0x1C01EB174
 * Callers:
 *     ?NlsAlphanumericModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C01EAEA0 (-NlsAlphanumericModeProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsCodeInputToggleProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C01EB020 (-NlsCodeInputToggleProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsHiraganaModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C01EB260 (-NlsHiraganaModeProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsKatakanaModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C01EB450 (-NlsKatakanaModeProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsRomanToggleProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C01EB6C0 (-NlsRomanToggleProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsSbcsDbcsToggleProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C01EB7E0 (-NlsSbcsDbcsToggleProc@@YAHPEAUtagKE@@_KK@Z.c)
 * Callees:
 *     ?NlsTestKeyStateToggle@@YAHE@Z @ 0x1C01EB8FC (-NlsTestKeyStateToggle@@YAHE@Z.c)
 */

char __fastcall NlsGetCurrentInputMode(unsigned __int8 *a1)
{
  unsigned __int8 v1; // r10
  unsigned __int8 v2; // r8
  char v3; // r8
  __int64 v4; // r9

  v1 = *a1;
  if ( !*a1 )
    return v1;
  v2 = *a1;
  while ( !(unsigned int)NlsTestKeyStateToggle(v2) )
  {
    v2 = *(_BYTE *)(v4 + 1);
    if ( !v2 )
      return v1;
  }
  return v3;
}
