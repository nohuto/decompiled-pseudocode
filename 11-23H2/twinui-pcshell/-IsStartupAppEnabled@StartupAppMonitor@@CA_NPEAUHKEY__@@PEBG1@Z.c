/*
 * XREFs of ?IsStartupAppEnabled@StartupAppMonitor@@CA_NPEAUHKEY__@@PEBG1@Z @ 0x18063EBE8
 * Callers:
 *     ?StartupToastNotifier@StartupAppMonitor@@CAXPEAV1@@Z @ 0x18063FC30 (-StartupToastNotifier@StartupAppMonitor@@CAXPEAV1@@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     ??0StartupApproval@StartupDB@@QEAA@XZ @ 0x18063DB7C (--0StartupApproval@StartupDB@@QEAA@XZ.c)
 *     ?GetBlockedItemInfo@StartupApproval@StartupDB@@QEAAJPEBGPEAUBLOCKEDITEMINFO@2@@Z @ 0x18063E9CC (-GetBlockedItemInfo@StartupApproval@StartupDB@@QEAAJPEBGPEAUBLOCKEDITEMINFO@2@@Z.c)
 *     ?Initialize@StartupApproval@StartupDB@@QEAAJPEAUHKEY__@@PEBG1K@Z @ 0x18063EB24 (-Initialize@StartupApproval@StartupDB@@QEAAJPEAUHKEY__@@PEBG1K@Z.c)
 *     ?Uninitialize@StartupApproval@StartupDB@@QEAAXXZ @ 0x1806407F8 (-Uninitialize@StartupApproval@StartupDB@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall StartupAppMonitor::IsStartupAppEnabled(
        HKEY hKey,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3)
{
  bool v6; // bl
  StartupDB::StartupApproval *v7; // rax
  HKEY *v8; // rsi
  unsigned __int16 *v9; // r8
  const char *v10; // r9
  struct StartupDB::BLOCKEDITEMINFO *v11; // rdi
  int BlockedItemInfo; // eax
  bool result; // al
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v6 = 0;
  try
  {
    v7 = (StartupDB::StartupApproval *)operator new(0x10uLL);
    v8 = (HKEY *)StartupDB::StartupApproval::StartupApproval(v7);
    if ( !(unsigned int)StartupDB::StartupApproval::Initialize((StartupDB::StartupApproval *)v8, hKey, v9, a2) )
    {
      v11 = (struct StartupDB::BLOCKEDITEMINFO *)operator new(0xCuLL);
      *(_QWORD *)v11 = 0LL;
      *((_DWORD *)v11 + 2) = 0;
      BlockedItemInfo = StartupDB::StartupApproval::GetBlockedItemInfo(v8, a3, v11);
      if ( BlockedItemInfo == 2 || !BlockedItemInfo || BlockedItemInfo == 1630 )
        v6 = (*(_BYTE *)v11 & 1) == 0;
      if ( v11 )
        operator delete(v11);
    }
    if ( v8 )
    {
      StartupDB::StartupApproval::Uninitialize((StartupDB::StartupApproval *)v8);
      operator delete(v8);
    }
    result = v6;
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0xBC,
      (int)"pcshell\\twinui\\startupappmonitor\\lib\\startupappmonitorimpl.cpp",
      v10);
    return 0;
  }
  return result;
}
