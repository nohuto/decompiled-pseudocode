/*
 * XREFs of ?get_ImageLocation@CSplashScreen@@UEAAJPEAURect@Foundation@Windows@@@Z @ 0x1803CB1D0
 * Callers:
 *     <none>
 * Callees:
 *     ?_get_ImageLocationInternal@CSplashScreen@@AEAA?AURect@Foundation@Windows@@XZ @ 0x18004DC80 (-_get_ImageLocationInternal@CSplashScreen@@AEAA-AURect@Foundation@Windows@@XZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

__int64 __fastcall CSplashScreen::get_ImageLocation(CSplashScreen *this, struct Windows::Foundation::Rect *a2)
{
  float *ImageLocationInternal; // rax
  RTL_SRWLOCK *v5; // rcx
  float v7[4]; // [rsp+20h] [rbp-28h] BYREF

  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  ImageLocationInternal = CSplashScreen::_get_ImageLocationInternal((__int64)this, v7);
  v5 = CApplicationManagerUtility::g_pIAMGlobals;
  *(_OWORD *)a2 = *(_OWORD *)ImageLocationInternal;
  ReleaseSRWLockShared(v5);
  return 0LL;
}
