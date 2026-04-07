/*
 * XREFs of ?GetNcAdornmentInfoAttribute@CWindowList@@AEAAJPEAUHWND__@@PEAUNCADORNMENT_INFO@@@Z @ 0x18010A4B8
 * Callers:
 *     ?GetWindowAttribute@CWindowList@@AEAAJPEAUMILCMD_DWM_WINDOWATTRIBUTE@@@Z @ 0x180013C5C (-GetWindowAttribute@CWindowList@@AEAAJPEAUMILCMD_DWM_WINDOWATTRIBUTE@@@Z.c)
 * Callees:
 *     ?NcAdornmentInfoQuery@CTopLevelWindow@@QEAAJPEAUNCADORNMENT_INFO@@@Z @ 0x180011978 (-NcAdornmentInfoQuery@CTopLevelWindow@@QEAAJPEAUNCADORNMENT_INFO@@@Z.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x1800302A8 (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CWindowList::GetNcAdornmentInfoAttribute(CWindowList *this, HWND a2, struct NCADORNMENT_INFO *a3)
{
  int SyncedWindowDataByHwnd; // eax
  unsigned int v5; // ebx
  CTopLevelWindow *v6; // rcx
  struct CWindowData *v8; // [rsp+58h] [rbp+20h] BYREF

  v8 = 0LL;
  SyncedWindowDataByHwnd = CWindowList::GetSyncedWindowDataByHwnd(this, a2, &v8);
  v5 = SyncedWindowDataByHwnd;
  if ( SyncedWindowDataByHwnd >= 0 )
  {
    if ( v8 )
    {
      v6 = (CTopLevelWindow *)*((_QWORD *)v8 + 55);
      if ( v6 && (*((_BYTE *)v8 + 672) & 9) == 9 )
        return (unsigned int)CTopLevelWindow::NcAdornmentInfoQuery(v6, a3);
      else
        *(_OWORD *)((char *)a3 + 4) = 0LL;
    }
    else
    {
      return (unsigned int)-2147024809;
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, SyncedWindowDataByHwnd, 0x15BDu);
  }
  return v5;
}
