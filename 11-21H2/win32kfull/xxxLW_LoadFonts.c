/*
 * XREFs of xxxLW_LoadFonts @ 0x1C00EE740
 * Callers:
 *     UserOnGreTextReady @ 0x1C00EE588 (UserOnGreTextReady.c)
 *     NtUserLW_LoadFonts @ 0x1C00EE700 (NtUserLW_LoadFonts.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C001174C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ @ 0x1C001C5FC (-WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ.c)
 *     ?xxxLoadPermanentFonts@@YAHXZ @ 0x1C00EE81C (-xxxLoadPermanentFonts@@YAHXZ.c)
 *     ?xxxLoadUserAndNetworkFonts@@YAXXZ @ 0x1C00EEA3C (-xxxLoadUserAndNetworkFonts@@YAXXZ.c)
 *     xxxAddFontResourceW @ 0x1C00EEFCC (xxxAddFontResourceW.c)
 *     EngCloseFNTCache @ 0x1C00EF2AC (EngCloseFNTCache.c)
 *     ClientLoadLocalT1Fonts @ 0x1C00EF424 (ClientLoadLocalT1Fonts.c)
 *     ?GetCount@AtomicExecutionCheck@@SAIXZ @ 0x1C00EF5D4 (-GetCount@AtomicExecutionCheck@@SAIXZ.c)
 */

__int64 __fastcall xxxLW_LoadFonts(__int64 a1)
{
  int v1; // edi
  unsigned int v2; // edi
  unsigned int Count; // eax
  __int64 v5; // rcx
  union _LARGE_INTEGER Interval; // [rsp+68h] [rbp+10h] BYREF

  v1 = a1;
  UserSessionSwitchLeaveCrit(a1);
  if ( UmfdHostLifeTimeManager::WaitForSessionRasterizerInitialization() < 0 )
  {
    EnterCrit(1LL, 0LL);
    return 0LL;
  }
  else
  {
    EnterCrit(1LL, 0LL);
    if ( v1 )
    {
      Interval.QuadPart = 0LL;
      v2 = 0;
      while ( !gbPermanentFontsLoaded )
      {
        if ( gbNonServiceSession && v2 >= 0x960 )
          goto LABEL_10;
        Count = AtomicExecutionCheck::GetCount();
        if ( Count )
        {
          if ( (gdwExtraInstrumentations & 1) != 0 )
            KeBugCheckEx(0x160u, Count, 0LL, 0LL, 0LL);
          DbgkWerCaptureLiveKernelDump(L"NTUSER", 400LL, 37LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
        }
        UserSessionSwitchLeaveCrit(v5);
        Interval.QuadPart = -2500000LL;
        KeDelayExecutionThread(0, 0, &Interval);
        EnterCrit(1LL, 0LL);
        ++v2;
      }
      xxxLoadUserAndNetworkFonts();
LABEL_10:
      gbNetworkFontsLoaded = 1;
    }
    else
    {
      xxxAddFontResourceW(L"marlett.ttf");
      if ( (unsigned int)xxxLoadPermanentFonts() && !gbPermanentT1FontsLoaded )
      {
        if ( gbPermanentFontsLoaded )
        {
          ClientLoadLocalT1Fonts();
          gbPermanentT1FontsLoaded = 1;
          Interval.QuadPart = ghsemFntCache;
          GreAcquireSemaphore(ghsemFntCache);
          EngCloseFNTCache();
          SEMOBJ::vUnlock((SEMOBJ *)&Interval);
        }
      }
    }
    return 1LL;
  }
}
