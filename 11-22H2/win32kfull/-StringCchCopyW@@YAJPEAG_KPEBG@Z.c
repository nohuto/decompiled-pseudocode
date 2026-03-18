/*
 * XREFs of ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C01150FC
 * Callers:
 *     cjIFIMetricsToOTMW @ 0x1C008299C (cjIFIMetricsToOTMW.c)
 *     ?vLookupScript@@YAXKPEAGK@Z @ 0x1C0085EA4 (-vLookupScript@@YAXKPEAGK@Z.c)
 *     ?bAppendSysDirectory@@YAHPEAGPEBGI@Z @ 0x1C00860F8 (-bAppendSysDirectory@@YAHPEAGPEBGI@Z.c)
 *     vProcessEntry @ 0x1C00A28A8 (vProcessEntry.c)
 *     bAddFlEntry @ 0x1C0111EC0 (bAddFlEntry.c)
 *     bUnloadEudcFont @ 0x1C0114E84 (bUnloadEudcFont.c)
 *     EngGetFilePath @ 0x1C02797E0 (EngGetFilePath.c)
 *     ?LoadModuleWorkHorse@@YAPEAXPEAGH@Z @ 0x1C028A8F0 (-LoadModuleWorkHorse@@YAPEAXPEAGH@Z.c)
 *     FontAssocDefaultRoutine @ 0x1C029E620 (FontAssocDefaultRoutine.c)
 *     ?FindDefaultLinkedFontEntry@@YAHPEBG0@Z @ 0x1C029E7E4 (-FindDefaultLinkedFontEntry@@YAHPEBG0@Z.c)
 *     bDeleteFlEntry @ 0x1C029F7D0 (bDeleteFlEntry.c)
 *     InitializeDefaultFamilyFonts @ 0x1C03B392C (InitializeDefaultFamilyFonts.c)
 *     DefaultFontQueryRoutine @ 0x1C03B48B0 (DefaultFontQueryRoutine.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StringCchCopyW(char *a1, __int64 a2, char *a3)
{
  __int64 v3; // r9
  signed __int64 v4; // r10
  unsigned __int16 v5; // ax
  unsigned __int16 *v6; // rax
  __int64 result; // rax

  if ( (unsigned __int64)(a2 - 1) > 0x7FFFFFFE )
  {
    result = 2147942487LL;
    if ( a2 )
      *(_WORD *)a1 = 0;
  }
  else
  {
    v3 = 2147483646 - a2;
    v4 = a3 - a1;
    do
    {
      if ( !(v3 + a2) )
        break;
      v5 = *(_WORD *)&a1[v4];
      if ( !v5 )
        break;
      *(_WORD *)a1 = v5;
      a1 += 2;
      --a2;
    }
    while ( a2 );
    v6 = (unsigned __int16 *)(a1 - 2);
    if ( a2 )
      v6 = (unsigned __int16 *)a1;
    *v6 = 0;
    return a2 == 0 ? 0x8007007A : 0;
  }
  return result;
}
