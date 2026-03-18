/*
 * XREFs of ?GetStats@CLegacyRenderTarget@@UEAA_NPEAUtagCOMPOSITION_TARGET_ID@@PEAUtagCOMPOSITION_TARGET_STATS@@@Z @ 0x1800BBE9C
 * Callers:
 *     ?GetStats@CLegacyRenderTarget@@$4PPPPPPPM@A@EAA_NPEAUtagCOMPOSITION_TARGET_ID@@PEAUtagCOMPOSITION_TARGET_STATS@@@Z @ 0x180106070 (-GetStats@CLegacyRenderTarget@@$4PPPPPPPM@A@EAA_NPEAUtagCOMPOSITION_TARGET_ID@@PEAUtagCOMPOSITIO.c)
 *     ?GetStats@CLegacyRenderTarget@@$4PPPPPPPM@BA@EAA_NPEAUtagCOMPOSITION_TARGET_ID@@PEAUtagCOMPOSITION_TARGET_STATS@@@Z @ 0x180106090 (-GetStats@CLegacyRenderTarget@@$4PPPPPPPM@BA@EAA_NPEAUtagCOMPOSITION_TARGET_ID@@PEAUtagCOMPOSITI.c)
 * Callees:
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x180092F80 (-GetCurrentFrameId@@YA_KXZ.c)
 *     ?GetPresentStats@CTargetStats@@QEBAXPEAVIOverlaySwapChain@@PEAUtagCOMPOSITION_STATS@@@Z @ 0x1800BBFA0 (-GetPresentStats@CTargetStats@@QEBAXPEAVIOverlaySwapChain@@PEAUtagCOMPOSITION_STATS@@@Z.c)
 *     ?Update@CTargetStats@@QEAA_N_KPEAVIOverlaySwapChain@@@Z @ 0x1800BC0BC (-Update@CTargetStats@@QEAA_N_KPEAVIOverlaySwapChain@@@Z.c)
 *     ?GetTargetId@CLegacyRenderTarget@@UEBAJPEAUtagCOMPOSITION_TARGET_ID@@@Z @ 0x1800BC200 (-GetTargetId@CLegacyRenderTarget@@UEBAJPEAUtagCOMPOSITION_TARGET_ID@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall CLegacyRenderTarget::GetStats(
        CLegacyRenderTarget *this,
        struct tagCOMPOSITION_TARGET_ID *a2,
        struct tagCOMPOSITION_TARGET_STATS *a3)
{
  __int64 v5; // rdi
  LARGE_INTEGER PerformanceCount; // [rsp+30h] [rbp+8h] BYREF

  CLegacyRenderTarget::GetTargetId((CLegacyRenderTarget *)((char *)this - 18544), a2);
  v5 = 0LL;
  if ( *((_QWORD *)this - 2314)
    && (QueryPerformanceCounter(&PerformanceCount),
        CTargetStats::Update(
          (CLegacyRenderTarget *)((char *)this - 240),
          PerformanceCount.QuadPart,
          *((struct IOverlaySwapChain **)this - 2314))) )
  {
    *(_DWORD *)a3 = *((_DWORD *)this - 59);
    if ( *((struct CComposition **)this - 23) == GetCurrentFrameId() )
      v5 = *((_QWORD *)this - 24);
    *((_QWORD *)a3 + 1) = v5;
    *((_QWORD *)a3 + 2) = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this - 2314) + 72LL))(*((_QWORD *)this - 2314));
    CTargetStats::GetPresentStats(
      (CLegacyRenderTarget *)((char *)this - 240),
      *((struct IOverlaySwapChain **)this - 2314),
      (struct tagCOMPOSITION_TARGET_STATS *)((char *)a3 + 24));
  }
  else
  {
    *(_DWORD *)a3 = 0;
    *((_QWORD *)a3 + 1) = 0LL;
    *((_QWORD *)a3 + 2) = 0LL;
    *((_QWORD *)a3 + 3) = 0LL;
    *((_DWORD *)a3 + 8) = 0;
    *((_QWORD *)a3 + 5) = 0LL;
  }
  *((_DWORD *)a3 + 12) = *((_DWORD *)this - 54);
  *((_DWORD *)a3 + 13) = *((_DWORD *)this - 53);
  *((_DWORD *)a3 + 14) = *((_DWORD *)this - 57);
  *((_QWORD *)a3 + 8) = *((_QWORD *)this - 26);
  return 1;
}
