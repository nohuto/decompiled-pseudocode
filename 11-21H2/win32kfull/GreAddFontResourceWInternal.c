/*
 * XREFs of GreAddFontResourceWInternal @ 0x1C00F9550
 * Callers:
 *     NtGdiAddFontResourceW @ 0x1C00F9360 (NtGdiAddFontResourceW.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C001174C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH@Z @ 0x1C00134A0 (-bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH.c)
 *     ?RegistryNotificaionEnumerationEnd@@YAXPEAK@Z @ 0x1C00F9740 (-RegistryNotificaionEnumerationEnd@@YAXPEAK@Z.c)
 *     ?bInitPrivatePFT@@YAHXZ @ 0x1C0270730 (-bInitPrivatePFT@@YAHXZ.c)
 */

__int64 __fastcall GreAddFontResourceWInternal(
        unsigned __int16 *a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        struct tagDESIGNVECTOR *a6,
        size_t a7)
{
  unsigned int v11; // esi
  struct _FONTHASH **v12; // rcx
  __int64 v14; // rcx
  size_t v15; // [rsp+30h] [rbp-39h]
  struct PFF *v16; // [rsp+78h] [rbp+Fh] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+80h] [rbp+17h] BYREF
  unsigned int v18; // [rsp+D0h] [rbp+67h] BYREF

  v18 = 0;
  if ( (a4 & 0x600) == 0x600 )
  {
    RegistryNotificaionEnumerationEnd(&v18);
    return v18;
  }
  if ( !a1 )
  {
    EngSetLastError(0x57u);
    return v18;
  }
  if ( a4 != 0x80000000 )
  {
    if ( ((a4 & 8) == 0 || a5 == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC))
      && ((a4 & 4) == 0 || a5 == (unsigned int)PsGetCurrentThreadId()) )
    {
      v11 = (2 * (a4 & 1)) | 4;
      if ( (a4 & 2) == 0 )
        v11 = 2 * (a4 & 1);
      v16 = 0LL;
      if ( (a4 & 0x1C) == 0 )
      {
        v12 = gpPFTPublic;
        goto LABEL_10;
      }
      if ( gpPFTPrivate || (unsigned int)bInitPrivatePFT() )
      {
        v12 = gpPFTPrivate;
LABEL_10:
        *(_QWORD *)&DestinationString.Length = v12;
        if ( !v12
          || (LODWORD(v15) = a7,
              !(unsigned int)PUBLIC_PFTOBJ::bLoadFonts(
                               (PUBLIC_PFTOBJ *)&DestinationString,
                               a1,
                               a2,
                               a3,
                               a6,
                               v15,
                               &v18,
                               v11,
                               &v16,
                               a4,
                               0,
                               0LL,
                               0,
                               0)) )
        {
          v18 = 0;
        }
        if ( v18 )
          GreQuerySystemTime(&PFTOBJ::FontChangeTime);
      }
    }
    return v18;
  }
  DestinationString = 0LL;
  if ( RtlCreateUnicodeString(&DestinationString, a1) )
  {
    v14 = *(_QWORD *)(gpxsGlobals + 16LL);
    if ( v14 )
    {
      v16 = *(struct PFF **)(gpxsGlobals + 16LL);
      GreAcquireSemaphore(v14);
      RtlInsertElementGenericTableAvl(*(PRTL_AVL_TABLE *)(gpxsGlobals + 24LL), &DestinationString, 0x10u, 0LL);
      SEMOBJ::vUnlock((SEMOBJ *)&v16);
    }
  }
  return 1LL;
}
