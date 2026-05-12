/*
 * XREFs of sub_1C003EC88 @ 0x1C003EC88
 * Callers:
 *     sub_1C0036834 @ 0x1C0036834 (sub_1C0036834.c)
 *     sub_1C0036948 @ 0x1C0036948 (sub_1C0036948.c)
 *     sub_1C00377A4 @ 0x1C00377A4 (sub_1C00377A4.c)
 *     sub_1C00ACFB0 @ 0x1C00ACFB0 (sub_1C00ACFB0.c)
 *     sub_1C00AD3A8 @ 0x1C00AD3A8 (sub_1C00AD3A8.c)
 *     sub_1C00AD828 @ 0x1C00AD828 (sub_1C00AD828.c)
 *     sub_1C00ADA98 @ 0x1C00ADA98 (sub_1C00ADA98.c)
 *     sub_1C00ADC5C @ 0x1C00ADC5C (sub_1C00ADC5C.c)
 *     sub_1C00AE090 @ 0x1C00AE090 (sub_1C00AE090.c)
 *     sub_1C00AE43C @ 0x1C00AE43C (sub_1C00AE43C.c)
 *     sub_1C00AE738 @ 0x1C00AE738 (sub_1C00AE738.c)
 *     sub_1C00AE918 @ 0x1C00AE918 (sub_1C00AE918.c)
 *     sub_1C00AEC48 @ 0x1C00AEC48 (sub_1C00AEC48.c)
 *     sub_1C00AEEC4 @ 0x1C00AEEC4 (sub_1C00AEEC4.c)
 *     sub_1C00AF4CC @ 0x1C00AF4CC (sub_1C00AF4CC.c)
 *     sub_1C00AF6D8 @ 0x1C00AF6D8 (sub_1C00AF6D8.c)
 *     sub_1C00AF8D0 @ 0x1C00AF8D0 (sub_1C00AF8D0.c)
 *     sub_1C00AFB40 @ 0x1C00AFB40 (sub_1C00AFB40.c)
 *     sub_1C00AFE68 @ 0x1C00AFE68 (sub_1C00AFE68.c)
 *     sub_1C00B013C @ 0x1C00B013C (sub_1C00B013C.c)
 *     sub_1C00B0368 @ 0x1C00B0368 (sub_1C00B0368.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_1C003EC88(unsigned __int16 a1, _DWORD *a2)
{
  char v2; // r8
  int v3; // eax

  v2 = 1;
  v3 = a1 >> 1;
  switch ( (unsigned __int8)v3 )
  {
    case 0xC5u:
      goto LABEL_9;
    case 0xC6u:
    case 0xC7u:
      *a2 = -2147483210;
      return v2;
    case 0xC8u:
LABEL_9:
      *a2 = -2147483599;
      return v2;
  }
  if ( (unsigned __int8)v3 != 201 )
    return 0;
  *a2 = -1073741790;
  return v2;
}
