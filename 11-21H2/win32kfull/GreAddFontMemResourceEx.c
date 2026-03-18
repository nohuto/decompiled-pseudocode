/*
 * XREFs of GreAddFontMemResourceEx @ 0x1C0287318
 * Callers:
 *     NtGdiAddFontMemResourceEx @ 0x1C02AC7A0 (NtGdiAddFontMemResourceEx.c)
 * Callees:
 *     memset @ 0x1C0160540 (memset.c)
 *     ?bInitPrivatePFT@@YAHXZ @ 0x1C0270730 (-bInitPrivatePFT@@YAHXZ.c)
 *     ?hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAU_FONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z @ 0x1C0270D90 (-hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAU_FONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z.c)
 *     ?bCreateFontFileView@@YAHPEBU_FONTFILEVIEW@@PEBUtagDOWNLOADFONTHEADER@@KPEAPEAPEAU1@K@Z @ 0x1C0286C48 (-bCreateFontFileView@@YAHPEBU_FONTFILEVIEW@@PEBUtagDOWNLOADFONTHEADER@@KPEAPEAPEAU1@K@Z.c)
 *     cMapRemoteFonts @ 0x1C028769C (cMapRemoteFonts.c)
 *     vUnmapRemoteFonts @ 0x1C0287B80 (vUnmapRemoteFonts.c)
 */

__int64 __fastcall GreAddFontMemResourceEx(
        struct tagDOWNLOADFONTHEADER *a1,
        int a2,
        struct tagDESIGNVECTOR *a3,
        unsigned int a4,
        unsigned int *a5)
{
  __int64 v9; // rdi
  int v10; // eax
  struct tagDOWNLOADFONTHEADER *v11; // rdx
  struct _FONTFILEVIEW **v13; // [rsp+30h] [rbp-61h] BYREF
  struct PFT **v14; // [rsp+38h] [rbp-59h] BYREF
  _BYTE v15[160]; // [rsp+40h] [rbp-51h] BYREF
  struct tagDOWNLOADFONTHEADER *v16; // [rsp+F0h] [rbp+5Fh] BYREF
  unsigned int v17; // [rsp+F8h] [rbp+67h] BYREF

  memset(v15, 0, 0x78uLL);
  v9 = 0LL;
  v16 = a1;
  v13 = 0LL;
  v10 = cMapRemoteFonts(&v16, (unsigned int)(a2 + 16), v15, 2LL);
  v11 = v16;
  if ( v16 && v10 )
  {
    LODWORD(v16) = 1;
    if ( (unsigned int)bCreateFontFileView((const struct _FONTFILEVIEW *)v15, v11, a2 + 16, &v13, 1u)
      && (gpPFTPrivate || (unsigned int)bInitPrivatePFT()) )
    {
      v17 = 0;
      v14 = gpPFTPrivate;
      v9 = PUBLIC_PFTOBJ::hLoadMemFonts((struct PFT **)&v14, v13, a3, a4, &v17, (int *)&v16);
      if ( v9 )
      {
        *a5 = v17;
        return v9;
      }
      if ( !(_DWORD)v16 )
        return v9;
    }
    vUnmapRemoteFonts(v15);
  }
  return v9;
}
