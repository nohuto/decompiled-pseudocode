/*
 * XREFs of ?UpdateThumbnailProperties@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_UPDATETHUMBNAILPROPERTIES@@@Z @ 0x1800027DC
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x18001DAC0 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?FindThumbnailData@CWindowList@@QEAAPEAVCThumbnailData@@T_LARGE_INTEGER@@@Z @ 0x1800029BC (-FindThumbnailData@CWindowList@@QEAAPEAVCThumbnailData@@T_LARGE_INTEGER@@@Z.c)
 *     ?UpdateProperties@CThumbnailData@@QEAAJPEBU_DWM_THUMBNAIL_PROPERTIES@@@Z @ 0x180009004 (-UpdateProperties@CThumbnailData@@QEAAJPEBU_DWM_THUMBNAIL_PROPERTIES@@@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180025534 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::UpdateThumbnailProperties(
        CWindowList *this,
        int a2,
        struct MILCMD_DWM_REDIRECTION_UPDATETHUMBNAILPROPERTIES *a3)
{
  struct CThumbnailData *ThumbnailData; // rax
  const struct _DWM_THUMBNAIL_PROPERTIES *v7; // rdx
  int updated; // eax
  unsigned int v9; // ebx
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+50h] [rbp+18h] BYREF

  v11 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  ThumbnailData = CWindowList::FindThumbnailData(this, *(union _LARGE_INTEGER *)((char *)a3 + 4));
  if ( ThumbnailData
    && a2 == *((_DWORD *)a3 + 2)
    && ((v7 = (const struct _DWM_THUMBNAIL_PROPERTIES *)((char *)a3 + 12), !*((_BYTE *)ThumbnailData + 34))
     || (v7->dwFlags & 0x3EFFFFF) != 0x3EFFFFF && (v7->dwFlags & 0xFC100000) != 0) )
  {
    updated = CThumbnailData::UpdateProperties(ThumbnailData, v7);
    v9 = updated;
    if ( updated < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x13A2u, 0LL);
  }
  else
  {
    v9 = -2147024809;
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v11);
  return v9;
}
