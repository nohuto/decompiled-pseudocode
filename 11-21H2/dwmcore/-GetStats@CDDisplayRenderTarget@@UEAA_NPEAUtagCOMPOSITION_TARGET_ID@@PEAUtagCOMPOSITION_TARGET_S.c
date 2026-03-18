/*
 * XREFs of ?GetStats@CDDisplayRenderTarget@@UEAA_NPEAUtagCOMPOSITION_TARGET_ID@@PEAUtagCOMPOSITION_TARGET_STATS@@@Z @ 0x1801C874C
 * Callers:
 *     ?GetStats@CDDisplayRenderTarget@@$4PPPPPPPM@A@EAA_NPEAUtagCOMPOSITION_TARGET_ID@@PEAUtagCOMPOSITION_TARGET_STATS@@@Z @ 0x180106050 (-GetStats@CDDisplayRenderTarget@@$4PPPPPPPM@A@EAA_NPEAUtagCOMPOSITION_TARGET_ID@@PEAUtagCOMPOSIT.c)
 * Callees:
 *     ?GetPresentStats@CTargetStats@@QEBAXPEAVIOverlaySwapChain@@PEAUtagCOMPOSITION_STATS@@@Z @ 0x1800BBFA0 (-GetPresentStats@CTargetStats@@QEBAXPEAVIOverlaySwapChain@@PEAUtagCOMPOSITION_STATS@@@Z.c)
 *     ?Update@CTargetStats@@QEAA_N_KPEAVIOverlaySwapChain@@@Z @ 0x1800BC0BC (-Update@CTargetStats@@QEAA_N_KPEAVIOverlaySwapChain@@@Z.c)
 *     ?GetTargetId@CDDisplayRenderTarget@@UEBAJPEAUtagCOMPOSITION_TARGET_ID@@@Z @ 0x1801A09E0 (-GetTargetId@CDDisplayRenderTarget@@UEBAJPEAUtagCOMPOSITION_TARGET_ID@@@Z.c)
 *     ?GetPresentTime@CTargetStats@@QEBA_KXZ @ 0x1801C07A4 (-GetPresentTime@CTargetStats@@QEBA_KXZ.c)
 */

char __fastcall CDDisplayRenderTarget::GetStats(
        struct IOverlaySwapChain **this,
        struct tagCOMPOSITION_TARGET_ID *a2,
        struct tagCOMPOSITION_TARGET_STATS *a3)
{
  char v5; // si
  CTargetStats *v6; // rcx
  struct tagCOMPOSITION_STATS *v7; // r8
  LARGE_INTEGER PerformanceCount; // [rsp+30h] [rbp+8h] BYREF

  v5 = 0;
  CDDisplayRenderTarget::GetTargetId((CDDisplayRenderTarget *)(this - 2311), a2);
  if ( *(this - 2307) )
  {
    QueryPerformanceCounter(&PerformanceCount);
    v5 = CTargetStats::Update((CTargetStats *)(this - 24), PerformanceCount.QuadPart, *(this - 2307));
  }
  if ( v5 )
  {
    *(_DWORD *)a3 = *((_DWORD *)this - 47);
    *((_QWORD *)a3 + 1) = CTargetStats::GetPresentTime((CTargetStats *)(this - 24));
    *((_QWORD *)a3 + 2) = g_qpcFrequency.QuadPart / 60;
    CTargetStats::GetPresentStats(v6, *(this - 2307), v7);
  }
  else
  {
    *(_DWORD *)a3 = 0;
    *((_QWORD *)a3 + 1) = 0LL;
    *((_QWORD *)a3 + 2) = 0LL;
    *((_DWORD *)a3 + 6) = 0;
    *((_DWORD *)a3 + 7) = 0;
    *((_DWORD *)a3 + 8) = 0;
    *((_QWORD *)a3 + 5) = 0LL;
  }
  *((_DWORD *)a3 + 12) = *((_DWORD *)this - 42);
  *((_DWORD *)a3 + 13) = *((_DWORD *)this - 41);
  *((_DWORD *)a3 + 14) = *((_DWORD *)this - 45);
  *((_QWORD *)a3 + 8) = *(this - 20);
  return 1;
}
