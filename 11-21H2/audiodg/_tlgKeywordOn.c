/*
 * XREFs of _tlgKeywordOn @ 0x1400035C8
 * Callers:
 *     ?IsEnabled@AudioDgTelemetryProvider@@SA_NE_K@Z @ 0x1400033CC (-IsEnabled@AudioDgTelemetryProvider@@SA_NE_K@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall tlgKeywordOn(__int64 a1, __int64 a2)
{
  char v2; // r8

  v2 = 0;
  if ( !a2 || (a2 & *(_QWORD *)(a1 + 16)) != 0 && (a2 & *(_QWORD *)(a1 + 24)) == *(_QWORD *)(a1 + 24) )
    return 1;
  return v2;
}
