/*
 * XREFs of ?GetPresentTime@CTargetStats@@QEBA_KXZ @ 0x1801C07A4
 * Callers:
 *     ?GetStats@CDDisplayRenderTarget@@UEAA_NPEAUtagCOMPOSITION_TARGET_ID@@PEAUtagCOMPOSITION_TARGET_STATS@@@Z @ 0x1801C874C (-GetStats@CDDisplayRenderTarget@@UEAA_NPEAUtagCOMPOSITION_TARGET_ID@@PEAUtagCOMPOSITION_TARGET_S.c)
 * Callees:
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x180092F80 (-GetCurrentFrameId@@YA_KXZ.c)
 */

unsigned __int64 __fastcall CTargetStats::GetPresentTime(CTargetStats *this)
{
  struct CComposition *CurrentFrameId; // rax
  __int64 v2; // rcx

  CurrentFrameId = GetCurrentFrameId();
  if ( *(struct CComposition **)(v2 + 56) == CurrentFrameId )
    return *(_QWORD *)(v2 + 48);
  else
    return 0LL;
}
