/*
 * XREFs of ?TryResurrectPffApcRoutine@UmfdHostLifeTimeManager@@CAXPEAX00@Z @ 0x1C02C10B0
 * Callers:
 *     ?OnHostReady@UmfdHostLifeTimeManager@@SAXXZ @ 0x1C0121F44 (-OnHostReady@UmfdHostLifeTimeManager@@SAXXZ.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C001174C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C001F138 (-EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     ?QueryFontFile@PDEVOBJ@@QEAAJ_KKKPEAK@Z @ 0x1C010F888 (-QueryFontFile@PDEVOBJ@@QEAAJ_KKKPEAK@Z.c)
 *     ?HFFToPPFF@PFTOBJ@@QEAAPEAVPFF@@_K@Z @ 0x1C02704C4 (-HFFToPPFF@PFTOBJ@@QEAAPEAVPFF@@_K@Z.c)
 *     ?TryResurrectHff@UmfdHostLifeTimeManager@@CA_N_KPEAVPFF@@@Z @ 0x1C02C0F2C (-TryResurrectHff@UmfdHostLifeTimeManager@@CA_N_KPEAVPFF@@@Z.c)
 *     ?TryResurrectUmfdAllocations@UmfdHostLifeTimeManager@@CA_N_KPEAVPFF@@@Z @ 0x1C02C11D8 (-TryResurrectUmfdAllocations@UmfdHostLifeTimeManager@@CA_N_KPEAVPFF@@@Z.c)
 */

void __fastcall UmfdHostLifeTimeManager::TryResurrectPffApcRoutine(void *a1, _BYTE *a2, struct PFF *a3)
{
  struct _FONTHASH **v5; // [rsp+48h] [rbp+10h] BYREF
  __int64 v6; // [rsp+58h] [rbp+20h] BYREF

  if ( a2 )
  {
    v6 = ghsemPublicPFT;
    GreAcquireSemaphore(ghsemPublicPFT);
    UmfdHostLifeTimeManager::s_UmfdHostResurrectionThread = KeGetCurrentThread();
    if ( a3
      || gpPFTPublic && (v5 = gpPFTPublic, (a3 = PFTOBJ::HFFToPPFF((PFTOBJ *)&v5, (__int64)a2)) != 0LL)
      || gpPFTPrivate && (v5 = gpPFTPrivate, (a3 = PFTOBJ::HFFToPPFF((PFTOBJ *)&v5, (__int64)a2)) != 0LL) )
    {
      if ( a2[12]
        && a2[13] != 1
        && UmfdHostLifeTimeManager::EnsureUmfdHost()
        && UmfdHostLifeTimeManager::TryResurrectHff(a2, a3) )
      {
        v5 = (struct _FONTHASH **)*((_QWORD *)a3 + 11);
        if ( (unsigned int)PDEVOBJ::QueryFontFile((PDEVOBJ *)&v5, (__int64)a2, 2u, 0, 0LL) == *((_DWORD *)a3 + 52) )
        {
          if ( UmfdHostLifeTimeManager::TryResurrectUmfdAllocations((unsigned __int64)a2, a3) )
            a2[12] = 0;
        }
        else
        {
          a2[13] = 1;
        }
      }
    }
    UmfdHostLifeTimeManager::s_UmfdHostResurrectionThread = 0LL;
    SEMOBJ::vUnlock((SEMOBJ *)&v6);
  }
}
