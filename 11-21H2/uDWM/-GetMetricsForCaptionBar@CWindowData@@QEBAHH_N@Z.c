/*
 * XREFs of ?GetMetricsForCaptionBar@CWindowData@@QEBAHH_N@Z @ 0x180003098
 * Callers:
 *     ?GetCaptionButtonBounds@CWindowList@@AEAAJPEAUHWND__@@_NPEAUtagRECT@@@Z @ 0x180002EF8 (-GetCaptionButtonBounds@CWindowList@@AEAAJPEAUHWND__@@_NPEAUtagRECT@@@Z.c)
 *     ?UpdateMarginsDependentOnStyle@CTopLevelWindow@@AEAA_NXZ @ 0x18002DB10 (-UpdateMarginsDependentOnStyle@CTopLevelWindow@@AEAA_NXZ.c)
 *     ?UpdateNCAreaPositionsAndSizes@CTopLevelWindow@@AEAAJXZ @ 0x18002FD80 (-UpdateNCAreaPositionsAndSizes@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CWindowData::GetMetricsForCaptionBar(CWindowData *this, unsigned int a2, char a3)
{
  __int64 v4; // rdx

  if ( a3 )
    v4 = *((unsigned int *)this + 82);
  else
    v4 = *((unsigned int *)this + 87);
  return GetSystemMetricsForDpi(a2, v4);
}
