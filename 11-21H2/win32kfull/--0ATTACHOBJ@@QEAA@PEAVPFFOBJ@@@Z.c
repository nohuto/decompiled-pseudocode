/*
 * XREFs of ??0ATTACHOBJ@@QEAA@PEAVPFFOBJ@@@Z @ 0x1C001AEF0
 * Callers:
 *     ?QueryFontTree@PFFOBJ@@QEAAPEAXPEAUDHPDEV__@@_KKKPEA_K@Z @ 0x1C000B54C (-QueryFontTree@PFFOBJ@@QEAAPEAXPEAUDHPDEV__@@_KKKPEA_K@Z.c)
 *     ?QueryTrueTypeTable@PFFOBJ@@QEAAJ_KKKJKPEAEPEAPEAEPEAK@Z @ 0x1C0018854 (-QueryTrueTypeTable@PFFOBJ@@QEAAJ_KKKJKPEAEPEAPEAEPEAK@Z.c)
 *     ?QueryFontData@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z @ 0x1C0018C7C (-QueryFontData@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z.c)
 *     ?QueryGlyphMetricsPlusBits@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAPEAU_GLYPHDATA@@PEAPEAU_GLYPHBITS@@@Z @ 0x1C0019160 (-QueryGlyphMetricsPlusBits@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAPEAU_GLYPHDATA@@PEAPEAU.c)
 *     ?bGetWidthTable@RFONTOBJ@@QEAAHAEAVXDCOBJ@@KPEAGK1@Z @ 0x1C001A598 (-bGetWidthTable@RFONTOBJ@@QEAAHAEAVXDCOBJ@@KPEAGK1@Z.c)
 *     xInsertMetricsRFONTOBJ @ 0x1C001ACD8 (xInsertMetricsRFONTOBJ.c)
 *     ?QueryTrueTypeOutline@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KHPEAU_GLYPHDATA@@KPEAUtagTTPOLYGONHEADER@@@Z @ 0x1C0140B44 (-QueryTrueTypeOutline@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KHPEAU_GLYPHDATA@@KPEAUtagTTPOLYG.c)
 *     ?FontManagement@PFFOBJ@@QEAAHPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z @ 0x1C02C1354 (-FontManagement@PFFOBJ@@QEAAHPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z.c)
 *     ?GetTrueTypeFile@PFFOBJ@@QEAAPEAX_KPEAK@Z @ 0x1C02C1408 (-GetTrueTypeFile@PFFOBJ@@QEAAPEAX_KPEAK@Z.c)
 *     ?QueryGlyphAttrs@PFFOBJ@@QEAAPEAU_FD_GLYPHATTR@@PEAU_FONTOBJ@@K@Z @ 0x1C02C1480 (-QueryGlyphAttrs@PFFOBJ@@QEAAPEAU_FD_GLYPHATTR@@PEAU_FONTOBJ@@K@Z.c)
 * Callees:
 *     ?MapFontFiles@@YA_NKPEAPEAU_FONTFILEVIEW@@PEAPEAXPEAK@Z @ 0x1C000FA44 (-MapFontFiles@@YA_NKPEAPEAU_FONTFILEVIEW@@PEAPEAXPEAK@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0147E84 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

ATTACHOBJ *__fastcall ATTACHOBJ::ATTACHOBJ(ATTACHOBJ *this, struct PFFOBJ *a2)
{
  __int64 v4; // r8
  unsigned int v5; // ebx
  __int64 v6; // rcx
  struct _FONTFILEVIEW **v7; // r10
  struct _FONTFILEVIEW *v8; // rdx
  unsigned int v10[2]; // [rsp+20h] [rbp-38h] BYREF
  int v11; // [rsp+28h] [rbp-30h]
  void *v12[2]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v13; // [rsp+40h] [rbp-18h]

  *(_QWORD *)this = 0LL;
  *((_DWORD *)this + 2) = 0;
  v4 = *(_QWORD *)a2;
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 88LL) + 40LL) & 0x2000) != 0 )
  {
    v5 = *(_DWORD *)(v4 + 36);
    if ( v5 <= 3 )
    {
      if ( (*(_DWORD *)(v4 + 52) & 0x1000) != 0 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM();
        v4 = *(_QWORD *)a2;
      }
      if ( (*(_DWORD *)(v4 + 52) & 0x2000) != 0 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM();
      v6 = 0LL;
      if ( v5 )
      {
        v7 = *(struct _FONTFILEVIEW ***)(*(_QWORD *)a2 + 200LL);
        while ( 1 )
        {
          v8 = v7[v6];
          if ( (*((_DWORD *)v8 + 10) & 0x18) == 8 && !*((_QWORD *)v8 + 6) )
            break;
          v6 = (unsigned int)(v6 + 1);
          if ( (unsigned int)v6 >= v5 )
            return this;
        }
        v13 = 0LL;
        *(_QWORD *)v10 = 0LL;
        v11 = 0;
        *(_OWORD *)v12 = 0LL;
        if ( MapFontFiles(v5, v7, v12, v10) )
        {
          *(_QWORD *)this = *(_QWORD *)(*(_QWORD *)a2 + 200LL);
          *((_DWORD *)this + 2) = v5;
        }
      }
    }
  }
  return this;
}
