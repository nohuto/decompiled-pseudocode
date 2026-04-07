/*
 * XREFs of ?CaptureDesktop@CWindowList@@UEAAJHHHH_KW4DXGI_FORMAT@@PEAPEAX@Z @ 0x180012750
 * Callers:
 *     <none>
 * Callees:
 *     ?SyncDesktopCaptureBits@CCompositor@@QEAAJU_LUID@@HHIIW4DXGI_FORMAT@@_KPEAX@Z @ 0x1800128C0 (-SyncDesktopCaptureBits@CCompositor@@QEAAJU_LUID@@HHIIW4DXGI_FORMAT@@_KPEAX@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180025534 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x180057478 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CWindowList::CaptureDesktop(
        CWindowList *this,
        int a2,
        int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned __int64 a6,
        enum DXGI_FORMAT a7,
        void **a8)
{
  __int64 v8; // rbp
  unsigned __int64 v11; // rcx
  unsigned __int64 dwMaximumSizeLow; // rcx
  char *FileMappingW; // rbx
  int v14; // eax
  unsigned int v15; // edi
  _QWORD v17[2]; // [rsp+50h] [rbp-28h] BYREF

  v8 = a4;
  v17[0] = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  *a8 = 0LL;
  if ( (int)v8 <= 0 || (int)a5 <= 0 )
  {
    v15 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x187Du, 0LL);
    goto LABEL_8;
  }
  v11 = v8 * (GetPixelFormatSize(a7) >> 3);
  if ( v11 > 0xFFFFFFFF )
  {
    v15 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0x185Eu, 0LL);
    goto LABEL_8;
  }
  dwMaximumSizeLow = a5 * ((v11 + 3) & 0xFFFFFFFC);
  if ( dwMaximumSizeLow > 0xFFFFFFFF )
  {
    v15 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0x1862u, 0LL);
    goto LABEL_8;
  }
  FileMappingW = (char *)CreateFileMappingW((HANDLE)0xFFFFFFFFFFFFFFFFLL, 0LL, 0x8000004u, 0, dwMaximumSizeLow, 0LL);
  v17[1] = FileMappingW;
  if ( ((unsigned __int64)(FileMappingW + 1) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
  {
    v15 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x186Cu, 0LL);
    if ( (unsigned __int64)(FileMappingW - 1) > 0xFFFFFFFFFFFFFFFDuLL )
      goto LABEL_8;
LABEL_12:
    CloseHandle(FileMappingW);
    goto LABEL_8;
  }
  v14 = CCompositor::SyncDesktopCaptureBits(
          *((CCompositor **)CDesktopManager::s_pDesktopManagerInstance + 6),
          (struct _LUID)0xFFFFFFFE00000000uLL,
          a2,
          a3,
          v8,
          a5,
          a7,
          a6,
          FileMappingW);
  v15 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x1878u, 0LL);
    goto LABEL_12;
  }
  *a8 = FileMappingW;
LABEL_8:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(v17);
  return v15;
}
