/*
 * XREFs of ?UpdateThumbnailProperties@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_UPDATETHUMBNAILPROPERTIES@@@Z @ 0x18006AF48
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x18000A3A0 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FindThumbnailData@CWindowList@@QEAAPEAVCThumbnailData@@T_LARGE_INTEGER@@@Z @ 0x18000AF74 (-FindThumbnailData@CWindowList@@QEAAPEAVCThumbnailData@@T_LARGE_INTEGER@@@Z.c)
 *     ?UpdateProperties@CThumbnailData@@QEAAJPEBU_DWM_THUMBNAIL_PROPERTIES@@@Z @ 0x180018FF0 (-UpdateProperties@CThumbnailData@@QEAAJPEBU_DWM_THUMBNAIL_PROPERTIES@@@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18001EAE0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
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
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x1314u);
  }
  else
  {
    v9 = -2147024809;
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v11);
  return v9;
}
