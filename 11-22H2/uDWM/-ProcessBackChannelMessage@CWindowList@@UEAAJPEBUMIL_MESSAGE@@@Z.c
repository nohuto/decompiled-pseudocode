/*
 * XREFs of ?ProcessBackChannelMessage@CWindowList@@UEAAJPEBUMIL_MESSAGE@@@Z @ 0x180043DC0
 * Callers:
 *     <none>
 * Callees:
 *     ?ClearSnapshot@CWindowData@@QEAAX_N00@Z @ 0x180006D20 (-ClearSnapshot@CWindowData@@QEAAX_N00@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180025534 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?PostStartAnimations@CDesktopManager@@QEAAJXZ @ 0x180043E60 (-PostStartAnimations@CDesktopManager@@QEAAJXZ.c)
 *     ?OnNotifyRoundTripReply@CLivePreview@@QEAA_NI@Z @ 0x180043EBC (-OnNotifyRoundTripReply@CLivePreview@@QEAA_NI@Z.c)
 *     ?ReleaseCVICache@CDesktopManager@@SAXXZ @ 0x180058154 (-ReleaseCVICache@CDesktopManager@@SAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::ProcessBackChannelMessage(CWindowList *this, const struct MIL_MESSAGE *a2)
{
  unsigned int v3; // ebx
  int started; // eax
  int v6; // ebx
  CWindowData *v7; // rdi
  CWindowData *i; // rbx
  __int64 v9; // r8
  char *v10; // rax
  PVOID RestartKey; // [rsp+48h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+50h] [rbp+18h] BYREF

  v3 = 0;
  if ( *(_DWORD *)a2 == 8 )
  {
    if ( !CLivePreview::OnNotifyRoundTripReply(
            *((CLivePreview **)CDesktopManager::s_pDesktopManagerInstance + 57),
            *((_DWORD *)a2 + 2)) )
    {
      started = CDesktopManager::PostStartAnimations(CDesktopManager::s_pDesktopManagerInstance);
      v3 = started;
      if ( started < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, started, 0x5F9u, 0LL);
    }
  }
  else if ( *(_DWORD *)a2 == 5 )
  {
    v6 = *((_DWORD *)a2 + 3);
    v12 = &CDesktopManager::s_csDwmInstance;
    EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
    if ( v6 == 1 )
    {
      RestartKey = 0LL;
      while ( 1 )
      {
        v10 = (char *)RtlEnumerateGenericTableWithoutSplaying((PRTL_GENERIC_TABLE)((char *)this + 8), &RestartKey);
        if ( !v10 )
          break;
        v7 = (CWindowData *)(v10 + 80);
        for ( i = (CWindowData *)*((_QWORD *)v10 + 10); i != v7; i = *(CWindowData **)i )
          CWindowData::ClearSnapshot(i, 1, v9, 1);
      }
      CDesktopManager::ReleaseCVICache();
    }
    CGuard<CDwmCS>::~CGuard<CDwmCS>(&v12);
    return 0;
  }
  else
  {
    v3 = -2147418113;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147418113, 0x602u, 0LL);
  }
  return v3;
}
