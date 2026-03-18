/*
 * XREFs of ?ReleaseConsoleSessionModeChangeLock@DXGSESSIONMGR@@QEAAXPEAVDXGSESSIONDATA@@@Z @ 0x1C01E3A64
 * Callers:
 *     ?DxgkpDelayPresentCddPrimary@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x1C01586A0 (-DxgkpDelayPresentCddPrimary@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z.c)
 *     DxgkGetDisplayModeList @ 0x1C01EBFF0 (DxgkGetDisplayModeList.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?ReleaseSessionModeChangeLock@DXGSESSIONDATA@@QEAAXXZ @ 0x1C001E060 (-ReleaseSessionModeChangeLock@DXGSESSIONDATA@@QEAAXXZ.c)
 */

void __fastcall DXGSESSIONMGR::ReleaseConsoleSessionModeChangeLock(DXGSESSIONMGR *this, struct DXGSESSIONDATA *a2)
{
  struct DXGSESSIONDATA *v3; // rcx

  if ( !a2 || (v3 = (struct DXGSESSIONDATA *)*((_QWORD *)this + 17), a2 != v3) )
  {
    WdLogSingleEntry1(1LL, 5727LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"(pConsoleSessionData != NULL) && (pConsoleSessionData == m_pConsoleSessionData)",
      5727LL,
      0LL,
      0LL,
      0LL,
      0LL);
    v3 = (struct DXGSESSIONDATA *)*((_QWORD *)this + 17);
  }
  DXGSESSIONDATA::ReleaseSessionModeChangeLock(v3);
}
