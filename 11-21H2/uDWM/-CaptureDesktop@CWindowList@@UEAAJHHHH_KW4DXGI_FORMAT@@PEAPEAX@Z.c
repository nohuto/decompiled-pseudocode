/*
 * XREFs of ?CaptureDesktop@CWindowList@@UEAAJHHHH_KW4DXGI_FORMAT@@PEAPEAX@Z @ 0x180010C00
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SyncDesktopCaptureBits@CCompositor@@QEAAJU_LUID@@HHIIW4DXGI_FORMAT@@_KPEAX@Z @ 0x180010D80 (-SyncDesktopCaptureBits@CCompositor@@QEAAJU_LUID@@HHIIW4DXGI_FORMAT@@_KPEAX@Z.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x18001395C (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18001EAE0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@IEAA@XZ @ 0x180036420 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
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
  void **v11; // rsi
  unsigned __int64 v12; // rcx
  unsigned __int64 dwMaximumSizeLow; // rcx
  void **FileMappingW; // rbx
  int v15; // eax
  unsigned int v16; // edi
  struct _RTL_CRITICAL_SECTION *v18; // [rsp+58h] [rbp-20h] BYREF

  v8 = a4;
  v18 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v11 = a8;
  *a8 = 0LL;
  if ( (int)v8 <= 0 || (int)a5 <= 0 )
  {
    v16 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0x181Au);
  }
  else
  {
    v12 = v8 * (GetPixelFormatSize(a7) >> 3);
    if ( v12 > 0xFFFFFFFF )
    {
      v16 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0x17FBu);
    }
    else
    {
      dwMaximumSizeLow = a5 * ((v12 + 3) & 0xFFFFFFFC);
      if ( dwMaximumSizeLow > 0xFFFFFFFF )
      {
        v16 = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0x17FFu);
      }
      else
      {
        FileMappingW = (void **)CreateFileMappingW(
                                  (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                                  0LL,
                                  0x8000004u,
                                  0,
                                  dwMaximumSizeLow,
                                  0LL);
        a8 = FileMappingW;
        if ( (((unsigned __int64)FileMappingW + 1) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
        {
          v15 = CCompositor::SyncDesktopCaptureBits(
                  *((CCompositor **)CDesktopManager::s_pDesktopManagerInstance + 5),
                  (struct _LUID)0xFFFFFFFE00000000uLL,
                  a2,
                  a3,
                  v8,
                  a5,
                  a7,
                  a6,
                  FileMappingW);
          v16 = v15;
          if ( v15 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v15, 0x1815u);
          }
          else
          {
            a8 = 0LL;
            *v11 = FileMappingW;
          }
        }
        else
        {
          v16 = -2147024882;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x1809u);
        }
        wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&a8);
      }
    }
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v18);
  return v16;
}
