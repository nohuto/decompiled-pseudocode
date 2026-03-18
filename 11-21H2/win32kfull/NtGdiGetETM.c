/*
 * XREFs of NtGdiGetETM @ 0x1C012F660
 * Callers:
 *     <none>
 * Callees:
 *     ?pSurfobj@SURFACE@@QEAAPEAU_SURFOBJ@@XZ @ 0x1C00070F4 (-pSurfobj@SURFACE@@QEAAPEAU_SURFOBJ@@XZ.c)
 *     ?flFontType@PFEOBJ@@QEAAKXZ @ 0x1C0013154 (-flFontType@PFEOBJ@@QEAAKXZ.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0019ED8 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C00364E0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C003FC30 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0041DDC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?GetETMFontManagement@@YAHAEAVRFONTOBJ@@VPDEVOBJ@@PEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK4@Z @ 0x1C012F58C (-GetETMFontManagement@@YAHAEAVRFONTOBJ@@VPDEVOBJ@@PEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK4@Z.c)
 *     ?vIFIMetricsToETM@@YAXPEAU_EXTTEXTMETRIC@@AEAVRFONTOBJ@@AEAVDCOBJ@@PEAU_IFIMETRICS@@@Z @ 0x1C012F8F0 (-vIFIMetricsToETM@@YAXPEAU_EXTTEXTMETRIC@@AEAVRFONTOBJ@@AEAVDCOBJ@@PEAU_IFIMETRICS@@@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     memset @ 0x1C0160540 (memset.c)
 *     ?FontManagement@PFFOBJ@@QEAAHPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z @ 0x1C02C1354 (-FontManagement@PFFOBJ@@QEAAHPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z.c)
 */

__int64 __fastcall NtGdiGetETM(HDC a1, ULONG64 a2)
{
  unsigned int v3; // edi
  __int64 v4; // r9
  __int64 sizLogResPpi; // rbx
  struct _SURFOBJ *v6; // r8
  struct _SURFOBJ *v7; // rdx
  __int64 v8; // r9
  _BYTE *v9; // rdx
  __int64 v11; // [rsp+20h] [rbp-398h]
  __int64 v12; // [rsp+28h] [rbp-390h]
  struct _FONTOBJ *v13; // [rsp+50h] [rbp-368h] BYREF
  int v14; // [rsp+58h] [rbp-360h] BYREF
  PVOID pvProducer; // [rsp+60h] [rbp-358h] BYREF
  __int64 v16; // [rsp+68h] [rbp-350h] BYREF
  _QWORD v17[6]; // [rsp+78h] [rbp-340h] BYREF
  __int128 v18; // [rsp+A8h] [rbp-310h] BYREF
  __int128 v19; // [rsp+B8h] [rbp-300h]
  __int128 v20; // [rsp+C8h] [rbp-2F0h]
  int v21; // [rsp+D8h] [rbp-2E0h]
  _BYTE v22[704]; // [rsp+E0h] [rbp-2D8h] BYREF

  v18 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  v21 = 0;
  v3 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v17, a1);
  if ( a2 && v17[0] )
  {
    v13 = 0LL;
    if ( (unsigned int)RFONTOBJ::bInit((RFONTOBJ *)&v13, (struct XDCOBJ *)v17, 0, 2u) )
      GreAcquireSemaphore(v13[7].pvProducer);
    if ( v13 )
    {
      sizLogResPpi = (__int64)v13[1].sizLogResPpi;
      if ( *(_QWORD *)(sizLogResPpi + 3040) )
      {
        v14 = 256;
        v6 = 0LL;
        if ( (*(_DWORD *)(sizLogResPpi + 40) & 0x8000) != 0 )
          v6 = *(struct _SURFOBJ **)(sizLogResPpi + 1768);
        if ( (unsigned int)GetETMFontManagement((struct RFONTOBJ *)&v13, sizLogResPpi, v6, v4, v11, v12, &v14) )
        {
          v7 = SURFACE::pSurfobj(*(SURFACE **)(sizLogResPpi + 2528));
          if ( !v7 )
          {
            memset(v22, 0, 0x2B8uLL);
            v7 = SURFACE::pSurfobj((SURFACE *)v22);
            v7->dhpdev = (DHPDEV)v13[1].pvConsumer;
            v7->hdev = *(HDEV *)&v13[1].ulStyleSize;
            v7->iType = 1;
          }
          v16 = *(_QWORD *)&v13[2].iUniq;
          v3 = PFFOBJ::FontManagement((PFFOBJ *)&v16, v7, v13, 0x100u, 0, 0LL, 0x34u, &v18);
        }
      }
      if ( !v3 )
      {
        pvProducer = v13[1].pvProducer;
        if ( pvProducer )
        {
          if ( (PFEOBJ::flFontType((PFEOBJ *)&pvProducer) & 4) != 0 )
          {
            vIFIMetricsToETM(
              (struct _EXTTEXTMETRIC *)&v18,
              (struct RFONTOBJ *)&v13,
              (struct DCOBJ *)v17,
              *(struct _IFIMETRICS **)(v8 + 32));
            v3 = 1;
          }
        }
      }
    }
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v13);
  }
  if ( v3 )
  {
    if ( (a2 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v9 = (_BYTE *)a2;
    if ( a2 >= MmUserProbeAddress )
      v9 = (_BYTE *)MmUserProbeAddress;
    *v9 = *v9;
    v9[51] = v9[51];
    *(_OWORD *)a2 = v18;
    *(_OWORD *)(a2 + 16) = v19;
    *(_OWORD *)(a2 + 32) = v20;
    *(_DWORD *)(a2 + 48) = v21;
  }
  DCOBJ::~DCOBJ((DCOBJ *)v17);
  return v3;
}
