/*
 * XREFs of ?GetFirstApplicationViewTitleProperty@@YAJPEAUHWND__@@_KPEAGPEA_K@Z @ 0x1805E9460
 * Callers:
 *     ?GetApplicationViewTitle@@YAJPEAUHWND__@@PEAPEAG@Z @ 0x1805E93D8 (-GetApplicationViewTitle@@YAJPEAUHWND__@@PEAPEAG@Z.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1800CA828 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?StringCchCopyW@@YAJPEA_W_KPEB_W@Z @ 0x1800E80F4 (-StringCchCopyW@@YAJPEA_W_KPEB_W@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     memset_0 @ 0x180188F60 (memset_0.c)
 *     ?StringCchLengthW@@YAJPEBG_KPEA_K@Z @ 0x1805DAADC (-StringCchLengthW@@YAJPEBG_KPEA_K@Z.c)
 */

__int64 __fastcall GetFirstApplicationViewTitleProperty(HWND hWnd, __int64 a2, unsigned __int16 *a3, LPARAM *a4)
{
  int v7; // edx
  LPARAM lParam; // [rsp+20h] [rbp-248h] BYREF
  wchar_t v10[260]; // [rsp+28h] [rbp-240h] BYREF

  *a4 = 0LL;
  *a3 = 0;
  memset_0(&lParam, 0, 0x208uLL);
  v7 = StringCchPrintfW(v10, 255LL, L"ApplicationView_CustomWindowTitle#%u#", (unsigned int)hWnd);
  if ( v7 >= 0 )
  {
    v7 = StringCchLengthW(v10, 0xFFuLL, (unsigned __int64 *)&lParam);
    if ( v7 >= 0 )
    {
      if ( EnumPropsExW(hWnd, (PROPENUMPROCEXW)ApplicationViewTitleEnum, (LPARAM)&lParam) )
      {
        return (unsigned int)-2147023728;
      }
      else
      {
        v7 = StringCchCopyW(a3, 255LL, v10);
        if ( v7 >= 0 )
          *a4 = lParam;
      }
    }
  }
  return (unsigned int)v7;
}
